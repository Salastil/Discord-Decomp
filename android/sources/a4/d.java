package a4;

/* loaded from: classes.dex */
public final class d {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f103b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f104c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f105d;

    public d(boolean z5, boolean z6, boolean z7, boolean z8) {
        this.a = z5;
        this.f103b = z6;
        this.f104c = z7;
        this.f105d = z8;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        return this.a == dVar.a && this.f103b == dVar.f103b && this.f104c == dVar.f104c && this.f105d == dVar.f105d;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final int hashCode() {
        boolean z5 = this.a;
        int i5 = z5;
        if (z5 != 0) {
            i5 = 1;
        }
        int i6 = i5 * 31;
        boolean z6 = this.f103b;
        int i10 = z6;
        if (z6 != 0) {
            i10 = 1;
        }
        int i11 = (i6 + i10) * 31;
        boolean z7 = this.f104c;
        int i12 = z7;
        if (z7 != 0) {
            i12 = 1;
        }
        int i13 = (i11 + i12) * 31;
        boolean z8 = this.f105d;
        return i13 + (z8 ? 1 : z8 ? 1 : 0);
    }

    public final String toString() {
        return "NetworkState(isConnected=" + this.a + ", isValidated=" + this.f103b + ", isMetered=" + this.f104c + ", isNotRoaming=" + this.f105d + ')';
    }
}
