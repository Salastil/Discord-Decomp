package gs;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import io.sentry.internal.debugmeta.c;
import java.util.TimeZone;
import net.time4j.tz.d;
import net.time4j.tz.i;

/* loaded from: classes3.dex */
public final class a extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        synchronized (i.class) {
            do {
            } while (i.I.poll() != null);
            i.J.clear();
        }
        new c(16);
        String str = i.f15335d;
        i.H.clear();
        boolean z5 = i.f15338v;
        if (z5) {
            String id2 = TimeZone.getDefault().getID();
            i b10 = i.b(null, id2, false);
            if (b10 == null) {
                b10 = new d(new net.time4j.tz.c(id2));
            }
            i.f15339w = b10;
        }
        StringBuilder sb2 = new StringBuilder("Event ACTION_TIMEZONE_CHANGED received, system timezone changed to: [");
        sb2.append(((!z5 || i.f15339w == null) ? i.L : i.f15339w).a().a());
        sb2.append("]. Original tz-id reported by Android: [");
        sb2.append(intent.getStringExtra("time-zone"));
        sb2.append("]");
        Log.i("TIME4A", sb2.toString());
    }
}
