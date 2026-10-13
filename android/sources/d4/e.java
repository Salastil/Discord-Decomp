package d4;

import android.app.ForegroundServiceStartNotAllowedException;
import android.app.Notification;
import android.app.Service;
import android.util.Log;
import androidx.work.impl.foreground.SystemForegroundService;
import v3.p;

/* loaded from: classes.dex */
public abstract class e {
    public static void a(Service service, int i5, Notification notification, int i6) {
        try {
            service.startForeground(i5, notification, i6);
        } catch (ForegroundServiceStartNotAllowedException e9) {
            p d6 = p.d();
            String str = SystemForegroundService.f2591x;
            if (d6.a <= 5) {
                Log.w(str, "Unable to start foreground service", e9);
            }
        } catch (SecurityException e10) {
            p d7 = p.d();
            String str2 = SystemForegroundService.f2591x;
            if (d7.a <= 5) {
                Log.w(str2, "Unable to start foreground service", e10);
            }
        }
    }
}
