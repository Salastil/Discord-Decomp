package vb;

/* loaded from: classes3.dex */
public final class n extends v {
    public final u a;

    /* renamed from: b, reason: collision with root package name */
    public final t f19313b;

    public n(u uVar, t tVar) {
        this.a = uVar;
        this.f19313b = tVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof v) {
            v vVar = (v) obj;
            u uVar = this.a;
            if (uVar != null ? uVar.equals(((n) vVar).a) : ((n) vVar).a == null) {
                t tVar = this.f19313b;
                if (tVar != null ? tVar.equals(((n) vVar).f19313b) : ((n) vVar).f19313b == null) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        u uVar = this.a;
        int hashCode = ((uVar == null ? 0 : uVar.hashCode()) ^ 1000003) * 1000003;
        t tVar = this.f19313b;
        return (tVar != null ? tVar.hashCode() : 0) ^ hashCode;
    }

    public final String toString() {
        return "NetworkConnectionInfo{networkType=" + this.a + ", mobileSubtype=" + this.f19313b + "}";
    }
}
