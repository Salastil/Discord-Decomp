package fo;

import java.io.Serializable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final Object f8840d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f8841e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f8842i;

    public v(Object obj, Object obj2, Object obj3) {
        this.f8840d = obj;
        this.f8841e = obj2;
        this.f8842i = obj3;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof v)) {
            return false;
        }
        v vVar = (v) obj;
        return Intrinsics.areEqual(this.f8840d, vVar.f8840d) && Intrinsics.areEqual(this.f8841e, vVar.f8841e) && Intrinsics.areEqual(this.f8842i, vVar.f8842i);
    }

    public final int hashCode() {
        Object obj = this.f8840d;
        int hashCode = (obj == null ? 0 : obj.hashCode()) * 31;
        Object obj2 = this.f8841e;
        int hashCode2 = (hashCode + (obj2 == null ? 0 : obj2.hashCode())) * 31;
        Object obj3 = this.f8842i;
        return hashCode2 + (obj3 != null ? obj3.hashCode() : 0);
    }

    public final String toString() {
        return "(" + this.f8840d + ", " + this.f8841e + ", " + this.f8842i + ')';
    }
}
