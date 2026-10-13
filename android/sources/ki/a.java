package ki;

/* loaded from: classes3.dex */
public final class a {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f13377b;

    /* renamed from: c, reason: collision with root package name */
    public final long f13378c;

    public a(long j, long j5, long j7) {
        this.a = j;
        this.f13377b = j5;
        this.f13378c = j7;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (this.a == aVar.a && this.f13377b == aVar.f13377b && this.f13378c == aVar.f13378c) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        long j = this.a;
        long j5 = this.f13377b;
        int i5 = (((((int) (j ^ (j >>> 32))) ^ 1000003) * 1000003) ^ ((int) (j5 ^ (j5 >>> 32)))) * 1000003;
        long j7 = this.f13378c;
        return i5 ^ ((int) ((j7 >>> 32) ^ j7));
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("StartupTime{epochMillis=");
        sb2.append(this.a);
        sb2.append(", elapsedRealtime=");
        sb2.append(this.f13377b);
        sb2.append(", uptimeMillis=");
        return a3.e.m(sb2, this.f13378c, "}");
    }
}
