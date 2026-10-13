package xc;

import ke.d0;
import qc.r;
import qc.t;

/* loaded from: classes3.dex */
public final class h implements f {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final int f20328b;

    /* renamed from: c, reason: collision with root package name */
    public final long f20329c;

    /* renamed from: d, reason: collision with root package name */
    public final long f20330d;

    /* renamed from: e, reason: collision with root package name */
    public final long f20331e;

    /* renamed from: f, reason: collision with root package name */
    public final long[] f20332f;

    public h(long j, int i5, long j5, long j7, long[] jArr) {
        this.a = j;
        this.f20328b = i5;
        this.f20329c = j5;
        this.f20332f = jArr;
        this.f20330d = j7;
        this.f20331e = j7 != -1 ? j + j7 : -1L;
    }

    @Override // xc.f
    public final long b(long j) {
        long j5 = j - this.a;
        if (!d() || j5 <= this.f20328b) {
            return 0L;
        }
        long[] jArr = this.f20332f;
        ke.b.l(jArr);
        double d6 = (j5 * 256.0d) / this.f20330d;
        int e9 = d0.e(jArr, (long) d6, true);
        long j7 = this.f20329c;
        long j10 = (e9 * j7) / 100;
        long j11 = jArr[e9];
        int i5 = e9 + 1;
        long j12 = (j7 * i5) / 100;
        return Math.round((j11 == (e9 == 99 ? 256L : jArr[i5]) ? 0.0d : (d6 - j11) / (r0 - j11)) * (j12 - j10)) + j10;
    }

    @Override // xc.f
    public final long c() {
        return this.f20331e;
    }

    @Override // qc.s
    public final boolean d() {
        return this.f20332f != null;
    }

    @Override // qc.s
    public final r h(long j) {
        double d6;
        double d7;
        boolean d8 = d();
        int i5 = this.f20328b;
        long j5 = this.a;
        if (!d8) {
            t tVar = new t(0L, j5 + i5);
            return new r(tVar, tVar);
        }
        long j7 = d0.j(j, 0L, this.f20329c);
        double d10 = (j7 * 100.0d) / this.f20329c;
        double d11 = 0.0d;
        if (d10 <= 0.0d) {
            d6 = 256.0d;
        } else if (d10 >= 100.0d) {
            d6 = 256.0d;
            d11 = 256.0d;
        } else {
            int i6 = (int) d10;
            long[] jArr = this.f20332f;
            ke.b.l(jArr);
            double d12 = jArr[i6];
            if (i6 == 99) {
                d6 = 256.0d;
                d7 = 256.0d;
            } else {
                d6 = 256.0d;
                d7 = jArr[i6 + 1];
            }
            d11 = ((d7 - d12) * (d10 - i6)) + d12;
        }
        long j10 = this.f20330d;
        t tVar2 = new t(j7, j5 + d0.j(Math.round((d11 / d6) * j10), i5, j10 - 1));
        return new r(tVar2, tVar2);
    }

    @Override // qc.s
    public final long i() {
        return this.f20329c;
    }
}
