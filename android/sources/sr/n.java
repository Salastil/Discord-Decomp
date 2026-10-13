package sr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;

/* loaded from: classes3.dex */
public class n {
    public static final /* synthetic */ AtomicReferenceFieldUpdater a = AtomicReferenceFieldUpdater.newUpdater(n.class, Object.class, "_cur$volatile");
    private volatile /* synthetic */ Object _cur$volatile = new p(8, false);

    public final boolean a(Runnable runnable) {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = a;
            p pVar = (p) atomicReferenceFieldUpdater.get(this);
            int a10 = pVar.a(runnable);
            if (a10 == 0) {
                return true;
            }
            if (a10 == 1) {
                p c6 = pVar.c();
                while (!atomicReferenceFieldUpdater.compareAndSet(this, pVar, c6) && atomicReferenceFieldUpdater.get(this) == pVar) {
                }
            } else if (a10 == 2) {
                return false;
            }
        }
    }

    public final void b() {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = a;
            p pVar = (p) atomicReferenceFieldUpdater.get(this);
            if (pVar.b()) {
                return;
            }
            p c6 = pVar.c();
            while (!atomicReferenceFieldUpdater.compareAndSet(this, pVar, c6) && atomicReferenceFieldUpdater.get(this) == pVar) {
            }
        }
    }

    public final int c() {
        p pVar = (p) a.get(this);
        pVar.getClass();
        long j = p.f18120f.get(pVar);
        return (((int) ((j & 1152921503533105152L) >> 30)) - ((int) (1073741823 & j))) & 1073741823;
    }

    public final Object d() {
        while (true) {
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = a;
            p pVar = (p) atomicReferenceFieldUpdater.get(this);
            Object d6 = pVar.d();
            if (d6 != p.f18121g) {
                return d6;
            }
            p c6 = pVar.c();
            while (!atomicReferenceFieldUpdater.compareAndSet(this, pVar, c6) && atomicReferenceFieldUpdater.get(this) == pVar) {
            }
        }
    }
}
