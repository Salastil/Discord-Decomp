package net.time4j.tz;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;
import java.math.BigDecimal;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class m implements Comparable, f, Serializable {
    private static final long serialVersionUID = -1410512619471503090L;

    /* renamed from: v, reason: collision with root package name */
    public static final ConcurrentHashMap f15345v;

    /* renamed from: w, reason: collision with root package name */
    public static final m f15346w;

    /* renamed from: d, reason: collision with root package name */
    public final transient int f15347d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15348e;

    /* renamed from: i, reason: collision with root package name */
    public final transient String f15349i;

    static {
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        f15345v = concurrentHashMap;
        new BigDecimal(60);
        new BigDecimal(3600);
        new BigDecimal(-180);
        new BigDecimal(180);
        new BigDecimal(240);
        new BigDecimal(1000000000);
        m mVar = new m(0, 0);
        f15346w = mVar;
        concurrentHashMap.put(0, mVar);
    }

    public m(int i5, int i6) {
        if (i6 != 0) {
            if (Math.abs(i6) > 999999999) {
                throw new IllegalArgumentException(k0.d.i(i6, "Fraction out of range: "));
            }
            if (i5 < -39600 || i5 > 39600) {
                throw new IllegalArgumentException(k0.d.i(i5, "Total seconds out of range while fraction is non-zero: "));
            }
            if ((i5 < 0 && i6 > 0) || (i5 > 0 && i6 < 0)) {
                throw new IllegalArgumentException(a3.e.f(i5, i6, "Different signs: offset=", ", fraction="));
            }
        } else if (i5 < -64800 || i5 > 64800) {
            throw new IllegalArgumentException(k0.d.i(i5, "Total seconds out of range: "));
        }
        boolean z5 = i5 < 0 || i6 < 0;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(z5 ? '-' : '+');
        int abs = Math.abs(i5);
        int i10 = abs / 3600;
        int i11 = (abs / 60) % 60;
        int i12 = abs % 60;
        if (i10 < 10) {
            sb2.append('0');
        }
        sb2.append(i10);
        sb2.append(':');
        if (i11 < 10) {
            sb2.append('0');
        }
        sb2.append(i11);
        if (i12 != 0 || i6 != 0) {
            sb2.append(':');
            if (i12 < 10) {
                sb2.append('0');
            }
            sb2.append(i12);
            if (i6 != 0) {
                sb2.append('.');
                String valueOf = String.valueOf(Math.abs(i6));
                int length = 9 - valueOf.length();
                for (int i13 = 0; i13 < length; i13++) {
                    sb2.append('0');
                }
                sb2.append(valueOf);
            }
        }
        this.f15349i = sb2.toString();
        this.f15347d = i5;
        this.f15348e = i6;
    }

    public static String b(int i5, int i6) {
        return "[hours=" + i5 + ",minutes=" + i6 + ']';
    }

    public static m d(int i5, int i6, int i10) {
        if (i5 == 0) {
            throw new NullPointerException("Missing sign.");
        }
        if (i6 < 0 || i6 > 18) {
            throw new IllegalArgumentException("Hour part out of range (0 <= hours <= 18) in: " + b(i6, i10));
        }
        if (i10 < 0 || i10 > 59) {
            throw new IllegalArgumentException("Minute part out of range (0 <= minutes <= 59) in: " + b(i6, i10));
        }
        if (i6 == 18 && i10 != 0) {
            throw new IllegalArgumentException("Time zone offset out of range (-18:00:00 <= offset <= 18:00:00) in: " + b(i6, i10));
        }
        int i11 = (i10 * 60) + (i6 * 3600);
        if (i5 == 1) {
            i11 = -i11;
        }
        return e(i11, 0);
    }

    public static m e(int i5, int i6) {
        if (i6 != 0) {
            return new m(i5, i6);
        }
        if (i5 == 0) {
            return f15346w;
        }
        if (i5 % 900 != 0) {
            return new m(i5, 0);
        }
        Integer valueOf = Integer.valueOf(i5);
        ConcurrentHashMap concurrentHashMap = f15345v;
        m mVar = (m) concurrentHashMap.get(valueOf);
        if (mVar != null) {
            return mVar;
        }
        concurrentHashMap.putIfAbsent(valueOf, new m(i5, 0));
        return (m) concurrentHashMap.get(valueOf);
    }

    public static int f(int i5, int i6, String str) {
        int min = Math.min(str.length() - i5, i6);
        int i10 = -1;
        for (int i11 = 0; i11 < min; i11++) {
            char charAt = str.charAt(i5 + i11);
            if (charAt < '0' || charAt > '9') {
                break;
            }
            i10 = i10 == -1 ? charAt - '0' : (charAt - '0') + (i10 * 10);
        }
        return i10;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(15, this);
    }

    @Override // net.time4j.tz.f
    public final String a() {
        if (this.f15347d == 0 && this.f15348e == 0) {
            return "Z";
        }
        return "UTC" + this.f15349i;
    }

    public final e c() {
        e eVar = e.M;
        return (this.f15347d == 0 && this.f15348e == 0) ? e.M : new e(this);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        m mVar = (m) obj;
        int i5 = mVar.f15347d;
        int i6 = this.f15347d;
        if (i6 < i5) {
            return -1;
        }
        if (i6 > i5) {
            return 1;
        }
        int i10 = this.f15348e - mVar.f15348e;
        if (i10 < 0) {
            return -1;
        }
        return i10 == 0 ? 0 : 1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof m) {
            m mVar = (m) obj;
            if (this.f15347d == mVar.f15347d && this.f15348e == mVar.f15348e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15348e % 64000) + (~this.f15347d);
    }

    public final String toString() {
        return this.f15349i;
    }
}
