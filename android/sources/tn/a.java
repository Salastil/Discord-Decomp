package tn;

/* loaded from: classes3.dex */
public final class a {
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f18656b;

    /* renamed from: c, reason: collision with root package name */
    public final float f18657c;

    /* renamed from: d, reason: collision with root package name */
    public final float f18658d;

    public a(float f2, float f10, float f11, float f12) {
        this.a = f2;
        this.f18656b = f10;
        this.f18657c = f11;
        this.f18658d = f12;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Float.compare(this.a, aVar.a) == 0 && Float.compare(this.f18656b, aVar.f18656b) == 0 && Float.compare(this.f18657c, aVar.f18657c) == 0 && Float.compare(this.f18658d, aVar.f18658d) == 0;
    }

    public final int hashCode() {
        return Float.hashCode(this.f18658d) + a3.e.a(a3.e.a(Float.hashCode(this.a) * 31, 31, this.f18656b), 31, this.f18657c);
    }

    public final String toString() {
        return "EdgeInsets(top=" + this.a + ", right=" + this.f18656b + ", bottom=" + this.f18657c + ", left=" + this.f18658d + ")";
    }
}
