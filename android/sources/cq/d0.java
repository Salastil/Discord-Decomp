package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class d0 extends iq.j {
    public y0 E;
    public f1 F;

    /* renamed from: v, reason: collision with root package name */
    public int f7048v;

    /* renamed from: w, reason: collision with root package name */
    public List f7049w;

    /* renamed from: x, reason: collision with root package name */
    public List f7050x;

    /* renamed from: y, reason: collision with root package name */
    public List f7051y;

    public static d0 h() {
        d0 d0Var = new d0();
        List list = Collections.EMPTY_LIST;
        d0Var.f7049w = list;
        d0Var.f7050x = list;
        d0Var.f7051y = list;
        d0Var.E = y0.f7301y;
        d0Var.F = f1.f7088w;
        return d0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        e0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        d0 h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        e0 e0Var = null;
        try {
            try {
                e0.I.getClass();
                j(new e0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                e0 e0Var2 = (e0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    e0Var = e0Var2;
                    if (e0Var != null) {
                        j(e0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (e0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((e0) nVar);
        return this;
    }

    public final e0 g() {
        e0 e0Var = new e0(this);
        int i5 = this.f7048v;
        if ((i5 & 1) == 1) {
            this.f7049w = Collections.unmodifiableList(this.f7049w);
            this.f7048v &= -2;
        }
        e0Var.f7066v = this.f7049w;
        if ((this.f7048v & 2) == 2) {
            this.f7050x = Collections.unmodifiableList(this.f7050x);
            this.f7048v &= -3;
        }
        e0Var.f7067w = this.f7050x;
        if ((this.f7048v & 4) == 4) {
            this.f7051y = Collections.unmodifiableList(this.f7051y);
            this.f7048v &= -5;
        }
        e0Var.f7068x = this.f7051y;
        int i6 = (i5 & 8) != 8 ? 0 : 1;
        e0Var.f7069y = this.E;
        if ((i5 & 16) == 16) {
            i6 |= 2;
        }
        e0Var.E = this.F;
        e0Var.f7065i = i6;
        return e0Var;
    }

    public final void j(e0 e0Var) {
        f1 f1Var;
        y0 y0Var;
        if (e0Var == e0.H) {
            return;
        }
        if (!e0Var.f7066v.isEmpty()) {
            if (this.f7049w.isEmpty()) {
                this.f7049w = e0Var.f7066v;
                this.f7048v &= -2;
            } else {
                if ((this.f7048v & 1) != 1) {
                    this.f7049w = new ArrayList(this.f7049w);
                    this.f7048v |= 1;
                }
                this.f7049w.addAll(e0Var.f7066v);
            }
        }
        if (!e0Var.f7067w.isEmpty()) {
            if (this.f7050x.isEmpty()) {
                this.f7050x = e0Var.f7067w;
                this.f7048v &= -3;
            } else {
                if ((this.f7048v & 2) != 2) {
                    this.f7050x = new ArrayList(this.f7050x);
                    this.f7048v |= 2;
                }
                this.f7050x.addAll(e0Var.f7067w);
            }
        }
        if (!e0Var.f7068x.isEmpty()) {
            if (this.f7051y.isEmpty()) {
                this.f7051y = e0Var.f7068x;
                this.f7048v &= -5;
            } else {
                if ((this.f7048v & 4) != 4) {
                    this.f7051y = new ArrayList(this.f7051y);
                    this.f7048v |= 4;
                }
                this.f7051y.addAll(e0Var.f7068x);
            }
        }
        if ((e0Var.f7065i & 1) == 1) {
            y0 y0Var2 = e0Var.f7069y;
            if ((this.f7048v & 8) != 8 || (y0Var = this.E) == y0.f7301y) {
                this.E = y0Var2;
            } else {
                g i5 = y0.i(y0Var);
                i5.k(y0Var2);
                this.E = i5.g();
            }
            this.f7048v |= 8;
        }
        if ((e0Var.f7065i & 2) == 2) {
            f1 f1Var2 = e0Var.E;
            if ((this.f7048v & 16) != 16 || (f1Var = this.F) == f1.f7088w) {
                this.F = f1Var2;
            } else {
                o oVar = new o(2);
                oVar.f7194v = Collections.EMPTY_LIST;
                oVar.n(f1Var);
                oVar.n(f1Var2);
                this.F = oVar.j();
            }
            this.f7048v |= 16;
        }
        f(e0Var);
        this.f12211d = this.f12211d.b(e0Var.f7064e);
    }
}
