package fo;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class j0 implements Comparable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final i0 f8817e = new i0(null);

    /* renamed from: d, reason: collision with root package name */
    public final short f8818d;

    @Override // java.lang.Comparable
    public final /* synthetic */ int compareTo(Object obj) {
        return Intrinsics.compare(this.f8818d & 65535, ((j0) obj).f8818d & 65535);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof j0) {
            return this.f8818d == ((j0) obj).f8818d;
        }
        return false;
    }

    public final int hashCode() {
        return Short.hashCode(this.f8818d);
    }

    public final String toString() {
        return String.valueOf(this.f8818d & 65535);
    }
}
