package kotlin.time;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import lr.a;
import lr.b;
import lr.c;
import lr.d;
import lr.e;
import org.jetbrains.annotations.NotNull;
import s4.h;
import yo.j;

/* loaded from: classes3.dex */
public final class Duration implements Comparable {

    /* renamed from: e, reason: collision with root package name */
    @NotNull
    public static final a f13595e = new a(null);

    /* renamed from: i, reason: collision with root package name */
    public static final long f13596i;

    /* renamed from: v, reason: collision with root package name */
    public static final long f13597v;

    /* renamed from: d, reason: collision with root package name */
    public final long f13598d;

    static {
        int i5 = b.a;
        f13596i = c.b(4611686018427387903L);
        f13597v = c.b(-4611686018427387903L);
    }

    public /* synthetic */ Duration(long j) {
        this.f13598d = j;
    }

    public static final long a(long j, long j5) {
        long j7 = 1000000;
        long j10 = j5 / j7;
        long j11 = j + j10;
        if (-4611686018426L > j11 || j11 >= 4611686018427L) {
            return c.b(j.f(j11, -4611686018427387903L, 4611686018427387903L));
        }
        return c.d((j11 * j7) + (j5 - (j10 * j7)));
    }

    public static final void b(StringBuilder sb2, int i5, int i6, int i10, String str, boolean z5) {
        CharSequence charSequence;
        sb2.append(i5);
        if (i6 != 0) {
            sb2.append('.');
            String valueOf = String.valueOf(i6);
            Intrinsics.checkNotNullParameter(valueOf, "<this>");
            Intrinsics.checkNotNullParameter(valueOf, "<this>");
            if (i10 < 0) {
                throw new IllegalArgumentException(h.e(i10, "Desired length ", " is less than zero."));
            }
            if (i10 <= valueOf.length()) {
                charSequence = valueOf.subSequence(0, valueOf.length());
            } else {
                StringBuilder sb3 = new StringBuilder(i10);
                int length = i10 - valueOf.length();
                int i11 = 1;
                if (1 <= length) {
                    while (true) {
                        sb3.append('0');
                        if (i11 == length) {
                            break;
                        } else {
                            i11++;
                        }
                    }
                }
                sb3.append((CharSequence) valueOf);
                charSequence = sb3;
            }
            String obj = charSequence.toString();
            int i12 = -1;
            int length2 = obj.length() - 1;
            if (length2 >= 0) {
                while (true) {
                    int i13 = length2 - 1;
                    if (obj.charAt(length2) != '0') {
                        i12 = length2;
                        break;
                    } else if (i13 < 0) {
                        break;
                    } else {
                        length2 = i13;
                    }
                }
            }
            int i14 = i12 + 1;
            if (z5 || i14 >= 3) {
                sb2.append((CharSequence) obj, 0, ((i12 + 3) / 3) * 3);
                Intrinsics.checkNotNullExpressionValue(sb2, "append(...)");
            } else {
                sb2.append((CharSequence) obj, 0, i14);
                Intrinsics.checkNotNullExpressionValue(sb2, "append(...)");
            }
        }
        sb2.append(str);
    }

    public static int c(long j, long j5) {
        long j7 = j ^ j5;
        if (j7 < 0 || (((int) j7) & 1) == 0) {
            return Intrinsics.compare(j, j5);
        }
        int i5 = (((int) j) & 1) - (((int) j5) & 1);
        return j < 0 ? -i5 : i5;
    }

    public static final long d(long j) {
        return ((((int) j) & 1) != 1 || h(j)) ? k(j, d.f14211i) : j >> 1;
    }

    public static final int e(long j) {
        if (h(j)) {
            return 0;
        }
        return (int) (k(j, d.f14213w) % 60);
    }

    public static final int f(long j) {
        if (h(j)) {
            return 0;
        }
        return (int) ((((int) j) & 1) == 1 ? ((j >> 1) % 1000) * 1000000 : (j >> 1) % 1000000000);
    }

    public static final int g(long j) {
        if (h(j)) {
            return 0;
        }
        return (int) (k(j, d.f14212v) % 60);
    }

