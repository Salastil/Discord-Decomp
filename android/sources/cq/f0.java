package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class f0 extends iq.j {
    public List E;

    /* renamed from: v, reason: collision with root package name */
    public int f7084v;

    /* renamed from: w, reason: collision with root package name */
    public n0 f7085w;

    /* renamed from: x, reason: collision with root package name */
    public m0 f7086x;

    /* renamed from: y, reason: collision with root package name */
    public e0 f7087y;

    public static f0 h() {
        f0 f0Var = new f0();
        f0Var.f7085w = n0.f7186w;
        f0Var.f7086x = m0.f7174w;
        f0Var.f7087y = e0.H;
        f0Var.E = Collections.EMPTY_LIST;
        return f0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        g0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        f0 h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        g0 g0Var = null;
        try {
            try {
                g0.H.getClass();
                j(new g0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                g0 g0Var2 = (g0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    g0Var = g0Var2;
                    if (g0Var != null) {
                        j(g0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (g0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((g0) nVar);
        return this;
    }

    public final g0 g() {
        g0 g0Var = new g0(this);
        int i5 = this.f7084v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        g0Var.f7100v = this.f7085w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        g0Var.f7101w = this.f7086x;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        g0Var.f7102x = this.f7087y;
        if ((i5 & 8) == 8) {
            this.E = Collections.unmodifiableList(this.E);
            this.f7084v &= -9;
        }
        g0Var.f7103y = this.E;
        g0Var.f7099i = i6;
        return g0Var;
    }

    public final void j(g0 g0Var) {
        e0 e0Var;
        m0 m0Var;
        n0 n0Var;
        if (g0Var == g0.G) {
            return;
        }
        if ((g0Var.f7099i & 1) == 1) {
            n0 n0Var2 = g0Var.f7100v;
            if ((this.f7084v & 1) != 1 || (n0Var = this.f7085w) == n0.f7186w) {
                this.f7085w = n0Var2;
            } else {
                o oVar = new o(3);
                oVar.f7194v = iq.r.f12237e;
                oVar.m(n0Var);
                oVar.m(n0Var2);
                this.f7085w = oVar.h();
            }
            this.f7084v |= 1;
        }
        if ((g0Var.f7099i & 2) == 2) {
            m0 m0Var2 = g0Var.f7101w;
            if ((this.f7084v & 2) != 2 || (m0Var = this.f7086x) == m0.f7174w) {
                this.f7086x = m0Var2;
            } else {
                o oVar2 = new o(1);
                oVar2.f7194v = Collections.EMPTY_LIST;
                oVar2.l(m0Var);
                oVar2.l(m0Var2);
                this.f7086x = oVar2.g();
            }
            this.f7084v |= 2;
        }
        if ((g0Var.f7099i & 4) == 4) {
            e0 e0Var2 = g0Var.f7102x;
            if ((this.f7084v & 4) != 4 || (e0Var = this.f7087y) == e0.H) {
                this.f7087y = e0Var2;
            } else {
                d0 h6 = d0.h();
                h6.j(e0Var);
                h6.j(e0Var2);
                this.f7087y = h6.g();
            }
            this.f7084v |= 4;
        }
        if (!g0Var.f7103y.isEmpty()) {
            if (this.E.isEmpty()) {
                this.E = g0Var.f7103y;
                this.f7084v &= -9;
            } else {
                if ((this.f7084v & 8) != 8) {
                    this.E = new ArrayList(this.E);
                    this.f7084v |= 8;
                }
                this.E.addAll(g0Var.f7103y);
            }
        }
        f(g0Var);
        this.f12211d = this.f12211d.b(g0Var.f7098e);
    }
}
