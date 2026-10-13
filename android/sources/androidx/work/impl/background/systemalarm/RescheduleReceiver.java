package androidx.work.impl.background.systemalarm;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import v3.p;
import w3.o;

/* loaded from: classes.dex */
public class RescheduleReceiver extends BroadcastReceiver {
    public static final String a = p.f("RescheduleReceiver");

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        p.d().a(a, "Received intent " + intent);
        try {
            o a10 = o.a(context);
            BroadcastReceiver.PendingResult goAsync = goAsync();
            synchronized (o.f19660m) {
                try {
                    BroadcastReceiver.PendingResult pendingResult = a10.f19668i;
                    if (pendingResult != null) {
                        pendingResult.finish();
                    }
                    a10.f19668i = goAsync;
                    if (a10.f19667h) {
                        goAsync.finish();
                        a10.f19668i = null;
                    }
                } finally {
                }
            }
        } catch (IllegalStateException e9) {
            p.d().c(a, "Cannot reschedule jobs. WorkManager needs to be initialized via a ContentProvider#onCreate() or an Application#onCreate().", e9);
        }
    }
}
