package km;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13429b;

    public e(List handlerTags, int i5) {
        Intrinsics.checkNotNullParameter(handlerTags, "handlerTags");
        this.a = handlerTags;
        this.f13429b = i5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return Intrinsics.areEqual(this.a, eVar.a) && this.f13429b == eVar.f13429b;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f13429b) + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "VirtualChildren(handlerTags=" + this.a + ", viewTag=" + this.f13429b + ")";
    }
}
