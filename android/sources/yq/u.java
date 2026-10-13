package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class u extends s implements a1 {

    /* renamed from: v, reason: collision with root package name */
    public final s f21070v;

    /* renamed from: w, reason: collision with root package name */
    public final y f21071w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(s origin, y enhancement) {
        super(origin.f21068e, origin.f21069i);
        Intrinsics.checkNotNullParameter(origin, "origin");
        Intrinsics.checkNotNullParameter(enhancement, "enhancement");
        this.f21070v = origin;
        this.f21071w = enhancement;
    }

    @Override // yq.s
    public final c0 A0() {
        return this.f21070v.A0();
    }

    @Override // yq.s
    public final String B0(jq.h renderer, jq.h options) {
        Intrinsics.checkNotNullParameter(renderer, "renderer");
        Intrinsics.checkNotNullParameter(options, "options");
        jq.k kVar = options.f13052d;
        return ((Boolean) kVar.f13070m.getValue(kVar, jq.k.Y[11])).booleanValue() ? renderer.X(this.f21071w) : this.f21070v.B0(renderer, options);
    }

    @Override // yq.a1
    public final b1 O() {
        return this.f21070v;
    }

    @Override // yq.a1
    public final y j() {
        return this.f21071w;
    }

    @Override // yq.s
    public final String toString() {
        return "[@EnhancedForWarnings(" + this.f21071w + ")] " + this.f21070v;
    }

    @Override // yq.y
    /* renamed from: v0 */
    public final y y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        kotlinTypeRefiner.getClass();
        s type = this.f21070v;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.FlexibleType");
        y type2 = this.f21071w;
        Intrinsics.checkNotNullParameter(type2, "type");
        return new u(type, type2);
    }

    @Override // yq.b1
    public final b1 x0(boolean z5) {
        return c.G(this.f21070v.x0(z5), this.f21071w.w0().x0(z5));
    }

    @Override // yq.b1
    public final b1 y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        kotlinTypeRefiner.getClass();
        s type = this.f21070v;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.FlexibleType");
        y type2 = this.f21071w;
        Intrinsics.checkNotNullParameter(type2, "type");
        return new u(type, type2);
    }

    @Override // yq.b1
    public final b1 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return c.G(this.f21070v.z0(newAttributes), this.f21071w);
    }
}
