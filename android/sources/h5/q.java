package h5;

/* loaded from: classes.dex */
public final class q {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f9557b;

    public q(int i5, int i6) {
        this.a = i5;
        this.f9557b = i6;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof q) {
            q qVar = (q) obj;
            if (this.a == qVar.a && this.f9557b == qVar.f9557b) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.f9557b;
        return ((i5 >>> 16) | (i5 << 16)) ^ this.a;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("(");
        sb2.append(this.a);
        sb2.append("; ");
        return k0.d.m(sb2, this.f9557b, ")");
    }
}
