package zp;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: e, reason: collision with root package name */
    public static final d f21344e = new d(null, false);
    public final g a;

    /* renamed from: b, reason: collision with root package name */
    public final e f21345b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f21346c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f21347d;

    public d(g gVar, e eVar, boolean z5, boolean z6) {
        this.a = gVar;
        this.f21345b = eVar;
        this.f21346c = z5;
        this.f21347d = z6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        return this.a == dVar.a && this.f21345b == dVar.f21345b && this.f21346c == dVar.f21346c && this.f21347d == dVar.f21347d;
    }

    public final int hashCode() {
        g gVar = this.a;
        int hashCode = (gVar == null ? 0 : gVar.hashCode()) * 31;
        e eVar = this.f21345b;
        return Boolean.hashCode(this.f21347d) + k0.d.d((hashCode + (eVar != null ? eVar.hashCode() : 0)) * 31, 31, this.f21346c);
    }

    public final String toString() {
        return "JavaTypeQualifiers(nullability=" + this.a + ", mutability=" + this.f21345b + ", definitelyNotNull=" + this.f21346c + ", isNullabilityQualifierForWarning=" + this.f21347d + ')';
    }

    public /* synthetic */ d(g gVar, boolean z5) {
        this(gVar, null, z5, false);
    }
}
