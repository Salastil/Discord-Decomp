package wl;

/* loaded from: classes3.dex */
public final class i {
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final double f19892b;

    /* renamed from: c, reason: collision with root package name */
    public final int f19893c;

    /* renamed from: d, reason: collision with root package name */
    public final int f19894d;

    public i(double d6, double d7, int i5, int i6) {
        this.a = d6;
        this.f19892b = d7;
        this.f19893c = i5;
        this.f19894d = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return Double.compare(this.a, iVar.a) == 0 && Double.compare(this.f19892b, iVar.f19892b) == 0 && this.f19893c == iVar.f19893c && this.f19894d == iVar.f19894d;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f19894d) + com.discord.chat.bridge.botuikit.a.u(this.f19893c, com.discord.chat.bridge.botuikit.a.c(Double.hashCode(this.a) * 31, this.f19892b, 31), 31);
    }

    public final String toString() {
        return "PendingKeyboardStartEvent(keyboardHeight=" + this.a + ", progress=" + this.f19892b + ", duration=" + this.f19893c + ", target=" + this.f19894d + ")";
    }
}
