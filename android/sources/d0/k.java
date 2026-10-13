package d0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class k extends c {

    /* renamed from: d, reason: collision with root package name */
    public static final float[] f7370d;

    /* renamed from: e, reason: collision with root package name */
    public static final float[] f7371e;

    /* renamed from: f, reason: collision with root package name */
    public static final float[] f7372f;

    /* renamed from: g, reason: collision with root package name */
    public static final float[] f7373g;

    static {
        float[] g6 = i.g(new float[]{0.818933f, 0.032984544f, 0.0482003f, 0.36186674f, 0.9293119f, 0.26436627f, -0.12885971f, 0.03614564f, 0.6338517f}, i.c(a.f7345b.a, new float[]{0.964212f, 1.0f, 0.8251883f}, new float[]{0.95042855f, 1.0f, 1.0889004f}));
        f7370d = g6;
        float[] fArr = {0.21045426f, 1.9779985f, 0.025904037f, 0.7936178f, -2.4285922f, 0.78277177f, -0.004072047f, 0.4505937f, -0.80867577f};
        f7371e = fArr;
        f7372f = i.f(g6);
        f7373g = i.f(fArr);
    }

    @Override // d0.c
    public final float a(int i5) {
        return i5 == 0 ? 1.0f : 0.5f;
    }

    @Override // d0.c
    public final float b(int i5) {
        return i5 == 0 ? 0.0f : -0.5f;
    }

    @Override // d0.c
    public final long d(float f2, float f10, float f11) {
        float c6 = yo.j.c(f2, 0.0f, 1.0f);
        float c8 = yo.j.c(f10, -0.5f, 0.5f);
        float c10 = yo.j.c(f11, -0.5f, 0.5f);
        float[] fArr = f7373g;
        float i5 = i.i(fArr, c6, c8, c10);
        float j = i.j(fArr, c6, c8, c10);
        float k = i.k(fArr, c6, c8, c10);
        float f12 = i5 * i5 * i5;
        float f13 = j * j * j;
        float f14 = k * k * k;
        float[] fArr2 = f7372f;
        float i6 = i.i(fArr2, f12, f13, f14);
        float j5 = i.j(fArr2, f12, f13, f14);
        return (Float.floatToIntBits(i6) << 32) | (Float.floatToIntBits(j5) & 4294967295L);
    }

    @Override // d0.c
    public final float e(float f2, float f10, float f11) {
        float c6 = yo.j.c(f2, 0.0f, 1.0f);
        float c8 = yo.j.c(f10, -0.5f, 0.5f);
        float c10 = yo.j.c(f11, -0.5f, 0.5f);
        float[] fArr = f7373g;
        float i5 = i.i(fArr, c6, c8, c10);
        float j = i.j(fArr, c6, c8, c10);
        float k = i.k(fArr, c6, c8, c10);
        float f12 = k * k * k;
        return i.k(f7372f, i5 * i5 * i5, j * j * j, f12);
    }

    @Override // d0.c
    public final long f(float f2, float f10, float f11, float f12, c colorSpace) {
        Intrinsics.checkNotNullParameter(colorSpace, "colorSpace");
        float[] fArr = f7370d;
        float i5 = i.i(fArr, f2, f10, f11);
        float j = i.j(fArr, f2, f10, f11);
        float k = i.k(fArr, f2, f10, f11);
        double d6 = 0.33333334f;
        float signum = Math.signum(i5) * ((float) Math.pow(Math.abs(i5), d6));
        float signum2 = Math.signum(j) * ((float) Math.pow(Math.abs(j), d6));
        float signum3 = Math.signum(k) * ((float) Math.pow(Math.abs(k), d6));
        float[] fArr2 = f7371e;
        return io.sentry.config.a.a(i.i(fArr2, signum, signum2, signum3), i.j(fArr2, signum, signum2, signum3), i.k(fArr2, signum, signum2, signum3), f12, colorSpace);
    }
}
