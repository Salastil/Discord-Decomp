package xc;

import android.util.Pair;
import ke.d0;
import qc.r;
import qc.t;

/* loaded from: classes3.dex */
public final class c implements f {
    public final long[] a;

    /* renamed from: b, reason: collision with root package name */
    public final long[] f20307b;

    /* renamed from: c, reason: collision with root package name */
    public final long f20308c;

    public c(long j, long[] jArr, long[] jArr2) {
        this.a = jArr;
        this.f20307b = jArr2;
        this.f20308c = j == -9223372036854775807L ? d0.I(jArr2[jArr2.length - 1]) : j;
    }

    public static Pair a(long j, long[] jArr, long[] jArr2) {
        int e9 = d0.e(jArr, j, true);
        long j5 = jArr[e9];
        long j7 = jArr2[e9];
        int i5 = e9 + 1;
        if (i5 == jArr.length) {
            return Pair.create(Long.valueOf(j5), Long.valueOf(j7));
        }
        return Pair.create(Long.valueOf(j), Long.valueOf(((long) ((jArr[i5] == j5 ? 0.0d : (j - j5) / (r6 - j5)) * (jArr2[i5] - j7))) + j7));
    }

    @Override // xc.f
    public final long b(long j) {
        return d0.I(((Long) a(j, this.a, this.f20307b).second).longValue());
    }

    @Override // xc.f
    public final long c() {
        return -1L;
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    @Override // qc.s
    public final r h(long j) {
        Pair a = a(d0.U(d0.j(j, 0L, this.f20308c)), this.f20307b, this.a);
        t tVar = new t(d0.I(((Long) a.first).longValue()), ((Long) a.second).longValue());
        return new r(tVar, tVar);
    }

    @Override // qc.s
    public final long i() {
        return this.f20308c;
    }
}
