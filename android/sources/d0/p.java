package d0;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class p extends c {

    /* renamed from: p, reason: collision with root package name */
    public static final com.google.firebase.messaging.m f7382p = new com.google.firebase.messaging.m(7);

    /* renamed from: d, reason: collision with root package name */
    public final r f7383d;

    /* renamed from: e, reason: collision with root package name */
    public final float f7384e;

    /* renamed from: f, reason: collision with root package name */
    public final float f7385f;

    /* renamed from: g, reason: collision with root package name */
    public final q f7386g;

    /* renamed from: h, reason: collision with root package name */
    public final float[] f7387h;

    /* renamed from: i, reason: collision with root package name */
    public final float[] f7388i;
    public final float[] j;
    public final h k;

    /* renamed from: l, reason: collision with root package name */
    public final l f7389l;

    /* renamed from: m, reason: collision with root package name */
    public final h f7390m;

    /* renamed from: n, reason: collision with root package name */
    public final l f7391n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f7392o;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0225, code lost:
    
        if (d0.i.e(r2[4] - r2[r41], r2[5] - r2[1], r4[4], r4[5]) >= 0.0f) goto L40;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r41v1 */
    /* JADX WARN: Type inference failed for: r41v2 */
    /* JADX WARN: Type inference failed for: r41v3 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p(String name, float[] primaries, r whitePoint, float[] fArr, h oetf, h eotf, float f2, float f10, q qVar, int i5) {
        super(name, b.a, i5);
        ?? r41;
        float f11;
        float f12;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(primaries, "primaries");
        Intrinsics.checkNotNullParameter(whitePoint, "whitePoint");
        Intrinsics.checkNotNullParameter(oetf, "oetf");
        Intrinsics.checkNotNullParameter(eotf, "eotf");
        this.f7383d = whitePoint;
        this.f7384e = f2;
        this.f7385f = f10;
        this.f7386g = qVar;
        this.k = oetf;
        boolean z5 = true;
        z5 = true;
        new o(this, z5 ? 1 : 0);
        int i6 = 0;
        this.f7389l = new l(this, i6);
        this.f7390m = eotf;
        new o(this, i6);
        this.f7391n = new l(this, z5 ? 1 : 0);
        if (primaries.length != 6 && primaries.length != 9) {
            throw new IllegalArgumentException("The color space's primaries must be defined as an array of 6 floats in xyY or 9 floats in XYZ");
        }
        if (f2 >= f10) {
            throw new IllegalArgumentException("Invalid range: min=" + f2 + ", max=" + f10 + "; min must be strictly < max");
        }
        float[] destination = new float[6];
        if (primaries.length == 9) {
            float f13 = primaries[0];
            float f14 = primaries[1];
            float f15 = f13 + f14 + primaries[2];
            destination[0] = f13 / f15;
            destination[1] = f14 / f15;
            float f16 = primaries[3];
            float f17 = primaries[4];
            float f18 = f16 + f17 + primaries[5];
            destination[2] = f16 / f18;
            destination[3] = f17 / f18;
            float f19 = primaries[6];
            float f20 = primaries[7];
            float f21 = f19 + f20 + primaries[8];
            destination[4] = f19 / f21;
            destination[5] = f20 / f21;
        } else {
            Intrinsics.checkNotNullParameter(primaries, "<this>");
            Intrinsics.checkNotNullParameter(destination, "destination");
            System.arraycopy(primaries, 0, destination, 0, 6);
        }
        this.f7387h = destination;
        if (fArr == null) {
            float f22 = destination[0];
            float f23 = destination[1];
            float f24 = destination[2];
            float f25 = destination[3];
            float f26 = destination[4];
            float f27 = destination[5];
            f11 = 1.0f;
            float f28 = whitePoint.a;
            r41 = 0;
            float f29 = whitePoint.f7397b;
            float f30 = 1;
            float f31 = (f30 - f22) / f23;
            float f32 = (f30 - f24) / f25;
            float f33 = (f30 - f26) / f27;
            float f34 = (f30 - f28) / f29;
            float f35 = f22 / f23;
            float f36 = (f24 / f25) - f35;
            float f37 = (f28 / f29) - f35;
            float f38 = f32 - f31;
            float f39 = (f26 / f27) - f35;
            float f40 = (((f34 - f31) * f36) - (f37 * f38)) / (((f33 - f31) * f36) - (f38 * f39));
            float f41 = (f37 - (f39 * f40)) / f36;
            float f42 = (1.0f - f41) - f40;
            float f43 = f42 / f23;
            float f44 = f41 / f25;
            float f45 = f40 / f27;
            this.f7388i = new float[]{f43 * f22, f42, ((1.0f - f22) - f23) * f43, f44 * f24, f41, ((1.0f - f24) - f25) * f44, f45 * f26, f40, ((1.0f - f26) - f27) * f45};
        } else {
            r41 = 0;
            f11 = 1.0f;
            if (fArr.length != 9) {
                throw new IllegalArgumentException("Transform must have 9 entries! Has " + fArr.length);
            }
            this.f7388i = fArr;
        }
        this.j = i.f(this.f7388i);
        float b10 = i.b(destination);
        float[] fArr2 = d.a;
        if (b10 / i.b(d.f7352b) > 0.9f) {
            float[] fArr3 = d.a;
            float f46 = destination[r41];
            float f47 = fArr3[r41];
            float f48 = destination[1];
            float f49 = fArr3[1];
            float f50 = destination[2] - fArr3[2];
            float f51 = destination[3] - fArr3[3];
            float f52 = destination[4];
            float f53 = fArr3[4];
            float f54 = destination[5];
            float f55 = fArr3[5];
            f12 = 0.0f;
            float[] fArr4 = new float[6];
            fArr4[r41] = f46 - f47;
            fArr4[1] = f48 - f49;
            fArr4[2] = f50;
            fArr4[3] = f51;
            fArr4[4] = f52 - f53;
            fArr4[5] = f54 - f55;
            if (i.e(fArr4[r41], fArr4[1], f47 - f53, f49 - f55) >= 0.0f) {
                if (i.e(fArr3[r41] - fArr3[2], fArr3[1] - fArr3[3], fArr4[r41], fArr4[1]) >= 0.0f) {
                    if (i.e(fArr4[2], fArr4[3], fArr3[2] - fArr3[r41], fArr3[3] - fArr3[1]) >= 0.0f) {
                        if (i.e(fArr3[2] - fArr3[4], fArr3[3] - fArr3[5], fArr4[2], fArr4[3]) >= 0.0f) {
                            if (i.e(fArr4[4], fArr4[5], fArr3[4] - fArr3[2], fArr3[5] - fArr3[3]) >= 0.0f) {
                            }
                        }
                    }
                }
            }
        } else {
            f12 = 0.0f;
        }
        int i10 = (f2 > f12 ? 1 : (f2 == f12 ? 0 : -1));
        if (i5 != 0) {
            float[] b11 = d.a;
            Intrinsics.checkNotNullParameter(destination, "a");
            Intrinsics.checkNotNullParameter(b11, "b");
            if (destination != b11) {
                for (int i11 = r41; i11 < 6; i11++) {
                    if (Float.compare(destination[i11], b11[i11]) != 0 && Math.abs(destination[i11] - b11[i11]) > 0.001f) {
                        break;
                    }
                }
            }
            if (i.d(whitePoint, i.f7367d) && f2 == f12 && f10 == f11) {
                float[] fArr5 = d.a;
                p pVar = d.f7353c;
                for (double d6 = 0.0d; d6 <= 1.0d; d6 += 0.00392156862745098d) {
                    if (Math.abs(oetf.invoke(d6) - pVar.k.invoke(d6)) <= 0.001d && Math.abs(eotf.invoke(d6) - pVar.f7390m.invoke(d6)) <= 0.001d) {
                    }
                }
            }
            z5 = r41;
        }
        this.f7392o = z5;
    }

    @Override // d0.c
    public final float a(int i5) {
        return this.f7385f;
    }

    @Override // d0.c
    public final float b(int i5) {
        return this.f7384e;
    }

    @Override // d0.c
    public final boolean c() {
        return this.f7392o;
    }

    @Override // d0.c
    public final long d(float f2, float f10, float f11) {
        double d6 = f2;
        l lVar = this.f7391n;
        float invoke = (float) lVar.invoke(d6);
        float invoke2 = (float) lVar.invoke(f10);
        float invoke3 = (float) lVar.invoke(f11);
        float[] fArr = this.f7388i;
        float i5 = i.i(fArr, invoke, invoke2, invoke3);
        float j = i.j(fArr, invoke, invoke2, invoke3);
        return (Float.floatToIntBits(i5) << 32) | (Float.floatToIntBits(j) & 4294967295L);
    }

    @Override // d0.c
    public final float e(float f2, float f10, float f11) {
        double d6 = f2;
        l lVar = this.f7391n;
        return i.k(this.f7388i, (float) lVar.invoke(d6), (float) lVar.invoke(f10), (float) lVar.invoke(f11));
    }

    @Override // d0.c
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || p.class != obj.getClass() || !super.equals(obj)) {
            return false;
        }
        p pVar = (p) obj;
        q qVar = pVar.f7386g;
        if (Float.compare(pVar.f7384e, this.f7384e) != 0 || Float.compare(pVar.f7385f, this.f7385f) != 0 || !Intrinsics.areEqual(this.f7383d, pVar.f7383d) || !Arrays.equals(this.f7387h, pVar.f7387h)) {
            return false;
        }
        q qVar2 = this.f7386g;
        if (qVar2 != null) {
            return Intrinsics.areEqual(qVar2, qVar);
        }
        if (qVar == null) {
            return true;
        }
        if (Intrinsics.areEqual(this.k, pVar.k)) {
            return Intrinsics.areEqual(this.f7390m, pVar.f7390m);
        }
        return false;
    }

    @Override // d0.c
    public final long f(float f2, float f10, float f11, float f12, c colorSpace) {
        Intrinsics.checkNotNullParameter(colorSpace, "colorSpace");
        float[] fArr = this.j;
        float i5 = i.i(fArr, f2, f10, f11);
        float j = i.j(fArr, f2, f10, f11);
        float k = i.k(fArr, f2, f10, f11);
        l lVar = this.f7389l;
        return io.sentry.config.a.a((float) lVar.invoke(i5), (float) lVar.invoke(j), (float) lVar.invoke(k), f12, colorSpace);
    }

    @Override // d0.c
    public final int hashCode() {
        int hashCode = (Arrays.hashCode(this.f7387h) + ((this.f7383d.hashCode() + (super.hashCode() * 31)) * 31)) * 31;
        float f2 = this.f7384e;
        int floatToIntBits = (hashCode + (f2 == 0.0f ? 0 : Float.floatToIntBits(f2))) * 31;
        float f10 = this.f7385f;
        int floatToIntBits2 = (floatToIntBits + (f10 == 0.0f ? 0 : Float.floatToIntBits(f10))) * 31;
        q qVar = this.f7386g;
        int hashCode2 = floatToIntBits2 + (qVar != null ? qVar.hashCode() : 0);
        if (qVar == null) {
            return this.f7390m.hashCode() + ((this.k.hashCode() + (hashCode2 * 31)) * 31);
        }
        return hashCode2;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p(String name, float[] primaries, r whitePoint, final q function, int i5) {
        this(name, primaries, whitePoint, null, r5, new h() { // from class: d0.n
            @Override // d0.h
            public final double invoke(double d6) {
                switch (r2) {
                    case 0:
                        q function2 = function;
                        Intrinsics.checkNotNullParameter(function2, "$function");
                        double d7 = function2.f7393b;
                        double d8 = function2.f7394c;
                        double d10 = function2.f7395d;
                        return d6 >= function2.f7396e * d10 ? (Math.pow(d6, 1.0d / function2.a) - d8) / d7 : d6 / d10;
                    default:
                        q function3 = function;
                        Intrinsics.checkNotNullParameter(function3, "$function");
                        double d11 = function3.f7393b;
                        return d6 >= function3.f7396e ? Math.pow((d11 * d6) + function3.f7394c, function3.a) : d6 * function3.f7395d;
                }
            }
        }, 0.0f, 1.0f, function, i5);
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(primaries, "primaries");
        Intrinsics.checkNotNullParameter(whitePoint, "whitePoint");
        Intrinsics.checkNotNullParameter(function, "function");
        final int i6 = 0;
        h hVar = new h() { // from class: d0.n
            @Override // d0.h
            public final double invoke(double d6) {
                switch (i6) {
                    case 0:
                        q function2 = function;
                        Intrinsics.checkNotNullParameter(function2, "$function");
                        double d7 = function2.f7393b;
                        double d8 = function2.f7394c;
                        double d10 = function2.f7395d;
                        return d6 >= function2.f7396e * d10 ? (Math.pow(d6, 1.0d / function2.a) - d8) / d7 : d6 / d10;
                    default:
                        q function3 = function;
                        Intrinsics.checkNotNullParameter(function3, "$function");
                        double d11 = function3.f7393b;
                        return d6 >= function3.f7396e ? Math.pow((d11 * d6) + function3.f7394c, function3.a) : d6 * function3.f7395d;
                }
            }
        };
        final int i10 = 1;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p(String name, float[] primaries, r whitePoint, final double d6, float f2, float f10, int i5) {
        this(name, primaries, whitePoint, null, r14, r3, f2, f10, new q(d6, 1.0d, 0.0d, 0.0d, 0.0d), i5);
        h hVar;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(primaries, "primaries");
        Intrinsics.checkNotNullParameter(whitePoint, "whitePoint");
        h hVar2 = f7382p;
        if (d6 == 1.0d) {
            hVar = hVar2;
        } else {
            final int i6 = 0;
            hVar = new h() { // from class: d0.m
                @Override // d0.h
                public final double invoke(double d7) {
                    switch (i6) {
                        case 0:
                            if (d7 < 0.0d) {
                                d7 = 0.0d;
                            }
                            return Math.pow(d7, 1.0d / d6);
                        default:
                            if (d7 < 0.0d) {
                                d7 = 0.0d;
                            }
                            return Math.pow(d7, d6);
                    }
                }
            };
        }
        if (d6 != 1.0d) {
            final int i10 = 1;
            hVar2 = new h() { // from class: d0.m
                @Override // d0.h
                public final double invoke(double d7) {
                    switch (i10) {
                        case 0:
                            if (d7 < 0.0d) {
                                d7 = 0.0d;
                            }
                            return Math.pow(d7, 1.0d / d6);
                        default:
                            if (d7 < 0.0d) {
                                d7 = 0.0d;
                            }
                            return Math.pow(d7, d6);
                    }
                }
            };
        }
    }
}
