package rd;

import com.google.android.exoplayer2.Format;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.RoundingMode;
import java.util.List;

/* loaded from: classes3.dex */
public final class p extends n {
    public final ke.u j;
    public final ke.u k;

    /* renamed from: l, reason: collision with root package name */
    public final long f17264l;

    public p(j jVar, long j, long j5, long j7, long j10, long j11, List list, long j12, ke.u uVar, ke.u uVar2, long j13, long j14) {
        super(jVar, j, j5, j7, j11, list, j12, j13, j14);
        this.j = uVar;
        this.k = uVar2;
        this.f17264l = j10;
    }

    @Override // rd.s
    public final j a(m mVar) {
        ke.u uVar = this.j;
        if (uVar == null) {
            return this.a;
        }
        Format format = mVar.f17251d;
        return new j(0L, -1L, uVar.d(0L, 0L, format.f5225d, format.E));
    }

    @Override // rd.n
    public final long d(long j) {
        if (this.f17260f != null) {
            return r0.size();
        }
        long j5 = this.f17264l;
        if (j5 != -1) {
            return (j5 - this.f17258d) + 1;
        }
        if (j == -9223372036854775807L) {
            return -1L;
        }
        BigInteger multiply = BigInteger.valueOf(j).multiply(BigInteger.valueOf(this.f17268b));
        BigInteger multiply2 = BigInteger.valueOf(this.f17259e).multiply(BigInteger.valueOf(1000000L));
        RoundingMode roundingMode = RoundingMode.CEILING;
        int i5 = gi.a.a;
        return new BigDecimal(multiply).divide(new BigDecimal(multiply2), 0, roundingMode).toBigIntegerExact().longValue();
    }

    @Override // rd.n
    public final j h(k kVar, long j) {
        long j5 = this.f17258d;
        List list = this.f17260f;
        long j7 = list != null ? ((q) list.get((int) (j - j5))).a : (j - j5) * this.f17259e;
        Format format = kVar.f17251d;
        return new j(0L, -1L, this.k.d(j, j7, format.f5225d, format.E));
    }
}
