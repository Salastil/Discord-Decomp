package qc;

import ke.d0;

/* loaded from: classes3.dex */
public final class q implements s {
    public final long[] a;

    /* renamed from: b, reason: collision with root package name */
    public final long[] f16794b;

    /* renamed from: c, reason: collision with root package name */
    public final long f16795c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f16796d;

    public q(long j, long[] jArr, long[] jArr2) {
        ke.b.g(jArr.length == jArr2.length);
        int length = jArr2.length;
        boolean z5 = length > 0;
        this.f16796d = z5;
        if (!z5 || jArr2[0] <= 0) {
            this.a = jArr;
            this.f16794b = jArr2;
        } else {
            int i5 = length + 1;
            long[] jArr3 = new long[i5];
            this.a = jArr3;
            long[] jArr4 = new long[i5];
            this.f16794b = jArr4;
            System.arraycopy(jArr, 0, jArr3, 1, length);
            System.arraycopy(jArr2, 0, jArr4, 1, length);
        }
        this.f16795c = j;
    }

    @Override // qc.s
    public final boolean d() {
        return this.f16796d;
    }

    @Override // qc.s
    public final r h(long j) {
        if (!this.f16796d) {
            t tVar = t.f16798c;
            return new r(tVar, tVar);
        }
        long[] jArr = this.f16794b;
        int e9 = d0.e(jArr, j, true);
        long j5 = jArr[e9];
        long[] jArr2 = this.a;
        t tVar2 = new t(j5, jArr2[e9]);
        if (j5 == j || e9 == jArr.length - 1) {
            return new r(tVar2, tVar2);
        }
        int i5 = e9 + 1;
        return new r(tVar2, new t(jArr[i5], jArr2[i5]));
    }

    @Override // qc.s
    public final long i() {
        return this.f16795c;
    }
}
