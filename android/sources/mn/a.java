package mn;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final a f14551e = new a(0.0f, 0.0f, 0.0f, 0.0f);
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f14552b;

    /* renamed from: c, reason: collision with root package name */
    public final float f14553c;

    /* renamed from: d, reason: collision with root package name */
    public final float f14554d;

    public a(float f2, float f10, float f11, float f12) {
        this.a = f2;
        this.f14552b = f10;
        this.f14553c = f11;
        this.f14554d = f12;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Float.compare(this.a, aVar.a) == 0 && Float.compare(this.f14552b, aVar.f14552b) == 0 && Float.compare(this.f14553c, aVar.f14553c) == 0 && Float.compare(this.f14554d, aVar.f14554d) == 0;
    }

    public final int hashCode() {
        return Float.hashCode(this.f14554d) + a3.e.a(a3.e.a(Float.hashCode(this.a) * 31, 31, this.f14552b), 31, this.f14553c);
    }

    public final String toString() {
        return "EdgeInsets(left=" + this.a + ", top=" + this.f14552b + ", right=" + this.f14553c + ", bottom=" + this.f14554d + ")";
    }
}
