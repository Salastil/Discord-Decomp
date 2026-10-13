package h2;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c {
    public final String a;

    public c(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof c)) {
            return false;
        }
        return Intrinsics.areEqual(this.a, ((c) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return this.a;
    }
}
