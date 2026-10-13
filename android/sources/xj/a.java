package xj;

/* loaded from: classes3.dex */
public final class a {
    public final wj.b a;

    /* renamed from: b, reason: collision with root package name */
    public final wj.b f20490b;

    /* renamed from: c, reason: collision with root package name */
    public final wj.c f20491c;

    public a(wj.b bVar, wj.b bVar2, wj.c cVar) {
        this.a = bVar;
        this.f20490b = bVar2;
        this.f20491c = cVar;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof a) {
            a aVar = (a) obj;
            if (this.a.equals(aVar.a)) {
                wj.b bVar = aVar.f20490b;
                wj.b bVar2 = this.f20490b;
                if ((bVar2 == null ? bVar == null : bVar2.equals(bVar)) && this.f20491c.equals(aVar.f20491c)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode();
        wj.b bVar = this.f20490b;
        return (hashCode ^ (bVar == null ? 0 : bVar.hashCode())) ^ this.f20491c.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("[ ");
        sb2.append(this.a);
        sb2.append(" , ");
        sb2.append(this.f20490b);
        sb2.append(" : ");
        wj.c cVar = this.f20491c;
        sb2.append(cVar == null ? "null" : Integer.valueOf(cVar.a));
        sb2.append(" ]");
        return sb2.toString();
    }
}