    public static final boolean h(long j) {
        return j == f13596i || j == f13597v;
    }

    public static final long i(long j, long j5) {
        if (h(j)) {
            if (!h(j5) || (j5 ^ j) >= 0) {
                return j;
            }
            throw new IllegalArgumentException("Summing infinite durations of different signs yields an undefined result.");
        }
        if (h(j5)) {
            return j5;
        }
        int i5 = ((int) j) & 1;
        if (i5 != (((int) j5) & 1)) {
            return i5 == 1 ? a(j >> 1, j5 >> 1) : a(j5 >> 1, j >> 1);
        }
        long j7 = (j >> 1) + (j5 >> 1);
        return i5 == 0 ? (-4611686018426999999L > j7 || j7 >= 4611686018427000000L) ? c.b(j7 / 1000000) : c.d(j7) : c.c(j7);
    }

    public static final double j(long j, d unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        if (j == f13596i) {
            return Double.POSITIVE_INFINITY;
        }
        if (j == f13597v) {
            return Double.NEGATIVE_INFINITY;
        }
        return e.a(j >> 1, (((int) j) & 1) == 0 ? d.f14210e : d.f14211i, unit);
    }

    public static final long k(long j, d unit) {
        Intrinsics.checkNotNullParameter(unit, "unit");
        if (j == f13596i) {
            return LongCompanionObject.MAX_VALUE;
        }
        if (j == f13597v) {
            return Long.MIN_VALUE;
        }
        return e.b(j >> 1, (((int) j) & 1) == 0 ? d.f14210e : d.f14211i, unit);
    }

    public static String l(long j) {
        if (j == 0) {
            return "0s";
        }
        if (j == f13596i) {
            return "Infinity";
        }
        if (j == f13597v) {
            return "-Infinity";
        }
        int i5 = 0;
        boolean z5 = j < 0;
        StringBuilder sb2 = new StringBuilder();
        if (z5) {
            sb2.append('-');
        }
        if (j < 0) {
            j = m(j);
        }
        long k = k(j, d.f14215y);
        int k5 = h(j) ? 0 : (int) (k(j, d.f14214x) % 24);
        int e9 = e(j);
        int g6 = g(j);
        int f2 = f(j);
        boolean z6 = k != 0;
        boolean z7 = k5 != 0;
        boolean z8 = e9 != 0;
        boolean z10 = (g6 == 0 && f2 == 0) ? false : true;
        if (z6) {
            sb2.append(k);
            sb2.append('d');
            i5 = 1;
        }
        if (z7 || (z6 && (z8 || z10))) {
            int i6 = i5 + 1;
            if (i5 > 0) {
                sb2.append(' ');
            }
            sb2.append(k5);
            sb2.append('h');
            i5 = i6;
        }
        if (z8 || (z10 && (z7 || z6))) {
            int i10 = i5 + 1;
            if (i5 > 0) {
                sb2.append(' ');
            }
            sb2.append(e9);
            sb2.append('m');
            i5 = i10;
        }
        if (z10) {
            int i11 = i5 + 1;
            if (i5 > 0) {
                sb2.append(' ');
            }
            if (g6 != 0 || z6 || z7 || z8) {
                b(sb2, g6, f2, 9, "s", false);
            } else if (f2 >= 1000000) {
                b(sb2, f2 / 1000000, f2 % 1000000, 6, "ms", false);
            } else if (f2 >= 1000) {
                b(sb2, f2 / 1000, f2 % 1000, 3, "us", false);
            } else {
                sb2.append(f2);
                sb2.append("ns");
            }
            i5 = i11;
        }
        if (z5 && i5 > 1) {
            sb2.insert(1, '(').append(')');
        }
        return sb2.toString();
    }

    public static final long m(long j) {
        long j5 = ((-(j >> 1)) << 1) + (((int) j) & 1);
        int i5 = b.a;
        return j5;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return c(this.f13598d, ((Duration) obj).f13598d);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof Duration) {
            return this.f13598d == ((Duration) obj).f13598d;
        }
        return false;
    }

    public final int hashCode() {
        return Long.hashCode(this.f13598d);
    }

    public final String toString() {
        return l(this.f13598d);
    }
}
