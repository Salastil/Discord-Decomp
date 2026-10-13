package qd;

/* loaded from: classes3.dex */
public final class k {
    public final pd.d a;

    /* renamed from: b, reason: collision with root package name */
    public final rd.m f16844b;

    /* renamed from: c, reason: collision with root package name */
    public final rd.b f16845c;

    /* renamed from: d, reason: collision with root package name */
    public final i f16846d;

    /* renamed from: e, reason: collision with root package name */
    public final long f16847e;

    /* renamed from: f, reason: collision with root package name */
    public final long f16848f;

    public k(long j, rd.m mVar, rd.b bVar, pd.d dVar, long j5, i iVar) {
        this.f16847e = j;
        this.f16844b = mVar;
        this.f16845c = bVar;
        this.f16848f = j5;
        this.a = dVar;
        this.f16846d = iVar;
    }

    public final k a(long j, rd.m mVar) {
        long m5;
        long m6;
        i c6 = this.f16844b.c();
        i c8 = mVar.c();
        if (c6 == null) {
            return new k(j, mVar, this.f16845c, this.a, this.f16848f, c6);
        }
        if (!c6.v()) {
            return new k(j, mVar, this.f16845c, this.a, this.f16848f, c8);
        }
        long z5 = c6.z(j);
        if (z5 == 0) {
            return new k(j, mVar, this.f16845c, this.a, this.f16848f, c8);
        }
        long w5 = c6.w();
        long b10 = c6.b(w5);
        long j5 = z5 + w5;
        long j7 = j5 - 1;
        long e9 = c6.e(j7, j) + c6.b(j7);
        long w6 = c8.w();
        long b11 = c8.b(w6);
        long j10 = this.f16848f;
        if (e9 == b11) {
            m5 = j5 - w6;
        } else {
            if (e9 < b11) {
                throw new nd.b();
            }
            if (b11 < b10) {
                m6 = j10 - (c8.m(b10, j) - w5);
                return new k(j, mVar, this.f16845c, this.a, m6, c8);
            }
            m5 = c6.m(b11, j) - w6;
        }
        m6 = m5 + j10;
        return new k(j, mVar, this.f16845c, this.a, m6, c8);
    }

    public final long b(long j) {
        i iVar = this.f16846d;
        long j5 = this.f16847e;
        return (iVar.B(j5, j) + (iVar.f(j5, j) + this.f16848f)) - 1;
    }

    public final long c(long j) {
        return this.f16846d.e(j - this.f16848f, this.f16847e) + d(j);
    }

    public final long d(long j) {
        return this.f16846d.b(j - this.f16848f);
    }
}
