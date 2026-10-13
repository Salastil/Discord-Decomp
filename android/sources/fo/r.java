package fo;

import java.io.Serializable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r implements Serializable {

    /* renamed from: d, reason: collision with root package name */
    public final Throwable f8832d;

    public r(Throwable exception) {
        Intrinsics.checkNotNullParameter(exception, "exception");
        this.f8832d = exception;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof r) {
            return Intrinsics.areEqual(this.f8832d, ((r) obj).f8832d);
        }
        return false;
    }

    public final int hashCode() {
        return this.f8832d.hashCode();
    }

    public final String toString() {
        return "Failure(" + this.f8832d + ')';
    }
}
