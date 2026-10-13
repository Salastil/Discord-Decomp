package d0;

import kotlin.jvm.internal.FloatCompanionObject;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class g {

    /* renamed from: e, reason: collision with root package name */
    public static final e f7360e;

    /* renamed from: f, reason: collision with root package name */
    public static final g f7361f;
    public final c a;

    /* renamed from: b, reason: collision with root package name */
    public final c f7362b;

    /* renamed from: c, reason: collision with root package name */
    public final c f7363c;

    /* renamed from: d, reason: collision with root package name */
    public final float[] f7364d;

    static {
        p source = d.f7353c;
        Intrinsics.checkNotNullParameter(source, "source");
        f7360e = new e(source, source, 1);
        k kVar = d.f7355e;
        new g(source, kVar, 0);
        f7361f = new g(kVar, source, 0);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public g(c source, c destination, int i5) {
        this(source, destination, r7, r8, r0);
        float[] fArr;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(destination, "destination");
        long j = source.f7350b;
        long j5 = b.a;
        c a = b.a(j, j5) ? i.a(source) : source;
        c a10 = b.a(destination.f7350b, j5) ? i.a(destination) : destination;
        if (i5 == 3) {
            boolean a11 = b.a(source.f7350b, j5);
            boolean a12 = b.a(destination.f7350b, j5);
            if ((!a11 || !a12) && (a11 || a12)) {
                c cVar = a11 ? source : destination;
                Intrinsics.checkNotNull(cVar, "null cannot be cast to non-null type androidx.compose.ui.graphics.colorspace.Rgb");
                r rVar = ((p) cVar).f7383d;
                float[] fArr2 = i.f7368e;
                float[] a13 = a11 ? rVar.a() : fArr2;
                fArr2 = a12 ? rVar.a() : fArr2;
                fArr = new float[]{a13[0] / fArr2[0], a13[1] / fArr2[1], a13[2] / fArr2[2]};
            }
        }
        fArr = null;
    }

    public long a(float f2, float f10, float f11, float f12) {
        c cVar = this.f7362b;
        long d6 = cVar.d(f2, f10, f11);
        FloatCompanionObject floatCompanionObject = FloatCompanionObject.INSTANCE;
        float intBitsToFloat = Float.intBitsToFloat((int) (d6 >> 32));
        float intBitsToFloat2 = Float.intBitsToFloat((int) (d6 & 4294967295L));
        float e9 = cVar.e(f2, f10, f11);
        float[] fArr = this.f7364d;
        if (fArr != null) {
            intBitsToFloat *= fArr[0];
            intBitsToFloat2 *= fArr[1];
            e9 *= fArr[2];
        }
        float f13 = intBitsToFloat2;
        float f14 = intBitsToFloat;
        return this.f7363c.f(f14, f13, e9, f12, this.a);
    }

    public g(c source, c destination, c transformSource, c transformDestination, float[] fArr) {
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(destination, "destination");
        Intrinsics.checkNotNullParameter(transformSource, "transformSource");
        Intrinsics.checkNotNullParameter(transformDestination, "transformDestination");
        this.a = destination;
        this.f7362b = transformSource;
        this.f7363c = transformDestination;
        this.f7364d = fArr;
    }
}
