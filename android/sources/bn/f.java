package bn;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f implements h {
    public final n a;

    public f(n item) {
        Intrinsics.checkNotNullParameter(item, "item");
        this.a = item;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof f) && Intrinsics.areEqual(this.a, ((f) obj).a);
    }

    @Override // bn.h
    public final n getItem() {
        return this.a;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return "MenuItem(item=" + this.a + ")";
    }
}
