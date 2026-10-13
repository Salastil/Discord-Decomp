package k0;

import kotlin.Function;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Function f13103b;

    public a(String str, Function function) {
        this.a = str;
        this.f13103b = function;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Intrinsics.areEqual(this.a, aVar.a) && Intrinsics.areEqual(this.f13103b, aVar.f13103b);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = (str != null ? str.hashCode() : 0) * 31;
        Function function = this.f13103b;
        return hashCode + (function != null ? function.hashCode() : 0);
    }

    public final String toString() {
        return "AccessibilityAction(label=" + this.a + ", action=" + this.f13103b + ')';
    }
}
