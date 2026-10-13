package wl;

/* loaded from: classes3.dex */
public final class a {
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final double f19880b;

    public a(double d6, double d7) {
        this.a = d6;
        this.f19880b = d7;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Double.compare(this.a, aVar.a) == 0 && Double.compare(this.f19880b, aVar.f19880b) == 0;
    }

    public final int hashCode() {
        return Double.hashCode(this.f19880b) + (Double.hashCode(this.a) * 31);
    }

    public final String toString() {
        return "Dimensions(width=" + this.a + ", height=" + this.f19880b + ")";
    }
}
