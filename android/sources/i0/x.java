package i0;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class x extends g0.t implements g0.m, b {
    public boolean E;
    public final v F;
    public final v.d G;
    public boolean H;
    public boolean I;
    public Object J;
    public final /* synthetic */ z K;

    /* renamed from: x, reason: collision with root package name */
    public m0.a f10423x;

    /* renamed from: y, reason: collision with root package name */
    public final long f10424y = m0.d.a;

    public x(z zVar) {
        this.K = zVar;
        Intrinsics.checkNotNullParameter(this, "alignmentLinesOwner");
        this.F = new v(this, 1);
        this.G = new v.d(new x[16]);
        this.H = true;
        this.I = true;
        this.J = zVar.f10434i.F;
    }

    @Override // g0.m
    public final int a(int i5) {
        u();
        b0 D = this.K.a().D();
        Intrinsics.checkNotNull(D);
        return D.a(i5);
    }

    @Override // i0.b
    public final m b() {
        return this.K.a.f10414l.f10382b;
    }

    @Override // i0.b
    public final void c() {
        u uVar = this.K.a;
    }

    @Override // i0.b
    public final v d() {
        return this.F;
    }

    @Override // g0.m
    public final int e(int i5) {
        u();
        b0 D = this.K.a().D();
        Intrinsics.checkNotNull(D);
        return D.e(i5);
    }

    @Override // g0.m
    public final int f(int i5) {
        u();
        b0 D = this.K.a().D();
        Intrinsics.checkNotNull(D);
        return D.f(i5);
    }

    @Override // g0.m
    public final g0.t g(long j) {
        z zVar = this.K;
        u uVar = zVar.a;
        if (uVar.j == s.f10401d) {
            uVar.a();
        }
        u uVar2 = zVar.a;
        uVar2.f10415m.getClass();
        m0.a aVar = this.f10423x;
        if (aVar != null && aVar.a == j) {
            uVar2.i();
            return this;
        }
        this.f10423x = new m0.a(j);
        this.F.f10418c = false;
        j(d.f10390i);
        if (zVar.a().D() == null) {
            throw new IllegalStateException("Lookahead result from lookaheadRemeasure cannot be null");
        }
        zVar.f10427b = 2;
        w.d(uVar2);
        throw null;
    }

    @Override // i0.b
    public final void h() {
        v.d dVar;
        int i5;
        v vVar = this.F;
        vVar.f();
        z zVar = this.K;
        boolean z5 = zVar.f10430e;
        u uVar = zVar.a;
        if (z5 && (i5 = (dVar = (v.d) uVar.f10408d.f9613d).f19132i) > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                ((u) objArr[i6]).f10415m.getClass();
                i6++;
            } while (i6 < i5);
        }
        l lVar = b().P;
        Intrinsics.checkNotNull(lVar);
        if (zVar.f10431f || (!lVar.f10380y && zVar.f10430e)) {
            zVar.f10430e = false;
            zVar.f10427b = 4;
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
        return this.E;
    }

    @Override // i0.b
    public final void j(Function1 block) {
        Intrinsics.checkNotNullParameter(block, "block");
        v.d dVar = (v.d) this.K.a.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                x xVar = ((u) objArr[i6]).f10415m.j;
                Intrinsics.checkNotNull(xVar);
                block.invoke(xVar);
                i6++;
            } while (i6 < i5);
        }
    }

    @Override // g0.m
    public final int k(int i5) {
        u();
        b0 D = this.K.a().D();
        Intrinsics.checkNotNull(D);
        return D.k(i5);
    }

    @Override // g0.t
    public final void n(long j) {
        z zVar = this.K;
        zVar.f10427b = 4;
        int i5 = m0.d.f14312b;
        if (j != this.f10424y) {
            if (zVar.f10432g) {
                zVar.f10430e = true;
            }
            s();
        }
        w.d(zVar.a);
        throw null;
    }

    public final void q() {
        boolean z5 = this.E;
        this.E = true;
        z zVar = this.K;
        if (!z5) {
            zVar.getClass();
        }
        v.d dVar = (v.d) zVar.a.f10408d.f9613d;
        int i5 = dVar.f19132i;
        if (i5 > 0) {
            Object[] objArr = dVar.f19130d;
            int i6 = 0;
            do {
                u uVar = (u) objArr[i6];
                if (uVar.e() != Integer.MAX_VALUE) {
                    x xVar = uVar.f10415m.j;
                    Intrinsics.checkNotNull(xVar);
                    xVar.q();
                    u.h(uVar);
                }
                i6++;
            } while (i6 < i5);
        }
    }

    public final void s() {
        v.d dVar;
        int i5;
        z zVar = this.K;
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
            x xVar = zVar2.j;
            if (xVar != null) {
                xVar.s();
            }
            i6++;
        } while (i6 < i5);
    }

    public final void u() {
        if (this.K.a.f10407c == null) {
            throw new IllegalStateException("Lookahead measure cannot be requested on a node that is not a part of theLookaheadLayout");
        }
    }
}
