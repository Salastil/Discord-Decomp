package h5;

/* loaded from: classes.dex */
public final class s {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f9558b;

    /* renamed from: c, reason: collision with root package name */
    public final int f9559c;

    /* renamed from: d, reason: collision with root package name */
    public final int f9560d;

    public s(int i5, int i6, int i10, int i11) {
        this.a = i5;
        this.f9558b = i6;
        this.f9559c = i10;
        this.f9560d = i11;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof s) {
            s sVar = (s) obj;
            if (this.a == sVar.a && this.f9558b == sVar.f9558b && this.f9559c == sVar.f9559c && this.f9560d == sVar.f9560d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (((((this.a * 31) + this.f9558b) * 31) + this.f9559c) * 31) + this.f9560d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("[(");
        sb2.append(this.a);
        sb2.append("; ");
        sb2.append(this.f9558b);
        sb2.append(") - (");
        sb2.append(this.f9559c);
        sb2.append("; ");
        return k0.d.m(sb2, this.f9560d, ")]");
    }
}
