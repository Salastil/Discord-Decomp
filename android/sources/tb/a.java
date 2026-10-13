package tb;

/* loaded from: classes3.dex */
public final class a {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final b f18248b;

    public a(Object obj, b bVar) {
        this.a = obj;
        this.f18248b = bVar;
    }

    public final boolean equals(Object obj) {
        b bVar;
        if (obj == this) {
            return true;
        }
        if (obj instanceof a) {
            a aVar = (a) obj;
            b bVar2 = aVar.f18248b;
            if (this.a.equals(aVar.a)) {
                Object obj2 = d.f18249d;
                if (obj2.equals(obj2) && ((bVar = this.f18248b) != null ? bVar.equals(bVar2) : bVar2 == null)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = ((((1000003 * 1000003) ^ this.a.hashCode()) * 1000003) ^ d.f18249d.hashCode()) * 1000003;
        b bVar = this.f18248b;
        return (bVar == null ? 0 : bVar.hashCode()) ^ hashCode;
    }

    public final String toString() {
        return "Event{code=null, payload=" + this.a + ", priority=" + d.f18249d + ", productData=" + this.f18248b + "}";
    }
}
