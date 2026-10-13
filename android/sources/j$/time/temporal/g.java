package j$.time.temporal;

import com.facebook.imageutils.TiffUtil;
import java.util.Objects;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes2.dex */
public abstract class g implements j {
    public static final g DAY_OF_QUARTER;
    public static final g QUARTER_OF_YEAR;
    public static final g WEEK_BASED_YEAR;
    public static final g WEEK_OF_WEEK_BASED_YEAR;
    public static final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ g[] f12334b;

    @Override // j$.time.temporal.j
    public final boolean isDateBased() {
        return true;
    }

    public static boolean f(TemporalAccessor temporalAccessor) {
        Objects.requireNonNull(temporalAccessor, "temporal");
        Object obj = (j$.time.chrono.d) temporalAccessor.c(k.f12338b);
        if (obj == null) {
            obj = j$.time.chrono.e.a;
        }
        return ((j$.time.chrono.a) obj).equals(j$.time.chrono.e.a);
    }

    public static g valueOf(String str) {
        return (g) Enum.valueOf(g.class, str);
    }

    public static g[] values() {
        return (g[]) f12334b.clone();
    }

    static {
        g gVar = new g() { // from class: j$.time.temporal.c
            @Override // j$.time.temporal.j
            public final n c() {
                return n.e(90L, 92L);
            }

            @Override // j$.time.temporal.j
            public final boolean a(TemporalAccessor temporalAccessor) {
                return temporalAccessor.e(a.DAY_OF_YEAR) && temporalAccessor.e(a.MONTH_OF_YEAR) && temporalAccessor.e(a.YEAR) && g.f(temporalAccessor);
            }

            @Override // j$.time.temporal.g, j$.time.temporal.j
            public final n b(TemporalAccessor temporalAccessor) {
                if (!a(temporalAccessor)) {
                    throw new m("Unsupported field: DayOfQuarter");
                }
                long f2 = temporalAccessor.f(g.QUARTER_OF_YEAR);
                if (f2 == 1) {
                    long f10 = temporalAccessor.f(a.YEAR);
                    j$.time.chrono.e eVar = j$.time.chrono.e.a;
                    return j$.time.chrono.e.a(f10) ? n.d(1L, 91L) : n.d(1L, 90L);
                }
                if (f2 == 2) {
                    return n.d(1L, 91L);
                }
                if (f2 == 3 || f2 == 4) {
                    return n.d(1L, 92L);
                }
                return c();
            }

            @Override // j$.time.temporal.j
            public final long e(TemporalAccessor temporalAccessor) {
                if (!a(temporalAccessor)) {
                    throw new m("Unsupported field: DayOfQuarter");
                }
                int a10 = temporalAccessor.a(a.DAY_OF_YEAR);
                int a11 = temporalAccessor.a(a.MONTH_OF_YEAR);
                long f2 = temporalAccessor.f(a.YEAR);
                int i5 = (a11 - 1) / 3;
                j$.time.chrono.e eVar = j$.time.chrono.e.a;
                return a10 - g.a[i5 + (j$.time.chrono.e.a(f2) ? 4 : 0)];
            }

            @Override // java.lang.Enum
            public final String toString() {
                return "DayOfQuarter";
            }
        };
        DAY_OF_QUARTER = gVar;
        g gVar2 = new g() { // from class: j$.time.temporal.d
            @Override // j$.time.temporal.j
            public final n c() {
                return n.d(1L, 4L);
            }

            @Override // j$.time.temporal.j
            public final boolean a(TemporalAccessor temporalAccessor) {
                return temporalAccessor.e(a.MONTH_OF_YEAR) && g.f(temporalAccessor);
            }

            @Override // j$.time.temporal.j
            public final long e(TemporalAccessor temporalAccessor) {
                if (!a(temporalAccessor)) {
                    throw new m("Unsupported field: QuarterOfYear");
                }
                return (temporalAccessor.f(a.MONTH_OF_YEAR) + 2) / 3;
            }

            @Override // java.lang.Enum
            public final String toString() {
                return "QuarterOfYear";
            }
        };
        QUARTER_OF_YEAR = gVar2;
        g gVar3 = new g() { // from class: j$.time.temporal.e
            @Override // j$.time.temporal.j
            public final n c() {
                return n.e(52L, 53L);
            }

            @Override // j$.time.temporal.j
            public final boolean a(TemporalAccessor temporalAccessor) {
                return temporalAccessor.e(a.EPOCH_DAY) && g.f(temporalAccessor);
            }

            @Override // j$.time.temporal.g, j$.time.temporal.j
            public final n b(TemporalAccessor temporalAccessor) {
                if (a(temporalAccessor)) {
                    return g.h(j$.time.e.h(temporalAccessor));
                }
                throw new m("Unsupported field: WeekOfWeekBasedYear");
            }

            @Override // j$.time.temporal.j
            public final long e(TemporalAccessor temporalAccessor) {
                if (!a(temporalAccessor)) {
                    throw new m("Unsupported field: WeekOfWeekBasedYear");
                }
                j$.time.e h6 = j$.time.e.h(temporalAccessor);
                int ordinal = h6.j().ordinal();
                int i5 = 1;
                int k = h6.k() - 1;
                int i6 = (3 - ordinal) + k;
                int i10 = i6 - ((i6 / 7) * 7);
                int i11 = i10 - 3;
                if (i11 < -3) {
                    i11 = i10 + 4;
                }
                if (k >= i11) {
                    int i12 = ((k - i11) / 7) + 1;
                    if (i12 != 53 || i11 == -3 || (i11 == -2 && h6.l())) {
                        i5 = i12;
                    }
                } else {
                    if (h6.k() != 180) {
                        int i13 = h6.a;
                        long j = i13;
                        a.YEAR.f(j);
                        a.DAY_OF_YEAR.f(180);
                        j$.time.chrono.e eVar = j$.time.chrono.e.a;
                        boolean a10 = j$.time.chrono.e.a(j);
                        j$.time.i h7 = j$.time.i.h(6);
                        int g6 = h7.g(a10);
                        int i14 = j$.time.h.a[h7.ordinal()];
                        if (180 > (g6 + (i14 != 1 ? (i14 == 2 || i14 == 3 || i14 == 4 || i14 == 5) ? 30 : 31 : a10 ? 29 : 28)) - 1) {
                            h7 = j$.time.i.a[((((int) 1) + 12) + h7.ordinal()) % 12];
                        }
                        h6 = new j$.time.e(i13, h7.ordinal() + 1, 181 - h7.g(a10));
                    }
                    a aVar = a.YEAR;
                    int a11 = aVar.f12332b.a(h6.a - 1, aVar);
                    short s2 = h6.f12293b;
                    int i15 = h6.f12294c;
                    if (s2 == 2) {
                        i15 = Math.min(i15, j$.time.chrono.e.a((long) a11) ? 29 : 28);
                    } else if (s2 == 4 || s2 == 6 || s2 == 9 || s2 == 11) {
                        i15 = Math.min(i15, 30);
                    }
                    i5 = (int) g.h(new j$.time.e(a11, s2, i15)).f12346d;
                }
                return i5;
            }

            @Override // java.lang.Enum
            public final String toString() {
                return "WeekOfWeekBasedYear";
            }
        };
        WEEK_OF_WEEK_BASED_YEAR = gVar3;
        g gVar4 = new g() { // from class: j$.time.temporal.f
            @Override // j$.time.temporal.j
            public final n c() {
                return a.YEAR.f12332b;
            }

            @Override // j$.time.temporal.j
            public final boolean a(TemporalAccessor temporalAccessor) {
                return temporalAccessor.e(a.EPOCH_DAY) && g.f(temporalAccessor);
            }

            @Override // j$.time.temporal.j
            public final long e(TemporalAccessor temporalAccessor) {
                if (a(temporalAccessor)) {
                    return g.g(j$.time.e.h(temporalAccessor));
                }
                throw new m("Unsupported field: WeekBasedYear");
            }

            @Override // java.lang.Enum
            public final String toString() {
                return "WeekBasedYear";
            }
        };
        WEEK_BASED_YEAR = gVar4;
        f12334b = new g[]{gVar, gVar2, gVar3, gVar4};
        a = new int[]{0, 90, 181, 273, 0, 91, 182, TiffUtil.TIFF_TAG_ORIENTATION};
    }

    public n b(TemporalAccessor temporalAccessor) {
        return c();
    }

    public static n h(j$.time.e eVar) {
        j$.time.e m5 = j$.time.e.m(g(eVar), 1, 1);
        return n.d(1L, (m5.j() == j$.time.b.THURSDAY || (m5.j() == j$.time.b.WEDNESDAY && m5.l())) ? 53 : 52);
    }

    public static int g(j$.time.e eVar) {
        int i5 = eVar.a;
        int k = eVar.k();
        if (k <= 3) {
            return k - eVar.j().ordinal() < -2 ? i5 - 1 : i5;
        }
        if (k >= 363) {
            return ((k - 363) - (eVar.l() ? 1 : 0)) - eVar.j().ordinal() >= 0 ? i5 + 1 : i5;
        }
        return i5;
    }
}
