package ge;

/* loaded from: classes3.dex */
public final class a {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f9156b;

    public a(long j, long j5) {
        this.a = j;
        this.f9156b = j5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return this.a == aVar.a && this.f9156b == aVar.f9156b;
    }

    public final int hashCode() {
        return (((int) this.a) * 31) + ((int) this.f9156b);
    }
}
