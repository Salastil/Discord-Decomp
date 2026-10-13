package jm;

/* loaded from: classes3.dex */
public final class b0 {

    /* renamed from: d, reason: collision with root package name */
    public static final b0 f12857d = new b0(-1.0d, 0.0d);

    /* renamed from: e, reason: collision with root package name */
    public static final b0 f12858e = new b0(1.0d, 0.0d);

    /* renamed from: f, reason: collision with root package name */
    public static final b0 f12859f = new b0(0.0d, -1.0d);

    /* renamed from: g, reason: collision with root package name */
    public static final b0 f12860g = new b0(0.0d, 1.0d);

    /* renamed from: h, reason: collision with root package name */
    public static final b0 f12861h = new b0(1.0d, -1.0d);

    /* renamed from: i, reason: collision with root package name */
    public static final b0 f12862i = new b0(1.0d, 1.0d);
    public static final b0 j = new b0(-1.0d, -1.0d);
    public static final b0 k = new b0(-1.0d, 1.0d);

    /* renamed from: l, reason: collision with root package name */
    public static final b0 f12863l = new b0(0.0d, 0.0d);
    public final double a;

    /* renamed from: b, reason: collision with root package name */
    public final double f12864b;

    /* renamed from: c, reason: collision with root package name */
    public final double f12865c;

    public b0(double d6, double d7) {
        double hypot = Math.hypot(d6, d7);
        this.f12865c = hypot;
        boolean z5 = hypot > 0.1d;
        this.a = z5 ? d6 / hypot : 0.0d;
        this.f12864b = z5 ? d7 / hypot : 0.0d;
    }
}
