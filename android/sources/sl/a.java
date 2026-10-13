package sl;

/* loaded from: classes3.dex */
public final class a {
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final double f18046b;

    /* renamed from: c, reason: collision with root package name */
    public final double f18047c;

    /* renamed from: d, reason: collision with root package name */
    public final double f18048d;

    /* renamed from: e, reason: collision with root package name */
    public final double f18049e;

    /* renamed from: f, reason: collision with root package name */
    public final double f18050f;

    /* renamed from: g, reason: collision with root package name */
    public final int f18051g;

    /* renamed from: h, reason: collision with root package name */
    public final int f18052h;

    public a(double d6, double d7, double d8, double d10, double d11, double d12, int i5, int i6) {
        this.a = d6;
        this.f18046b = d7;
        this.f18047c = d8;
        this.f18048d = d10;
        this.f18049e = d11;
        this.f18050f = d12;
        this.f18051g = i5;
        this.f18052h = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Double.compare(this.a, aVar.a) == 0 && Double.compare(this.f18046b, aVar.f18046b) == 0 && Double.compare(this.f18047c, aVar.f18047c) == 0 && Double.compare(this.f18048d, aVar.f18048d) == 0 && Double.compare(this.f18049e, aVar.f18049e) == 0 && Double.compare(this.f18050f, aVar.f18050f) == 0 && this.f18051g == aVar.f18051g && this.f18052h == aVar.f18052h;
    }

    public final int hashCode() {
        return Integer.hashCode(this.f18052h) + com.discord.chat.bridge.botuikit.a.u(this.f18051g, com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(com.discord.chat.bridge.botuikit.a.c(Double.hashCode(this.a) * 31, this.f18046b, 31), this.f18047c, 31), this.f18048d, 31), this.f18049e, 31), this.f18050f, 31), 31);
    }

    public final String toString() {
        return "FocusedInputLayoutChangedEventData(x=" + this.a + ", y=" + this.f18046b + ", width=" + this.f18047c + ", height=" + this.f18048d + ", absoluteX=" + this.f18049e + ", absoluteY=" + this.f18050f + ", target=" + this.f18051g + ", parentScrollViewTarget=" + this.f18052h + ")";
    }
}
