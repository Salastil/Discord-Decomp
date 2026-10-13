package d0;

/* loaded from: classes.dex */
public final class r {
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f7397b;

    public r(float f2, float f10) {
        this.a = f2;
        this.f7397b = f10;
    }

    public final float[] a() {
        float f2 = this.a;
        float f10 = this.f7397b;
        return new float[]{f2 / f10, 1.0f, ((1.0f - f2) - f10) / f10};
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof r)) {
            return false;
        }
        r rVar = (r) obj;
        return Float.compare(this.a, rVar.a) == 0 && Float.compare(this.f7397b, rVar.f7397b) == 0;
    }

    public final int hashCode() {
        return Float.hashCode(this.f7397b) + (Float.hashCode(this.a) * 31);
    }

    public final String toString() {
        return "WhitePoint(x=" + this.a + ", y=" + this.f7397b + ')';
    }
}
