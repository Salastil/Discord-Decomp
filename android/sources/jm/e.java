package jm;

/* loaded from: classes3.dex */
public final class e {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public float f12868b;

    /* renamed from: c, reason: collision with root package name */
    public float f12869c;

    /* renamed from: d, reason: collision with root package name */
    public float f12870d;

    /* renamed from: e, reason: collision with root package name */
    public float f12871e;

    public e(float f2, float f10, float f11, float f12, int i5) {
        this.a = i5;
        this.f12868b = f2;
        this.f12869c = f10;
        this.f12870d = f11;
        this.f12871e = f12;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return this.a == eVar.a && Float.compare(this.f12868b, eVar.f12868b) == 0 && Float.compare(this.f12869c, eVar.f12869c) == 0 && Float.compare(this.f12870d, eVar.f12870d) == 0 && Float.compare(this.f12871e, eVar.f12871e) == 0;
    }

    public final int hashCode() {
        return Float.hashCode(this.f12871e) + a3.e.a(a3.e.a(a3.e.a(Integer.hashCode(this.a) * 31, 31, this.f12868b), 31, this.f12869c), 31, this.f12870d);
    }

    public final String toString() {
        return "PointerData(pointerId=" + this.a + ", x=" + this.f12868b + ", y=" + this.f12869c + ", absoluteX=" + this.f12870d + ", absoluteY=" + this.f12871e + ")";
    }
}
