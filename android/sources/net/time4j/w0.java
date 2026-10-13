package net.time4j;

import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.facebook.imageutils.TiffUtil;
import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.util.Collections;
import java.util.EnumSet;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class w0 extends ks.c implements is.a {
    public static final u J;
    public static final d0 K;
    public static final v1 L;
    public static final c0 M;
    public static final c0 N;
    public static final d0 O;
    public static final d0 P;
    public static final c0 Q;
    public static final d0 R;
    public static final d0 S;
    public static final o1 T;
    public static final Map U;
    public static final l8.a V;
    public static final ks.r W;
    private static final long serialVersionUID = -6698431452072325688L;

    /* renamed from: d, reason: collision with root package name */
    public final transient int f15388d;

    /* renamed from: e, reason: collision with root package name */
    public final transient byte f15389e;

    /* renamed from: i, reason: collision with root package name */
    public final transient byte f15390i;

    /* renamed from: v, reason: collision with root package name */
    public static final w0 f15384v = new w0(-999999999, 1, 1);

    /* renamed from: w, reason: collision with root package name */
    public static final w0 f15385w = new w0(999999999, 12, 31);

    /* renamed from: x, reason: collision with root package name */
    public static final Integer f15386x = -999999999;

    /* renamed from: y, reason: collision with root package name */
    public static final Integer f15387y = 999999999;
    public static final Integer E = 12;
    public static final Integer F = 365;
    public static final Integer G = 366;
    public static final int[] H = {31, 59, 90, 120, 151, 181, MediaImageViewKt.OBSCURED_IMAGE_MIN_HEIGHT, 243, 273, 304, 334, 365};
    public static final int[] I = {31, 60, 91, 121, 152, 182, 213, 244, TiffUtil.TIFF_TAG_ORIENTATION, 305, 335, 366};

    static {
        u uVar = u.f15376d;
        J = uVar;
        d0 m5 = d0.m('u', 14, -999999999, 999999999, "YEAR");
        K = m5;
        v1 v1Var = v1.f15381e;
        L = v1Var;
        c0 c0Var = new c0("QUARTER_OF_YEAR", f1.class, f1.f15249d, f1.f15250e, 103, 'Q');
        M = c0Var;
        c0 c0Var2 = new c0("MONTH_OF_YEAR", r0.class, r0.f15308d, r0.f15309e, 101, 'M');
        N = c0Var2;
        d0 m6 = d0.m('M', 15, 1, 12, "MONTH_AS_NUMBER");
        O = m6;
        d0 m7 = d0.m('d', 16, 1, 31, "DAY_OF_MONTH");
        P = m7;
        c0 c0Var3 = new c0("DAY_OF_WEEK", n1.class, n1.f15289d, n1.f15295y, 102, 'E');
        Q = c0Var3;
        d0 m10 = d0.m('D', 17, 1, 365, "DAY_OF_YEAR");
        R = m10;
        d0 m11 = d0.m((char) 0, 18, 1, 92, "DAY_OF_QUARTER");
        S = m11;
        o1 o1Var = o1.f15297d;
        T = o1Var;
        HashMap hashMap = new HashMap();
        s(hashMap, uVar);
        hashMap.put(m5.name(), m5);
        s(hashMap, v1Var);
        hashMap.put(c0Var.name(), c0Var);
        hashMap.put(c0Var2.name(), c0Var2);
        hashMap.put(m6.name(), m6);
        hashMap.put(m7.name(), m7);
        hashMap.put(c0Var3.name(), c0Var3);
        hashMap.put(m10.name(), m10);
        hashMap.put(m11.name(), m11);
        s(hashMap, o1Var);
        U = Collections.unmodifiableMap(hashMap);
        l8.a aVar = new l8.a(14);
        V = aVar;
        Class<w0> cls = w0.class;
        ks.p pVar = new ks.p(f0.class, cls, new v0(), (ks.s) aVar.o(-365243219892L), (ks.s) aVar.o(aVar.j()), aVar);
        ks.l[] values = ks.l.values();
        int length = values.length;
        int i5 = 0;
        while (i5 < length) {
            int i6 = length;
            ks.l lVar = values[i5];
            lVar.getClass();
            pVar.b(lVar, new ks.k(0, lVar, aVar));
            i5++;
            length = i6;
            cls = cls;
        }
        Class<w0> cls2 = cls;
        o0 o0Var = new o0(1);
        k kVar = m.E;
        pVar.a(uVar, o0Var, kVar);
        pVar.a(m5, new u0(m5), m.f15278v);
        pVar.a(v1Var, new o0(5), m1.f15286d);
        pVar.a(c0Var, t0.a(c0Var), m.f15279w);
        t0 a = t0.a(c0Var2);
        i iVar = m.f15280x;
        pVar.a(c0Var2, a, iVar);
        pVar.a(m6, new u0(m6), iVar);
        pVar.a(m7, new u0(m7), kVar);
        pVar.a(c0Var3, t0.a(c0Var3), kVar);
        pVar.a(m10, new u0(m10), kVar);
        pVar.a(m11, new u0(m11), kVar);
        u0 u0Var = new u0(19, o1Var);
        j jVar = m.f15281y;
        pVar.a(o1Var, u0Var, jVar);
        EnumSet range = EnumSet.range(m.f15275d, iVar);
        EnumSet range2 = EnumSet.range(jVar, kVar);
        for (m mVar : m.values()) {
            ks.p pVar2 = pVar;
            pVar2.d(mVar, new l(mVar, 0), mVar.getLength(), mVar.compareTo((m) m.f15281y) < 0 ? range : range2);
            pVar = pVar2;
        }
        for (js.b bVar : is.c.f12272b.d(js.b.class)) {
            Class<w0> cls3 = cls2;
            if (bVar.a(cls3)) {
                pVar.c(bVar);
            }
            cls2 = cls3;
        }
        pVar.c(new js.b(3));
        W = pVar.e();
    }

    public w0(int i5, int i6, int i10) {
        this.f15388d = i5;
        this.f15389e = (byte) i6;
        this.f15390i = (byte) i10;
    }

    public static w0 A(int i5, int i6, n1 n1Var, boolean z5) {
        if (i6 < 1 || i6 > 53) {
            if (z5) {
                throw new IllegalArgumentException(k0.d.i(i6, "WEEK_OF_YEAR (ISO) out of range: "));
            }
            return null;
        }
        if (z5 && (i5 < f15386x.intValue() || i5 > f15387y.intValue())) {
            throw new IllegalArgumentException(k0.d.i(i5, "YEAR_OF_WEEKDATE (ISO) out of range: "));
        }
        int a = n1.d(tn.g.k(i5, 1, 1)).a();
        int a10 = (n1Var.a() + (((i6 - 1) * 7) + (a <= 4 ? 2 - a : 9 - a))) - 1;
        if (a10 <= 0) {
            i5--;
            a10 += tn.g.p(i5) ? 366 : 365;
        } else {
            int i10 = tn.g.p(i5) ? 366 : 365;
            if (a10 > i10) {
                a10 -= i10;
                i5++;
            }
        }
        w0 y5 = y(i5, a10);
        if (i6 != 53 || ((Integer) y5.d(t1.G.f15329w)).intValue() == 53) {
            return y5;
        }
        if (z5) {
            throw new IllegalArgumentException(k0.d.i(i6, "WEEK_OF_YEAR (ISO) out of range: "));
        }
        return null;
    }

    public static w0 B(long j, ks.l lVar) {
        return (w0) V.o(ks.l.UTC.b(j, lVar));
    }

    public static int q(w0 w0Var) {
        byte b10 = w0Var.f15390i;
        byte b11 = w0Var.f15389e;
        switch (b11) {
            case 1:
            case 4:
            case 7:
            case 10:
                return b10;
            case 2:
            case 8:
            case 11:
                return b10 + 31;
            case 3:
                return (tn.g.p(w0Var.f15388d) ? (byte) 60 : (byte) 59) + b10;
            case 5:
                return b10 + 30;
            case 6:
            case 12:
                return b10 + 61;
            case 9:
                return b10 + 62;
            default:
                throw new AssertionError(k0.d.i(b11, "Unknown month: "));
        }
    }

    public static w0 r(m mVar, w0 w0Var, long j, int i5) {
        switch (mVar.ordinal()) {
            case 0:
                return r(m.f15280x, w0Var, w3.q.B(j, 12000L), i5);
            case 1:
                return r(m.f15280x, w0Var, w3.q.B(j, 1200L), i5);
            case 2:
                return r(m.f15280x, w0Var, w3.q.B(j, 120L), i5);
            case 3:
                return r(m.f15280x, w0Var, w3.q.B(j, 12L), i5);
            case 4:
                return r(m.f15280x, w0Var, w3.q.B(j, 3L), i5);
            case 5:
                return v(w0Var, w3.q.z((((w0Var.f15388d - 1970) * 12) + w0Var.f15389e) - 1, j), w0Var.f15390i, i5);
            case 6:
                return r(m.E, w0Var, w3.q.B(j, 7L), i5);
            case 7:
                byte b10 = w0Var.f15390i;
                int i6 = w0Var.f15388d;
                long z5 = w3.q.z(b10, j);
                if (z5 >= 1 && z5 <= 28) {
                    return z(i6, w0Var.f15389e, (int) z5, true);
                }
                long z6 = w3.q.z(w0Var.x(), j);
                if (z6 >= 1 && z6 <= 365) {
                    return y(i6, (int) z6);
                }
                l8.a aVar = V;
                return (w0) aVar.o(w3.q.z(aVar.n(w0Var), j));
            default:
                throw new UnsupportedOperationException(mVar.name());
        }
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    public static void s(HashMap hashMap, ks.d dVar) {
        hashMap.put(dVar.name(), dVar);
    }

    public static void t(StringBuilder sb2, int i5) {
        sb2.append('-');
        if (i5 < 10) {
            sb2.append('0');
        }
        sb2.append(i5);
    }

    public static void u(StringBuilder sb2, int i5) {
        int i6;
        if (i5 < 0) {
            sb2.append('-');
            if (i5 == Integer.MIN_VALUE) {
                throw new ArithmeticException(k0.d.i(i5, "Not negatable: "));
            }
            i6 = -i5;
        } else {
            i6 = i5;
        }
        if (i6 >= 10000) {
            if (i5 > 0) {
                sb2.append('+');
            }
        } else if (i6 < 1000) {
            sb2.append('0');
            if (i6 < 100) {
                sb2.append('0');
                if (i6 < 10) {
                    sb2.append('0');
                }
            }
        }
        sb2.append(i6);
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x0072, code lost:
    
        if (r11 == 2) goto L21;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static w0 v(w0 w0Var, long j, int i5, int i6) {
        if (i6 == 5 && w0Var.f15390i == tn.g.l(w0Var.f15388d, w0Var.f15389e)) {
            i6 = 2;
        }
        int A = w3.q.A(w3.q.z(w3.q.m(12, j), 1970L));
        int o6 = w3.q.o(12, j) + 1;
        int l6 = tn.g.l(A, o6);
        if (i5 <= l6) {
            if (i5 < l6) {
            }
            return z(A, o6, i5, true);
        }
        switch (i6) {
            case 0:
            case 2:
            case 5:
            case 6:
                break;
            case 1:
                return v(w0Var, w3.q.z(j, 1L), 1, i6);
            case 3:
                return v(w0Var, w3.q.z(j, 1L), i5 - l6, i6);
            case 4:
                StringBuilder sb2 = new StringBuilder(32);
                sb2.append("Day of month out of range: ");
                u(sb2, A);
                t(sb2, o6);
                t(sb2, i5);
                throw new ks.f(sb2.toString());
            default:
                throw new UnsupportedOperationException(k0.d.i(i6, "Overflow policy not implemented: "));
        }
        return z(A, o6, i5, true);
        i5 = l6;
        return z(A, o6, i5, true);
    }

    private Object writeReplace() {
        return new SPX(1, this);
    }

    public static w0 y(int i5, int i6) {
        if (i6 < 1) {
            throw new IllegalArgumentException(k0.d.i(i6, "Day of year out of range: "));
        }
        if (i6 <= 31) {
            return z(i5, 1, i6, true);
        }
        int[] iArr = tn.g.p(i5) ? I : H;
        for (int i10 = i6 > iArr[6] ? 7 : 1; i10 < 12; i10++) {
            if (i6 <= iArr[i10]) {
                return z(i5, i10 + 1, i6 - iArr[i10 - 1], false);
            }
        }
        throw new IllegalArgumentException(k0.d.i(i6, "Day of year out of range: "));
    }

    public static w0 z(int i5, int i6, int i10, boolean z5) {
        if (z5) {
            tn.g.c(i5, i6, i10);
        }
        return new w0(i5, i6, i10);
    }

    @Override // is.a
    public final int a() {
        return this.f15388d;
    }

    @Override // is.a
    public final int b() {
        return this.f15389e;
    }

    @Override // is.a
    public final int c() {
        return this.f15390i;
    }

    @Override // ks.e
    public final ks.r e() {
        return W;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof w0) {
            w0 w0Var = (w0) obj;
            if (this.f15390i == w0Var.f15390i && this.f15389e == w0Var.f15389e && this.f15388d == w0Var.f15388d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.f15388d;
        return (((i5 << 11) + (this.f15389e << 6)) + this.f15390i) ^ (i5 & (-2048));
    }

    @Override // ks.s
    public final ks.r j() {
        return W;
    }

    @Override // ks.c
    public final int m(ks.c cVar) {
        if (!(cVar instanceof w0)) {
            return super.m(cVar);
        }
        w0 w0Var = (w0) cVar;
        int i5 = this.f15388d - w0Var.f15388d;
        if (i5 != 0) {
            return i5;
        }
        int i6 = this.f15389e - w0Var.f15389e;
        return i6 == 0 ? this.f15390i - w0Var.f15390i : i6;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(32);
        u(sb2, this.f15388d);
        t(sb2, this.f15389e);
        t(sb2, this.f15390i);
        return sb2.toString();
    }

    public final n1 w() {
        return n1.d(tn.g.k(this.f15388d, this.f15389e, this.f15390i));
    }

    public final int x() {
        byte b10 = this.f15390i;
        byte b11 = this.f15389e;
        if (b11 == 1) {
            return b10;
        }
        if (b11 == 2) {
            return b10 + 31;
        }
        return (tn.g.p(this.f15388d) ? 1 : 0) + H[b11 - 2] + b10;
    }

    @Override // ks.e
    public final ks.e f() {
        return this;
    }
}
