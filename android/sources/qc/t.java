package qc;

/* loaded from: classes3.dex */
public final class t {

    /* renamed from: c, reason: collision with root package name */
    public static final t f16798c = new t(0, 0);
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f16799b;

    public t(long j, long j5) {
        this.a = j;
        this.f16799b = j5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && t.class == obj.getClass()) {
            t tVar = (t) obj;
            if (this.a == tVar.a && this.f16799b == tVar.f16799b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((int) this.a) * 31) + ((int) this.f16799b);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("[timeUs=");
        sb2.append(this.a);
        sb2.append(", position=");
        return a3.e.m(sb2, this.f16799b, "]");
    }
}
