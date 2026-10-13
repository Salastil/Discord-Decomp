package androidx.recyclerview.widget;

/* loaded from: classes.dex */
public final class a {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f2355b;

    /* renamed from: c, reason: collision with root package name */
    public Object f2356c;

    /* renamed from: d, reason: collision with root package name */
    public int f2357d;

    public final boolean equals(Object obj) {
        if (this != obj) {
            if (!(obj instanceof a)) {
                return false;
            }
            a aVar = (a) obj;
            int i5 = this.a;
            if (i5 != aVar.a) {
                return false;
            }
            if (i5 != 8 || Math.abs(this.f2357d - this.f2355b) != 1 || this.f2357d != aVar.f2355b || this.f2355b != aVar.f2357d) {
                if (this.f2357d != aVar.f2357d || this.f2355b != aVar.f2355b) {
                    return false;
                }
                Object obj2 = this.f2356c;
                if (obj2 != null) {
                    if (!obj2.equals(aVar.f2356c)) {
                        return false;
                    }
                } else if (aVar.f2356c != null) {
                    return false;
                }
            }
        }
        return true;
    }

    public final int hashCode() {
        return (((this.a * 31) + this.f2355b) * 31) + this.f2357d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(Integer.toHexString(System.identityHashCode(this)));
        sb2.append("[");
        int i5 = this.a;
        sb2.append(i5 != 1 ? i5 != 2 ? i5 != 4 ? i5 != 8 ? "??" : "mv" : "up" : "rm" : "add");
        sb2.append(",s:");
        sb2.append(this.f2355b);
        sb2.append("c:");
        sb2.append(this.f2357d);
        sb2.append(",p:");
        sb2.append(this.f2356c);
        sb2.append("]");
        return sb2.toString();
    }
}
