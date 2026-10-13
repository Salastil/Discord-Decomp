package d0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j extends c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7369d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ j(long j, String str, int i5, int i6) {
        super(str, j, i5);
        this.f7369d = i6;
    }

    public static float g(float f2) {
        return yo.j.c(f2, -2.0f, 2.0f);
    }

    @Override // d0.c
    public final float a(int i5) {
        switch (this.f7369d) {
            case 0:
                return i5 == 0 ? 100.0f : 128.0f;
            default:
                return 2.0f;
        }
    }

    @Override // d0.c
    public final float b(int i5) {
        switch (this.f7369d) {
            case 0:
                return i5 == 0 ? 0.0f : -128.0f;
            default:
                return -2.0f;
        }
    }

    @Override // d0.c
    public final long d(float f2, float f10, float f11) {
        switch (this.f7369d) {
            case 0:
                float c6 = (yo.j.c(f2, 0.0f, 100.0f) + 16.0f) / 116.0f;
                float c8 = (yo.j.c(f2, -128.0f, 128.0f) * 0.002f) + c6;
                float f12 = c8 > 0.20689656f ? c8 * c8 * c8 : (c8 - 0.13793103f) * 0.12841855f;
                float f13 = c6 > 0.20689656f ? c6 * c6 * c6 : (c6 - 0.13793103f) * 0.12841855f;
                float[] fArr = i.f7368e;
                return (Float.floatToIntBits(f12 * fArr[0]) << 32) | (Float.floatToIntBits(f13 * fArr[1]) & 4294967295L);
            default:
                float g6 = g(f2);
                return (Float.floatToIntBits(g(f10)) & 4294967295L) | (Float.floatToIntBits(g6) << 32);
        }
    }

    @Override // d0.c
    public final float e(float f2, float f10, float f11) {
        switch (this.f7369d) {
            case 0:
                float c6 = ((yo.j.c(f2, 0.0f, 100.0f) + 16.0f) / 116.0f) - (yo.j.c(f11, -128.0f, 128.0f) * 0.005f);
                return (c6 > 0.20689656f ? c6 * c6 * c6 : 0.12841855f * (c6 - 0.13793103f)) * i.f7368e[2];
            default:
                return g(f11);
        }
    }

    @Override // d0.c
    public final long f(float f2, float f10, float f11, float f12, c colorSpace) {
        switch (this.f7369d) {
            case 0:
                Intrinsics.checkNotNullParameter(colorSpace, "colorSpace");
                float[] fArr = i.f7368e;
                float f13 = f2 / fArr[0];
                float f14 = f10 / fArr[1];
                float f15 = f11 / fArr[2];
                float pow = f13 > 0.008856452f ? (float) Math.pow(f13, 0.33333334f) : (f13 * 7.787037f) + 0.13793103f;
                float pow2 = f14 > 0.008856452f ? (float) Math.pow(f14, 0.33333334f) : (f14 * 7.787037f) + 0.13793103f;
                return io.sentry.config.a.a(yo.j.c((116.0f * pow2) - 16.0f, 0.0f, 100.0f), yo.j.c((pow - pow2) * 500.0f, -128.0f, 128.0f), yo.j.c((pow2 - (f15 > 0.008856452f ? (float) Math.pow(f15, 0.33333334f) : (f15 * 7.787037f) + 0.13793103f)) * 200.0f, -128.0f, 128.0f), f12, colorSpace);
            default:
                Intrinsics.checkNotNullParameter(colorSpace, "colorSpace");
                return io.sentry.config.a.a(g(f2), g(f10), g(f11), f12, colorSpace);
        }
    }
}
