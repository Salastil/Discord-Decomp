package cq;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class g extends iq.i implements iq.u {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f7094e;

    /* renamed from: i, reason: collision with root package name */
    public int f7095i;

    /* renamed from: v, reason: collision with root package name */
    public List f7096v;

    /* renamed from: w, reason: collision with root package name */
    public int f7097w;

    public /* synthetic */ g(int i5) {
        this.f7094e = i5;
    }

    public static g h() {
        g gVar = new g(1);
        gVar.f7096v = Collections.EMPTY_LIST;
        gVar.f7097w = -1;
        return gVar;
    }

    @Override // iq.i
    public final iq.a c() {
        switch (this.f7094e) {
            case 0:
                h f2 = f();
                if (f2.b()) {
                    return f2;
                }
                throw new ai.k();
            default:
                y0 g6 = g();
                if (g6.b()) {
                    return g6;
                }
                throw new ai.k();
        }
    }

    public final Object clone() {
        switch (this.f7094e) {
            case 0:
                g gVar = new g(0);
                gVar.f7096v = Collections.EMPTY_LIST;
                gVar.j(f());
                return gVar;
            default:
                g h6 = h();
                h6.k(g());
                return h6;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x003d  */
    @Override // iq.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final iq.i d(iq.e eVar, iq.g gVar) {
        switch (this.f7094e) {
            case 0:
                h hVar = null;
                try {
                    try {
                        j((h) h.E.a(eVar, gVar));
                        return this;
                    } catch (iq.q e9) {
                        h hVar2 = (h) e9.f12236d;
                        try {
                            throw e9;
                        } catch (Throwable th2) {
                            th = th2;
                            hVar = hVar2;
                            if (hVar != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th3) {
                    th = th3;
                    if (hVar != null) {
                        j(hVar);
                    }
                    throw th;
                }
            default:
                y0 y0Var = null;
                try {
                    try {
                        y0.E.getClass();
                        k(new y0(eVar, gVar));
                        return this;
                    } catch (iq.q e10) {
                        y0 y0Var2 = (y0) e10.f12236d;
                        try {
                            throw e10;
                        } catch (Throwable th4) {
                            th = th4;
                            y0Var = y0Var2;
                            if (y0Var != null) {
                            }
                            throw th;
                        }
                    }
                } catch (Throwable th5) {
                    th = th5;
                    if (y0Var != null) {
                        k(y0Var);
                    }
                    throw th;
                }
        }
    }

    @Override // iq.i
    public final /* bridge */ /* synthetic */ iq.i e(iq.n nVar) {
        switch (this.f7094e) {
            case 0:
                j((h) nVar);
                break;
            default:
                k((y0) nVar);
                break;
        }
        return this;
    }

    public h f() {
        h hVar = new h(this);
        int i5 = this.f7095i;
        int i6 = (i5 & 1) != 1 ? 0 : 1;
        hVar.f7109i = this.f7097w;
        if ((i5 & 2) == 2) {
            this.f7096v = Collections.unmodifiableList(this.f7096v);
            this.f7095i &= -3;
        }
        hVar.f7110v = this.f7096v;
        hVar.f7108e = i6;
        return hVar;
    }

    public y0 g() {
        y0 y0Var = new y0(this);
        int i5 = this.f7095i;
        if ((i5 & 1) == 1) {
            this.f7096v = Collections.unmodifiableList(this.f7096v);
            this.f7095i &= -2;
        }
        y0Var.f7304i = this.f7096v;
        int i6 = (i5 & 2) != 2 ? 0 : 1;
        y0Var.f7305v = this.f7097w;
        y0Var.f7303e = i6;
        return y0Var;
    }

    public void j(h hVar) {
        if (hVar == h.f7106y) {
            return;
        }
        if ((hVar.f7108e & 1) == 1) {
            int i5 = hVar.f7109i;
            this.f7095i = 1 | this.f7095i;
            this.f7097w = i5;
        }
        if (!hVar.f7110v.isEmpty()) {
            if (this.f7096v.isEmpty()) {
                this.f7096v = hVar.f7110v;
                this.f7095i &= -3;
            } else {
                if ((this.f7095i & 2) != 2) {
                    this.f7096v = new ArrayList(this.f7096v);
                    this.f7095i |= 2;
                }
                this.f7096v.addAll(hVar.f7110v);
            }
        }
        this.f12211d = this.f12211d.b(hVar.f7107d);
    }

    public void k(y0 y0Var) {
        if (y0Var == y0.f7301y) {
            return;
        }
        if (!y0Var.f7304i.isEmpty()) {
            if (this.f7096v.isEmpty()) {
                this.f7096v = y0Var.f7304i;
                this.f7095i &= -2;
            } else {
                if ((this.f7095i & 1) != 1) {
                    this.f7096v = new ArrayList(this.f7096v);
                    this.f7095i |= 1;
                }
                this.f7096v.addAll(y0Var.f7304i);
            }
        }
        if ((y0Var.f7303e & 1) == 1) {
            int i5 = y0Var.f7305v;
            this.f7095i |= 2;
            this.f7097w = i5;
        }
        this.f12211d = this.f12211d.b(y0Var.f7302d);
    }
}
