package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g0 extends s0 {
    public final c0 a;

    public g0(fp.i kotlinBuiltIns) {
        Intrinsics.checkNotNullParameter(kotlinBuiltIns, "kotlinBuiltIns");
        c0 p3 = kotlinBuiltIns.p();
        Intrinsics.checkNotNullExpressionValue(p3, "getNullableAnyType(...)");
        this.a = p3;
    }

    @Override // yq.s0
    public final c1 a() {
        return c1.f21015w;
    }

    @Override // yq.s0
    public final y b() {
        return this.a;
    }

    @Override // yq.s0
    public final boolean c() {
        return true;
    }

    @Override // yq.s0
    public final s0 d(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        return this;
    }
}
