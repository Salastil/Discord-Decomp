package d0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class i {
    public static final r a = new r(0.31006f, 0.31616f);

    /* renamed from: b, reason: collision with root package name */
    public static final r f7365b = new r(0.34567f, 0.3585f);

    /* renamed from: c, reason: collision with root package name */
    public static final r f7366c = new r(0.32168f, 0.33767f);

    /* renamed from: d, reason: collision with root package name */
    public static final r f7367d = new r(0.31271f, 0.32902f);

    /* renamed from: e, reason: collision with root package name */
    public static final float[] f7368e = {0.964212f, 1.0f, 0.825188f};

    public static c a(c cVar) {
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        r whitePoint = f7365b;
        Intrinsics.checkNotNullParameter(whitePoint, "whitePoint");
        a adaptation = a.f7345b;
        Intrinsics.checkNotNullParameter(adaptation, "adaptation");
        if (b.a(cVar.f7350b, b.a)) {
            p colorSpace = (p) cVar;
            r rVar = colorSpace.f7383d;
            if (!d(rVar, whitePoint)) {
                float[] transform = g(c(adaptation.a, rVar.a(), whitePoint.a()), colorSpace.f7388i);
                Intrinsics.checkNotNullParameter(colorSpace, "colorSpace");
                Intrinsics.checkNotNullParameter(transform, "transform");
                Intrinsics.checkNotNullParameter(whitePoint, "whitePoint");
                return new p(colorSpace.a, colorSpace.f7387h, whitePoint, transform, colorSpace.k, colorSpace.f7390m, colorSpace.f7384e, colorSpace.f7385f, colorSpace.f7386g, -1);
            }
        }
        return cVar;
    }

    public static float b(float[] fArr) {
        float f2 = fArr[0];
        float f10 = fArr[1];
        float f11 = fArr[2];
        float f12 = fArr[3];
        float f13 = fArr[4];
        float f14 = fArr[5];
        float f15 = (((((f11 * f14) + ((f10 * f13) + (f2 * f12))) - (f12 * f13)) - (f10 * f11)) - (f2 * f14)) * 0.5f;
        return f15 < 0.0f ? -f15 : f15;
    }

    public static final float[] c(float[] rhs, float[] srcWhitePoint, float[] dstWhitePoint) {
        Intrinsics.checkNotNullParameter(rhs, "matrix");
        Intrinsics.checkNotNullParameter(srcWhitePoint, "srcWhitePoint");
        Intrinsics.checkNotNullParameter(dstWhitePoint, "dstWhitePoint");
        h(rhs, srcWhitePoint);
        h(rhs, dstWhitePoint);
        float[] lhs = {dstWhitePoint[0] / srcWhitePoint[0], dstWhitePoint[1] / srcWhitePoint[1], dstWhitePoint[2] / srcWhitePoint[2]};
        float[] f2 = f(rhs);
        Intrinsics.checkNotNullParameter(lhs, "lhs");
        Intrinsics.checkNotNullParameter(rhs, "rhs");
        float f10 = lhs[0];
        float f11 = rhs[0] * f10;
        float f12 = lhs[1];
        float f13 = rhs[1] * f12;
        float f14 = lhs[2];
        return g(f2, new float[]{f11, f13, rhs[2] * f14, rhs[3] * f10, rhs[4] * f12, rhs[5] * f14, f10 * rhs[6], f12 * rhs[7], f14 * rhs[8]});
    }

    public static final boolean d(r a10, r b10) {
        Intrinsics.checkNotNullParameter(a10, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        if (a10 == b10) {
            return true;
        }
        return Math.abs(a10.a - b10.a) < 0.001f && Math.abs(a10.f7397b - b10.f7397b) < 0.001f;
    }

    public static float e(float f2, float f10, float f11, float f12) {
        return (f2 * f12) - (f10 * f11);
    }

    public static final float[] f(float[] m5) {
        Intrinsics.checkNotNullParameter(m5, "m");
        float f2 = m5[0];
        float f10 = m5[3];
        float f11 = m5[6];
        float f12 = m5[1];
        float f13 = m5[4];
        float f14 = m5[7];
        float f15 = m5[2];
        float f16 = m5[5];
        float f17 = m5[8];
        float f18 = (f13 * f17) - (f14 * f16);
        float f19 = (f14 * f15) - (f12 * f17);
        float f20 = (f12 * f16) - (f13 * f15);
        float f21 = (f11 * f20) + (f10 * f19) + (f2 * f18);
        float[] fArr = new float[m5.length];
        fArr[0] = f18 / f21;
        fArr[1] = f19 / f21;
        fArr[2] = f20 / f21;
        fArr[3] = ((f11 * f16) - (f10 * f17)) / f21;
        fArr[4] = ((f17 * f2) - (f11 * f15)) / f21;
        fArr[5] = ((f15 * f10) - (f16 * f2)) / f21;
        fArr[6] = ((f10 * f14) - (f11 * f13)) / f21;
        fArr[7] = ((f11 * f12) - (f14 * f2)) / f21;
        fArr[8] = ((f2 * f13) - (f10 * f12)) / f21;
        return fArr;
    }

    public static final float[] g(float[] lhs, float[] rhs) {
        Intrinsics.checkNotNullParameter(lhs, "lhs");
        Intrinsics.checkNotNullParameter(rhs, "rhs");
        float f2 = lhs[0];
        float f10 = rhs[0];
        float f11 = lhs[3];
        float f12 = rhs[1];
        float f13 = lhs[6];
        float f14 = rhs[2];
        float f15 = (f13 * f14) + (f11 * f12) + (f2 * f10);
        float f16 = lhs[1];
        float f17 = lhs[4];
        float f18 = lhs[7];
        float f19 = (f18 * f14) + (f17 * f12) + (f16 * f10);
        float f20 = lhs[2];
        float f21 = lhs[5];
        float f22 = lhs[8];
        float f23 = (f14 * f22) + (f12 * f21) + (f10 * f20);
        float f24 = rhs[3];
        float f25 = rhs[4];
        float f26 = rhs[5];
        float f27 = (f13 * f26) + (f11 * f25) + (f2 * f24);
        float f28 = (f18 * f26) + (f17 * f25) + (f16 * f24);
        float f29 = (f26 * f22) + (f25 * f21) + (f24 * f20);
        float f30 = rhs[6];
        float f31 = rhs[7];
        float f32 = rhs[8];
        return new float[]{f15, f19, f23, f27, f28, f29, (f13 * f32) + (f11 * f31) + (f2 * f30), (f18 * f32) + (f17 * f31) + (f16 * f30), (f22 * f32) + (f21 * f31) + (f20 * f30)};
    }

    public static final void h(float[] lhs, float[] rhs) {
        Intrinsics.checkNotNullParameter(lhs, "lhs");
        Intrinsics.checkNotNullParameter(rhs, "rhs");
        float f2 = rhs[0];
        float f10 = rhs[1];
        float f11 = rhs[2];
        rhs[0] = (lhs[6] * f11) + (lhs[3] * f10) + (lhs[0] * f2);
        rhs[1] = (lhs[7] * f11) + (lhs[4] * f10) + (lhs[1] * f2);
        rhs[2] = (lhs[8] * f11) + (lhs[5] * f10) + (lhs[2] * f2);
    }

    public static final float i(float[] lhs, float f2, float f10, float f11) {
        Intrinsics.checkNotNullParameter(lhs, "lhs");
        return (lhs[6] * f11) + (lhs[3] * f10) + (lhs[0] * f2);
    }

    public static final float j(float[] lhs, float f2, float f10, float f11) {
        Intrinsics.checkNotNullParameter(lhs, "lhs");
        return (lhs[7] * f11) + (lhs[4] * f10) + (lhs[1] * f2);
    }

    public static final float k(float[] lhs, float f2, float f10, float f11) {
        Intrinsics.checkNotNullParameter(lhs, "lhs");
        return (lhs[8] * f11) + (lhs[5] * f10) + (lhs[2] * f2);
    }
}
