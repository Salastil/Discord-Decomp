package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e0 extends q {

    /* renamed from: i, reason: collision with root package name */
    public final k0 f21032i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e0(c0 delegate, k0 attributes) {
        super(delegate);
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        this.f21032i = attributes;
    }

    @Override // yq.p
    public final p E0(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        return new e0(delegate, this.f21032i);
    }

    @Override // yq.p, yq.y
    public final k0 q0() {
        return this.f21032i;
    }
}
