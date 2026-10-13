package vp;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r {
    public final hq.e a;

    /* renamed from: b, reason: collision with root package name */
    public final op.n f19522b;

    public r(hq.e name, op.n nVar) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
        this.f19522b = nVar;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof r) {
            return Intrinsics.areEqual(this.a, ((r) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}
