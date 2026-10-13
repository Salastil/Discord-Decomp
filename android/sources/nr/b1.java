package nr;

/* loaded from: classes3.dex */
public final class b1 extends z0 {
    public final Object E;

    /* renamed from: w, reason: collision with root package name */
    public final e1 f15594w;

    /* renamed from: x, reason: collision with root package name */
    public final c1 f15595x;

    /* renamed from: y, reason: collision with root package name */
    public final n f15596y;

    public b1(e1 e1Var, c1 c1Var, n nVar, Object obj) {
        this.f15594w = e1Var;
        this.f15595x = c1Var;
        this.f15596y = nVar;
        this.E = obj;
    }

    @Override // nr.z0
    public final boolean j() {
        return false;
    }

    @Override // nr.z0
    public final void k(Throwable th2) {
        n nVar = this.f15596y;
        n Y = e1.Y(nVar);
        e1 e1Var = this.f15594w;
        c1 c1Var = this.f15595x;
        Object obj = this.E;
        if (Y == null || !e1Var.k0(c1Var, Y, obj)) {
            c1Var.f15604d.d(new sr.j(2), 2);
            n Y2 = e1.Y(nVar);
            if (Y2 == null || !e1Var.k0(c1Var, Y2, obj)) {
                e1Var.u(e1Var.H(c1Var, obj));
            }
        }
    }
}
