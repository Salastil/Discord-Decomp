package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r0 {
    public final ip.s0 a;

    /* renamed from: b, reason: collision with root package name */
    public final wp.a f21067b;

    public r0(ip.s0 typeParameter, wp.a typeAttr) {
        Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
        Intrinsics.checkNotNullParameter(typeAttr, "typeAttr");
        this.a = typeParameter;
        this.f21067b = typeAttr;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof r0)) {
            return false;
        }
        r0 r0Var = (r0) obj;
        return Intrinsics.areEqual(r0Var.a, this.a) && Intrinsics.areEqual(r0Var.f21067b, this.f21067b);
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode();
        return this.f21067b.hashCode() + (hashCode * 31) + hashCode;
    }

    public final String toString() {
        return "DataToEraseUpperBound(typeParameter=" + this.a + ", typeAttr=" + this.f21067b + ')';
    }
}
