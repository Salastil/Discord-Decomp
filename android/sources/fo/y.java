package fo;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class y implements Comparable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final x f8843e = new x(null);

    /* renamed from: d, reason: collision with root package name */
    public final byte f8844d;

    @Override // java.lang.Comparable
    public final /* synthetic */ int compareTo(Object obj) {
        return Intrinsics.compare(this.f8844d & 255, ((y) obj).f8844d & 255);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof y) {
            return this.f8844d == ((y) obj).f8844d;
        }
        return false;
    }

    public final int hashCode() {
        return Byte.hashCode(this.f8844d);
    }

    public final String toString() {
        return String.valueOf(this.f8844d & 255);
    }
}
