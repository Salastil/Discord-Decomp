package mn;

/* loaded from: classes3.dex */
public final class e {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f14566b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f14567c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f14568d;

    public e(boolean z5, boolean z6, boolean z7, boolean z8) {
        this.a = z5;
        this.f14566b = z6;
        this.f14567c = z7;
        this.f14568d = z8;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return this.a == eVar.a && this.f14566b == eVar.f14566b && this.f14567c == eVar.f14567c && this.f14568d == eVar.f14568d;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f14568d) + k0.d.d(k0.d.d(Boolean.hashCode(this.a) * 31, 31, this.f14566b), 31, this.f14567c);
    }

    public final String toString() {
        return "SafeAreaViewEdges(left=" + this.a + ", top=" + this.f14566b + ", right=" + this.f14567c + ", bottom=" + this.f14568d + ")";
    }
}
