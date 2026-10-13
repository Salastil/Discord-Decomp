package yo;

import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;

/* loaded from: classes3.dex */
public class j extends i {
    public static double b(double d6, double d7, double d8) {
        if (d7 <= d8) {
            return d6 < d7 ? d7 : d6 > d8 ? d8 : d6;
        }
        throw new IllegalArgumentException("Cannot coerce value to an empty range: maximum " + d8 + " is less than minimum " + d7 + '.');
    }

    public static float c(float f2, float f10, float f11) {
        if (f10 <= f11) {
            return f2 < f10 ? f10 : f2 > f11 ? f11 : f2;
        }
        throw new IllegalArgumentException("Cannot coerce value to an empty range: maximum " + f11 + " is less than minimum " + f10 + '.');
    }

    public static int d(int i5, int i6, int i10) {
        if (i6 <= i10) {
            return i5 < i6 ? i6 : i5 > i10 ? i10 : i5;
        }
        throw new IllegalArgumentException("Cannot coerce value to an empty range: maximum " + i10 + " is less than minimum " + i6 + '.');
    }

    public static int e(int i5, IntRange range) {
        int i6 = range.f13546e;
        int i10 = range.f13545d;
        Intrinsics.checkNotNullParameter(range, "range");
        if (!range.isEmpty()) {
            return i5 < Integer.valueOf(i10).intValue() ? Integer.valueOf(i10).intValue() : i5 > Integer.valueOf(i6).intValue() ? Integer.valueOf(i6).intValue() : i5;
        }
        throw new IllegalArgumentException("Cannot coerce value to an empty range: " + range + '.');
    }

    public static long f(long j, long j5, long j7) {
        if (j5 <= j7) {
            return j < j5 ? j5 : j > j7 ? j7 : j;
        }
        StringBuilder n6 = k0.d.n(j7, "Cannot coerce value to an empty range: maximum ", " is less than minimum ");
        n6.append(j5);
        n6.append('.');
        throw new IllegalArgumentException(n6.toString());
    }

    public static kotlin.ranges.a g(int i5, IntRange intRange) {
        Intrinsics.checkNotNullParameter(intRange, "<this>");
        i.a(i5 > 0, Integer.valueOf(i5));
        a aVar = kotlin.ranges.a.f13544v;
        int i6 = intRange.f13545d;
        int i10 = intRange.f13546e;
        if (intRange.f13547i <= 0) {
            i5 = -i5;
        }
        aVar.getClass();
        return new kotlin.ranges.a(i6, i10, i5);
    }

    public static e h(h hVar, long j) {
        Intrinsics.checkNotNullParameter(hVar, "<this>");
        i.a(j > 0, Long.valueOf(j));
        d dVar = e.f20996v;
        long j5 = hVar.f20997d;
        long j7 = hVar.f20998e;
        if (hVar.f20999i <= 0) {
            j = -j;
        }
        long j10 = j;
        dVar.getClass();
        return new e(j5, j7, j10);
    }

    public static IntRange i(int i5, int i6) {
        if (i6 > Integer.MIN_VALUE) {
            return new IntRange(i5, i6 - 1, 1);
        }
        IntRange.f13542w.getClass();
        return IntRange.f13543x;
    }
}
