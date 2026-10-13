package tn;

/* loaded from: classes3.dex */
public final class b {
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f18659b;

    /* renamed from: c, reason: collision with root package name */
    public final float f18660c;

    /* renamed from: d, reason: collision with root package name */
    public final float f18661d;

    public b(float f2, float f10, float f11, float f12) {
        this.a = f2;
        this.f18659b = f10;
        this.f18660c = f11;
        this.f18661d = f12;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return Float.compare(this.a, bVar.a) == 0 && Float.compare(this.f18659b, bVar.f18659b) == 0 && Float.compare(this.f18660c, bVar.f18660c) == 0 && Float.compare(this.f18661d, bVar.f18661d) == 0;
    }

    public final int hashCode() {
        return Float.hashCode(this.f18661d) + a3.e.a(a3.e.a(Float.hashCode(this.a) * 31, 31, this.f18659b), 31, this.f18660c);
    }

    public final String toString() {
        return "Rect(x=" + this.a + ", y=" + this.f18659b + ", width=" + this.f18660c + ", height=" + this.f18661d + ")";
    }
}
