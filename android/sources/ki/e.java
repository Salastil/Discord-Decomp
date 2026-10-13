package ki;

import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class e implements af.b {
    public static final AtomicReference a = new AtomicReference();

    @Override // af.b
    public final void a(boolean z5) {
        synchronized (g.j) {
            try {
                Iterator it = new ArrayList(g.k.values()).iterator();
                while (it.hasNext()) {
                    g gVar = (g) it.next();
                    if (gVar.f13385e.get()) {
                        Log.d("FirebaseApp", "Notifying background state change listeners.");
                        Iterator it2 = gVar.f13389i.iterator();
                        while (it2.hasNext()) {
                            g gVar2 = ((d) it2.next()).a;
                            if (!z5) {
                                ((wi.c) gVar2.f13388h.get()).b();
                            }
                        }
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
