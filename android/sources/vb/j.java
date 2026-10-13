package vb;

/* loaded from: classes3.dex */
public final class j extends q {
    public final h a;

    public j(h hVar) {
        this.a = hVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof q)) {
            return false;
        }
        q qVar = (q) obj;
        Object obj2 = p.f19314d;
        if (obj2.equals(obj2)) {
            return this.a.equals(((j) qVar).a);
        }
        return false;
    }

    public final int hashCode() {
        return ((p.f19314d.hashCode() ^ 1000003) * 1000003) ^ this.a.hashCode();
    }

    public final String toString() {
        return "ClientInfo{clientType=" + p.f19314d + ", androidClientInfo=" + this.a + "}";
    }
}
