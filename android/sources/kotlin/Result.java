package kotlin;

import fo.q;
import fo.r;
import java.io.Serializable;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class Result implements Serializable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final q f13476e = new q(null);

    /* renamed from: d, reason: collision with root package name */
    public final Object f13477d;

    public /* synthetic */ Result(Object obj) {
        this.f13477d = obj;
    }

    public static final Throwable a(Object obj) {
        if (obj instanceof r) {
            return ((r) obj).f8832d;
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof Result) {
            return Intrinsics.areEqual(this.f13477d, ((Result) obj).f13477d);
        }
        return false;
    }

    public final int hashCode() {
        Object obj = this.f13477d;
        if (obj == null) {
            return 0;
        }
        return obj.hashCode();
    }

    public final String toString() {
        Object obj = this.f13477d;
        if (obj instanceof r) {
            return ((r) obj).toString();
        }
        return "Success(" + obj + ')';
    }
}
