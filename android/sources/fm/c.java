package fm;

import app.rive.runtime.kotlin.core.ViewModelInstance;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends io.sentry.config.a {
    public final ViewModelInstance a;

    public c(ViewModelInstance instance) {
        Intrinsics.checkNotNullParameter(instance, "instance");
        this.a = instance;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof c) && Intrinsics.areEqual(this.a, ((c) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return "Instance(instance=" + this.a + ")";
    }
}
