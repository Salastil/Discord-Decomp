package androidx.lifecycle;

import java.util.Iterator;
import kotlin.Unit;

/* loaded from: classes.dex */
public abstract class z0 {
    public final u2.a a = new u2.a();

    public final void a() {
        u2.a aVar = this.a;
        if (aVar != null && !aVar.f18792d) {
            aVar.f18792d = true;
            synchronized (aVar.a) {
                try {
                    Iterator it = aVar.f18790b.values().iterator();
                    while (it.hasNext()) {
                        u2.a.a((AutoCloseable) it.next());
                    }
                    Iterator it2 = aVar.f18791c.iterator();
                    while (it2.hasNext()) {
                        u2.a.a((AutoCloseable) it2.next());
                    }
                    aVar.f18791c.clear();
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
        b();
    }

    public void b() {
    }
}
