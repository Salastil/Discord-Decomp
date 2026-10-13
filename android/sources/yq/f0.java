package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f0 extends p implements a1 {

    /* renamed from: e, reason: collision with root package name */
    public final c0 f21034e;

    /* renamed from: i, reason: collision with root package name */
    public final y f21035i;

    public f0(c0 delegate, y enhancement) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(enhancement, "enhancement");
        this.f21034e = delegate;
        this.f21035i = enhancement;
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        b1 G = c.G(this.f21034e.x0(z5), this.f21035i.w0().x0(z5));
        Intrinsics.checkNotNull(G, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return (c0) G;
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        b1 G = c.G(this.f21034e.z0(newAttributes), this.f21035i);
        Intrinsics.checkNotNull(G, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return (c0) G;
    }

    @Override // yq.p
    public final c0 C0() {
        return this.f21034e;
    }

    @Override // yq.p
    public final p E0(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        return new f0(delegate, this.f21035i);
    }

    @Override // yq.p, yq.b1
    /* renamed from: F0, reason: merged with bridge method [inline-methods] */
    public final f0 y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        kotlinTypeRefiner.getClass();
        c0 type = this.f21034e;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        y type2 = this.f21035i;
        Intrinsics.checkNotNullParameter(type2, "type");
        return new f0(type, type2);
    }

    @Override // yq.a1
    public final b1 O() {
        return this.f21034e;
    }

    @Override // yq.a1
    public final y j() {
        return this.f21035i;
    }

    @Override // yq.c0
    public final String toString() {
        return "[@EnhancedForWarnings(" + this.f21035i + ")] " + this.f21034e;
    }
}
