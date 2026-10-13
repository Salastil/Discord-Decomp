package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class e1 extends iq.n {
    public static final e1 H;
    public static final a I = new a(23);
    public d1 E;
    public byte F;
    public int G;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7070d;

    /* renamed from: e, reason: collision with root package name */
    public int f7071e;

    /* renamed from: i, reason: collision with root package name */
    public int f7072i;

    /* renamed from: v, reason: collision with root package name */
    public int f7073v;

    /* renamed from: w, reason: collision with root package name */
    public c1 f7074w;

    /* renamed from: x, reason: collision with root package name */
    public int f7075x;

    /* renamed from: y, reason: collision with root package name */
    public int f7076y;

    static {
        e1 e1Var = new e1();
        H = e1Var;
        e1Var.f7072i = 0;
        e1Var.f7073v = 0;
        e1Var.f7074w = c1.ERROR;
        e1Var.f7075x = 0;
        e1Var.f7076y = 0;
        e1Var.E = d1.LANGUAGE_VERSION;
    }

    public e1() {
        this.F = (byte) -1;
        this.G = -1;
        this.f7070d = iq.d.f12197d;
    }

    @Override // iq.u
    public final boolean b() {
        if (this.F == 1) {
            return true;
        }
        this.F = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.G;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7071e & 1) == 1 ? w1.d(1, this.f7072i) : 0;
        if ((this.f7071e & 2) == 2) {
            d6 += w1.d(2, this.f7073v);
        }
        if ((this.f7071e & 4) == 4) {
            d6 += w1.c(3, this.f7074w.f7040d);
        }
        if ((this.f7071e & 8) == 8) {
            d6 += w1.d(4, this.f7075x);
        }
        if ((this.f7071e & 16) == 16) {
            d6 += w1.d(5, this.f7076y);
        }
        if ((this.f7071e & 32) == 32) {
            d6 += w1.c(6, this.E.f7056d);
        }
        int size = this.f7070d.size() + d6;
        this.G = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return b1.g();
    }

    @Override // iq.a
    public final iq.i e() {
        b1 g6 = b1.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7071e & 1) == 1) {
            w1Var.r(1, this.f7072i);
        }
        if ((this.f7071e & 2) == 2) {
            w1Var.r(2, this.f7073v);
        }
        if ((this.f7071e & 4) == 4) {
            w1Var.q(3, this.f7074w.f7040d);
        }
        if ((this.f7071e & 8) == 8) {
            w1Var.r(4, this.f7075x);
        }
        if ((this.f7071e & 16) == 16) {
            w1Var.r(5, this.f7076y);
        }
        if ((this.f7071e & 32) == 32) {
            w1Var.q(6, this.E.f7056d);
        }
        w1Var.w(this.f7070d);
    }

    public e1(b1 b1Var) {
        this.F = (byte) -1;
        this.G = -1;
        this.f7070d = b1Var.f12211d;
    }

    public e1(iq.e eVar) {
        this.F = (byte) -1;
        this.G = -1;
        boolean z5 = false;
        this.f7072i = 0;
        this.f7073v = 0;
        c1 c1Var = c1.ERROR;
        this.f7074w = c1Var;
        this.f7075x = 0;
        this.f7076y = 0;
        d1 d1Var = d1.LANGUAGE_VERSION;
        this.E = d1Var;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f7071e |= 1;
                            this.f7072i = eVar.k();
                        } else if (n6 != 16) {
                            d1 d1Var2 = null;
                            c1 c1Var2 = null;
                            if (n6 == 24) {
                                int k = eVar.k();
                                if (k == 0) {
                                    c1Var2 = c1.WARNING;
                                } else if (k == 1) {
                                    c1Var2 = c1Var;
                                } else if (k == 2) {
                                    c1Var2 = c1.HIDDEN;
                                }
                                if (c1Var2 == null) {
                                    m5.A(n6);
                                    m5.A(k);
                                } else {
                                    this.f7071e |= 4;
                                    this.f7074w = c1Var2;
                                }
                            } else if (n6 == 32) {
                                this.f7071e |= 8;
                                this.f7075x = eVar.k();
                            } else if (n6 == 40) {
                                this.f7071e |= 16;
                                this.f7076y = eVar.k();
                            } else if (n6 != 48) {
                                if (!eVar.q(n6, m5)) {
                                }
                            } else {
                                int k5 = eVar.k();
                                if (k5 == 0) {
                                    d1Var2 = d1Var;
                                } else if (k5 == 1) {
                                    d1Var2 = d1.COMPILER_VERSION;
                                } else if (k5 == 2) {
                                    d1Var2 = d1.API_VERSION;
                                }
                                if (d1Var2 == null) {
                                    m5.A(n6);
                                    m5.A(k5);
                                } else {
                                    this.f7071e |= 32;
                                    this.E = d1Var2;
                                }
                            }
                        } else {
                            this.f7071e |= 2;
                            this.f7073v = eVar.k();
                        }
                    }
                    z5 = true;
                } catch (iq.q e9) {
                    e9.f12236d = this;
                    throw e9;
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
                    this.f7070d = cVar.g();
                    throw th3;
                }
                this.f7070d = cVar.g();
                throw th2;
            }
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7070d = cVar.g();
            throw th4;
        }
        this.f7070d = cVar.g();
    }
}
