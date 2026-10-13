package ni;

/* loaded from: classes3.dex */
public final class h {
    public final q a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f15496b;

    public h(q qVar, boolean z5) {
        this.a = qVar;
        this.f15496b = z5;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof h) {
            h hVar = (h) obj;
            if (hVar.a.equals(this.a) && hVar.f15496b == this.f15496b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((this.a.hashCode() ^ 1000003) * 1000003) ^ Boolean.valueOf(this.f15496b).hashCode();
    }
}
