package cq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class y extends iq.n {
    public static final y I;
    public static final a J = new a(9);
    public List E;
    public List F;
    public byte G;
    public int H;

    /* renamed from: d, reason: collision with root package name */
    public final iq.d f7294d;

    /* renamed from: e, reason: collision with root package name */
    public int f7295e;

    /* renamed from: i, reason: collision with root package name */
    public int f7296i;

    /* renamed from: v, reason: collision with root package name */
    public int f7297v;

    /* renamed from: w, reason: collision with root package name */
    public x f7298w;

    /* renamed from: x, reason: collision with root package name */
    public s0 f7299x;

    /* renamed from: y, reason: collision with root package name */
    public int f7300y;

    static {
        y yVar = new y();
        I = yVar;
        yVar.f7296i = 0;
        yVar.f7297v = 0;
        yVar.f7298w = x.TRUE;
        yVar.f7299x = s0.Q;
        yVar.f7300y = 0;
        List list = Collections.EMPTY_LIST;
        yVar.E = list;
        yVar.F = list;
    }

    public y() {
        this.G = (byte) -1;
        this.H = -1;
        this.f7294d = iq.d.f12197d;
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
        if ((this.f7295e & 8) == 8 && !this.f7299x.b()) {
            this.G = (byte) 0;
            return false;
        }
        for (int i5 = 0; i5 < this.E.size(); i5++) {
            if (!((y) this.E.get(i5)).b()) {
                this.G = (byte) 0;
                return false;
            }
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            if (!((y) this.F.get(i6)).b()) {
                this.G = (byte) 0;
                return false;
            }
        }
        this.G = (byte) 1;
        return true;
    }

    @Override // iq.a
    public final int c() {
        int i5 = this.H;
        if (i5 != -1) {
            return i5;
        }
        int d6 = (this.f7295e & 1) == 1 ? w1.d(1, this.f7296i) : 0;
        if ((this.f7295e & 2) == 2) {
            d6 += w1.d(2, this.f7297v);
        }
        if ((this.f7295e & 4) == 4) {
            d6 += w1.c(3, this.f7298w.f7287d);
        }
        if ((this.f7295e & 8) == 8) {
            d6 += w1.f(4, this.f7299x);
        }
        if ((this.f7295e & 16) == 16) {
            d6 += w1.d(5, this.f7300y);
        }
        for (int i6 = 0; i6 < this.E.size(); i6++) {
            d6 += w1.f(6, (iq.a) this.E.get(i6));
        }
        for (int i10 = 0; i10 < this.F.size(); i10++) {
            d6 += w1.f(7, (iq.a) this.F.get(i10));
        }
        int size = this.f7294d.size() + d6;
        this.H = size;
        return size;
    }

    @Override // iq.a
    public final iq.i d() {
        return w.g();
    }

    @Override // iq.a
    public final iq.i e() {
        w g6 = w.g();
        g6.h(this);
        return g6;
    }

    @Override // iq.a
    public final void f(w1 w1Var) {
        c();
        if ((this.f7295e & 1) == 1) {
            w1Var.r(1, this.f7296i);
        }
        if ((this.f7295e & 2) == 2) {
            w1Var.r(2, this.f7297v);
        }
        if ((this.f7295e & 4) == 4) {
            w1Var.q(3, this.f7298w.f7287d);
        }
        if ((this.f7295e & 8) == 8) {
            w1Var.t(4, this.f7299x);
        }
        if ((this.f7295e & 16) == 16) {
            w1Var.r(5, this.f7300y);
        }
        for (int i5 = 0; i5 < this.E.size(); i5++) {
            w1Var.t(6, (iq.a) this.E.get(i5));
        }
        for (int i6 = 0; i6 < this.F.size(); i6++) {
            w1Var.t(7, (iq.a) this.F.get(i6));
        }
        w1Var.w(this.f7294d);
    }

    public y(w wVar) {
        this.G = (byte) -1;
        this.H = -1;
        this.f7294d = wVar.f12211d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v4 */
    /* JADX WARN: Type inference failed for: r8v6 */
    public y(iq.e eVar, iq.g gVar) {
        x xVar;
        this.G = (byte) -1;
        this.H = -1;
        boolean z5 = false;
        this.f7296i = 0;
        this.f7297v = 0;
        x xVar2 = x.TRUE;
        this.f7298w = xVar2;
        this.f7299x = s0.Q;
        this.f7300y = 0;
        List list = Collections.EMPTY_LIST;
        this.E = list;
        this.F = list;
        iq.c cVar = new iq.c();
        w1 m5 = w1.m(cVar, 1);
        char c6 = 0;
        while (!z5) {
            try {
                try {
                    try {
                        int n6 = eVar.n();
                        if (n6 != 0) {
                            if (n6 == 8) {
                                this.f7295e |= 1;
                                this.f7296i = eVar.k();
                            } else if (n6 != 16) {
                                r0 r0Var = null;
                                x xVar3 = null;
                                if (n6 == 24) {
                                    int k = eVar.k();
                                    if (k != 0) {
                                        if (k == 1) {
                                            xVar3 = x.FALSE;
                                        } else if (k == 2) {
                                            xVar3 = x.NULL;
                                        }
                                        xVar = xVar3;
                                    } else {
                                        xVar = xVar2;
                                    }
                                    if (xVar == null) {
                                        m5.A(n6);
                                        m5.A(k);
                                    } else {
                                        this.f7295e |= 4;
                                        this.f7298w = xVar;
                                    }
                                } else if (n6 == 34) {
                                    if ((this.f7295e & 8) == 8) {
                                        s0 s0Var = this.f7299x;
                                        s0Var.getClass();
                                        r0Var = s0.q(s0Var);
                                    }
                                    r0 r0Var2 = r0Var;
                                    s0 s0Var2 = (s0) eVar.g(s0.R, gVar);
                                    this.f7299x = s0Var2;
                                    if (r0Var2 != null) {
                                        r0Var2.j(s0Var2);
                                        this.f7299x = r0Var2.g();
                                    }
                                    this.f7295e |= 8;
                                } else if (n6 != 40) {
                                    a aVar = J;
                                    if (n6 == 50) {
                                        int i5 = (c6 == true ? 1 : 0) & 32;
                                        c6 = c6;
                                        if (i5 != 32) {
                                            this.E = new ArrayList();
                                            c6 = (c6 == true ? 1 : 0) | ' ';
                                        }
                                        this.E.add(eVar.g(aVar, gVar));
                                    } else if (n6 != 58) {
                                        if (!eVar.q(n6, m5)) {
                                        }
                                    } else {
                                        int i6 = (c6 == true ? 1 : 0) & 64;
                                        c6 = c6;
                                        if (i6 != 64) {
                                            this.F = new ArrayList();
                                            c6 = (c6 == true ? 1 : 0) | '@';
                                        }
                                        this.F.add(eVar.g(aVar, gVar));
                                    }
                                } else {
                                    this.f7295e |= 16;
                                    this.f7300y = eVar.k();
                                }
                            } else {
                                this.f7295e |= 2;
                                this.f7297v = eVar.k();
                            }
                        }
                        z5 = true;
                    } catch (IOException e9) {
                        iq.q qVar = new iq.q(e9.getMessage());
                        qVar.f12236d = this;
                        throw qVar;
                    }
                } catch (iq.q e10) {
                    e10.f12236d = this;
                    throw e10;
                }
            } catch (Throwable th2) {
                if (((c6 == true ? 1 : 0) & 32) == 32) {
                    this.E = Collections.unmodifiableList(this.E);
                }
                if (((c6 == true ? 1 : 0) & 64) == 64) {
                    this.F = Collections.unmodifiableList(this.F);
                }
                try {
                    m5.l();
                } catch (IOException unused) {
                } catch (Throwable th3) {
                    this.f7294d = cVar.g();
                    throw th3;
                }
                this.f7294d = cVar.g();
                throw th2;
            }
        }
        if (((c6 == true ? 1 : 0) & 32) == 32) {
            this.E = Collections.unmodifiableList(this.E);
        }
        if (((c6 == true ? 1 : 0) & 64) == 64) {
            this.F = Collections.unmodifiableList(this.F);
        }
        try {
            m5.l();
        } catch (IOException unused2) {
        } catch (Throwable th4) {
            this.f7294d = cVar.g();
            throw th4;
        }
        this.f7294d = cVar.g();
    }
}
