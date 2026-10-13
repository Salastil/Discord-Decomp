package zc;

import java.math.BigInteger;
import ke.d0;
import qc.r;
import qc.s;
import qc.t;

/* loaded from: classes3.dex */
public final class a implements s {
    public final /* synthetic */ b a;

    public a(b bVar) {
        this.a = bVar;
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    @Override // qc.s
    public final r h(long j) {
        b bVar = this.a;
        long j5 = bVar.f21151e;
        BigInteger valueOf = BigInteger.valueOf((bVar.f21153v.f21177i * j) / 1000000);
        long j7 = bVar.f21152i;
        t tVar = new t(j, d0.j((valueOf.multiply(BigInteger.valueOf(j7 - j5)).divide(BigInteger.valueOf(bVar.f21155x)).longValue() + j5) - 30000, bVar.f21151e, j7 - 1));
        return new r(tVar, tVar);
    }

    @Override // qc.s
    public final long i() {
        return (this.a.f21155x * 1000000) / r0.f21153v.f21177i;
    }
}
