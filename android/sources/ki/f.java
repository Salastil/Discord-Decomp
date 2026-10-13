package ki;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class f extends BroadcastReceiver {

    /* renamed from: b, reason: collision with root package name */
    public static final AtomicReference f13381b = new AtomicReference();
    public final Context a;

    public f(Context context) {
        this.a = context;
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        synchronized (g.j) {
            try {
                Iterator it = ((s.d) g.k.values()).iterator();
                while (it.hasNext()) {
                    ((g) it.next()).d();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.a.unregisterReceiver(this);
    }
}
