package mq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r extends s {
    public final f a;

    public r(f value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.a = value;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof r) && Intrinsics.areEqual(this.a, ((r) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return "NormalClass(value=" + this.a + ')';
    }
}
