package qn;

/* loaded from: classes3.dex */
public final class b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f16912b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f16913c;

    public b(int i5, boolean z5, boolean z6) {
        this.a = i5;
        this.f16912b = z5;
        this.f16913c = z6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.a == bVar.a && this.f16912b == bVar.f16912b && this.f16913c == bVar.f16913c;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f16913c) + k0.d.d(Integer.hashCode(this.a) * 31, 31, this.f16912b);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("CacheKey(fontSize=");
        sb2.append(this.a);
        sb2.append(", isTitleEmpty=");
        sb2.append(this.f16912b);
        sb2.append(", applyTopInset=");
        return com.discord.chat.bridge.botuikit.a.l(sb2, this.f16913c, ")");
    }
}
