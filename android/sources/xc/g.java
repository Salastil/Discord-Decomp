package xc;

import ke.d0;
import qc.r;
import qc.t;

/* loaded from: classes3.dex */
public final class g implements f {
    public final long[] a;

    /* renamed from: b, reason: collision with root package name */
    public final long[] f20325b;

    /* renamed from: c, reason: collision with root package name */
    public final long f20326c;

    /* renamed from: d, reason: collision with root package name */
    public final long f20327d;

    public g(long[] jArr, long[] jArr2, long j, long j5) {
        this.a = jArr;
        this.f20325b = jArr2;
        this.f20326c = j;
        this.f20327d = j5;
    }

    @Override // xc.f
    public final long b(long j) {
        return this.a[d0.e(this.f20325b, j, true)];
    }

    @Override // xc.f
    public final long c() {
        return this.f20327d;
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    @Override // qc.s
    public final r h(long j) {
        long[] jArr = this.a;
        int e9 = d0.e(jArr, j, true);
        long j5 = jArr[e9];
        long[] jArr2 = this.f20325b;
        t tVar = new t(j5, jArr2[e9]);
        if (j5 >= j || e9 == jArr.length - 1) {
            return new r(tVar, tVar);
        }
        int i5 = e9 + 1;
        return new r(tVar, new t(jArr[i5], jArr2[i5]));
    }

    @Override // qc.s
    public final long i() {
        return this.f20326c;
    }
}
