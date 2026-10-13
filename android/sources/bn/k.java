package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final i f3074b;

    public k(String id2, i options) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(options, "options");
        this.a = id2;
        this.f3074b = options;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof k)) {
            return false;
        }
        k kVar = (k) obj;
        return Intrinsics.areEqual(this.a, kVar.a) && Intrinsics.areEqual(this.f3074b, kVar.f3074b);
    }

    public final int hashCode() {
        return this.f3074b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "StackHeaderToolbarMenuElementUpdate(id=" + this.a + ", options=" + this.f3074b + ")";
    }
}
