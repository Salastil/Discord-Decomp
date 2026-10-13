package xc;

import qc.r;
import qc.s;
import qc.t;

/* loaded from: classes3.dex */
public final class a implements f, s {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f20301b;

    /* renamed from: c, reason: collision with root package name */
    public final int f20302c;

    /* renamed from: d, reason: collision with root package name */
    public final long f20303d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20304e;

    /* renamed from: f, reason: collision with root package name */
    public final long f20305f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f20306g;

    public a(long j, long j5, int i5, int i6, boolean z5) {
        this.a = j;
        this.f20301b = j5;
        this.f20302c = i6 == -1 ? 1 : i6;
        this.f20304e = i5;
        this.f20306g = z5;
        if (j == -1) {
            this.f20303d = -1L;
            this.f20305f = -9223372036854775807L;
        } else {
            long j7 = j - j5;
            this.f20303d = j7;
            this.f20305f = (Math.max(0L, j7) * 8000000) / i5;
        }
    }

    @Override // xc.f
    public final long b(long j) {
        return (Math.max(0L, j - this.f20301b) * 8000000) / this.f20304e;
    }

    @Override // xc.f
    public final long c() {
        return -1L;
    }

    @Override // qc.s
    public final boolean d() {
        return this.f20303d != -1 || this.f20306g;
    }

    @Override // qc.s
    public final r h(long j) {
        long j5 = this.f20303d;
        long j7 = this.f20301b;
        if (j5 == -1 && !this.f20306g) {
            t tVar = new t(0L, j7);
            return new r(tVar, tVar);
        }
        int i5 = this.f20304e;
        long j10 = this.f20302c;
        long j11 = (((i5 * j) / 8000000) / j10) * j10;
        if (j5 != -1) {
            j11 = Math.min(j11, j5 - j10);
        }
        long max = Math.max(j11, 0L) + j7;
        long max2 = (Math.max(0L, max - j7) * 8000000) / i5;
        t tVar2 = new t(max2, max);
        if (j5 != -1 && max2 < j) {
            long j12 = max + j10;
            if (j12 < this.a) {
                return new r(tVar2, new t((Math.max(0L, j12 - j7) * 8000000) / i5, j12));
            }
        }
        return new r(tVar2, tVar2);
    }

    @Override // qc.s
    public final long i() {
        return this.f20305f;
    }
}
