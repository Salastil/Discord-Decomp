package i0;

import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class u implements i {

    /* renamed from: o, reason: collision with root package name */
    public static final r f10403o;

    /* renamed from: p, reason: collision with root package name */
    public static final p f10404p;

    /* renamed from: q, reason: collision with root package name */
    public static final q f10405q;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f10406b;

    /* renamed from: c, reason: collision with root package name */
    public u f10407c;

    /* renamed from: d, reason: collision with root package name */
    public final ha.l f10408d;

    /* renamed from: e, reason: collision with root package name */
    public g0.n f10409e;

    /* renamed from: f, reason: collision with root package name */
    public final e4.c f10410f;

    /* renamed from: g, reason: collision with root package name */
    public m0.b f10411g;

    /* renamed from: h, reason: collision with root package name */
    public m0.e f10412h;

    /* renamed from: i, reason: collision with root package name */
    public q f10413i;
    public s j;
    public s k;

    /* renamed from: l, reason: collision with root package name */
    public final c0 f10414l;

    /* renamed from: m, reason: collision with root package name */
    public final z f10415m;

    /* renamed from: n, reason: collision with root package name */
    public z.f f10416n;

    static {
        Intrinsics.checkNotNullParameter("Undefined intrinsics block and it is required", "error");
        f10403o = new r();
        f10404p = p.f10400d;
        f10405q = new q();
    }

    public u(int i5) {
        boolean z5 = (i5 & 1) == 0;
        k0.g.a.addAndGet(1);
        this.f10406b = z5;
        v.d vector = new v.d(new u[16]);
        a3.q onVectorMutated = new a3.q(7, this);
        Intrinsics.checkNotNullParameter(vector, "vector");
        Intrinsics.checkNotNullParameter(onVectorMutated, "onVectorMutated");
        ha.l lVar = new ha.l();
        lVar.f9613d = vector;
        this.f10408d = lVar;
        this.f10409e = f10403o;
        this.f10410f = new e4.c(this);
        this.f10411g = w.a;
        this.f10412h = m0.e.f14313d;
        this.f10413i = f10405q;
        u.e.A.getClass();
        s sVar = s.f10401d;
        this.j = sVar;
        this.k = sVar;
        this.f10414l = new c0(this);
        this.f10415m = new z(this);
        this.f10416n = z.c.a;
    }

    public static void h(u it) {
        Intrinsics.checkNotNullParameter(it, "it");
        z zVar = it.f10415m;
        if (t.a[f0.e.b(zVar.f10427b)] != 1) {
            int i5 = zVar.f10427b;
            throw new IllegalStateException("Unexpected state ".concat(i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? "null" : "Idle" : "LookaheadLayingOut" : "LayingOut" : "LookaheadMeasuring" : "Measuring"));
        }
        zVar.getClass();
        if (zVar.f10428c) {
            return;
        }
        zVar.getClass();
    }

    public final void a() {
        this.k = this.j;
        s sVar = s.f10401d;
        this.j = sVar;
        v.d dVar = (v.d) this.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                u uVar = (u) objArr[i6];
                if (uVar.j != sVar) {
                    uVar.a();
                }
                i6++;
            } while (i6 < i5);
        }
    }

    public final List b() {
        x xVar = this.f10415m.j;
        Intrinsics.checkNotNull(xVar);
        v.d dVar = xVar.G;
        z zVar = xVar.K;
        ((v.d) zVar.a.f10408d.f9613d).c();
        if (!xVar.H) {
            return dVar.c();
        }
        ha.l lVar = zVar.a.f10408d;
        v.d dVar2 = (v.d) lVar.f9613d;
        int i5 = dVar2.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar2.f19130d;
            int i6 = 0;
            do {
                u uVar = (u) objArr[i6];
                if (dVar.f19132i <= i6) {
                    x xVar2 = uVar.f10415m.j;
                    Intrinsics.checkNotNull(xVar2);
                    dVar.a(xVar2);
                } else {
                    x xVar3 = uVar.f10415m.j;
                    Intrinsics.checkNotNull(xVar3);
                    Object[] objArr2 = dVar.f19130d;
                    Object obj = objArr2[i6];
                    objArr2[i6] = xVar3;
                }
                i6++;
            } while (i6 < i5);
        }
        dVar.f(((v.a) ((v.d) lVar.f9613d).c()).f19124d.f19132i, dVar.f19132i);
        xVar.H = false;
        return dVar.c();
    }

    public final List c() {
        y yVar = this.f10415m.f10434i;
        v.d dVar = yVar.I;
        u uVar = yVar.L.a;
        if (!yVar.J) {
            return dVar.c();
        }
        ha.l lVar = uVar.f10408d;
        v.d dVar2 = (v.d) lVar.f9613d;
        int i5 = dVar2.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar2.f19130d;
            int i6 = 0;
            do {
                u uVar2 = (u) objArr[i6];
                if (dVar.f19132i <= i6) {
                    dVar.a(uVar2.f10415m.f10434i);
                } else {
                    y yVar2 = uVar2.f10415m.f10434i;
                    Object[] objArr2 = dVar.f19130d;
                    Object obj = objArr2[i6];
                    objArr2[i6] = yVar2;
                }
                i6++;
            } while (i6 < i5);
        }
        dVar.f(((v.a) ((v.d) lVar.f9613d).c()).f19124d.f19132i, dVar.f19132i);
        yVar.J = false;
        return dVar.c();
    }

    public final List d() {
        c0 c0Var = this.f10414l;
        h0 h0Var = c0Var.f10384d;
        v.d dVar = c0Var.f10386f;
        if (dVar == null) {
            return m0.f13512d;
        }
        v.d dVar2 = new v.d(new g0.q[dVar.f19132i]);
        z.e eVar = c0Var.f10385e;
        int i5 = 0;
        while (eVar != null && eVar != h0Var) {
            f0 f0Var = eVar.f21120f;
            if (f0Var == null) {
                throw new IllegalArgumentException("Required value was null.");
            }
            c0Var.f10382b.getClass();
            z.e eVar2 = eVar.f21119e;
            if (eVar2 == h0Var) {
                f0 f0Var2 = eVar.f21120f;
                f0 f0Var3 = eVar2.f21120f;
            }
            dVar2.a(new g0.q((z.f) dVar.f19130d[i5], f0Var));
            eVar = eVar.f21119e;
            i5++;
        }
        return dVar2.c();
    }

    public final int e() {
        return this.f10415m.f10434i.f10425x;
    }

    public final void f() {
        u uVar = this.f10407c;
        if (uVar != null && uVar == null) {
            throw new IllegalStateException("Lookahead measure cannot be requested on a node that is not a part of theLookaheadLayout");
        }
    }

    public final void g() {
        f();
        c0 c0Var = this.f10414l;
        f0 f0Var = c0Var.f10383c;
        m mVar = c0Var.f10382b;
        while (f0Var != mVar) {
            Intrinsics.checkNotNull(f0Var, "null cannot be cast to non-null type androidx.compose.ui.node.LayoutModifierNodeCoordinator");
            o oVar = (o) f0Var;
            oVar.getClass();
            f0Var = oVar.F;
        }
        mVar.getClass();
    }

    public final void i() {
        v.d dVar = (v.d) this.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                u uVar = (u) objArr[i6];
                s sVar = uVar.k;
                uVar.j = sVar;
                if (sVar != s.f10401d) {
                    uVar.i();
                }
                i6++;
            } while (i6 < i5);
        }
    }

    public final String toString() {
        return ys.l.x(this) + " children: " + ((v.a) ((v.d) this.f10408d.f9613d).c()).f19124d.f19132i + " measurePolicy: " + this.f10409e;
    }
}
