package i0;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.LinkedHashMap;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes.dex */
public abstract class f0 extends a0 implements g0.m, g0.k, Function1 {
    public final u E;
    public f0 F;
    public f0 G;
    public boolean H;
    public m0.b I;
    public m0.e J;
    public g0.o K;
    public LinkedHashMap L;
    public long M;
    public boolean N;

    static {
        int i5 = c0.c.a;
        int i6 = c0.d.a;
        int i10 = b0.b.a;
        float[] values = {1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f};
        Intrinsics.checkNotNullParameter(values, "values");
    }

    public f0(u layoutNode) {
        Intrinsics.checkNotNullParameter(layoutNode, "layoutNode");
        this.E = layoutNode;
        this.I = layoutNode.f10411g;
        this.J = layoutNode.f10412h;
        this.M = m0.d.a;
        new a3.q(8, this);
    }

    @Override // i0.a0
    public final void B() {
        n(this.M);
    }

    public abstract void C();

    public abstract b0 D();

    public final Object E() {
        u uVar = this.E;
        if ((uVar.f10414l.f10385e.f21117c & 64) == 0) {
            return null;
        }
        F();
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        for (z.e eVar = uVar.f10414l.f10384d; eVar != null; eVar = eVar.f21118d) {
            if ((eVar.f21116b & 64) != 0) {
                for (z.e eVar2 = eVar; eVar2 != null; eVar2 = null) {
                    if (eVar2 instanceof c) {
                        Intrinsics.checkNotNullParameter(uVar.f10411g, "<this>");
                        z.d dVar = ((c) eVar2).f10381i;
                        Intrinsics.checkNotNull(dVar, "null cannot be cast to non-null type androidx.compose.ui.layout.ParentDataModifier");
                        dVar.getClass();
                        throw new ClassCastException();
                    }
                }
            }
        }
        return objectRef.element;
    }

    public abstract z.e F();

    public final z.e G(boolean z5) {
        z.e F;
        c0 c0Var = this.E.f10414l;
        if (c0Var.f10383c == this) {
            return c0Var.f10385e;
        }
        if (!z5) {
            f0 f0Var = this.G;
            if (f0Var != null) {
                return f0Var.F();
            }
            return null;
        }
        f0 f0Var2 = this.G;
        if (f0Var2 == null || (F = f0Var2.F()) == null) {
            return null;
        }
        return F.f21119e;
    }

    public final void H() {
        f0 f0Var = this.G;
        if (f0Var != null) {
            f0Var.H();
        }
    }

    public final boolean I() {
        if (this.H) {
            return false;
        }
        this.E.getClass();
        return false;
    }

    public final void J() {
        z.e F = F();
        for (z.e G = G(true); G != null && (G.f21117c & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0; G = G.f21119e) {
            if ((G.f21116b & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0) {
                for (z.e eVar = G; eVar != null; eVar = null) {
                    if (eVar instanceof c) {
                        Intrinsics.checkNotNullParameter(this, "coordinates");
                    }
                }
            }
            if (G == F) {
                return;
            }
        }
    }

    public final void K(long j) {
        m0.b bVar = this.I;
        u uVar = this.E;
        if (Intrinsics.areEqual(bVar, uVar.f10411g)) {
            m0.e eVar = this.J;
            m0.e eVar2 = uVar.f10412h;
        }
        this.I = uVar.f10411g;
        this.J = uVar.f10412h;
        I();
        this.N = false;
        long j5 = this.M;
        int i5 = m0.d.f14312b;
        if (j5 == j) {
            return;
        }
        this.M = j;
        uVar.f10415m.f10434i.s();
        f0 f0Var = this.G;
        if (f0Var != null) {
            f0Var.H();
        }
        a0.A(this);
    }

    @Override // g0.g
    public final m0.e getLayoutDirection() {
        return this.E.f10412h;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        if (obj != null) {
            throw new ClassCastException();
        }
        Intrinsics.checkNotNullParameter(null, "canvas");
        u uVar = this.E;
        if (uVar.f10415m.f10434i.G) {
            w.d(uVar);
            throw null;
        }
        this.N = true;
        return Unit.a;
    }

    @Override // g0.k
    public final long l() {
        return this.f9083i;
    }

    @Override // g0.k
    public final g0.k r() {
        I();
        throw new IllegalStateException("LayoutCoordinate operations are only valid when isAttached is true");
    }

    @Override // g0.k
    public final w3.q t(g0.k sourceCoordinates) {
        Intrinsics.checkNotNullParameter(sourceCoordinates, "sourceCoordinates");
        I();
        throw new IllegalStateException("LayoutCoordinate operations are only valid when isAttached is true");
    }

    @Override // i0.a0
    public final a0 u() {
        return this.F;
    }

    @Override // i0.a0
    public final boolean v() {
        return this.K != null;
    }

    @Override // i0.a0
    public final u w() {
        return this.E;
    }

    @Override // i0.a0
    public final g0.o x() {
        g0.o oVar = this.K;
        if (oVar != null) {
            return oVar;
        }
        throw new IllegalStateException("Asking for measurement result of unmeasured layout modifier");
    }

    @Override // i0.a0
    public final a0 y() {
        return this.G;
    }

    @Override // i0.a0
    public final long z() {
        return this.M;
    }
}
