package ni;

/* loaded from: classes3.dex */
public final class i {
    public final q a;

    /* renamed from: b, reason: collision with root package name */
    public final int f15497b;

    /* renamed from: c, reason: collision with root package name */
    public final int f15498c;

    public i(int i5, int i6, Class cls) {
        this(q.a(cls), i5, i6);
    }

    public static i a(Class cls) {
        return new i(1, 0, cls);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return this.a.equals(iVar.a) && this.f15497b == iVar.f15497b && this.f15498c == iVar.f15498c;
    }

    public final int hashCode() {
        return ((((this.a.hashCode() ^ 1000003) * 1000003) ^ this.f15497b) * 1000003) ^ this.f15498c;
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder("Dependency{anInterface=");
        sb2.append(this.a);
        sb2.append(", type=");
        int i5 = this.f15497b;
        sb2.append(i5 == 1 ? "required" : i5 == 0 ? "optional" : "set");
        sb2.append(", injection=");
        int i6 = this.f15498c;
        if (i6 == 0) {
            str = "direct";
        } else if (i6 == 1) {
            str = "provider";
        } else {
            if (i6 != 2) {
                throw new AssertionError(k0.d.i(i6, "Unsupported injection: "));
            }
            str = "deferred";
        }
        return com.discord.chat.bridge.botuikit.a.j(sb2, str, "}");
    }

    public i(q qVar, int i5, int i6) {
        this.a = qVar;
        this.f15497b = i5;
        this.f15498c = i6;
    }
}
