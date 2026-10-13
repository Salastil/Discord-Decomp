package jm;

/* loaded from: classes3.dex */
public final class k {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12912b;

    /* renamed from: c, reason: collision with root package name */
    public final int f12913c;

    public k(boolean z5, int i5, int i6) {
        this.a = z5;
        this.f12912b = i5;
        this.f12913c = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof k)) {
            return false;
        }
        k kVar = (k) obj;
        return this.a == kVar.a && this.f12912b == kVar.f12912b && this.f12913c == kVar.f12913c;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f12913c) + com.discord.chat.bridge.botuikit.a.u(this.f12912b, Boolean.hashCode(this.a) * 31, 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("ActiveUpdateSnapshot(pointerInside=");
        sb2.append(this.a);
        sb2.append(", numberOfPointers=");
        sb2.append(this.f12912b);
        sb2.append(", pointerType=");
        return k0.d.m(sb2, this.f12913c, ")");
    }
}
