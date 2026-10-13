package rd;

/* loaded from: classes3.dex */
public final class q {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f17265b;

    public q(long j, long j5) {
        this.a = j;
        this.f17265b = j5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && q.class == obj.getClass()) {
            q qVar = (q) obj;
            if (this.a == qVar.a && this.f17265b == qVar.f17265b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((int) this.a) * 31) + ((int) this.f17265b);
    }
}
