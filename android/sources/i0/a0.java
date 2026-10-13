package i0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class a0 extends g0.t implements g0.p {

    /* renamed from: x, reason: collision with root package name */
    public boolean f10379x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f10380y;

    public static void A(f0 f0Var) {
        Intrinsics.checkNotNullParameter(f0Var, "<this>");
        f0 f0Var2 = f0Var.F;
        u uVar = f0Var.E;
        if (Intrinsics.areEqual(f0Var2 != null ? f0Var2.E : null, uVar)) {
            uVar.f10415m.f10434i.getClass();
        } else {
            uVar.f10415m.f10434i.H.d();
        }
    }

    public abstract void B();

    public abstract int q(g0.f fVar);

    public final int s(g0.f alignmentLine) {
        int q5;
        Intrinsics.checkNotNullParameter(alignmentLine, "alignmentLine");
        if (!v() || (q5 = q(alignmentLine)) == Integer.MIN_VALUE) {
            return Integer.MIN_VALUE;
        }
        long j = this.f9085w;
        int i5 = m0.d.f14312b;
        return q5 + ((int) (j & 4294967295L));
    }

    public abstract a0 u();

    public abstract boolean v();

    public abstract u w();

    public abstract g0.o x();

    public abstract a0 y();

    public abstract long z();
}
