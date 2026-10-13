package fo;

import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class c0 implements Comparable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final b0 f8809e = new b0(null);

    /* renamed from: d, reason: collision with root package name */
    public final int f8810d;

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return Intrinsics.compare(this.f8810d ^ Integer.MIN_VALUE, ((c0) obj).f8810d ^ Integer.MIN_VALUE);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof c0) {
            return this.f8810d == ((c0) obj).f8810d;
        }
        return false;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f8810d);
    }

    public final String toString() {
        return String.valueOf(this.f8810d & 4294967295L);
    }
}
