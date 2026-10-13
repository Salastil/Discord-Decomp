package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends p {

    /* renamed from: e, reason: collision with root package name */
    public final c0 f21007e;

    /* renamed from: i, reason: collision with root package name */
    public final c0 f21008i;

    public a(c0 delegate, c0 abbreviation) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(abbreviation, "abbreviation");
        this.f21007e = delegate;
        this.f21008i = abbreviation;
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new a(this.f21007e.z0(newAttributes), this.f21008i);
    }

    @Override // yq.p
    public final c0 C0() {
        return this.f21007e;
    }

    @Override // yq.p
    public final p E0(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        return new a(delegate, this.f21008i);
    }

    @Override // yq.c0, yq.b1
    /* renamed from: F0, reason: merged with bridge method [inline-methods] */
    public final a x0(boolean z5) {
        return new a(this.f21007e.x0(z5), this.f21008i.x0(z5));
    }

    @Override // yq.p, yq.b1
    /* renamed from: G0, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final a y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        kotlinTypeRefiner.getClass();
        c0 type = this.f21007e;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        c0 type2 = this.f21008i;
        Intrinsics.checkNotNullParameter(type2, "type");
        Intrinsics.checkNotNull(type2, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return new a(type, type2);
    }
}
