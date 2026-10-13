package j$.time.format;

import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.util.Objects;

/* loaded from: classes2.dex */
public final class g implements f {
    public final j$.time.temporal.j a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12301b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f12302c;

    public g(j$.time.temporal.a aVar) {
        Objects.requireNonNull(aVar, "field");
        j$.time.temporal.n nVar = aVar.f12332b;
        if (nVar.a != nVar.f12344b || nVar.f12345c != nVar.f12346d) {
            throw new IllegalArgumentException("Field must have a fixed set of values: " + aVar);
        }
        this.a = aVar;
        this.f12301b = 9;
        this.f12302c = true;
    }

    @Override // j$.time.format.f
    public final boolean a(p pVar, StringBuilder sb2) {
        j$.time.temporal.j jVar = this.a;
        Long a = pVar.a(jVar);
        if (a == null) {
            return false;
        }
        s sVar = pVar.f12322b.f12297c;
        long longValue = a.longValue();
        j$.time.temporal.n c6 = jVar.c();
        if (!c6.c(longValue)) {
            throw new j$.time.a(c6.b(longValue, jVar));
        }
        BigDecimal valueOf = BigDecimal.valueOf(c6.a);
        BigDecimal add = BigDecimal.valueOf(c6.f12346d).subtract(valueOf).add(BigDecimal.ONE);
        BigDecimal subtract = BigDecimal.valueOf(longValue).subtract(valueOf);
        RoundingMode roundingMode = RoundingMode.FLOOR;
        BigDecimal divide = subtract.divide(add, 9, roundingMode);
        BigDecimal bigDecimal = BigDecimal.ZERO;
        if (divide.compareTo(bigDecimal) != 0) {
            bigDecimal = divide.signum() == 0 ? new BigDecimal(BigInteger.ZERO, 0) : divide.stripTrailingZeros();
        }
        if (bigDecimal.scale() == 0) {
            return true;
        }
        String substring = bigDecimal.setScale(Math.min(Math.max(bigDecimal.scale(), 0), this.f12301b), roundingMode).toPlainString().substring(2);
        sVar.getClass();
        if (this.f12302c) {
            sb2.append('.');
        }
        sb2.append(substring);
        return true;
    }

    public final String toString() {
        return "Fraction(" + this.a + ",0," + this.f12301b + (this.f12302c ? ",DecimalPoint" : "") + ")";
    }
}
