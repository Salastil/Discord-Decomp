package gn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {
    public final Integer a;

    /* renamed from: b, reason: collision with root package name */
    public final Integer f9374b;

    public a(Integer num, Integer num2) {
        this.a = num;
        this.f9374b = num2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Intrinsics.areEqual(this.a, aVar.a) && Intrinsics.areEqual(this.f9374b, aVar.f9374b);
    }

    public final int hashCode() {
        Integer num = this.a;
        int hashCode = (num == null ? 0 : num.hashCode()) * 31;
        Integer num2 = this.f9374b;
        return hashCode + (num2 != null ? num2.hashCode() : 0);
    }

    public final String toString() {
        return "ItemStateAppearance(tabBarItemIconColor=" + this.a + ", tabBarItemTitleFontColor=" + this.f9374b + ")";
    }
}
