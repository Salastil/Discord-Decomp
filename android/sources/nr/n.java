package nr;

/* loaded from: classes3.dex */
public final class n extends z0 implements m {

    /* renamed from: w, reason: collision with root package name */
    public final e1 f15638w;

    public n(e1 e1Var) {
        this.f15638w = e1Var;
    }

    @Override // nr.m
    public final boolean a(Throwable th2) {
        return i().E(th2);
    }

    @Override // nr.z0
    public final boolean j() {
        return true;
    }

    @Override // nr.z0
    public final void k(Throwable th2) {
        this.f15638w.y(i());
    }
}
