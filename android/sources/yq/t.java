package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class t extends s implements m {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public t(c0 lowerBound, c0 upperBound) {
        super(lowerBound, upperBound);
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
    }

    @Override // yq.s
    public final c0 A0() {
        return this.f21068e;
    }

    @Override // yq.s
    public final String B0(jq.h renderer, jq.h options) {
        Intrinsics.checkNotNullParameter(renderer, "renderer");
        Intrinsics.checkNotNullParameter(options, "options");
        boolean n6 = options.f13052d.n();
        c0 c0Var = this.f21069i;
        c0 c0Var2 = this.f21068e;
        if (!n6) {
            return renderer.E(renderer.X(c0Var2), renderer.X(c0Var), com.facebook.imagepipeline.nativecode.c.v(this));
        }
        return "(" + renderer.X(c0Var2) + ".." + renderer.X(c0Var) + ')';
    }

    @Override // yq.m
    public final boolean C() {
        c0 c0Var = this.f21068e;
        return (c0Var.r0().a() instanceof ip.s0) && Intrinsics.areEqual(c0Var.r0(), this.f21069i.r0());
    }

    @Override // yq.b1
    /* renamed from: C0, reason: merged with bridge method [inline-methods] */
    public final s y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        kotlinTypeRefiner.getClass();
        c0 type = this.f21068e;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        c0 type2 = this.f21069i;
        Intrinsics.checkNotNullParameter(type2, "type");
        Intrinsics.checkNotNull(type2, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return new t(type, type2);
    }

    @Override // yq.m
    public final b1 p(y replacement) {
        b1 e9;
        Intrinsics.checkNotNullParameter(replacement, "replacement");
        b1 w02 = replacement.w0();
        if (w02 instanceof s) {
            e9 = w02;
        } else {
            if (!(w02 instanceof c0)) {
                throw new fo.n();
            }
            c0 c0Var = (c0) w02;
            e9 = c.e(c0Var, c0Var.x0(true));
        }
        return c.h(e9, w02);
    }

    @Override // yq.s
    public final String toString() {
        return "(" + this.f21068e + ".." + this.f21069i + ')';
    }

    @Override // yq.b1
    public final b1 x0(boolean z5) {
        return c.e(this.f21068e.x0(z5), this.f21069i.x0(z5));
    }

    @Override // yq.b1
    public final b1 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return c.e(this.f21068e.z0(newAttributes), this.f21069i.z0(newAttributes));
    }
}
