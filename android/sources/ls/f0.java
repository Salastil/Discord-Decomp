package ls;

/* loaded from: classes3.dex */
public final class f0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Class f14234b;

    public f0(Class cls, String str) {
        this.a = str;
        this.f14234b = cls;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof f0) {
            f0 f0Var = (f0) obj;
            if (this.a.equals(f0Var.a) && this.f14234b.equals(f0Var.f14234b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(this.f14234b, sb2, "@");
        sb2.append(this.a);
        return sb2.toString();
    }
}
