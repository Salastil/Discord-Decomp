package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3093b;

    public p(String str, String str2) {
        this.a = str;
        this.f3093b = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p)) {
            return false;
        }
        p pVar = (p) obj;
        return Intrinsics.areEqual(this.a, pVar.a) && Intrinsics.areEqual(this.f3093b, pVar.f3093b);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.f3093b;
        return hashCode + (str2 != null ? str2.hashCode() : 0);
    }

    public final String toString() {
        return s4.h.g("StackHeaderToolbarMenuItemIconSource(drawableIconResourceName=", this.a, ", imageIconUri=", this.f3093b, ")");
    }
}
