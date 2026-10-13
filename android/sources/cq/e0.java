package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class e0 extends iq.k {
    public static final e0 H;
    public static final a I = new a(11);
    public f1 E;
    public byte F;
    public int G;

    /* renamed from: e, reason: collision with root package name */
    public final iq.d f7064e;

    /* renamed from: i, reason: collision with root package name */
    public int f7065i;

    /* renamed from: v, reason: collision with root package name */
    public List f7066v;

    /* renamed from: w, reason: collision with root package name */
    public List f7067w;

    /* renamed from: x, reason: collision with root package name */
    public List f7068x;

    /* renamed from: y, reason: collision with root package name */
    public y0 f7069y;

    static {
        e0 e0Var = new e0();
        H = e0Var;
        List list = Collections.EMPTY_LIST;
        e0Var.f7066v = list;
        e0Var.f7067w = list;
        e0Var.f7068x = list;
        e0Var.f7069y = y0.f7301y;
        e0Var.E = f1.f7088w;
    }

    public e0(d0 d0Var) {
        super(d0Var);
        this.F = (byte) -1;
        this.G = -1;
        this.f7064e = d0Var.f12211d;
    }

    @Override // iq.u
    public final iq.a a() {
        return H;
    }

    @Override // iq.u
    public final boolean b() {
        byte b10 = this.F;
        if (b10 == 1) {
            return true;
        }
        if (b10 == 0) {
            return false;
        }
        for (int i5 = 0; i5 < this.f7066v.size(); i5++) {
            if (!((a0) this.f7066v.get(i5)).b()) {
                this.F = (byte) 0;
                return false;
            }
        }
        for (int i6 = 0; i6 < this.f7067w.size(); i6++) {
            if (!((i0) this.f7067w.get(i6)).b()) {
                this.F = (byte) 0;
                return false;
            }
        }
        for (int i10 = 0; i10 < this.f7068x.size(); i10++) {
            if (!((u0) this.f7068x.get(i10)).b()) {
                this.F = (byte) 0;
                return false;
            }
        }
        if ((this.f7065i & 1) == 1 && !this.f7069y.b()) {
            this.F = (byte) 0;
            return false;
        }
        if (i()) {
            this.F = (byte) 1;
            return true;
        }
        this.F = (byte) 0;
        return false;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.G;
        if (i5 != -1) {
            return i5;
        }
        int i6 = 0;
        for (int i10 = 0; i10 < this.f7066v.size(); i10++) {
            i6 += w1.f(3, (iq.a) this.f7066v.get(i10));
        }
        for (int i11 = 0; i11 < this.f7067w.size(); i11++) {
            i6 += w1.f(4, (iq.a) this.f7067w.get(i11));
        }
        for (int i12 = 0; i12 < this.f7068x.size(); i12++) {
            i6 += w1.f(5, (iq.a) this.f7068x.get(i12));
        }
        if ((this.f7065i & 1) == 1) {
            i6 += w1.f(30, this.f7069y);
        }
        if ((this.f7065i & 2) == 2) {
            i6 += w1.f(32, this.E);
        }
        int size = this.f7064e.size() + j() + i6;
        this.G = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return d0.h();
    }

    @Override // iq.a
    public final iq.i e() {
        d0 h6 = d0.h();
        h6.j(this);
        return h6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        e4.r rVar = new e4.r((iq.k) this);
        for (int i5 = 0; i5 < this.f7066v.size(); i5++) {
            w1Var.t(3, (iq.a) this.f7066v.get(i5));
        }
        for (int i6 = 0; i6 < this.f7067w.size(); i6++) {
            w1Var.t(4, (iq.a) this.f7067w.get(i6));
        }
        for (int i10 = 0; i10 < this.f7068x.size(); i10++) {
            w1Var.t(5, (iq.a) this.f7068x.get(i10));
        }
        if ((this.f7065i & 1) == 1) {
            w1Var.t(30, this.f7069y);
        }
        if ((this.f7065i & 2) == 2) {
            w1Var.t(32, this.E);
        }
        rVar.v(androidx.recyclerview.widget.h0.DEFAULT_DRAG_ANIMATION_DURATION, w1Var);
        w1Var.w(this.f7064e);
    }

    public e0() {
        this.F = (byte) -1;
        this.G = -1;
        this.f7064e = iq.d.f12197d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v6 */
    /* JADX WARN: Type inference failed for: r4v8 */
    public e0(iq.e eVar, iq.g gVar) {
        this.F = (byte) -1;
        this.G = -1;
        List list = Collections.EMPTY_LIST;
        this.f7066v = list;
        this.f7067w = list;
        this.f7068x = list;
        this.f7069y = y0.f7301y;
        this.E = f1.f7088w;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        boolean z5 = false;
        char c6 = 0;
        while (!z5) {
            try {
                try {
                    int n6 = eVar.n();
                    if (n6 != 0) {
                        if (n6 == 26) {
                            int i5 = (c6 == true ? 1 : 0) & 1;
                            c6 = c6;
                            if (i5 != 1) {
                                this.f7066v = new ArrayList();
                                c6 = (c6 == true ? 1 : 0) | 1;
                            }
                            this.f7066v.add(eVar.g(a0.T, gVar));
                        } else if (n6 == 34) {
                            int i6 = (c6 == true ? 1 : 0) & 2;
                            c6 = c6;
                            if (i6 != 2) {
                                this.f7067w = new ArrayList();
                                c6 = (c6 == true ? 1 : 0) | 2;
                            }
                            this.f7067w.add(eVar.g(i0.T, gVar));
                        } else if (n6 != 42) {
                            o oVar = null;
                            g gVar2 = null;
                            if (n6 == 242) {
                                if ((this.f7065i & 1) == 1) {
                                    y0 y0Var = this.f7069y;
                                    y0Var.getClass();
                                    gVar2 = y0.i(y0Var);
                                }
                                y0 y0Var2 = (y0) eVar.g(y0.E, gVar);
                                this.f7069y = y0Var2;
                                if (gVar2 != null) {
                                    gVar2.k(y0Var2);
                                    this.f7069y = gVar2.g();
                                }
                                this.f7065i |= 1;
                            } else if (n6 != 258) {
                                if (!n(eVar, m5, gVar, n6)) {
                                }
                            } else {
                                if ((this.f7065i & 2) == 2) {
                                    f1 f1Var = this.E;
                                    f1Var.getClass();
                                    oVar = new o(2);
                                    oVar.f7194v = Collections.EMPTY_LIST;
                                    oVar.n(f1Var);
                                }
                                f1 f1Var2 = (f1) eVar.g(f1.f7089x, gVar);
                                this.E = f1Var2;
                                if (oVar != null) {
                                    oVar.n(f1Var2);
                                    this.E = oVar.j();
                                }
                                this.f7065i |= 2;
                            }
                        } else {
                            int i10 = (c6 == true ? 1 : 0) & 4;
                            c6 = c6;
                            if (i10 != 4) {
                                this.f7068x = new ArrayList();
                                c6 = (c6 == true ? 1 : 0) | 4;
                            }
                            this.f7068x.add(eVar.g(u0.N, gVar));
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
                if (((c6 == true ? 1 : 0) & 1) == 1) {
                    this.f7066v = Collections.unmodifiableList(this.f7066v);
                }
                if (((c6 == true ? 1 : 0) & 2) == 2) {
                    this.f7067w = Collections.unmodifiableList(this.f7067w);
                }
                if (((c6 == true ? 1 : 0) & 4) == 4) {
                    this.f7068x = Collections.unmodifiableList(this.f7068x);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7064e = cVar.g();
                    throw th3;
                }
                this.f7064e = cVar.g();
                m();
                throw th2;
            }
        }
        if (((c6 == true ? 1 : 0) & 1) == 1) {
            this.f7066v = Collections.unmodifiableList(this.f7066v);
        }
        if (((c6 == true ? 1 : 0) & 2) == 2) {
            this.f7067w = Collections.unmodifiableList(this.f7067w);
        }
        if (((c6 == true ? 1 : 0) & 4) == 4) {
            this.f7068x = Collections.unmodifiableList(this.f7068x);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7064e = cVar.g();
            throw th4;
        }
        this.f7064e = cVar.g();
        m();
    }
}
