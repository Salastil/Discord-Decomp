package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class q extends p {

    /* renamed from: e, reason: collision with root package name */
    public final c0 f21063e;

    public q(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f21063e = delegate;
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        return z5 == t0() ? this : this.f21063e.x0(z5).z0(q0());
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return newAttributes != q0() ? new e0(this, newAttributes) : this;
    }

    @Override // yq.p
    public final c0 C0() {
        return this.f21063e;
    }
}
