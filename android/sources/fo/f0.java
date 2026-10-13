package fo;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.CharsKt;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class f0 implements Comparable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final e0 f8814e = new e0(null);

    /* renamed from: d, reason: collision with root package name */
    public final long f8815d;

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return Intrinsics.compare(this.f8815d ^ Long.MIN_VALUE, ((f0) obj).f8815d ^ Long.MIN_VALUE);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof f0) {
            return this.f8815d == ((f0) obj).f8815d;
        }
        return false;
    }

    public final int hashCode() {
        return Long.hashCode(this.f8815d);
    }

    public final String toString() {
        long j = this.f8815d;
        if (j >= 0) {
            String l6 = Long.toString(j, CharsKt.checkRadix(10));
            Intrinsics.checkNotNullExpressionValue(l6, "toString(...)");
            return l6;
        }
        long j5 = 10;
        long j7 = ((j >>> 1) / j5) << 1;
        long j10 = j - (j7 * j5);
        if (j10 >= j5) {
            j10 -= j5;
            j7++;
        }
        StringBuilder sb2 = new StringBuilder();
        String l7 = Long.toString(j7, CharsKt.checkRadix(10));
        Intrinsics.checkNotNullExpressionValue(l7, "toString(...)");
        sb2.append(l7);
        String l10 = Long.toString(j10, CharsKt.checkRadix(10));
        Intrinsics.checkNotNullExpressionValue(l10, "toString(...)");
        sb2.append(l10);
        return sb2.toString();
    }
}
