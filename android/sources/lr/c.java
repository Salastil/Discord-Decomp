package lr;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.text.StringsKt;
import kotlin.text.b0;
import kotlin.text.x;
import kotlin.time.Duration;
import yo.j;

/* loaded from: classes3.dex */
public abstract class c {
    public static final long a(String str) {
        d dVar;
        char charAt;
        int length = str.length();
        if (length == 0) {
            throw new IllegalArgumentException("The string is empty");
        }
        Duration.f13595e.getClass();
        char charAt2 = str.charAt(0);
        int i5 = (charAt2 == '+' || charAt2 == '-') ? 1 : 0;
        boolean z5 = i5 > 0 && StringsKt.T(str, '-');
        if (length <= i5) {
            throw new IllegalArgumentException("No components");
        }
        if (str.charAt(i5) != 'P') {
            throw new IllegalArgumentException();
        }
        int i6 = i5 + 1;
        if (i6 == length) {
            throw new IllegalArgumentException();
        }
        d dVar2 = null;
        long j = 0;
        boolean z6 = false;
        while (i6 < length) {
            if (str.charAt(i6) != 'T') {
                int i10 = i6;
                while (i10 < str.length() && (('0' <= (charAt = str.charAt(i10)) && charAt < ':') || StringsKt.E("+-.", charAt))) {
                    i10++;
                }
                Intrinsics.checkNotNull(str, "null cannot be cast to non-null type java.lang.String");
                String substring = str.substring(i6, i10);
                Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                if (substring.length() == 0) {
                    throw new IllegalArgumentException();
                }
                int length2 = substring.length() + i6;
                if (length2 < 0 || length2 >= str.length()) {
                    throw new IllegalArgumentException("Missing unit for value ".concat(substring));
                }
                char charAt3 = str.charAt(length2);
                int i11 = length2 + 1;
                if (z6) {
                    if (charAt3 == 'H') {
                        dVar = d.f14214x;
                    } else if (charAt3 == 'M') {
                        dVar = d.f14213w;
                    } else {
                        if (charAt3 != 'S') {
                            throw new IllegalArgumentException("Invalid duration ISO time unit: " + charAt3);
                        }
                        dVar = d.f14212v;
                    }
                } else {
                    if (charAt3 != 'D') {
                        throw new IllegalArgumentException("Invalid or unsupported duration ISO non-time unit: " + charAt3);
                    }
                    dVar = d.f14215y;
                }
                if (dVar2 != null && dVar2.compareTo(dVar) <= 0) {
                    throw new IllegalArgumentException("Unexpected order of duration components");
                }
                int I = StringsKt.I(substring, '.', 0, 6);
                if (dVar != d.f14212v || I <= 0) {
                    j = Duration.i(j, h(e(substring), dVar));
                } else {
                    Intrinsics.checkNotNull(substring, "null cannot be cast to non-null type java.lang.String");
                    String substring2 = substring.substring(0, I);
                    Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
                    long i12 = Duration.i(j, h(e(substring2), dVar));
                    Intrinsics.checkNotNull(substring, "null cannot be cast to non-null type java.lang.String");
                    String substring3 = substring.substring(I);
                    Intrinsics.checkNotNullExpressionValue(substring3, "substring(...)");
                    j = Duration.i(i12, f(Double.parseDouble(substring3), dVar));
                }
                dVar2 = dVar;
                i6 = i11;
            } else {
                if (z6 || (i6 = i6 + 1) == length) {
                    throw new IllegalArgumentException();
                }
                z6 = true;
            }
        }
        return z5 ? Duration.m(j) : j;
    }

    public static final long b(long j) {
        long j5 = (j << 1) + 1;
        a aVar = Duration.f13595e;
        int i5 = b.a;
        return j5;
    }

    public static final long c(long j) {
        return (-4611686018426L > j || j >= 4611686018427L) ? b(j.f(j, -4611686018427387903L, 4611686018427387903L)) : d(j * 1000000);
    }

    public static final long d(long j) {
        long j5 = j << 1;
        a aVar = Duration.f13595e;
        int i5 = b.a;
        return j5;
    }

    public static final long e(String str) {
        char charAt;
        int length = str.length();
        int i5 = (length <= 0 || !StringsKt.E("+-", str.charAt(0))) ? 0 : 1;
        if (length - i5 > 16) {
            int i6 = i5;
            while (true) {
                if (i5 < length) {
                    char charAt2 = str.charAt(i5);
                    if (charAt2 != '0') {
                        if ('1' > charAt2 || charAt2 >= ':') {
                            break;
                        }
                    } else if (i6 == i5) {
                        i6++;
                    }
                    i5++;
                } else if (length - i6 > 16) {
                    if (str.charAt(0) == '-') {
                        return Long.MIN_VALUE;
                    }
                    return LongCompanionObject.MAX_VALUE;
                }
            }
        }
        return (!x.o(str, "+", false) || length <= 1 || '0' > (charAt = str.charAt(1)) || charAt >= ':') ? Long.parseLong(str) : Long.parseLong(b0.x(1, str));
    }

    public static final long f(double d6, d unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        double a = e.a(d6, unit, d.f14210e);
        if (Double.isNaN(a)) {
            throw new IllegalArgumentException("Duration value cannot be NaN.");
        }
        long c6 = uo.c.c(a);
        return (-4611686018426999999L > c6 || c6 >= 4611686018427000000L) ? c(uo.c.c(e.a(d6, unit, d.f14211i))) : d(c6);
    }

    public static final long g(int i5, d unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        return unit.compareTo(d.f14212v) <= 0 ? d(e.c(i5, unit, d.f14210e)) : h(i5, unit);
    }

    public static final long h(long j, d unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        d dVar = d.f14210e;
        long c6 = e.c(4611686018426999999L, dVar, unit);
        return ((-c6) > j || j > c6) ? b(j.f(e.b(j, unit, d.f14211i), -4611686018427387903L, 4611686018427387903L)) : d(e.c(j, unit, dVar));
    }
}
