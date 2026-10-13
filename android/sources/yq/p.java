package yq;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class p extends c0 {
    public abstract c0 C0();

    @Override // yq.b1
    /* renamed from: D0, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public c0 y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        c0 type = C0();
        kotlinTypeRefiner.getClass();
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return E0(type);
    }

    public abstract p E0(c0 c0Var);

    @Override // yq.y
    public final rq.o N() {
        return C0().N();
    }

    @Override // yq.y
    public final List l0() {
        return C0().l0();
    }

    @Override // yq.y
    public k0 q0() {
        return C0().q0();
    }

    @Override // yq.y
    public final p0 r0() {
        return C0().r0();
    }

    @Override // yq.y
    public boolean t0() {
        return C0().t0();
    }
}
