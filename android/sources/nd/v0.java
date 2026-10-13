package nd;

/* loaded from: classes3.dex */
public final class v0 implements q0 {

    /* renamed from: d, reason: collision with root package name */
    public int f15188d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f15189e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ x0 f15190i;

    public v0(x0 x0Var) {
        this.f15190i = x0Var;
    }

    public final void a() {
        if (this.f15189e) {
            return;
        }
        x0 x0Var = this.f15190i;
        x0Var.f15199w.e(ke.o.h(x0Var.G.I), x0Var.G, 0, null, 0L);
        this.f15189e = true;
    }

    @Override // nd.q0
    public final void b() {
        x0 x0Var = this.f15190i;
        if (x0Var.H) {
            return;
        }
        x0Var.F.b();
    }

    @Override // nd.q0
    public final int c(long j) {
        a();
        if (j <= 0 || this.f15188d == 2) {
            return 0;
        }
        this.f15188d = 2;
        return 1;
    }

    @Override // nd.q0
    public final int f(e4.l lVar, mc.f fVar, int i5) {
        a();
        x0 x0Var = this.f15190i;
        boolean z5 = x0Var.I;
        if (z5 && x0Var.J == null) {
            this.f15188d = 2;
        }
        int i6 = this.f15188d;
        if (i6 == 2) {
            fVar.a(4);
            return -4;
        }
        if ((i5 & 2) != 0 || i6 == 0) {
            lVar.f7960i = x0Var.G;
            this.f15188d = 1;
            return -5;
        }
        if (!z5) {
            return -3;
        }
        x0Var.J.getClass();
        fVar.a(1);
        fVar.f14438x = 0L;
        if ((i5 & 4) == 0) {
            fVar.h(x0Var.K);
            fVar.f14436v.put(x0Var.J, 0, x0Var.K);
        }
        if ((i5 & 1) == 0) {
            this.f15188d = 2;
        }
        return -4;
    }

    @Override // nd.q0
    public final boolean isReady() {
        return this.f15190i.I;
    }
}
