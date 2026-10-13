package qc;

/* loaded from: classes3.dex */
public final class a implements s {
    public final c a;

    /* renamed from: b, reason: collision with root package name */
    public final long f16750b;

    /* renamed from: c, reason: collision with root package name */
    public final long f16751c;

    /* renamed from: d, reason: collision with root package name */
    public final long f16752d;

    /* renamed from: e, reason: collision with root package name */
    public final long f16753e;

    /* renamed from: f, reason: collision with root package name */
    public final long f16754f;

    public a(c cVar, long j, long j5, long j7, long j10, long j11) {
        this.a = cVar;
        this.f16750b = j;
        this.f16751c = j5;
        this.f16752d = j7;
        this.f16753e = j10;
        this.f16754f = j11;
    }

    @Override // qc.s
    public final boolean d() {
        return true;
    }

    @Override // qc.s
    public final r h(long j) {
        t tVar = new t(j, b.a(this.a.b(j), 0L, this.f16751c, this.f16752d, this.f16753e, this.f16754f));
        return new r(tVar, tVar);
    }

    @Override // qc.s
    public final long i() {
        return this.f16750b;
    }
}
