package cq;

/* loaded from: classes3.dex */
public final class j0 extends iq.i implements iq.u {

    /* renamed from: e, reason: collision with root package name */
    public int f7134e;

    /* renamed from: i, reason: collision with root package name */
    public int f7135i;

    /* renamed from: v, reason: collision with root package name */
    public int f7136v;

    /* renamed from: w, reason: collision with root package name */
    public k0 f7137w;

    public static j0 g() {
        j0 j0Var = new j0();
        j0Var.f7135i = -1;
        j0Var.f7137w = k0.PACKAGE;
        return j0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        l0 f2 = f();
        if (f2.b()) {
            return f2;
        }
        throw new ai.k();
    }

    public final Object clone() {
        j0 g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        l0 l0Var = null;
        try {
            try {
                l0.F.getClass();
                h(new l0(eVar));
                return this;
            } catch (iq.q e9) {
                l0 l0Var2 = (l0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    l0Var = l0Var2;
                    if (l0Var != null) {
                        h(l0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (l0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((l0) nVar);
        return this;
    }

    public final l0 f() {
        l0 l0Var = new l0(this);
        int i5 = this.f7134e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        l0Var.f7165i = this.f7135i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        l0Var.f7166v = this.f7136v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        l0Var.f7167w = this.f7137w;
        l0Var.f7164e = i6;
        return l0Var;
    }

    public final void h(l0 l0Var) {
        if (l0Var == l0.E) {
            return;
        }
        int i5 = l0Var.f7164e;
        if ((i5 & 1) == 1) {
            int i6 = l0Var.f7165i;
            this.f7134e = 1 | this.f7134e;
            this.f7135i = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = l0Var.f7166v;
            this.f7134e = 2 | this.f7134e;
            this.f7136v = i10;
        }
        if ((i5 & 4) == 4) {
            k0 k0Var = l0Var.f7167w;
            k0Var.getClass();
            this.f7134e = 4 | this.f7134e;
            this.f7137w = k0Var;
        }
        this.f12211d = this.f12211d.b(l0Var.f7163d);
    }
}
