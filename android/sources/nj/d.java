package nj;

import jj.g;

/* loaded from: classes3.dex */
public final class d {

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f15519e = new byte[0];
    public final eq.d a;

    /* renamed from: b, reason: collision with root package name */
    public byte[] f15520b = f15519e;

    /* renamed from: c, reason: collision with root package name */
    public final int[] f15521c = new int[32];

    /* renamed from: d, reason: collision with root package name */
    public b f15522d;

    public d(eq.d dVar) {
        this.a = dVar;
    }

    public static int a(int[] iArr) {
        int length = iArr.length;
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        for (int i11 = 0; i11 < length; i11++) {
            int i12 = iArr[i11];
            if (i12 > i5) {
                i10 = i11;
                i5 = i12;
            }
            if (i12 > i6) {
                i6 = i12;
            }
        }
        int i13 = 0;
        int i14 = 0;
        for (int i15 = 0; i15 < length; i15++) {
            int i16 = i15 - i10;
            int i17 = iArr[i15] * i16 * i16;
            if (i17 > i14) {
                i13 = i15;
                i14 = i17;
            }
        }
        if (i10 <= i13) {
            int i18 = i10;
            i10 = i13;
            i13 = i18;
        }
        if (i10 - i13 <= length / 16) {
            throw g.f12795i;
        }
        int i19 = i10 - 1;
        int i20 = -1;
        int i21 = i19;
        while (i19 > i13) {
            int i22 = i19 - i13;
            int i23 = (i6 - iArr[i19]) * (i10 - i19) * i22 * i22;
            if (i23 > i20) {
                i21 = i19;
                i20 = i23;
            }
            i19--;
        }
        return i21 << 3;
    }
}
