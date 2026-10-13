package lr;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.time.Duration;
import kotlin.time.TimeMark;

/* loaded from: classes3.dex */
public final class g implements TimeMark, Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final long f14218d;

    public /* synthetic */ g(long j) {
        this.f14218d = j;
    }

    @Override // kotlin.time.TimeMark
    public final long a() {
        f.a.getClass();
        long nanoTime = System.nanoTime() - f.f14217b;
        d unit = d.f14210e;
        Intrinsics.checkNotNullParameter(unit, "unit");
        long j = this.f14218d;
        return (1 | (j - 1)) == LongCompanionObject.MAX_VALUE ? Duration.m(ta.a.B(j)) : ta.a.I(nanoTime, j, unit);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        long B;
        g other = (g) obj;
        Intrinsics.checkNotNullParameter(other, "other");
        Intrinsics.checkNotNullParameter(other, "other");
        Intrinsics.checkNotNullParameter(other, "other");
        long j = this.f14218d;
        if (other == null) {
            throw new IllegalArgumentException("Subtracting or comparing time marks from different time sources is not possible: " + ((Object) ("ValueTimeMark(reading=" + j + ')')) + " and " + other);
        }
        long j5 = other.f14218d;
        f.a.getClass();
        d unit = d.f14210e;
        Intrinsics.checkNotNullParameter(unit, "unit");
        if (((j5 - 1) | 1) != LongCompanionObject.MAX_VALUE) {
            B = (1 | (j - 1)) == LongCompanionObject.MAX_VALUE ? ta.a.B(j) : ta.a.I(j, j5, unit);
        } else if (j == j5) {
            Duration.f13595e.getClass();
            B = 0;
        } else {
            B = Duration.m(ta.a.B(j5));
        }
        Duration.f13595e.getClass();
        return Duration.c(B, 0L);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof g) {
            return this.f14218d == ((g) obj).f14218d;
        }
        return false;
    }

    public final int hashCode() {
        return Long.hashCode(this.f14218d);
    }

    public final String toString() {
        return "ValueTimeMark(reading=" + this.f14218d + ')';
    }
}
