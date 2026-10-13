package xb;

/* loaded from: classes3.dex */
public final class a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final long f20295b;

    public a(int i5, long j) {
        if (i5 == 0) {
            throw new NullPointerException("Null status");
        }
        this.a = i5;
        this.f20295b = j;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return f0.e.a(this.a, aVar.a) && this.f20295b == aVar.f20295b;
    }

    public final int hashCode() {
        int b10 = (f0.e.b(this.a) ^ 1000003) * 1000003;
        long j = this.f20295b;
        return b10 ^ ((int) ((j >>> 32) ^ j));
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("BackendResponse{status=");
        int i5 = this.a;
        sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? "null" : "INVALID_PAYLOAD" : "FATAL_ERROR" : "TRANSIENT_ERROR" : "OK");
        sb2.append(", nextRequestWaitMillis=");
        return a3.e.m(sb2, this.f20295b, "}");
    }
}
