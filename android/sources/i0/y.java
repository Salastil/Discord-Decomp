package i0;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class y extends g0.t implements g0.m, b {
    public Object F;
    public boolean G;
    public final v H;
    public final v.d I;
    public boolean J;
    public float K;
    public final /* synthetic */ z L;

    /* renamed from: x, reason: collision with root package name */
    public int f10425x = Integer.MAX_VALUE;

    /* renamed from: y, reason: collision with root package name */
    public long f10426y = m0.d.a;
    public boolean E = true;

    public y(z zVar) {
        this.L = zVar;
        Intrinsics.checkNotNullParameter(this, "alignmentLinesOwner");
        this.H = new v(this, 0);
        this.I = new v.d(new y[16]);
        this.J = true;
    }

    @Override // g0.m
    public final int a(int i5) {
        u();
        return this.L.a().a(i5);
    }

    @Override // i0.b
    public final m b() {
        return this.L.a.f10414l.f10382b;
    }

    @Override // i0.b
    public final v d() {
        return this.H;
    }

    @Override // g0.m
    public final int e(int i5) {
        u();
        return this.L.a().e(i5);
    }

    @Override // g0.m
    public final int f(int i5) {
        u();
        return this.L.a().f(i5);
    }

    @Override // g0.m
    public final g0.t g(long j) {
        z zVar = this.L;
        u uVar = zVar.a;
        s sVar = uVar.j;
        s sVar2 = s.f10401d;
        if (sVar == sVar2) {
            uVar.a();
        }
        if (uVar.f10407c != null) {
            p(j);
            x xVar = zVar.j;
            Intrinsics.checkNotNull(xVar);
            xVar.getClass();
            Intrinsics.checkNotNullParameter(sVar2, "<set-?>");
            xVar.g(j);
        }
        w.d(zVar.a);
        throw null;
    }

    @Override // i0.b
    public final void h() {
        v.d dVar;
        int i5;
        v vVar = this.H;
        vVar.f();
        z zVar = this.L;
        u uVar = zVar.a;
        if (zVar.f10428c && (i5 = (dVar = (v.d) uVar.f10408d.f9613d).f19132i) > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                ((u) objArr[i6]).f10415m.getClass();
                i6++;
            } while (i6 < i5);
        }
        if (zVar.f10429d || (!b().f10380y && zVar.f10428c)) {
            zVar.f10428c = false;
            zVar.f10427b = 3;
            if (zVar.f10432g) {
                zVar.f10432g = false;
                zVar.b(zVar.f10433h - 1);
            }
            w.d(uVar);
            throw null;
        }
        if (vVar.f10417b) {
            vVar.f();
            if (vVar.f10420e != null) {
                vVar.e();
            }
        }
    }

    @Override // i0.b
    public final boolean i() {
        return this.G;
    }

    @Override // i0.b
    public final void j(Function1 block) {
        Intrinsics.checkNotNullParameter(block, "block");
        v.d dVar = (v.d) this.L.a.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                block.invoke(((u) objArr[i6]).f10415m.f10434i);
                i6++;
            } while (i6 < i5);
        }
    }

    @Override // g0.m
    public final int k(int i5) {
        u();
        return this.L.a().k(i5);
    }

    @Override // g0.t
    public final void n(long j) {
        z zVar = this.L;
        u uVar = zVar.a;
        long j5 = this.f10426y;
        int i5 = m0.d.f14312b;
        if (j != j5) {
            if (zVar.f10432g) {
                zVar.f10428c = true;
            }
            s();
        }
        if (uVar.f10407c != null) {
            x xVar = zVar.j;
            Intrinsics.checkNotNull(xVar);
            xVar.getClass();
            g0.s.a(xVar, (int) (j >> 32), (int) (4294967295L & j));
        }
        zVar.f10427b = 3;
        this.f10426y = j;
        w.d(uVar);
        throw null;
    }

    public final void q() {
        boolean z5 = this.G;
        this.G = true;
        u uVar = this.L.a;
        z zVar = uVar.f10415m;
        if (!z5) {
            zVar.getClass();
            zVar.getClass();
        }
        c0 c0Var = uVar.f10414l;
        f0 f0Var = c0Var.f10382b.F;
        for (f0 f0Var2 = c0Var.f10383c; !Intrinsics.areEqual(f0Var2, f0Var) && f0Var2 != null; f0Var2 = f0Var2.F) {
            if (f0Var2.N) {
                f0Var2.H();
            }
        }
        v.d dVar = (v.d) uVar.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                u uVar2 = (u) objArr[i6];
                if (uVar2.e() != Integer.MAX_VALUE) {
                    uVar2.f10415m.f10434i.q();
                    u.h(uVar2);
                }
                i6++;
            } while (i6 < i5);
        }
    }

    public final void s() {
        v.d dVar;
        int i5;
        z zVar = this.L;
        if (zVar.f10433h <= 0 || (i5 = (dVar = (v.d) zVar.a.f10408d.f9613d).f19132i) <= 0) {
            return;
        }
        Object[] objArr = dVar.f19130d;
        int i6 = 0;
        do {
            z zVar2 = ((u) objArr[i6]).f10415m;
            if (zVar2.f10432g && !zVar2.f10428c) {
                r rVar = u.f10403o;
            }
            zVar2.f10434i.s();
            i6++;
        } while (i6 < i5);
    }

    public final void u() {
        z zVar = this.L;
        u uVar = zVar.a;
        r rVar = u.f10403o;
        uVar.getClass();
        zVar.a.getClass();
    }

    @Override // i0.b
    public final void c() {
    }
}
