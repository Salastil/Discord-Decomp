package j$.time;

import java.io.Serializable;
import java.math.BigInteger;
import java.util.regex.Pattern;

/* loaded from: classes2.dex */
public final class Duration implements Comparable<Duration>, Serializable {

    /* renamed from: c, reason: collision with root package name */
    public static final Duration f12274c = new Duration(0, 0);
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12275b;

    @Override // java.lang.Comparable
    public final int compareTo(Duration duration) {
        Duration duration2 = duration;
        int compare = Long.compare(this.a, duration2.a);
        return compare != 0 ? compare : this.f12275b - duration2.f12275b;
    }

    static {
        BigInteger.valueOf(1000000000L);
        Pattern.compile("([-+]?)P(?:([-+]?[0-9]+)D)?(T(?:([-+]?[0-9]+)H)?(?:([-+]?[0-9]+)M)?(?:([-+]?[0-9]+)(?:[.,]([0-9]{0,9}))?S)?)?", 2);
    }

    public static Duration b(long j) {
        long j5 = j / 1000000000;
        int i5 = (int) (j % 1000000000);
        if (i5 < 0) {
            i5 = (int) (i5 + 1000000000);
            j5--;
        }
        return a(j5, i5);
    }

    public static Duration a(long j, int i5) {
        if ((i5 | j) == 0) {
            return f12274c;
        }
        return new Duration(j, i5);
    }

    public Duration(long j, int i5) {
        this.a = j;
        this.f12275b = i5;
    }

    public long toMillis() {
        return Math.addExact(Math.multiplyExact(this.a, 1000L), this.f12275b / 1000000);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof Duration) {
            Duration duration = (Duration) obj;
            if (this.a == duration.a && this.f12275b == duration.f12275b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        return (this.f12275b * 51) + ((int) (j ^ (j >>> 32)));
    }

    public final String toString() {
        if (this == f12274c) {
            return "PT0S";
        }
        long j = this.a;
        long j5 = j / 3600;
        int i5 = (int) ((j % 3600) / 60);
        int i6 = (int) (j % 60);
        StringBuilder sb2 = new StringBuilder(24);
        sb2.append("PT");
        if (j5 != 0) {
            sb2.append(j5);
            sb2.append('H');
        }
        if (i5 != 0) {
            sb2.append(i5);
            sb2.append('M');
        }
        if (i6 == 0 && this.f12275b == 0 && sb2.length() > 2) {
            return sb2.toString();
        }
        if (i6 >= 0 || this.f12275b <= 0) {
            sb2.append(i6);
        } else if (i6 == -1) {
            sb2.append("-0");
        } else {
            sb2.append(i6 + 1);
        }
        if (this.f12275b > 0) {
            int length = sb2.length();
            if (i6 < 0) {
                sb2.append(2000000000 - this.f12275b);
            } else {
                sb2.append(this.f12275b + 1000000000);
            }
            while (sb2.charAt(sb2.length() - 1) == '0') {
                sb2.setLength(sb2.length() - 1);
            }
            sb2.setCharAt(length, '.');
        }
        sb2.append('S');
        return sb2.toString();
    }
}
