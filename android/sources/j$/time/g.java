package j$.time;

import j$.time.temporal.TemporalAccessor;
import j$.time.temporal.m;
import java.io.Serializable;

/* loaded from: classes2.dex */
public final class g implements TemporalAccessor, Comparable, Serializable {

    /* renamed from: e, reason: collision with root package name */
    public static final g f12324e;

    /* renamed from: f, reason: collision with root package name */
    public static final g f12325f;

    /* renamed from: g, reason: collision with root package name */
    public static final g[] f12326g = new g[24];
    public final byte a;

    /* renamed from: b, reason: collision with root package name */
    public final byte f12327b;

    /* renamed from: c, reason: collision with root package name */
    public final byte f12328c;

    /* renamed from: d, reason: collision with root package name */
    public final int f12329d;

    static {
        int i5 = 0;
        while (true) {
            g[] gVarArr = f12326g;
            if (i5 < gVarArr.length) {
                gVarArr[i5] = new g(i5, 0, 0, 0);
                i5++;
            } else {
                g gVar = gVarArr[0];
                g gVar2 = gVarArr[12];
                f12324e = gVar;
                f12325f = new g(23, 59, 59, 999999999);
                return;
            }
        }
    }

    public static g i(long j) {
        j$.time.temporal.a.NANO_OF_DAY.f(j);
        int i5 = (int) (j / 3600000000000L);
        long j5 = j - (i5 * 3600000000000L);
        int i6 = (int) (j5 / 60000000000L);
        long j7 = j5 - (i6 * 60000000000L);
        int i10 = (int) (j7 / 1000000000);
        int i11 = (int) (j7 - (i10 * 1000000000));
        if ((i6 | i10 | i11) == 0) {
            return f12326g[i5];
        }
        return new g(i5, i6, i10, i11);
    }

    public g(int i5, int i6, int i10, int i11) {
        this.a = (byte) i5;
        this.f12327b = (byte) i6;
        this.f12328c = (byte) i10;
        this.f12329d = i11;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return ((j$.time.temporal.a) jVar).g();
        }
        return jVar != null && jVar.a(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final int a(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return h(jVar);
        }
        return super.a(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            if (jVar == j$.time.temporal.a.NANO_OF_DAY) {
                return j();
            }
            if (jVar == j$.time.temporal.a.MICRO_OF_DAY) {
                return j() / 1000;
            }
            return h(jVar);
        }
        return jVar.e(this);
    }

    public final int h(j$.time.temporal.j jVar) {
        switch (f.a[((j$.time.temporal.a) jVar).ordinal()]) {
            case 1:
                return this.f12329d;
            case 2:
                throw new m("Invalid field 'NanoOfDay' for get() method, use getLong() instead");
            case 3:
                return this.f12329d / 1000;
            case 4:
                throw new m("Invalid field 'MicroOfDay' for get() method, use getLong() instead");
            case 5:
                return this.f12329d / 1000000;
            case 6:
                return (int) (j() / 1000000);
            case 7:
                return this.f12328c;
            case 8:
                return k();
            case 9:
                return this.f12327b;
            case 10:
                return (this.a * 60) + this.f12327b;
            case 11:
                return this.a % 12;
            case 12:
                int i5 = this.a % 12;
                if (i5 % 12 == 0) {
                    return 12;
                }
                return i5;
            case 13:
                return this.a;
            case 14:
                byte b10 = this.a;
                if (b10 == 0) {
                    return 24;
                }
                return b10;
            case 15:
                return this.a / 12;
            default:
                throw new m("Unsupported field: " + jVar);
        }
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(j$.time.format.a aVar) {
        if (aVar == j$.time.temporal.k.f12338b || aVar == j$.time.temporal.k.a || aVar == j$.time.temporal.k.f12341e || aVar == j$.time.temporal.k.f12340d) {
            return null;
        }
        if (aVar == j$.time.temporal.k.f12343g) {
            return this;
        }
        if (aVar == j$.time.temporal.k.f12342f) {
            return null;
        }
        if (aVar == j$.time.temporal.k.f12339c) {
            return j$.time.temporal.b.NANOS;
        }
        return aVar.a(this);
    }

    public final int k() {
        return (this.f12327b * 60) + (this.a * 3600) + this.f12328c;
    }

    public final long j() {
        return (this.f12328c * 1000000000) + (this.f12327b * 60000000000L) + (this.a * 3600000000000L) + this.f12329d;
    }

    @Override // java.lang.Comparable
    /* renamed from: g, reason: merged with bridge method [inline-methods] */
    public final int compareTo(g gVar) {
        int compare = Integer.compare(this.a, gVar.a);
        return (compare == 0 && (compare = Integer.compare(this.f12327b, gVar.f12327b)) == 0 && (compare = Integer.compare(this.f12328c, gVar.f12328c)) == 0) ? Integer.compare(this.f12329d, gVar.f12329d) : compare;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof g) {
            g gVar = (g) obj;
            if (this.a == gVar.a && this.f12327b == gVar.f12327b && this.f12328c == gVar.f12328c && this.f12329d == gVar.f12329d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = j();
        return (int) (j ^ (j >>> 32));
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(18);
        byte b10 = this.a;
        byte b11 = this.f12327b;
        byte b12 = this.f12328c;
        int i5 = this.f12329d;
        sb2.append(b10 < 10 ? "0" : "");
        sb2.append((int) b10);
        sb2.append(b11 < 10 ? ":0" : ":");
        sb2.append((int) b11);
        if (b12 > 0 || i5 > 0) {
            sb2.append(b12 < 10 ? ":0" : ":");
            sb2.append((int) b12);
            if (i5 > 0) {
                sb2.append('.');
                if (i5 % 1000000 == 0) {
                    sb2.append(Integer.toString((i5 / 1000000) + 1000).substring(1));
                } else if (i5 % 1000 == 0) {
                    sb2.append(Integer.toString((i5 / 1000) + 1000000).substring(1));
                } else {
                    sb2.append(Integer.toString(i5 + 1000000000).substring(1));
                }
            }
        }
        return sb2.toString();
    }
}
