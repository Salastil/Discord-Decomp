package dc;

/* loaded from: classes3.dex */
public final class b {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final wb.i f7471b;

    /* renamed from: c, reason: collision with root package name */
    public final wb.h f7472c;

    public b(long j, wb.i iVar, wb.h hVar) {
        this.a = j;
        this.f7471b = iVar;
        this.f7472c = hVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.a == bVar.a && this.f7471b.equals(bVar.f7471b) && this.f7472c.equals(bVar.f7472c);
    }

    public final int hashCode() {
        long j = this.a;
        return ((((((int) ((j >>> 32) ^ j)) ^ 1000003) * 1000003) ^ this.f7471b.hashCode()) * 1000003) ^ this.f7472c.hashCode();
    }

    public final String toString() {
        return "PersistedEvent{id=" + this.a + ", transportContext=" + this.f7471b + ", event=" + this.f7472c + "}";
    }
}
