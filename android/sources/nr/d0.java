package nr;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;

/* loaded from: classes3.dex */
public final class d0 extends sr.t {

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f15606w = AtomicIntegerFieldUpdater.newUpdater(d0.class, "_decision$volatile");
    private volatile /* synthetic */ int _decision$volatile;

    @Override // sr.t, nr.e1
    public final void u(Object obj) {
        v(obj);
    }

    @Override // sr.t, nr.e1
    public final void v(Object obj) {
        AtomicIntegerFieldUpdater atomicIntegerFieldUpdater;
        do {
            atomicIntegerFieldUpdater = f15606w;
            int i5 = atomicIntegerFieldUpdater.get(this);
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("Already resumed");
                }
                sr.h.f(x.u(obj), ko.f.b(this.f18125v));
                return;
            }
        } while (!atomicIntegerFieldUpdater.compareAndSet(this, 0, 2));
    }
}
