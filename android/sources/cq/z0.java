package cq;

/* loaded from: classes3.dex */
public final class z0 extends iq.j {
    public int E;
    public s0 F;
    public int G;

    /* renamed from: v, reason: collision with root package name */
    public int f7312v;

    /* renamed from: w, reason: collision with root package name */
    public int f7313w;

    /* renamed from: x, reason: collision with root package name */
    public int f7314x;

    /* renamed from: y, reason: collision with root package name */
    public s0 f7315y;

    @Override // iq.i
    public final iq.a c() {
        a1 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        z0 z0Var = new z0();
        s0 s0Var = s0.Q;
        z0Var.f7315y = s0Var;
        z0Var.F = s0Var;
        z0Var.h(g());
        return z0Var;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        a1 a1Var = null;
        try {
            try {
                a1.J.getClass();
                h(new a1(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                a1 a1Var2 = (a1) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    a1Var = a1Var2;
                    if (a1Var != null) {
                        h(a1Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (a1Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((a1) nVar);
        return this;
    }

    public final a1 g() {
        a1 a1Var = new a1(this);
        int i5 = this.f7312v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        a1Var.f7012v = this.f7313w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        a1Var.f7013w = this.f7314x;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        a1Var.f7014x = this.f7315y;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        a1Var.f7015y = this.E;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        a1Var.E = this.F;
        if ((i5 & 32) == 32) {
            i6 |= 32;
        }
        a1Var.F = this.G;
        a1Var.f7011i = i6;
        return a1Var;
    }

    public final void h(a1 a1Var) {
        s0 s0Var;
        s0 s0Var2;
        if (a1Var == a1.I) {
            return;
        }
        int i5 = a1Var.f7011i;
        if ((i5 & 1) == 1) {
            int i6 = a1Var.f7012v;
            this.f7312v = 1 | this.f7312v;
            this.f7313w = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = a1Var.f7013w;
            this.f7312v = 2 | this.f7312v;
            this.f7314x = i10;
        }
        if ((i5 & 4) == 4) {
            s0 s0Var3 = a1Var.f7014x;
            if ((this.f7312v & 4) != 4 || (s0Var2 = this.f7315y) == s0.Q) {
                this.f7315y = s0Var3;
            } else {
                r0 q5 = s0.q(s0Var2);
                q5.j(s0Var3);
                this.f7315y = q5.g();
            }
            this.f7312v |= 4;
        }
        int i11 = a1Var.f7011i;
        if ((i11 & 8) == 8) {
            int i12 = a1Var.f7015y;
            this.f7312v = 8 | this.f7312v;
            this.E = i12;
        }
        if ((i11 & 16) == 16) {
            s0 s0Var4 = a1Var.E;
            if ((this.f7312v & 16) != 16 || (s0Var = this.F) == s0.Q) {
                this.F = s0Var4;
            } else {
                r0 q6 = s0.q(s0Var);
                q6.j(s0Var4);
                this.F = q6.g();
            }
            this.f7312v |= 16;
        }
        if ((a1Var.f7011i & 32) == 32) {
            int i13 = a1Var.F;
            this.f7312v = 32 | this.f7312v;
            this.G = i13;
        }
        f(a1Var);
        this.f12211d = this.f12211d.b(a1Var.f7010e);
    }
}
