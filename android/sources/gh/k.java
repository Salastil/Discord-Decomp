package gh;

/* loaded from: classes3.dex */
public final class k {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f9288b;

    /* renamed from: c, reason: collision with root package name */
    public float f9289c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f9290d;

    /* renamed from: e, reason: collision with root package name */
    public int[] f9291e;

    /* renamed from: f, reason: collision with root package name */
    public int f9292f;

    /* renamed from: g, reason: collision with root package name */
    public int f9293g;

    /* renamed from: h, reason: collision with root package name */
    public int f9294h;

    /* renamed from: i, reason: collision with root package name */
    public int f9295i;
    public int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public int f9296l;

    /* renamed from: m, reason: collision with root package name */
    public int f9297m;

    /* renamed from: n, reason: collision with root package name */
    public float f9298n;

    /* renamed from: o, reason: collision with root package name */
    public int f9299o;

    /* renamed from: p, reason: collision with root package name */
    public int f9300p;

    /* renamed from: q, reason: collision with root package name */
    public int f9301q;

    /* renamed from: r, reason: collision with root package name */
    public int f9302r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f9303s;

    public final boolean a(boolean z5) {
        if (this.f9296l <= 0) {
            return false;
        }
        if (z5 || this.k <= 0) {
            return z5 && this.j > 0;
        }
        return true;
    }

    public final void b() {
        if (this.f9295i < 0) {
            throw new IllegalArgumentException("indicatorTrackGapSize must be >= 0.");
        }
    }
}
