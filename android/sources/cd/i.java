package cd;

/* loaded from: classes3.dex */
public final class i {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public long f3434b;

    /* renamed from: c, reason: collision with root package name */
    public long f3435c;

    public synchronized long a() {
        return this.f3434b;
    }

    public synchronized void b(long j, long j5) {
        if (this.a) {
            this.f3434b += j;
            this.f3435c += j5;
        }
    }
}
