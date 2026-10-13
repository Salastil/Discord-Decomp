package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class x0 extends iq.k {
    public static final x0 J;
    public static final a K = new a(20);
    public List E;
    public List F;
    public int G;
    public byte H;
    public int I;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7288e;

    /* renamed from: i, reason: collision with root package name */
    public int f7289i;

    /* renamed from: v, reason: collision with root package name */
    public int f7290v;

    /* renamed from: w, reason: collision with root package name */
    public int f7291w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f7292x;

    /* renamed from: y, reason: collision with root package name */
    public w0 f7293y;

    static {
        x0 x0Var = new x0();
        J = x0Var;
        x0Var.f7290v = 0;
        x0Var.f7291w = 0;
        x0Var.f7292x = false;
        x0Var.f7293y = w0.INV;
        List list = Collections.EMPTY_LIST;
        x0Var.E = list;
        x0Var.F = list;
    }

    public x0(v0 v0Var) {
        super(v0Var);
        this.G = -1;
        this.H = (byte) -1;
        this.I = -1;
        this.f7288e = v0Var.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return J;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.H;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        int i5 = this.f7289i;
        if ((i5 & 1) != 1) {
            this.H = (byte) 0;
            return false;
        }
        if ((i5 & 2) != 2) {
            this.H = (byte) 0;
            return false;
        }
        for (int i6 = 0; i6 < this.E.size(); i6++) {
            if (!((s0) this.E.get(i6)).b()) {
                this.H = (byte) 0;
                return false;
            }
        }
        if (i()) {
            this.H = (byte) 1;
            return true;
        }
        this.H = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.I;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7289i & 1) == 1 ? w1.d(1, this.f7290v) : 0;
        if ((this.f7289i & 2) == 2) {
            d6 += w1.d(2, this.f7291w);
        }
        if ((this.f7289i & 4) == 4) {
            d6 += w1.j(3) + 1;
        }
        if ((this.f7289i & 8) == 8) {
            d6 += w1.c(4, this.f7293y.f7282d);
        }
        for (int i6 = 0; i6 < this.E.size(); i6++) {
            d6 += w1.f(5, (iq.a) this.E.get(i6));
        }
        int i10 = 0;
        for (int i11 = 0; i11 < this.F.size(); i11++) {
            i10 += w1.e(((Integer) this.F.get(i11)).intValue());
        }
        int i12 = d6 + i10;
        if (!this.F.isEmpty()) {
            i12 = i12 + 1 + w1.e(i10);
        }
        this.G = i10;
        int size = this.f7288e.size() + j() + i12;
        this.I = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return v0.h();
    }

    @Override // iq.a
    public final iq.i e() {
        v0 h6 = v0.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7289i & 1) == 1) {
            w1Var.r(1, this.f7290v);
        }
        if ((this.f7289i & 2) == 2) {
            w1Var.r(2, this.f7291w);
        }
        if ((this.f7289i & 4) == 4) {
            boolean z5 = this.f7292x;
            w1Var.C(3, 0);
            w1Var.v(z5 ? 1 : 0);
        }
        if ((this.f7289i & 8) == 8) {
            w1Var.q(4, this.f7293y.f7282d);
        }
        for (int i5 = 0; i5 < this.E.size(); i5++) {
            w1Var.t(5, (iq.a) this.E.get(i5));
        }
        if (this.F.size() > 0) {
            w1Var.A(50);
            w1Var.A(this.G);
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            w1Var.s(((Integer) this.F.get(i6)).intValue());
        }
        rVar.v(1000, w1Var);
        w1Var.w(this.f7288e);
    }

    public x0() {
        this.G = -1;
        this.H = (byte) -1;
        this.I = -1;
        this.f7288e = iq.d.f12197d;
    }

    public x0(iq.e eVar, iq.g gVar) {
        w0 w0Var;
        this.G = -1;
        this.H = (byte) -1;
        this.I = -1;
        this.f7290v = 0;
        this.f7291w = 0;
        this.f7292x = false;
        w0 w0Var2 = w0.INV;
        this.f7293y = w0Var2;
        List list = Collections.EMPTY_LIST;
        this.E = list;
        this.F = list;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        int i5 = 0;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 8) {
                            this.f7289i |= 1;
                            this.f7290v = eVar.k();
                        } else if (n6 == 16) {
                            this.f7289i |= 2;
                            this.f7291w = eVar.k();
                        } else if (n6 == 24) {
                            this.f7289i |= 4;
                            this.f7292x = eVar.l() != 0;
                        } else if (n6 == 32) {
                            int k = eVar.k();
                            if (k == 0) {
                                w0Var = w0.IN;
                            } else if (k != 1) {
                                w0Var = k != 2 ? null : w0Var2;
                            } else {
                                w0Var = w0.OUT;
                            }
                            if (w0Var == null) {
                                m5.A(n6);
                                m5.A(k);
                            } else {
                                this.f7289i |= 8;
                                this.f7293y = w0Var;
                            }
                        } else if (n6 == 42) {
                            if ((i5 & 16) != 16) {
                                this.E = new ArrayList();
                                i5 |= 16;
                            }
                            this.E.add(eVar.g(s0.R, gVar));
                        } else if (n6 == 48) {
                            if ((i5 & 32) != 32) {
                                this.F = new ArrayList();
                                i5 |= 32;
                            }
                            this.F.add(Integer.valueOf(eVar.k()));
                        } else if (n6 != 50) {
                            if (!n(eVar, m5, gVar, n6)) {
                            }
                        } else {
                            int d6 = eVar.d(eVar.k());
                            if ((i5 & 32) != 32 && eVar.b() > 0) {
                                this.F = new ArrayList();
                                i5 |= 32;
                            }
                            while (eVar.b() > 0) {
                                this.F.add(Integer.valueOf(eVar.k()));
                            }
                            eVar.c(d6);
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if ((i5 & 16) == 16) {
                        this.E = Collections.unmodifiableList(this.E);
                    }
                    if ((i5 & 32) == 32) {
                        this.F = Collections.unmodifiableList(this.F);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7288e = cVar.g();
                        throw th3;
                    }
                    this.f7288e = cVar.g();
                    m();
                    throw th2;
                }
            } catch (iq.q e9) {
                e9.f12236d = this;
                throw e9;
            } catch (IOException e10) {
                iq.q qVar = new iq.q(e10.getMessage());
                qVar.f12236d = this;
                throw qVar;
            }
        }
        if ((i5 & 16) == 16) {
            this.E = Collections.unmodifiableList(this.E);
        }
        if ((i5 & 32) == 32) {
            this.F = Collections.unmodifiableList(this.F);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7288e = cVar.g();
            throw th4;
        }
        this.f7288e = cVar.g();
        m();
    }
}
