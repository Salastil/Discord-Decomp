package j$.time;

import j$.time.temporal.TemporalAccessor;
import j$.time.temporal.m;
import j$.time.temporal.n;
import java.io.Serializable;

/* loaded from: classes2.dex */
public final class e implements TemporalAccessor, j$.time.chrono.b, Serializable {

    /* renamed from: d, reason: collision with root package name */
    public static final e f12291d = m(-999999999, 1, 1);

    /* renamed from: e, reason: collision with root package name */
    public static final e f12292e = m(999999999, 12, 31);
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final short f12293b;

    /* renamed from: c, reason: collision with root package name */
    public final short f12294c;

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        j$.time.chrono.b bVar = (j$.time.chrono.b) obj;
        if (!(bVar instanceof e)) {
            int compare = Long.compare(o(), ((e) bVar).o());
            if (compare != 0) {
                return compare;
            }
            j$.time.chrono.e eVar = j$.time.chrono.e.a;
            return 0;
        }
        return g((e) bVar);
    }

    public static e m(int i5, int i6, int i10) {
        long j = i5;
        j$.time.temporal.a.YEAR.f(j);
        j$.time.temporal.a.MONTH_OF_YEAR.f(i6);
        j$.time.temporal.a.DAY_OF_MONTH.f(i10);
        int i11 = 28;
        if (i10 > 28) {
            if (i6 != 2) {
                i11 = (i6 == 4 || i6 == 6 || i6 == 9 || i6 == 11) ? 30 : 31;
            } else {
                j$.time.chrono.e eVar = j$.time.chrono.e.a;
                if (j$.time.chrono.e.a(j)) {
                    i11 = 29;
                }
            }
            if (i10 > i11) {
                if (i10 == 29) {
                    throw new a("Invalid date 'February 29' as '" + i5 + "' is not a leap year");
                }
                throw new a("Invalid date '" + i.h(i6).name() + " " + i10 + "'");
            }
        }
        return new e(i5, i6, i10);
    }

    public static e n(long j) {
        long j5;
        long j7 = j + 719468;
        if (j7 < 0) {
            long j10 = ((j + 719469) / 146097) - 1;
            j5 = j10 * 400;
            j7 += (-j10) * 146097;
        } else {
            j5 = 0;
        }
        long j11 = ((j7 * 400) + 591) / 146097;
        long j12 = j7 - ((j11 / 400) + (((j11 / 4) + (j11 * 365)) - (j11 / 100)));
        if (j12 < 0) {
            j11--;
            j12 = j7 - ((j11 / 400) + (((j11 / 4) + (365 * j11)) - (j11 / 100)));
        }
        int i5 = (int) j12;
        int i6 = ((i5 * 5) + 2) / 153;
        int i10 = ((i6 + 2) % 12) + 1;
        int i11 = (i5 - (((i6 * 306) + 5) / 10)) + 1;
        long j13 = j11 + j5 + (i6 / 10);
        j$.time.temporal.a aVar = j$.time.temporal.a.YEAR;
        return new e(aVar.f12332b.a(j13, aVar), i10, i11);
    }

    public static e h(TemporalAccessor temporalAccessor) {
        e eVar = (e) temporalAccessor.c(j$.time.temporal.k.f12342f);
        if (eVar != null) {
            return eVar;
        }
        throw new a("Unable to obtain LocalDate from TemporalAccessor: " + temporalAccessor + " of type " + temporalAccessor.getClass().getName());
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final boolean e(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return ((j$.time.temporal.a) jVar).isDateBased();
        }
        return jVar != null && jVar.a(this);
    }

    public e(int i5, int i6, int i10) {
        this.a = i5;
        this.f12293b = (short) i6;
        this.f12294c = (short) i10;
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final n b(j$.time.temporal.j jVar) {
        int i5;
        if (jVar instanceof j$.time.temporal.a) {
            j$.time.temporal.a aVar = (j$.time.temporal.a) jVar;
            if (aVar.isDateBased()) {
                int i6 = d.a[aVar.ordinal()];
                if (i6 == 1) {
                    short s2 = this.f12293b;
                    if (s2 != 2) {
                        i5 = (s2 == 4 || s2 == 6 || s2 == 9 || s2 == 11) ? 30 : 31;
                    } else {
                        i5 = l() ? 29 : 28;
                    }
                    return n.d(1L, i5);
                }
                if (i6 == 2) {
                    return n.d(1L, l() ? 366 : 365);
                }
                if (i6 == 3) {
                    return n.d(1L, (i.h(this.f12293b) != i.FEBRUARY || l()) ? 5L : 4L);
                }
                if (i6 != 4) {
                    return aVar.f12332b;
                }
                return this.a <= 0 ? n.d(1L, 1000000000L) : n.d(1L, 999999999L);
            }
            throw new m("Unsupported field: " + jVar);
        }
        return jVar.b(this);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final int a(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            return i(jVar);
        }
        return super.a(jVar);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final long f(j$.time.temporal.j jVar) {
        if (jVar instanceof j$.time.temporal.a) {
            if (jVar == j$.time.temporal.a.EPOCH_DAY) {
                return o();
            }
            if (jVar != j$.time.temporal.a.PROLEPTIC_MONTH) {
                return i(jVar);
            }
            return ((this.a * 12) + this.f12293b) - 1;
        }
        return jVar.e(this);
    }

    public final int i(j$.time.temporal.j jVar) {
        int i5;
        switch (d.a[((j$.time.temporal.a) jVar).ordinal()]) {
            case 1:
                return this.f12294c;
            case 2:
                return k();
            case 3:
                i5 = (this.f12294c - 1) / 7;
                break;
            case 4:
                int i6 = this.a;
                return i6 >= 1 ? i6 : 1 - i6;
            case 5:
                i5 = j().ordinal();
                break;
            case 6:
                i5 = (this.f12294c - 1) % 7;
                break;
            case 7:
                i5 = (k() - 1) % 7;
                break;
            case 8:
                throw new m("Invalid field 'EpochDay' for get() method, use getLong() instead");
            case 9:
                i5 = (k() - 1) / 7;
                break;
            case 10:
                return this.f12293b;
            case 11:
                throw new m("Invalid field 'ProlepticMonth' for get() method, use getLong() instead");
            case 12:
                return this.a;
            case 13:
                return this.a >= 1 ? 1 : 0;
            default:
                throw new m("Unsupported field: " + jVar);
        }
        return i5 + 1;
    }

    public final int k() {
        return (i.h(this.f12293b).g(l()) + this.f12294c) - 1;
    }

    public final b j() {
        int floorMod = (int) Math.floorMod(o() + 3, 7L);
        int i5 = floorMod + 1;
        b bVar = b.MONDAY;
        if (i5 < 1 || i5 > 7) {
            throw new a("Invalid value for DayOfWeek: " + i5);
        }
        return b.a[floorMod];
    }

    public final boolean l() {
        j$.time.chrono.e eVar = j$.time.chrono.e.a;
        return j$.time.chrono.e.a(this.a);
    }

    @Override // j$.time.temporal.TemporalAccessor
    public final Object c(j$.time.format.a aVar) {
        if (aVar == j$.time.temporal.k.f12342f) {
            return this;
        }
        if (aVar == j$.time.temporal.k.a || aVar == j$.time.temporal.k.f12341e || aVar == j$.time.temporal.k.f12340d || aVar == j$.time.temporal.k.f12343g) {
            return null;
        }
        if (aVar == j$.time.temporal.k.f12338b) {
            return j$.time.chrono.e.a;
        }
        if (aVar == j$.time.temporal.k.f12339c) {
            return j$.time.temporal.b.DAYS;
        }
        return aVar.a(this);
    }

    public final long o() {
        long j = this.a;
        long j5 = this.f12293b;
        long j7 = 365 * j;
        long j10 = (((367 * j5) - 362) / 12) + (j >= 0 ? ((j + 399) / 400) + (((3 + j) / 4) - ((99 + j) / 100)) + j7 : j7 - ((j / (-400)) + ((j / (-4)) - (j / (-100))))) + (this.f12294c - 1);
        if (j5 > 2) {
            j10 = !l() ? j10 - 2 : j10 - 1;
        }
        return j10 - 719528;
    }

    public final int g(e eVar) {
        int i5 = this.a - eVar.a;
        if (i5 != 0) {
            return i5;
        }
        int i6 = this.f12293b - eVar.f12293b;
        return i6 == 0 ? this.f12294c - eVar.f12294c : i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof e) && g((e) obj) == 0;
    }

    public final int hashCode() {
        int i5 = this.a;
        return (((i5 << 11) + (this.f12293b << 6)) + this.f12294c) ^ (i5 & (-2048));
    }

    public final String toString() {
        int i5 = this.a;
        short s2 = this.f12293b;
        short s5 = this.f12294c;
        int abs = Math.abs(i5);
        StringBuilder sb2 = new StringBuilder(10);
        if (abs >= 1000) {
            if (i5 > 9999) {
                sb2.append('+');
            }
            sb2.append(i5);
        } else if (i5 < 0) {
            sb2.append(i5 - 10000);
            sb2.deleteCharAt(1);
        } else {
            sb2.append(i5 + 10000);
            sb2.deleteCharAt(0);
        }
        sb2.append(s2 < 10 ? "-0" : "-");
        sb2.append((int) s2);
        sb2.append(s5 < 10 ? "-0" : "-");
        sb2.append((int) s5);
        return sb2.toString();
    }
}
