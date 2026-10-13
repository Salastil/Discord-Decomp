package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.math.BigDecimal;
import java.util.Collections;
import java.util.EnumSet;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class z0 extends ks.s {
    public static final BigDecimal E;
    public static final BigDecimal F;
    public static final BigDecimal G;
    public static final BigDecimal H;
    public static final z0[] I;
    public static final z0 J;
    public static final z0 K;
    public static final j1 L;
    public static final j1 M;
    public static final c N;
    public static final e0 O;
    public static final e0 P;
    public static final e0 Q;
    public static final e0 R;
    public static final e0 S;
    public static final e0 T;
    public static final e0 U;
    public static final e0 V;
    public static final e0 W;
    public static final e0 X;
    public static final e0 Y;
    public static final e0 Z;
    public static final e0 a0;

    /* renamed from: b0, reason: collision with root package name */
    public static final i0 f15401b0;

    /* renamed from: c0, reason: collision with root package name */
    public static final i0 f15402c0;

    /* renamed from: d0, reason: collision with root package name */
    public static final y f15403d0;

    /* renamed from: e0, reason: collision with root package name */
    public static final y f15404e0;

    /* renamed from: f0, reason: collision with root package name */
    public static final y f15405f0;

    /* renamed from: g0, reason: collision with root package name */
    public static final d1 f15406g0;
    public static final Map h0;

    /* renamed from: i0, reason: collision with root package name */
    public static final ks.r f15407i0;
    private static final long serialVersionUID = 2780881537313863339L;

    /* renamed from: w, reason: collision with root package name */
    public static final char f15408w;

    /* renamed from: x, reason: collision with root package name */
    public static final BigDecimal f15409x;

    /* renamed from: y, reason: collision with root package name */
    public static final BigDecimal f15410y;

    /* renamed from: d, reason: collision with root package name */
    public final transient byte f15411d;

    /* renamed from: e, reason: collision with root package name */
    public final transient byte f15412e;

    /* renamed from: i, reason: collision with root package name */
    public final transient byte f15413i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f15414v;

    static {
        f15408w = Boolean.getBoolean("net.time4j.format.iso.decimal.dot") ? '.' : ',';
        f15409x = new BigDecimal(60);
        f15410y = new BigDecimal(3600);
        E = new BigDecimal(1000000000);
        F = new BigDecimal("24");
        G = new BigDecimal("23.999999999999999");
        H = new BigDecimal("59.999999999999999");
        I = new z0[25];
        for (int i5 = 0; i5 <= 24; i5++) {
            I[i5] = new z0(i5, 0, 0, 0, false);
        }
        z0[] z0VarArr = I;
        z0 z0Var = z0VarArr[0];
        J = z0Var;
        z0 z0Var2 = z0VarArr[24];
        K = z0Var2;
        j1 j1Var = j1.f15264d;
        L = j1Var;
        M = j1Var;
        c cVar = c.f15227d;
        N = cVar;
        e0 m5 = e0.m("CLOCK_HOUR_OF_AMPM", false);
        O = m5;
        e0 m6 = e0.m("CLOCK_HOUR_OF_DAY", true);
        P = m6;
        e0 n6 = e0.n('K', 3, 11, "DIGITAL_HOUR_OF_AMPM");
        Q = n6;
        e0 n10 = e0.n('H', 4, 23, "DIGITAL_HOUR_OF_DAY");
        R = n10;
        e0 n11 = e0.n('H', 5, 23, "HOUR_FROM_0_TO_24");
        S = n11;
        e0 n12 = e0.n('m', 6, 59, "MINUTE_OF_HOUR");
        T = n12;
        e0 n13 = e0.n((char) 0, 7, 1439, "MINUTE_OF_DAY");
        U = n13;
        e0 n14 = e0.n('s', 8, 59, "SECOND_OF_MINUTE");
        V = n14;
        e0 n15 = e0.n((char) 0, 9, 86399, "SECOND_OF_DAY");
        W = n15;
        e0 n16 = e0.n((char) 0, 10, 999, "MILLI_OF_SECOND");
        X = n16;
        e0 n17 = e0.n((char) 0, 11, 999999, "MICRO_OF_SECOND");
        Y = n17;
        e0 n18 = e0.n('S', 12, 999999999, "NANO_OF_SECOND");
        Z = n18;
        e0 n19 = e0.n('A', 13, 86399999, "MILLI_OF_DAY");
        a0 = n19;
        i0 i0Var = new i0(0L, 86399999999L, "MICRO_OF_DAY");
        f15401b0 = i0Var;
        i0 i0Var2 = new i0(0L, 86399999999999L, "NANO_OF_DAY");
        f15402c0 = i0Var2;
        y yVar = new y("DECIMAL_HOUR", G);
        f15403d0 = yVar;
        BigDecimal bigDecimal = H;
        y yVar2 = new y("DECIMAL_MINUTE", bigDecimal);
        f15404e0 = yVar2;
        y yVar3 = new y("DECIMAL_SECOND", bigDecimal);
        f15405f0 = yVar3;
        d1 d1Var = d1.f15239v;
        f15406g0 = d1Var;
        HashMap hashMap = new HashMap();
        hashMap.put(j1Var.name(), j1Var);
        hashMap.put("AM_PM_OF_DAY", cVar);
        hashMap.put(m5.name(), m5);
        hashMap.put(m6.name(), m6);
        hashMap.put(n6.name(), n6);
        hashMap.put(n10.name(), n10);
        hashMap.put(n11.name(), n11);
        hashMap.put(n12.name(), n12);
        hashMap.put(n13.name(), n13);
        hashMap.put(n14.name(), n14);
        hashMap.put(n15.name(), n15);
        hashMap.put(n16.name(), n16);
        hashMap.put(n17.name(), n17);
        hashMap.put(n18.name(), n18);
        hashMap.put(n19.name(), n19);
        hashMap.put(i0Var.name(), i0Var);
        hashMap.put(i0Var2.name(), i0Var2);
        hashMap.put(yVar.name(), yVar);
        hashMap.put(yVar2.name(), yVar2);
        hashMap.put(yVar3.name(), yVar3);
        h0 = Collections.unmodifiableMap(hashMap);
        ks.k kVar = new ks.k(1, yVar, F);
        ks.k kVar2 = new ks.k(1, yVar2, bigDecimal);
        ks.k kVar3 = new ks.k(1, yVar3, bigDecimal);
        ks.p pVar = new ks.p(g0.class, z0.class, new lh.f(14), z0Var, z0Var2, null);
        pVar.b(j1Var, new o0(4));
        pVar.b(cVar, new o0(2));
        x0 x0Var = new x0(m5, 1, 12);
        n nVar = t.f15314d;
        pVar.a(m5, x0Var, nVar);
        pVar.a(m6, new x0(m6, 1, 24), nVar);
        pVar.a(n6, new x0(n6, 0, 11), nVar);
        pVar.a(n10, new x0(n10, 0, 23), nVar);
        pVar.a(n11, new x0(n11, 0, 24), nVar);
        x0 x0Var2 = new x0(n12, 0, 59);
        o oVar = t.f15315e;
        pVar.a(n12, x0Var2, oVar);
        pVar.a(n13, new x0(n13, 0, 1440), oVar);
        x0 x0Var3 = new x0(n14, 0, 59);
        p pVar2 = t.f15316i;
        pVar.a(n14, x0Var3, pVar2);
        pVar.a(n15, new x0(n15, 0, 86400), pVar2);
        x0 x0Var4 = new x0(n16, 0, 999);
        q qVar = t.f15317v;
        pVar.a(n16, x0Var4, qVar);
        x0 x0Var5 = new x0(n17, 0, 999999);
        r rVar = t.f15318w;
        pVar.a(n17, x0Var5, rVar);
        x0 x0Var6 = new x0(n18, 0, 999999999);
        s sVar = t.f15319x;
        pVar.a(n18, x0Var6, sVar);
        pVar.a(n19, new x0(n19, 0, 86400000), qVar);
        pVar.a(i0Var, new y0(i0Var, 86400000000L), rVar);
        pVar.a(i0Var2, new y0(i0Var2, 86400000000000L), sVar);
        pVar.b(yVar, kVar);
        pVar.b(yVar2, kVar2);
        pVar.b(yVar3, kVar3);
        pVar.b(d1Var, new o0(3));
        for (js.b bVar : is.c.f12272b.d(js.b.class)) {
            if (bVar.a(z0.class)) {
                pVar.c(bVar);
            }
        }
        pVar.c(new js.b(2));
        EnumSet allOf = EnumSet.allOf(t.class);
        for (t tVar : t.values()) {
            pVar.d(tVar, new p0(tVar, 1), tVar.getLength(), allOf);
        }
        f15407i0 = pVar.e();
    }

    public z0(int i5, int i6, int i10, int i11, boolean z5) {
        if (z5) {
            r(i5);
            s(i6);
            t(i10);
            if (i11 < 0 || i11 >= 1000000000) {
                throw new IllegalArgumentException(k0.d.i(i11, "NANO_OF_SECOND out of range: "));
            }
            if (i5 == 24 && (i6 | i10 | i11) != 0) {
                throw new IllegalArgumentException("T24:00:00 exceeded.");
            }
        }
        this.f15411d = (byte) i5;
        this.f15412e = (byte) i6;
        this.f15413i = (byte) i10;
        this.f15414v = i11;
    }

    public static z0 m(int i5, int i6) {
        int i10 = ((i5 % 1000) * 1000000) + i6;
        int i11 = i5 / 1000;
        int i12 = i11 % 60;
        int i13 = i11 / 60;
        return y(i13 / 60, i13 % 60, i12, i10, true);
    }

    public static z0 n(int i5, long j) {
        int i6 = (((int) (j % 1000000)) * 1000) + i5;
        int i10 = (int) (j / 1000000);
        int i11 = i10 % 60;
        int i12 = i10 / 60;
        return y(i12 / 60, i12 % 60, i11, i6, true);
    }

    public static z0 o(long j) {
        int i5 = (int) (j % 1000000000);
        int i6 = (int) (j / 1000000000);
        int i10 = i6 % 60;
        int i11 = i6 / 60;
        return y(i11 / 60, i11 % 60, i10, i5, true);
    }

    public static long p(long j, long j5) {
        return j - (j5 * (j >= 0 ? j / j5 : ((j + 1) / j5) - 1));
    }

    public static long q(z0 z0Var) {
        return (z0Var.f15411d * 3600000000000L) + (z0Var.f15412e * 60000000000L) + (z0Var.f15413i * 1000000000) + z0Var.f15414v;
    }

    public static void r(long j) {
        if (j < 0 || j > 24) {
            throw new IllegalArgumentException(k0.d.j(j, "HOUR_OF_DAY out of range: "));
        }
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    public static void s(long j) {
        if (j < 0 || j > 59) {
            throw new IllegalArgumentException(k0.d.j(j, "MINUTE_OF_HOUR out of range: "));
        }
    }

    public static void t(long j) {
        if (j < 0 || j > 59) {
            throw new IllegalArgumentException(k0.d.j(j, "SECOND_OF_MINUTE out of range: "));
        }
    }

    private Object writeReplace() {
        return new SPX(2, this);
    }

    public static z0 x(int i5) {
        r(i5);
        return I[i5];
    }

    public static z0 y(int i5, int i6, int i10, int i11, boolean z5) {
        return ((i6 | i10) | i11) == 0 ? z5 ? x(i5) : I[i5] : new z0(i5, i6, i10, i11, z5);
    }

    @Override // ks.e
    public final ks.r e() {
        return f15407i0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof z0) {
            z0 z0Var = (z0) obj;
            if (this.f15411d == z0Var.f15411d && this.f15412e == z0Var.f15412e && this.f15413i == z0Var.f15413i && this.f15414v == z0Var.f15414v) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15414v * 37) + (this.f15413i * 3600) + (this.f15412e * 60) + this.f15411d;
    }

    @Override // ks.s
    public final ks.r j() {
        return f15407i0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(19);
        sb2.append('T');
        byte b10 = this.f15411d;
        if (b10 < 10) {
            sb2.append('0');
        }
        sb2.append((int) b10);
        byte b11 = this.f15412e;
        byte b12 = this.f15413i;
        int i5 = this.f15414v;
        if ((b11 | b12 | i5) != 0) {
            sb2.append(':');
            if (b11 < 10) {
                sb2.append('0');
            }
            sb2.append((int) b11);
            if ((b12 | i5) != 0) {
                sb2.append(':');
                if (b12 < 10) {
                    sb2.append('0');
                }
                sb2.append((int) b12);
                if (i5 != 0) {
                    sb2.append(f15408w);
                    String num = Integer.toString(i5);
                    int i6 = i5 % 1000000 == 0 ? 3 : i5 % 1000 == 0 ? 6 : 9;
                    for (int length = num.length(); length < 9; length++) {
                        sb2.append('0');
                    }
                    int length2 = (num.length() + i6) - 9;
                    for (int i10 = 0; i10 < length2; i10++) {
                        sb2.append(num.charAt(i10));
                    }
                }
            }
        }
        return sb2.toString();
    }

    @Override // ks.s
    /* renamed from: u, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final int i(z0 z0Var) {
        int i5 = this.f15411d - z0Var.f15411d;
        if (i5 == 0 && (i5 = this.f15412e - z0Var.f15412e) == 0 && (i5 = this.f15413i - z0Var.f15413i) == 0) {
            i5 = this.f15414v - z0Var.f15414v;
        }
        if (i5 < 0) {
            return -1;
        }
        return i5 == 0 ? 0 : 1;
    }

    public final boolean v() {
        return ((this.f15412e | this.f15413i) | this.f15414v) == 0;
    }

    public final boolean w() {
        return (this.f15413i | this.f15414v) == 0;
    }

    @Override // ks.e
    public final ks.e f() {
        return this;
    }
}
