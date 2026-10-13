package rd;

/* loaded from: classes3.dex */
public final class j {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f17248b;

    /* renamed from: c, reason: collision with root package name */
    public final String f17249c;

    /* renamed from: d, reason: collision with root package name */
    public int f17250d;

    public j(long j, long j5, String str) {
        this.f17249c = str == null ? "" : str;
        this.a = j;
        this.f17248b = j5;
    }

    public final j a(j jVar, String str) {
        j jVar2;
        long j;
        String J = ke.b.J(str, this.f17249c);
        if (jVar != null) {
            long j5 = jVar.f17248b;
            if (J.equals(ke.b.J(str, jVar.f17249c))) {
                long j7 = this.f17248b;
                if (j7 != -1) {
                    j = j5;
                    long j10 = this.a;
                    jVar2 = null;
                    if (j10 + j7 == jVar.a) {
                        return new j(j10, j != -1 ? j7 + j : -1L, J);
                    }
                } else {
                    jVar2 = null;
                    j = j5;
                }
                if (j == -1) {
                    return jVar2;
                }
                long j11 = jVar.a;
                if (j11 + j == this.a) {
                    return new j(j11, j7 != -1 ? j + j7 : -1L, J);
                }
                return jVar2;
            }
        }
        return null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && j.class == obj.getClass()) {
            j jVar = (j) obj;
            if (this.a == jVar.a && this.f17248b == jVar.f17248b && this.f17249c.equals(jVar.f17249c)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f17250d == 0) {
            this.f17250d = this.f17249c.hashCode() + ((((527 + ((int) this.a)) * 31) + ((int) this.f17248b)) * 31);
        }
        return this.f17250d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("RangedUri(referenceUri=");
        sb2.append(this.f17249c);
        sb2.append(", start=");
        sb2.append(this.a);
        sb2.append(", length=");
        return a3.e.m(sb2, this.f17248b, ")");
    }
}
