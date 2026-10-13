package q4;

import android.graphics.PointF;

/* loaded from: classes.dex */
public final class b {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public String f16663b;

    /* renamed from: c, reason: collision with root package name */
    public float f16664c;

    /* renamed from: d, reason: collision with root package name */
    public int f16665d;

    /* renamed from: e, reason: collision with root package name */
    public int f16666e;

    /* renamed from: f, reason: collision with root package name */
    public float f16667f;

    /* renamed from: g, reason: collision with root package name */
    public float f16668g;

    /* renamed from: h, reason: collision with root package name */
    public int f16669h;

    /* renamed from: i, reason: collision with root package name */
    public int f16670i;
    public float j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public PointF f16671l;

    /* renamed from: m, reason: collision with root package name */
    public PointF f16672m;

    public final int hashCode() {
        int b10 = ((f0.e.b(this.f16665d) + (((int) (a3.e.d(this.a.hashCode() * 31, 31, this.f16663b) + this.f16664c)) * 31)) * 31) + this.f16666e;
        long floatToRawIntBits = Float.floatToRawIntBits(this.f16667f);
        return (((b10 * 31) + ((int) (floatToRawIntBits ^ (floatToRawIntBits >>> 32)))) * 31) + this.f16669h;
    }
}
