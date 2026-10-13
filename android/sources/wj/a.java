package wj;

import vj.h;

/* loaded from: classes3.dex */
public abstract class a extends h {

    /* renamed from: b, reason: collision with root package name */
    public final int[] f19839b;

    /* renamed from: e, reason: collision with root package name */
    public final int[] f19842e;

    /* renamed from: f, reason: collision with root package name */
    public final int[] f19843f;
    public final int[] a = new int[4];

    /* renamed from: c, reason: collision with root package name */
    public final float[] f19840c = new float[4];

    /* renamed from: d, reason: collision with root package name */
    public final float[] f19841d = new float[4];

    public a() {
        int[] iArr = new int[8];
        this.f19839b = iArr;
        this.f19842e = new int[iArr.length / 2];
        this.f19843f = new int[iArr.length / 2];
    }

    public static void g(float[] fArr, int[] iArr) {
        int i5 = 0;
        float f2 = fArr[0];
        for (int i6 = 1; i6 < iArr.length; i6++) {
            float f10 = fArr[i6];
            if (f10 < f2) {
                i5 = i6;
                f2 = f10;
            }
        }
        iArr[i5] = iArr[i5] - 1;
    }

    public static void h(float[] fArr, int[] iArr) {
        int i5 = 0;
        float f2 = fArr[0];
        for (int i6 = 1; i6 < iArr.length; i6++) {
            float f10 = fArr[i6];
            if (f10 > f2) {
                i5 = i6;
                f2 = f10;
            }
        }
        iArr[i5] = iArr[i5] + 1;
    }

    public static boolean i(int[] iArr) {
        float f2 = (iArr[0] + iArr[1]) / ((iArr[2] + r1) + iArr[3]);
        if (f2 >= 0.7916667f && f2 <= 0.89285713f) {
            int i5 = Integer.MAX_VALUE;
            int i6 = Integer.MIN_VALUE;
            for (int i10 : iArr) {
                if (i10 > i6) {
                    i6 = i10;
                }
                if (i10 < i5) {
                    i5 = i10;
                }
            }
            if (i6 < i5 * 10) {
                return true;
            }
        }
        return false;
    }
}
