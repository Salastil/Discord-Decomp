package androidx.core.widget;

/* loaded from: classes.dex */
public final class a {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f1667b;

    /* renamed from: c, reason: collision with root package name */
    public float f1668c;

    /* renamed from: d, reason: collision with root package name */
    public float f1669d;

    /* renamed from: e, reason: collision with root package name */
    public long f1670e;

    /* renamed from: f, reason: collision with root package name */
    public long f1671f;

    /* renamed from: g, reason: collision with root package name */
    public long f1672g;

    /* renamed from: h, reason: collision with root package name */
    public float f1673h;

    /* renamed from: i, reason: collision with root package name */
    public int f1674i;

    public final float a(long j) {
        if (j < this.f1670e) {
            return 0.0f;
        }
        long j5 = this.f1672g;
        if (j5 < 0 || j < j5) {
            return d.b((j - r0) / this.a, 0.0f, 1.0f) * 0.5f;
        }
        float f2 = this.f1673h;
        return (d.b((j - j5) / this.f1674i, 0.0f, 1.0f) * f2) + (1.0f - f2);
    }
}
