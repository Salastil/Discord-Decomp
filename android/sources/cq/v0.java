package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class v0 extends iq.j {
    public w0 E;
    public List F;
    public List G;

    /* renamed from: v, reason: collision with root package name */
    public int f7268v;

    /* renamed from: w, reason: collision with root package name */
    public int f7269w;

    /* renamed from: x, reason: collision with root package name */
    public int f7270x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f7271y;

    public static v0 h() {
        v0 v0Var = new v0();
        v0Var.E = w0.INV;
        List list = Collections.EMPTY_LIST;
        v0Var.F = list;
        v0Var.G = list;
        return v0Var;
    }

    @Override // iq.i
    public final iq.a c() {
        x0 g6 = g();
        if (g6.b()) {
            return g6;
        }
        throw new ai.k();
    }

    public final Object clone() {
        v0 h6 = h();
        h6.j(g());
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x001b  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        x0 x0Var = null;
        try {
            try {
                x0.K.getClass();
                j(new x0(eVar, gVar));
                return this;
            } catch (iq.q e9) {
                x0 x0Var2 = (x0) e9.f12236d;
                try {
                    throw e9;
                } catch (Throwable th2) {
                    th = th2;
                    x0Var = x0Var2;
                    if (x0Var != null) {
                        j(x0Var);
                    }
                    throw th;
                }
            }
        } catch (Throwable th3) {
            th = th3;
            if (x0Var != null) {
            }
            throw th;
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        j((x0) nVar);
        return this;
    }

    public final x0 g() {
        x0 x0Var = new x0(this);
        int i5 = this.f7268v;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        x0Var.f7290v = this.f7269w;
        if ((i5 & 2) == 2) {
            i6 |= 2;
        }
        x0Var.f7291w = this.f7270x;
        if ((i5 & 4) == 4) {
            i6 |= 4;
        }
        x0Var.f7292x = this.f7271y;
        if ((i5 & 8) == 8) {
            i6 |= 8;
        }
        x0Var.f7293y = this.E;
        if ((i5 & 16) == 16) {
            this.F = Collections.unmodifiableList(this.F);
            this.f7268v &= -17;
        }
        x0Var.E = this.F;
        if ((this.f7268v & 32) == 32) {
            this.G = Collections.unmodifiableList(this.G);
            this.f7268v &= -33;
        }
        x0Var.F = this.G;
        x0Var.f7289i = i6;
        return x0Var;
    }

    public final void j(x0 x0Var) {
        if (x0Var == x0.J) {
            return;
        }
        int i5 = x0Var.f7289i;
        if ((i5 & 1) == 1) {
            int i6 = x0Var.f7290v;
            this.f7268v = 1 | this.f7268v;
            this.f7269w = i6;
        }
        if ((i5 & 2) == 2) {
            int i10 = x0Var.f7291w;
            this.f7268v = 2 | this.f7268v;
            this.f7270x = i10;
        }
        if ((i5 & 4) == 4) {
            boolean z5 = x0Var.f7292x;
            this.f7268v = 4 | this.f7268v;
            this.f7271y = z5;
        }
        if ((i5 & 8) == 8) {
            w0 w0Var = x0Var.f7293y;
            w0Var.getClass();
            this.f7268v = 8 | this.f7268v;
            this.E = w0Var;
        }
        if (!x0Var.E.isEmpty()) {
            if (this.F.isEmpty()) {
                this.F = x0Var.E;
                this.f7268v &= -17;
            } else {
                if ((this.f7268v & 16) != 16) {
                    this.F = new ArrayList(this.F);
                    this.f7268v |= 16;
                }
                this.F.addAll(x0Var.E);
            }
        }
        if (!x0Var.F.isEmpty()) {
            if (this.G.isEmpty()) {
                this.G = x0Var.F;
                this.f7268v &= -33;
            } else {
                if ((this.f7268v & 32) != 32) {
                    this.G = new ArrayList(this.G);
                    this.f7268v |= 32;
                }
                this.G.addAll(x0Var.F);
            }
        }
        f(x0Var);
        this.f12211d = this.f12211d.b(x0Var.f7288e);
    }
}
