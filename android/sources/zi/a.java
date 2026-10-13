package zi;

/* loaded from: classes3.dex */
public final class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long f21249b;

    /* renamed from: c, reason: collision with root package name */
    public final long f21250c;

    public a(long j, long j5, String str) {
        this.a = str;
        this.f21249b = j;
        this.f21250c = j5;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (this.a.equals(aVar.a) && this.f21249b == aVar.f21249b && this.f21250c == aVar.f21250c) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = (this.a.hashCode() ^ 1000003) * 1000003;
        long j = this.f21249b;
        long j5 = this.f21250c;
        return ((hashCode ^ ((int) (j ^ (j >>> 32)))) * 1000003) ^ ((int) (j5 ^ (j5 >>> 32)));
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("InstallationTokenResult{token=");
        sb2.append(this.a);
        sb2.append(", tokenExpirationTimestamp=");
        sb2.append(this.f21249b);
        sb2.append(", tokenCreationTimestamp=");
        return a3.e.m(sb2, this.f21250c, "}");
    }
}
