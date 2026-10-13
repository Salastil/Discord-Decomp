package cq;

/* loaded from: classes3.dex */
public final class o0 extends iq.i implements iq.u {

    /* renamed from: e, reason: collision with root package name */
    public int f7195e;

    /* renamed from: i, reason: collision with root package name */
    public p0 f7196i;

    /* renamed from: v, reason: collision with root package name */
    public s0 f7197v;

    /* renamed from: w, reason: collision with root package name */
    public int f7198w;

    public static o0 g() {
        o0 o0Var = new o0();
        o0Var.f7196i = p0.INV;
        o0Var.f7197v = s0.Q;
        return o0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        q0 f2 = f();
        if (f2.b()) {
            return f2;
        }
        throw new ai.k();
    }

    public final Object clone() {
        o0 g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        q0 q0Var = null;
        try {
            try {
                q0.F.getClass();
                h(new q0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                q0 q0Var2 = (q0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    q0Var = q0Var2;
                    if (q0Var != null) {
                        h(q0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (q0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((q0) nVar);
        return this;
    }

    public final q0 f() {
        q0 q0Var = new q0(this);
        int i5 = this.f7195e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        q0Var.f7218i = this.f7196i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        q0Var.f7219v = this.f7197v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        q0Var.f7220w = this.f7198w;
        q0Var.f7217e = i6;
        return q0Var;
    }

    public final void h(q0 q0Var) {
        s0 s0Var;
        if (q0Var == q0.E) {
            return;
        }
        if ((q0Var.f7217e & 1) == 1) {
            p0 p0Var = q0Var.f7218i;
            p0Var.getClass();
            this.f7195e = 1 | this.f7195e;
            this.f7196i = p0Var;
        }
        if ((q0Var.f7217e & 2) == 2) {
            s0 s0Var2 = q0Var.f7219v;
            if ((this.f7195e & 2) != 2 || (s0Var = this.f7197v) == s0.Q) {
                this.f7197v = s0Var2;
            } else {
                r0 q5 = s0.q(s0Var);
                q5.j(s0Var2);
                this.f7197v = q5.g();
            }
            this.f7195e |= 2;
        }
        if ((q0Var.f7217e & 4) == 4) {
            int i5 = q0Var.f7220w;
            this.f7195e = 4 | this.f7195e;
            this.f7198w = i5;
        }
        this.f12211d = this.f12211d.b(q0Var.f7216d);
    }
}
