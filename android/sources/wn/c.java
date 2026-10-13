package wn;

/* loaded from: classes3.dex */
public final class c {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f19969b;

    /* renamed from: c, reason: collision with root package name */
    public int f19970c;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && c.class == obj.getClass()) {
            c cVar = (c) obj;
            if (this.a == cVar.a && this.f19969b == cVar.f19969b && this.f19970c == cVar.f19970c) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((this.a * 31) + this.f19969b) * 31) + this.f19970c;
    }
}
