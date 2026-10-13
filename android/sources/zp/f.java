package zp;

import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.c0;
import yq.k0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public final class f extends yq.p implements yq.m {

    /* renamed from: e, reason: collision with root package name */
    public final c0 f21351e;

    public f(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f21351e = delegate;
    }

    public static c0 F0(c0 c0Var) {
        c0 x02 = c0Var.x0(false);
        Intrinsics.checkNotNullParameter(c0Var, "<this>");
        return !z0.f(c0Var) ? x02 : new f(x02);
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        return z5 ? this.f21351e.x0(true) : this;
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new f(this.f21351e.z0(newAttributes));
    }

    @Override // yq.m
    public final boolean C() {
        return true;
    }

    @Override // yq.p
    public final c0 C0() {
        return this.f21351e;
    }

    @Override // yq.p
    public final yq.p E0(c0 delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        return new f(delegate);
    }

    @Override // yq.m
    public final b1 p(y replacement) {
        Intrinsics.checkNotNullParameter(replacement, "replacement");
        b1 w02 = replacement.w0();
        Intrinsics.checkNotNullParameter(w02, "<this>");
        if (!z0.f(w02) && !z0.e(w02)) {
            return w02;
        }
        if (w02 instanceof c0) {
            return F0((c0) w02);
        }
        if (!(w02 instanceof yq.s)) {
            throw new fo.n();
        }
        yq.s sVar = (yq.s) w02;
        return yq.c.G(yq.c.e(F0(sVar.f21068e), F0(sVar.f21069i)), yq.c.f(w02));
    }

    @Override // yq.p, yq.y
    public final boolean t0() {
        return false;
    }

    @Override // yq.c0, yq.b1
    public final b1 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new f(this.f21351e.z0(newAttributes));
    }
}
