package ks;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;
import net.time4j.y;
import net.time4j.z0;

/* loaded from: classes3.dex */
public final class k implements j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13663d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13664e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f13665i;

    public /* synthetic */ k(int i5, Object obj, Object obj2) {
        this.f13663d = i5;
        this.f13664e = obj;
        this.f13665i = obj2;
    }

    public static BigDecimal a(BigDecimal bigDecimal, BigDecimal bigDecimal2) {
        return bigDecimal.divide(bigDecimal2, 16, RoundingMode.FLOOR);
    }

    public static int e(BigDecimal bigDecimal) {
        return Math.min(999999999, bigDecimal.movePointRight(9).setScale(0, RoundingMode.HALF_UP).intValue());
    }

    @Override // ks.j
    public final Object b(e eVar, Object obj, boolean z5) {
        int i5;
        long j;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        switch (this.f13663d) {
            case 0:
                Long l6 = (Long) obj;
                if (l6 == null) {
                    throw new IllegalArgumentException("Missing epoch day value.");
                }
                return (e) ((l8.a) this.f13665i).o(w3.q.D(l.UNIX.b(l6.longValue(), (l) this.f13664e), 730L));
            default:
                z0 z0Var = (z0) eVar;
                BigDecimal bigDecimal = (BigDecimal) obj;
                y yVar = (y) this.f13664e;
                if (bigDecimal == null) {
                    throw new IllegalArgumentException("Missing element value.");
                }
                if (yVar == z0.f15403d0) {
                    RoundingMode roundingMode = RoundingMode.FLOOR;
                    BigDecimal scale = bigDecimal.setScale(0, roundingMode);
                    BigDecimal subtract = bigDecimal.subtract(scale);
                    BigDecimal bigDecimal2 = z0.f15409x;
                    BigDecimal multiply = subtract.multiply(bigDecimal2);
                    BigDecimal scale2 = multiply.setScale(0, roundingMode);
                    BigDecimal multiply2 = multiply.subtract(scale2).multiply(bigDecimal2);
                    BigDecimal scale3 = multiply2.setScale(0, roundingMode);
                    j = scale.longValueExact();
                    i10 = scale2.intValue();
                    i6 = scale3.intValue();
                    i11 = e(multiply2.subtract(scale3));
                } else if (yVar == z0.f15404e0) {
                    RoundingMode roundingMode2 = RoundingMode.FLOOR;
                    BigDecimal scale4 = bigDecimal.setScale(0, roundingMode2);
                    BigDecimal multiply3 = bigDecimal.subtract(scale4).multiply(z0.f15409x);
                    BigDecimal scale5 = multiply3.setScale(0, roundingMode2);
                    int intValue = scale5.intValue();
                    int e9 = e(multiply3.subtract(scale5));
                    long longValueExact = scale4.longValueExact();
                    long j5 = z0Var.f15411d;
                    if (z5) {
                        long m5 = w3.q.m(60, longValueExact) + j5;
                        i12 = w3.q.o(60, longValueExact);
                        j5 = m5;
                    } else {
                        z0.s(longValueExact);
                        i12 = (int) longValueExact;
                    }
                    i10 = i12;
                    i11 = e9;
                    i6 = intValue;
                    j = j5;
                } else {
                    if (yVar != z0.f15405f0) {
                        throw new UnsupportedOperationException(yVar.name());
                    }
                    BigDecimal scale6 = bigDecimal.setScale(0, RoundingMode.FLOOR);
                    int e10 = e(bigDecimal.subtract(scale6));
                    long longValueExact2 = scale6.longValueExact();
                    long j7 = z0Var.f15411d;
                    int i14 = z0Var.f15412e;
                    if (z5) {
                        i5 = w3.q.o(60, longValueExact2);
                        long m6 = w3.q.m(60, longValueExact2) + i14;
                        long m7 = w3.q.m(60, m6) + j7;
                        i14 = w3.q.o(60, m6);
                        j = m7;
                    } else {
                        z0.t(longValueExact2);
                        i5 = (int) longValueExact2;
                        j = j7;
                    }
                    i6 = i5;
                    i10 = i14;
                    i11 = e10;
                }
                if (z5) {
                    i13 = w3.q.o(24, j);
                    if (j > 0 && (i13 | i10 | i6 | i11) == 0) {
                        return z0.K;
                    }
                } else {
                    if (j < 0 || j > 24) {
                        throw new IllegalArgumentException("Value out of range: " + bigDecimal);
                    }
                    i13 = (int) j;
                }
                return z0.y(i13, i10, i6, i11, true);
        }
    }

    @Override // ks.j
    public final Object c(e eVar) {
        BigDecimal add;
        switch (this.f13663d) {
            case 0:
                return Long.valueOf(((l) this.f13664e).b(((l8.a) this.f13665i).n(eVar) + 730, l.UNIX));
            default:
                z0 z0Var = (z0) eVar;
                y yVar = (y) this.f13664e;
                if (yVar == z0.f15403d0) {
                    if (z0Var.equals(z0.J)) {
                        return BigDecimal.ZERO;
                    }
                    byte b10 = z0Var.f15411d;
                    if (b10 == 24) {
                        return z0.F;
                    }
                    BigDecimal add2 = BigDecimal.valueOf(b10).add(a(BigDecimal.valueOf(z0Var.f15412e), z0.f15409x));
                    BigDecimal valueOf = BigDecimal.valueOf(z0Var.f15413i);
                    BigDecimal bigDecimal = z0.f15410y;
                    add = add2.add(a(valueOf, bigDecimal)).add(a(BigDecimal.valueOf(z0Var.f15414v), bigDecimal.multiply(z0.E)));
                } else if (yVar == z0.f15404e0) {
                    if (z0Var.v()) {
                        return BigDecimal.ZERO;
                    }
                    BigDecimal valueOf2 = BigDecimal.valueOf(z0Var.f15412e);
                    BigDecimal valueOf3 = BigDecimal.valueOf(z0Var.f15413i);
                    BigDecimal bigDecimal2 = z0.f15409x;
                    add = valueOf2.add(a(valueOf3, bigDecimal2)).add(a(BigDecimal.valueOf(z0Var.f15414v), bigDecimal2.multiply(z0.E)));
                } else {
                    if (yVar != z0.f15405f0) {
                        throw new UnsupportedOperationException(yVar.name());
                    }
                    if (z0Var.w()) {
                        return BigDecimal.ZERO;
                    }
                    add = BigDecimal.valueOf(z0Var.f15413i).add(a(BigDecimal.valueOf(z0Var.f15414v), z0.E));
                }
                BigDecimal scale = add.setScale(15, RoundingMode.FLOOR);
                return scale.signum() == 0 ? new BigDecimal(BigInteger.ZERO, 0) : scale.stripTrailingZeros();
        }
    }

    @Override // ks.j
    public final Object d(e eVar) {
        y yVar;
        switch (this.f13663d) {
            case 0:
                return Long.valueOf(((l) this.f13664e).b(((l8.a) this.f13665i).j() + 730, l.UNIX));
            default:
                return (((z0) eVar).f15411d == 24 && ((yVar = (y) this.f13664e) == z0.f15404e0 || yVar == z0.f15405f0)) ? BigDecimal.ZERO : (BigDecimal) this.f13665i;
        }
    }
}
