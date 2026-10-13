package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class g0 extends iq.k {
    public static final g0 G;
    public static final a H = new a(12);
    public byte E;
    public int F;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7098e;

    /* renamed from: i, reason: collision with root package name */
    public int f7099i;

    /* renamed from: v, reason: collision with root package name */
    public n0 f7100v;

    /* renamed from: w, reason: collision with root package name */
    public m0 f7101w;

    /* renamed from: x, reason: collision with root package name */
    public e0 f7102x;

    /* renamed from: y, reason: collision with root package name */
    public List f7103y;

    static {
        g0 g0Var = new g0();
        G = g0Var;
        g0Var.f7100v = n0.f7186w;
        g0Var.f7101w = m0.f7174w;
        g0Var.f7102x = e0.H;
        g0Var.f7103y = Collections.EMPTY_LIST;
    }

    public g0(f0 f0Var) {
        super(f0Var);
        this.E = (byte) -1;
        this.F = -1;
        this.f7098e = f0Var.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return G;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.E;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        if ((this.f7099i & 2) == 2 && !this.f7101w.b()) {
            this.E = (byte) 0;
            return false;
        }
        if ((this.f7099i & 4) == 4 && !this.f7102x.b()) {
            this.E = (byte) 0;
            return false;
        }
        for (int i5 = 0; i5 < this.f7103y.size(); i5++) {
            if (!((k) this.f7103y.get(i5)).b()) {
                this.E = (byte) 0;
                return false;
            }
        }
        if (i()) {
            this.E = (byte) 1;
            return true;
        }
        this.E = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.F;
        if (i5 != -1) {
            return i5;
        }
        int f2 = (this.f7099i & 1) == 1 ? w1.f(1, this.f7100v) : 0;
        if ((this.f7099i & 2) == 2) {
            f2 += w1.f(2, this.f7101w);
        }
        if ((this.f7099i & 4) == 4) {
            f2 += w1.f(3, this.f7102x);
        }
        for (int i6 = 0; i6 < this.f7103y.size(); i6++) {
            f2 += w1.f(4, (iq.a) this.f7103y.get(i6));
        }
        int size = this.f7098e.size() + j() + f2;
        this.F = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return f0.h();
    }

    @Override // iq.a
    public final iq.i e() {
        f0 h6 = f0.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        if ((this.f7099i & 1) == 1) {
            w1Var.t(1, this.f7100v);
        }
        if ((this.f7099i & 2) == 2) {
            w1Var.t(2, this.f7101w);
        }
        if ((this.f7099i & 4) == 4) {
            w1Var.t(3, this.f7102x);
        }
        for (int i5 = 0; i5 < this.f7103y.size(); i5++) {
            w1Var.t(4, (iq.a) this.f7103y.get(i5));
        }
        rVar.v(androidx.recyclerview.widget.h0.DEFAULT_DRAG_ANIMATION_DURATION, w1Var);
        w1Var.w(this.f7098e);
    }

    public g0() {
        this.E = (byte) -1;
        this.F = -1;
        this.f7098e = iq.d.f12197d;
    }

    public g0(iq.e eVar, iq.g gVar) {
        this.E = (byte) -1;
        this.F = -1;
        this.f7100v = n0.f7186w;
        this.f7101w = m0.f7174w;
        this.f7102x = e0.H;
        this.f7103y = Collections.EMPTY_LIST;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        char c6 = 0;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        d0 d0Var = null;
                        o oVar = null;
                        o oVar2 = null;
                        if (n6 == 10) {
                            if ((this.f7099i & 1) == 1) {
                                n0 n0Var = this.f7100v;
                                n0Var.getClass();
                                oVar = new o(3);
                                oVar.f7194v = iq.r.f12237e;
                                oVar.m(n0Var);
                            }
                            n0 n0Var2 = (n0) eVar.g(n0.f7187x, gVar);
                            this.f7100v = n0Var2;
                            if (oVar != null) {
                                oVar.m(n0Var2);
                                this.f7100v = oVar.h();
                            }
                            this.f7099i |= 1;
                        } else if (n6 == 18) {
                            if ((this.f7099i & 2) == 2) {
                                m0 m0Var = this.f7101w;
                                m0Var.getClass();
                                oVar2 = new o(1);
                                oVar2.f7194v = Collections.EMPTY_LIST;
                                oVar2.l(m0Var);
                            }
                            m0 m0Var2 = (m0) eVar.g(m0.f7175x, gVar);
                            this.f7101w = m0Var2;
                            if (oVar2 != null) {
                                oVar2.l(m0Var2);
                                this.f7101w = oVar2.g();
                            }
                            this.f7099i |= 2;
                        } else if (n6 == 26) {
                            if ((this.f7099i & 4) == 4) {
                                e0 e0Var = this.f7102x;
                                e0Var.getClass();
                                d0Var = d0.h();
                                d0Var.j(e0Var);
                            }
                            e0 e0Var2 = (e0) eVar.g(e0.I, gVar);
                            this.f7102x = e0Var2;
                            if (d0Var != null) {
                                d0Var.j(e0Var2);
                                this.f7102x = d0Var.g();
                            }
                            this.f7099i |= 4;
                        } else if (n6 != 34) {
                            if (!n(eVar, m5, gVar, n6)) {
                            }
                        } else {
                            int i5 = (c6 == true ? 1 : 0) & '\b';
                            c6 = c6;
                            if (i5 != 8) {
                                this.f7103y = new ArrayList();
                                c6 = '\b';
                            }
                            this.f7103y.add(eVar.g(k.f7138i0, gVar));
                        }
                    }
                    z5 = true;
                } catch (Throwable th2) {
                    if (((c6 == true ? 1 : 0) & '\b') == 8) {
                        this.f7103y = Collections.unmodifiableList(this.f7103y);
                    }
                    try {
                        m5.l();
                    } catch (IOException unused) {
                    } catch (Throwable th3) {
                        this.f7098e = cVar.g();
                        throw th3;
                    }
                    this.f7098e = cVar.g();
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
        if (((c6 == true ? 1 : 0) & '\b') == 8) {
            this.f7103y = Collections.unmodifiableList(this.f7103y);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7098e = cVar.g();
            throw th4;
        }
        this.f7098e = cVar.g();
        m();
    }
}
