package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {
    public final jp.h a;

    public j(jp.h annotations) {
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        this.a = annotations;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof j) {
            return Intrinsics.areEqual(((j) obj).a, this.a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}
