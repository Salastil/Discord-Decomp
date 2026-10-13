package pr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n {

    /* renamed from: b, reason: collision with root package name */
    public static final m f16507b = new m();
    public final Object a;

    public static final Object a(Object obj) {
        if (obj instanceof m) {
            return null;
        }
        return obj;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof n) {
            return Intrinsics.areEqual(this.a, ((n) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        Object obj = this.a;
        if (obj == null) {
            return 0;
        }
        return obj.hashCode();
    }

    public final String toString() {
        Object obj = this.a;
        if (obj instanceof l) {
            return ((l) obj).toString();
        }
        return "Value(" + obj + ')';
    }
}
