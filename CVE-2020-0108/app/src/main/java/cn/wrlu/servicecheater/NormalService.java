package cn.wrlu.servicecheater;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.os.IBinder;

import androidx.core.app.NotificationCompat;

public class NormalService extends Service {
    private static final String TAG = "NormalService";

    @Override
    public IBinder onBind(Intent intent) {
        // TODO: Return the communication channel to the service.
        throw new UnsupportedOperationException("Not yet implemented");
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        NotificationManager notificationManager = (NotificationManager) getSystemService(Context.NOTIFICATION_SERVICE);
        NotificationChannel notificationChannel = new NotificationChannel("c03", "CVE-2020-0104", NotificationManager.IMPORTANCE_DEFAULT);
        notificationChannel.setDescription("Testing CVE-2020-0104");
        notificationChannel.enableLights(true);
        notificationChannel.setLightColor(Color.RED);
        notificationChannel.enableVibration(true);
        notificationChannel.setVibrationPattern(new long[]{100,200,300,400,500,400,300,200,100});
        notificationManager.createNotificationChannel(notificationChannel);
        Notification notification = new NotificationCompat.Builder(this, "c03")
                .setContentTitle("Testing CVE-2020-0104")
                .setContentText("Normal Service Demo")
                .setWhen(System.currentTimeMillis())
                .setSmallIcon(R.drawable.ic_launcher_foreground)
                .setLargeIcon(BitmapFactory.decodeResource(getResources(), R.drawable.ic_launcher_foreground))
                .build();
        startForeground(3, notification);
        return super.onStartCommand(intent, flags, startId);
    }
}
