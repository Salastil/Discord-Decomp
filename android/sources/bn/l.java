package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f3075b;

    public l(String groupId, boolean z5) {
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        this.a = groupId;
        this.f3075b = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        return Intrinsics.areEqual(this.a, lVar.a) && this.f3075b == lVar.f3075b;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f3075b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "StackHeaderToolbarMenuGroupConfig(groupId=" + this.a + ", singleSelection=" + this.f3075b + ")";
    }
}
