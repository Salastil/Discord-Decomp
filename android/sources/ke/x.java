package ke;

/* loaded from: classes3.dex */
public final class x {

    /* renamed from: c, reason: collision with root package name */
    public static final x f13365c = new x(-1, -1);
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13366b;

    static {
        new x(0, 0);
    }

    public x(int i5, int i6) {
        b.g((i5 == -1 || i5 >= 0) && (i6 == -1 || i6 >= 0));
        this.a = i5;
        this.f13366b = i6;
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        if (obj instanceof x) {
            x xVar = (x) obj;
            if (this.a == xVar.a && this.f13366b == xVar.f13366b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.a;
        return ((i5 >>> 16) | (i5 << 16)) ^ this.f13366b;
    }

    public final String toString() {
        return this.a + "x" + this.f13366b;
    }
}
