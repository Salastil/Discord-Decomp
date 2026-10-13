package nr;

import java.util.concurrent.atomic.AtomicIntegerFieldUpdater;

/* loaded from: classes3.dex */
public final class v0 extends z0 {

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ AtomicIntegerFieldUpdater f15666x = AtomicIntegerFieldUpdater.newUpdater(v0.class, "_invoked$volatile");
    private volatile /* synthetic */ int _invoked$volatile;

    /* renamed from: w, reason: collision with root package name */
    public final y0 f15667w;

    public v0(y0 y0Var) {
        this.f15667w = y0Var;
    }

    @Override // nr.z0
    public final boolean j() {
        return true;
    }

    @Override // nr.z0
    public final void k(Throwable th2) {
        if (f15666x.compareAndSet(this, 0, 1)) {
            this.f15667w.invoke(th2);
        }
    }
}
