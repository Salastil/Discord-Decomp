package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class a1 extends iq.k {
    public static final a1 I;
    public static final a J = new a(22);
    public s0 E;
    public int F;
    public byte G;
    public int H;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7010e;

    /* renamed from: i, reason: collision with root package name */
    public int f7011i;

    /* renamed from: v, reason: collision with root package name */
    public int f7012v;

    /* renamed from: w, reason: collision with root package name */
    public int f7013w;

    /* renamed from: x, reason: collision with root package name */
    public s0 f7014x;

    /* renamed from: y, reason: collision with root package name */
    public int f7015y;

    static {
        a1 a1Var = new a1();
        I = a1Var;
        a1Var.f7012v = 0;
        a1Var.f7013w = 0;
        s0 s0Var = s0.Q;
        a1Var.f7014x = s0Var;
        a1Var.f7015y = 0;
        a1Var.E = s0Var;
        a1Var.F = 0;
    }

    public a1(z0 z0Var) {
        super(z0Var);
        this.G = (byte) -1;
        this.H = -1;
        this.f7010e = z0Var.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return I;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.G;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        int i5 = this.f7011i;
        if ((i5 & 2) != 2) {
            this.G = (byte) 0;
            return false;
        }
        if ((i5 & 4) == 4 && !this.f7014x.b()) {
            this.G = (byte) 0;
            return false;
        }
        if ((this.f7011i & 16) == 16 && !this.E.b()) {
            this.G = (byte) 0;
            return false;
        }
        if (i()) {
            this.G = (byte) 1;
            return true;
        }
        this.G = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.H;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7011i & 1) == 1 ? w1.d(1, this.f7012v) : 0;
        if ((this.f7011i & 2) == 2) {
            d6 += w1.d(2, this.f7013w);
        }
        if ((this.f7011i & 4) == 4) {
            d6 += w1.f(3, this.f7014x);
        }
        if ((this.f7011i & 16) == 16) {
            d6 += w1.f(4, this.E);
        }
        if ((this.f7011i & 8) == 8) {
            d6 += w1.d(5, this.f7015y);
        }
        if ((this.f7011i & 32) == 32) {
            d6 += w1.d(6, this.F);
        }
        int size = this.f7010e.size() + j() + d6;
        this.H = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        z0 z0Var = new z0();
        s0 s0Var = s0.Q;
        z0Var.f7315y = s0Var;
        z0Var.F = s0Var;
        return z0Var;
    }

    @Override // iq.a
    public final iq.i e() {
        z0 z0Var = new z0();
        s0 s0Var = s0.Q;
        z0Var.f7315y = s0Var;
        z0Var.F = s0Var;
        z0Var.h(this);
        return z0Var;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7011i & 1) == 1) {
            w1Var.r(1, this.f7012v);
        }
        if ((this.f7011i & 2) == 2) {
            w1Var.r(2, this.f7013w);
        }
        if ((this.f7011i & 4) == 4) {
            w1Var.t(3, this.f7014x);
        }
        if ((this.f7011i & 16) == 16) {
            w1Var.t(4, this.E);
        }
        if ((this.f7011i & 8) == 8) {
            w1Var.r(5, this.f7015y);
        }
        if ((this.f7011i & 32) == 32) {
            w1Var.r(6, this.F);
        }
        rVar.v(androidx.recyclerview.widget.h0.DEFAULT_DRAG_ANIMATION_DURATION, w1Var);
        w1Var.w(this.f7010e);
    }

    public a1() {
        this.G = (byte) -1;
        this.H = -1;
        this.f7010e = iq.d.f12197d;
    }

    public a1(iq.e eVar, iq.g gVar) {
        this.G = (byte) -1;
        this.H = -1;
        boolean z5 = false;
        this.f7012v = 0;
        this.f7013w = 0;
        s0 s0Var = s0.Q;
        this.f7014x = s0Var;
        this.f7015y = 0;
        this.E = s0Var;
        this.F = 0;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 8) {
                                this.f7011i |= 1;
                                this.f7012v = eVar.k();
                            } else if (n6 != 16) {
                                r0 r0Var = null;
                                if (n6 == 26) {
                                    if ((this.f7011i & 4) == 4) {
                                        s0 s0Var2 = this.f7014x;
                                        s0Var2.getClass();
                                        r0Var = s0.q(s0Var2);
                                    }
                                    s0 s0Var3 = (s0) eVar.g(s0.R, gVar);
                                    this.f7014x = s0Var3;
                                    if (r0Var != null) {
                                        r0Var.j(s0Var3);
                                        this.f7014x = r0Var.g();
                                    }
                                    this.f7011i |= 4;
                                } else if (n6 == 34) {
                                    if ((this.f7011i & 16) == 16) {
                                        s0 s0Var4 = this.E;
                                        s0Var4.getClass();
                                        r0Var = s0.q(s0Var4);
                                    }
                                    s0 s0Var5 = (s0) eVar.g(s0.R, gVar);
                                    this.E = s0Var5;
                                    if (r0Var != null) {
                                        r0Var.j(s0Var5);
                                        this.E = r0Var.g();
                                    }
                                    this.f7011i |= 16;
                                } else if (n6 == 40) {
                                    this.f7011i |= 8;
                                    this.f7015y = eVar.k();
                                } else if (n6 != 48) {
                                    if (!n(eVar, m5, gVar, n6)) {
                                    }
                                } else {
                                    this.f7011i |= 32;
                                    this.F = eVar.k();
                                }
                            } else {
                                this.f7011i |= 2;
                                this.f7013w = eVar.k();
                            }
                        }
                        z5 = true;
                    } catch (iq.q e9) {
                        e9.f12236d = this;
                        throw e9;
                    }
                } catch (IOException e10) {
                    iq.q qVar = new iq.q(e10.getMessage());
                    qVar.f12236d = this;
                    throw qVar;
                }
            } catch (Throwable th2) {
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7010e = cVar.g();
                    throw th3;
                }
                this.f7010e = cVar.g();
                m();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7010e = cVar.g();
            throw th4;
        }
        this.f7010e = cVar.g();
        m();
    }
}
