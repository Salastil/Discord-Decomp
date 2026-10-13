package i0;

import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class b0 extends a0 implements g0.m {
    public final f0 E;
    public long F;
    public LinkedHashMap G;
    public g0.o H;
    public final LinkedHashMap I;

    public b0(f0 coordinator) {
        Intrinsics.checkNotNullParameter(coordinator, "coordinator");
        this.E = coordinator;
        this.F = m0.d.a;
        Intrinsics.checkNotNullParameter(this, "lookaheadDelegate");
        this.I = new LinkedHashMap();
    }

    @Override // i0.a0
    public final void B() {
        n(this.F);
    }

    public void C() {
        x();
        m0.e eVar = this.E.E.f10412h;
        boolean b10 = g0.r.b(this);
        ((com.google.firebase.messaging.p) x()).f();
        this.f10380y = b10;
    }

    @Override // g0.g
    public final m0.e getLayoutDirection() {
        return this.E.E.f10412h;
    }

    @Override // g0.t
    public final void n(long j) {
        long j5 = this.F;
        int i5 = m0.d.f14312b;
        if (j5 != j) {
            this.F = j;
            f0 f0Var = this.E;
            x xVar = f0Var.E.f10415m.j;
            if (xVar != null) {
                xVar.s();
            }
            a0.A(f0Var);
        }
        if (this.f10379x) {
            return;
        }
        C();
    }

    @Override // i0.a0
    public final a0 u() {
        f0 f0Var = this.E.F;
        if (f0Var != null) {
            return f0Var.D();
        }
        return null;
    }

    @Override // i0.a0
    public final boolean v() {
        return this.H != null;
    }

    @Override // i0.a0
    public final u w() {
        return this.E.E;
    }

    @Override // i0.a0
    public final g0.o x() {
        g0.o oVar = this.H;
        if (oVar != null) {
            return oVar;
        }
        throw new IllegalStateException("LookaheadDelegate has not been measured yet when measureResult is requested.");
    }

    @Override // i0.a0
    public final a0 y() {
        f0 f0Var = this.E.G;
        if (f0Var != null) {
            return f0Var.D();
        }
        return null;
    }

    @Override // i0.a0
    public final long z() {
        return this.F;
    }
}
