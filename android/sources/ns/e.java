package ns;

import net.time4j.w0;
import tn.g;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final e f15694d;

    /* renamed from: e, reason: collision with root package name */
    public static final e f15695e;

    /* renamed from: i, reason: collision with root package name */
    public static final e f15696i;

    /* renamed from: v, reason: collision with root package name */
    public static final e f15697v;

    /* renamed from: w, reason: collision with root package name */
    public static final e f15698w;

    /* renamed from: x, reason: collision with root package name */
    public static final e f15699x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ e[] f15700y;

    static {
        e eVar = new e("POSIX", 0);
        f15694d = eVar;
        e eVar2 = new e("UTC", 1);
        f15695e = eVar2;
        e eVar3 = new e("TAI", 2);
        f15696i = eVar3;
        e eVar4 = new e("GPS", 3);
        f15697v = eVar4;
        e eVar5 = new e("TT", 4);
        f15698w = eVar5;
        e eVar6 = new e("UT", 5);
        f15699x = eVar6;
        f15700y = new e[]{eVar, eVar2, eVar3, eVar4, eVar5, eVar6};
    }

    public static double a(w0 w0Var) {
        double d6;
        double d7;
        int i5 = w0Var.f15388d;
        int i6 = g.p(i5) ? 366 : 365;
        byte b10 = w0Var.f15389e;
        int i10 = 1;
        int i11 = 0;
        for (int i12 = 1; i12 < b10; i12++) {
            i11 += g.l(i5, i12);
        }
        int i13 = w0Var.f15390i + i11;
        if (i13 > i6) {
            throw new IllegalArgumentException(w0Var.toString());
        }
        if (i5 == -2001 && i13 == 365) {
            i5 = -2000;
        } else {
            i10 = i13;
        }
        double d8 = ((i10 - 1.0d) / i6) + i5;
        if (i5 < -2000 || i5 > 3000) {
            throw new IllegalArgumentException(k0.d.i(i5, "Year out of range: "));
        }
        if (i5 <= 2050) {
            if (i5 >= 2018) {
                double d10 = d8 - 2000.0d;
                d6 = ((0.012125d * d10) + 0.0533d) * d10;
                d7 = 64.16d;
            } else if (i5 >= 2005) {
                double d11 = d8 - 2000.0d;
                d6 = ((((((4.2060317E-5d * d11) - 0.00112745d) * d11) + 0.014201d) * d11) + 0.171417d) * d11;
                d7 = 63.5934d;
            } else if (i5 >= 1986) {
                double d12 = d8 - 2000.0d;
                d6 = ((((((((2.373599E-5d * d12) + 6.51814E-4d) * d12) + 0.0017275d) * d12) - 0.060374d) * d12) + 0.3345d) * d12;
                d7 = 63.86d;
            } else {
                if (i5 >= 1961) {
                    double d13 = d8 - 1975.0d;
                    return ((((0.0d - (d13 / 718.0d)) * d13) + 1.067d) * d13) + 45.45d;
                }
                if (i5 >= 1941) {
                    double d14 = d8 - 1950.0d;
                    d6 = ((((d14 / 2547.0d) + 0.0d) * d14) + 0.407d) * d14;
                    d7 = 29.07d;
                } else if (i5 >= 1920) {
                    double d15 = d8 - 1920.0d;
                    d6 = ((((0.0020936d * d15) - 0.0761d) * d15) + 0.84493d) * d15;
                    d7 = 21.2d;
                } else {
                    if (i5 >= 1900) {
                        double d16 = d8 - 1900.0d;
                        return ((((((0.0061966d - (1.97E-4d * d16)) * d16) - 0.0598939d) * d16) + 1.494119d) * d16) - 2.79d;
                    }
                    if (i5 >= 1860) {
                        double d17 = d8 - 1860.0d;
                        d6 = ((((((((d17 / 233174.0d) - 4.473624E-4d) * d17) + 0.01680668d) * d17) - 0.251754d) * d17) + 0.5737d) * d17;
                        d7 = 7.62d;
                    } else if (i5 >= 1800) {
                        d6 = ((((((((((((8.75E-10d * r4) - 1.699E-7d) * r4) + 1.21272E-5d) * r4) - 3.7436E-4d) * r4) + 0.0041116d) * r4) + 0.0068612d) * r4) - 0.332447d) * (d8 - 1800.0d);
                        d7 = 13.72d;
                    } else if (i5 >= 1700) {
                        double d18 = d8 - 1700.0d;
                        d6 = ((((((d18 / 1174000.0d) + 1.3336E-4d) * d18) - 0.0059285d) * d18) + 0.1603d) * d18;
                        d7 = 8.83d;
                    } else if (i5 >= 1600) {
                        d6 = ((((r4 / 7129.0d) - 0.01532d) * r4) - 0.9808d) * (d8 - 1600.0d);
                        d7 = 120.0d;
                    } else if (i5 >= 500) {
                        d6 = ((((((((((0.0083572073d * r4) - 0.005050998d) * r4) - 0.8503463d) * r4) + 0.319781d) * r4) + 71.23472d) * r4) - 556.01d) * ((d8 - 1000.0d) / 100.0d);
                        d7 = 1574.2d;
                    } else if (i5 >= -500) {
                        d6 = ((((((((((0.0090316521d * r4) + 0.022174192d) * r4) - 0.1798452d) * r4) - 5.952053d) * r4) + 33.78311d) * r4) - 1014.41d) * (d8 / 100.0d);
                        d7 = 10583.6d;
                    }
                }
            }
            return d6 + d7;
        }
        double d19 = (d8 - 1820.0d) / 100.0d;
        return ((32.0d * d19) * d19) - 20.0d;
    }

    public static e valueOf(String str) {
        return (e) Enum.valueOf(e.class, str);
    }

    public static e[] values() {
        return (e[]) f15700y.clone();
    }
}
