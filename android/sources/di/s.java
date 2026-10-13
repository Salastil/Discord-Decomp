package di;

/* loaded from: classes3.dex */
public final class s {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final long f7602b;

    public s(int i5, long j) {
        this.a = i5;
        this.f7602b = j;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof s)) {
            return false;
        }
        s sVar = (s) obj;
        return this.a == sVar.a && this.f7602b == sVar.f7602b;
    }

    public final int hashCode() {
        long j = this.f7602b;
        return ((int) ((j >>> 32) ^ j)) ^ ((this.a ^ 1000003) * 1000003);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("EventRecord{eventType=");
        sb2.append(this.a);
        sb2.append(", eventTimestamp=");
        return a3.e.m(sb2, this.f7602b, "}");
    }
}
