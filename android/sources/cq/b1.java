package cq;

/* loaded from: classes3.dex */
public final class b1 extends iq.i implements iq.u {
    public d1 E;

    /* renamed from: e, reason: collision with root package name */
    public int f7022e;

    /* renamed from: i, reason: collision with root package name */
    public int f7023i;

    /* renamed from: v, reason: collision with root package name */
    public int f7024v;

    /* renamed from: w, reason: collision with root package name */
    public c1 f7025w;

    /* renamed from: x, reason: collision with root package name */
    public int f7026x;

    /* renamed from: y, reason: collision with root package name */
    public int f7027y;

    public static b1 g() {
        b1 b1Var = new b1();
        b1Var.f7025w = c1.ERROR;
        b1Var.E = d1.LANGUAGE_VERSION;
        return b1Var;
    }

    @Override // iq.i
    public final iq.a c() {
        e1 f2 = f();
        f2.b();
        return f2;
    }

    public final Object clone() {
        b1 g6 = g();
        g6.h(f());
        return g6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        e1 e1Var = null;
        try {
            try {
                e1.I.getClass();
                h(new e1(eVar));
                return this;
            } catch (iq.q e9) {
                e1 e1Var2 = (e1) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    e1Var = e1Var2;
                    if (e1Var != null) {
                        h(e1Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (e1Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        h((e1) nVar);
        return this;
    }

    public final e1 f() {
        e1 e1Var = new e1(this);
        int i5 = this.f7022e;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        e1Var.f7072i = this.f7023i;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        e1Var.f7073v = this.f7024v;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        e1Var.f7074w = this.f7025w;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        e1Var.f7075x = this.f7026x;
        if ((i5 & 16) == 16) {
            i6 |= 16;
        }
        e1Var.f7076y = this.f7027y;
        if ((i5 & 32) == 32) {
            i6 |= 32;
        }
        e1Var.E = this.E;
        e1Var.f7071e = i6;
        return e1Var;
    }

    public final void h(e1 e1Var) {
        if (e1Var == e1.H) {
            return;
        }
        int i5 = e1Var.f7071e;
        if ((i5 & 1) == 1) {
            int i6 = e1Var.f7072i;
            this.f7022e = 1 | this.f7022e;
            this.f7023i = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = e1Var.f7073v;
            this.f7022e = 2 | this.f7022e;
            this.f7024v = i10;
        }
        if ((i5 & 4) == 4) {
            c1 c1Var = e1Var.f7074w;
            c1Var.getClass();
            this.f7022e = 4 | this.f7022e;
            this.f7025w = c1Var;
        }
        int i11 = e1Var.f7071e;
        if ((i11 & 8) == 8) {
            int i12 = e1Var.f7075x;
            this.f7022e = 8 | this.f7022e;
            this.f7026x = i12;
        }
        if ((i11 & 16) == 16) {
            int i13 = e1Var.f7076y;
            this.f7022e = 16 | this.f7022e;
            this.f7027y = i13;
        }
        if ((i11 & 32) == 32) {
            d1 d1Var = e1Var.E;
            d1Var.getClass();
            this.f7022e = 32 | this.f7022e;
            this.E = d1Var;
        }
        this.f12211d = this.f12211d.b(e1Var.f7070d);
    }
}
