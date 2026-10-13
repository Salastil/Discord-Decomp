package fm;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends io.sentry.config.a {
    public final String a;

    public b(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof b) && Intrinsics.areEqual(this.a, ((b) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return s4.h.f("ByName(name=", this.a, ")");
    }
}
