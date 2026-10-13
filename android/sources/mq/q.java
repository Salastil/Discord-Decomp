package mq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q extends s {
    public final yq.y a;

    public q(yq.y type) {
        Intrinsics.checkNotNullParameter(type, "type");
        this.a = type;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof q) && Intrinsics.areEqual(this.a, ((q) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return "LocalClass(type=" + this.a + ')';
    }
}
