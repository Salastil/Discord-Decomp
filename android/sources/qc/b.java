package qc;

import ke.d0;

/* loaded from: classes3.dex */
public final class b {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f16755b;

    /* renamed from: c, reason: collision with root package name */
    public final long f16756c;

    /* renamed from: d, reason: collision with root package name */
    public long f16757d = 0;

    /* renamed from: e, reason: collision with root package name */
    public long f16758e;

    /* renamed from: f, reason: collision with root package name */
    public long f16759f;

    /* renamed from: g, reason: collision with root package name */
    public long f16760g;

    /* renamed from: h, reason: collision with root package name */
    public long f16761h;

    public b(long j, long j5, long j7, long j10, long j11, long j12) {
        this.a = j;
        this.f16755b = j5;
        this.f16758e = j7;
        this.f16759f = j10;
        this.f16760g = j11;
        this.f16756c = j12;
        this.f16761h = a(j5, 0L, j7, j10, j11, j12);
    }

    public static long a(long j, long j5, long j7, long j10, long j11, long j12) {
        if (j10 + 1 >= j11 || j5 + 1 >= j7) {
            return j10;
        }
        long j13 = (long) ((j - j5) * ((j11 - j10) / (j7 - j5)));
        return d0.j(((j13 + j10) - j12) - (j13 / 20), j10, j11 - 1);
    }
}
