package yq;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class s extends b1 implements cr.d {

    /* renamed from: e, reason: collision with root package name */
    public final c0 f21068e;

    /* renamed from: i, reason: collision with root package name */
    public final c0 f21069i;

    public s(c0 lowerBound, c0 upperBound) {
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        this.f21068e = lowerBound;
        this.f21069i = upperBound;
    }

    public abstract c0 A0();

    public abstract String B0(jq.h hVar, jq.h hVar2);

    @Override // yq.y
    public rq.o N() {
        return A0().N();
    }

    @Override // yq.y
    public final List l0() {
        return A0().l0();
    }

    @Override // yq.y
    public final k0 q0() {
        return A0().q0();
    }

    @Override // yq.y
    public final p0 r0() {
        return A0().r0();
    }

    @Override // yq.y
    public final boolean t0() {
        return A0().t0();
    }

    public String toString() {
        return jq.f.f13048c.X(this);
    }
}
