package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class o extends p implements m, cr.e {

    /* renamed from: e, reason: collision with root package name */
    public final c0 f21054e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f21055i;

    public o(c0 c0Var, boolean z5) {
        this.f21054e = c0Var;
        this.f21055i = z5;
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        return z5 ? this.f21054e.x0(z5) : this;
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new o(this.f21054e.z0(newAttributes), this.f21055i);
    }

    @Override // yq.m
    public final boolean C() {
        c0 c0Var = this.f21054e;
        c0Var.r0();
        return c0Var.r0().a() instanceof ip.s0;
    }

    @Override // yq.p
    public final c0 C0() {
        return this.f21054e;
    }

    @Override // yq.p
    public final p E0(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        return new o(delegate, this.f21055i);
    }

    @Override // yq.m
    public final b1 p(y replacement) {
        Intrinsics.checkNotNullParameter(replacement, "replacement");
        return c.m(replacement.w0(), this.f21055i);
    }

    @Override // yq.p, yq.y
    public final boolean t0() {
        return false;
    }

    @Override // yq.c0
    public final String toString() {
        return this.f21054e + " & Any";
    }
}
