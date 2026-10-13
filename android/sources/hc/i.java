package hc;

/* loaded from: classes3.dex */
public final class i {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f9717b;

    /* renamed from: c, reason: collision with root package name */
    public long f9718c = -9223372036854775807L;

    /* renamed from: d, reason: collision with root package name */
    public long f9719d = -9223372036854775807L;

    /* renamed from: f, reason: collision with root package name */
    public long f9721f = -9223372036854775807L;

    /* renamed from: g, reason: collision with root package name */
    public long f9722g = -9223372036854775807L;
    public float j = 0.97f;

    /* renamed from: i, reason: collision with root package name */
    public float f9724i = 1.03f;
    public float k = 1.0f;

    /* renamed from: l, reason: collision with root package name */
    public long f9725l = -9223372036854775807L;

    /* renamed from: e, reason: collision with root package name */
    public long f9720e = -9223372036854775807L;

    /* renamed from: h, reason: collision with root package name */
    public long f9723h = -9223372036854775807L;

    /* renamed from: m, reason: collision with root package name */
    public long f9726m = -9223372036854775807L;

    /* renamed from: n, reason: collision with root package name */
    public long f9727n = -9223372036854775807L;

    public i(long j, long j5) {
        this.a = j;
        this.f9717b = j5;
    }

    public final void a() {
        long j = this.f9718c;
        if (j != -9223372036854775807L) {
            long j5 = this.f9719d;
            if (j5 != -9223372036854775807L) {
                j = j5;
            }
            long j7 = this.f9721f;
            if (j7 != -9223372036854775807L && j < j7) {
                j = j7;
            }
            long j10 = this.f9722g;
            if (j10 != -9223372036854775807L && j > j10) {
                j = j10;
            }
        } else {
            j = -9223372036854775807L;
        }
        if (this.f9720e == j) {
            return;
        }
        this.f9720e = j;
        this.f9723h = j;
        this.f9726m = -9223372036854775807L;
        this.f9727n = -9223372036854775807L;
        this.f9725l = -9223372036854775807L;
    }
}
