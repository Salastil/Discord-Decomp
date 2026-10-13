package ck;

import java.util.ArrayList;
import java.util.Arrays;
import jj.l;
import nj.b;

/* loaded from: classes3.dex */
public abstract class a {
    public static final int[] a = {0, 4, 1, 5};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f3570b = {6, 2, 7, 3};

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f3571c = {8, 1, 1, 1, 1, 1, 1, 3};

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f3572d = {7, 1, 1, 3, 1, 1, 1, 2, 1};

    public static ArrayList a(b bVar) {
        ArrayList arrayList = new ArrayList();
        int i5 = bVar.f15511e;
        if (i5 > 0) {
            int i6 = bVar.f15510d;
            l[] lVarArr = new l[8];
            int i10 = 0;
            int i11 = 0;
            l[] c6 = c(bVar, i5, i6, 0, 0, f3571c);
            for (int i12 = 0; i12 < 4; i12++) {
                lVarArr[a[i12]] = c6[i12];
            }
            l lVar = lVarArr[4];
            if (lVar != null) {
                i11 = (int) lVar.a;
                i10 = (int) lVar.f12810b;
            }
            l[] c8 = c(bVar, i5, i6, i10, i11, f3572d);
            for (int i13 = 0; i13 < 4; i13++) {
                lVarArr[f3570b[i13]] = c8[i13];
            }
            if (lVarArr[0] != null || lVarArr[3] != null) {
                arrayList.add(lVarArr);
            }
        }
        return arrayList;
    }

    public static int[] b(b bVar, int i5, int i6, int i10, int[] iArr, int[] iArr2) {
        Arrays.fill(iArr2, 0, iArr2.length, 0);
        int i11 = 0;
        while (bVar.b(i5, i6) && i5 > 0) {
            int i12 = i11 + 1;
            if (i11 >= 3) {
                break;
            }
            i5--;
            i11 = i12;
        }
        int length = iArr.length;
        int i13 = i5;
        int i14 = 0;
        boolean z5 = false;
        while (i5 < i10) {
            if (bVar.b(i5, i6) != z5) {
                iArr2[i14] = iArr2[i14] + 1;
            } else {
                if (i14 != length - 1) {
                    i14++;
                } else {
                    if (d(iArr2, iArr) < 0.42f) {
                        return new int[]{i13, i5};
                    }
                    i13 += iArr2[0] + iArr2[1];
                    int i15 = i14 - 1;
                    System.arraycopy(iArr2, 2, iArr2, 0, i15);
                    iArr2[i15] = 0;
                    iArr2[i14] = 0;
                    i14--;
                }
                iArr2[i14] = 1;
                z5 = !z5;
            }
            i5++;
        }
        if (i14 != length - 1 || d(iArr2, iArr) >= 0.42f) {
            return null;
        }
        return new int[]{i13, i5 - 1};
    }

    public static l[] c(b bVar, int i5, int i6, int i10, int i11, int[] iArr) {
        int i12;
        boolean z5;
        int[] b10;
        l[] lVarArr = new l[4];
        int[] iArr2 = iArr;
        int[] iArr3 = new int[iArr2.length];
        int i13 = i10;
        while (true) {
            if (i13 >= i5) {
                i12 = i13;
                z5 = false;
                break;
            }
            int[] b11 = b(bVar, i11, i13, i6, iArr2, iArr3);
            if (b11 != null) {
                int[] iArr4 = b11;
                while (true) {
                    i12 = i13;
                    if (i12 <= 0 || (b10 = b(bVar, i11, i12 - 1, i6, iArr, iArr3)) == null) {
                        break;
                    }
                    iArr4 = b10;
                }
                float f2 = i12;
                lVarArr[0] = new l(iArr4[0], f2);
                lVarArr[1] = new l(iArr4[1], f2);
                z5 = true;
            } else {
                i13 += 5;
                iArr2 = iArr;
            }
        }
        int i14 = i12 + 1;
        if (z5) {
            int[] iArr5 = {(int) lVarArr[0].a, (int) lVarArr[1].a};
            int i15 = i14;
            int i16 = 0;
            while (i15 < i5) {
                int[] b12 = b(bVar, iArr5[0], i15, i6, iArr, iArr3);
                if (b12 != null && Math.abs(iArr5[0] - b12[0]) < 5 && Math.abs(iArr5[1] - b12[1]) < 5) {
                    iArr5 = b12;
                    i16 = 0;
                } else {
                    if (i16 > 25) {
                        break;
                    }
                    i16++;
                }
                i15++;
            }
            i14 = i15 - (i16 + 1);
            float f10 = i14;
            lVarArr[2] = new l(iArr5[0], f10);
            lVarArr[3] = new l(iArr5[1], f10);
        }
        if (i14 - i12 < 10) {
            Arrays.fill(lVarArr, (Object) null);
        }
        return lVarArr;
    }

    public static float d(int[] iArr, int[] iArr2) {
        int length = iArr.length;
        int i5 = 0;
        int i6 = 0;
        for (int i10 = 0; i10 < length; i10++) {
            i5 += iArr[i10];
            i6 += iArr2[i10];
        }
        if (i5 < i6) {
            return Float.POSITIVE_INFINITY;
        }
        float f2 = i5;
        float f10 = f2 / i6;
        float f11 = 0.8f * f10;
        float f12 = 0.0f;
        for (int i11 = 0; i11 < length; i11++) {
            float f13 = iArr2[i11] * f10;
            float f14 = iArr[i11];
            float f15 = f14 > f13 ? f14 - f13 : f13 - f14;
            if (f15 > f11) {
                return Float.POSITIVE_INFINITY;
            }
            f12 += f15;
        }
        return f12 / f2;
    }
}
