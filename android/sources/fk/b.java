package fk;

import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class b {
    public final nj.b a;

    /* renamed from: c, reason: collision with root package name */
    public final int f8767c;

    /* renamed from: d, reason: collision with root package name */
    public final int f8768d;

    /* renamed from: e, reason: collision with root package name */
    public final int f8769e;

    /* renamed from: f, reason: collision with root package name */
    public final int f8770f;

    /* renamed from: g, reason: collision with root package name */
    public final float f8771g;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f8766b = new ArrayList(5);

    /* renamed from: h, reason: collision with root package name */
    public final int[] f8772h = new int[3];

    public b(nj.b bVar, int i5, int i6, int i10, int i11, float f2) {
        this.a = bVar;
        this.f8767c = i5;
        this.f8768d = i6;
        this.f8769e = i10;
        this.f8770f = i11;
        this.f8771g = f2;
    }

    public final boolean a(int[] iArr) {
        float f2 = this.f8771g;
        float f10 = f2 / 2.0f;
        for (int i5 = 0; i5 < 3; i5++) {
            if (Math.abs(f2 - iArr[i5]) >= f10) {
                return false;
            }
        }
        return true;
    }

    public final a b(int i5, int i6, int[] iArr) {
        int i10 = iArr[0];
        int i11 = iArr[1];
        int i12 = i10 + i11 + iArr[2];
        float f2 = (i6 - r5) - (i11 / 2.0f);
        int i13 = (int) f2;
        int i14 = i11 * 2;
        nj.b bVar = this.a;
        int i15 = bVar.f15511e;
        int[] iArr2 = this.f8772h;
        iArr2[0] = 0;
        iArr2[1] = 0;
        iArr2[2] = 0;
        int i16 = i5;
        while (i16 >= 0 && bVar.b(i13, i16)) {
            int i17 = iArr2[1];
            if (i17 > i14) {
                break;
            }
            iArr2[1] = i17 + 1;
            i16--;
        }
        float f10 = Float.NaN;
        if (i16 >= 0 && iArr2[1] <= i14) {
            while (i16 >= 0 && !bVar.b(i13, i16)) {
                int i18 = iArr2[0];
                if (i18 > i14) {
                    break;
                }
                iArr2[0] = i18 + 1;
                i16--;
            }
            if (iArr2[0] <= i14) {
                int i19 = i5 + 1;
                while (i19 < i15 && bVar.b(i13, i19)) {
                    int i20 = iArr2[1];
                    if (i20 > i14) {
                        break;
                    }
                    iArr2[1] = i20 + 1;
                    i19++;
                }
                if (i19 != i15 && iArr2[1] <= i14) {
                    while (i19 < i15 && !bVar.b(i13, i19)) {
                        int i21 = iArr2[2];
                        if (i21 > i14) {
                            break;
                        }
                        iArr2[2] = i21 + 1;
                        i19++;
                    }
                    int i22 = iArr2[2];
                    if (i22 <= i14 && Math.abs(((iArr2[0] + iArr2[1]) + i22) - i12) * 5 < i12 * 2 && a(iArr2)) {
                        f10 = (i19 - iArr2[2]) - (iArr2[1] / 2.0f);
                    }
                }
            }
        }
        if (Float.isNaN(f10)) {
            return null;
        }
        float f11 = ((iArr[0] + iArr[1]) + iArr[2]) / 3.0f;
        ArrayList arrayList = this.f8766b;
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            a aVar = (a) it.next();
            float f12 = aVar.f8765c;
            float f13 = aVar.a;
            float f14 = aVar.f12810b;
            if (Math.abs(f10 - f14) <= f11 && Math.abs(f2 - f13) <= f11) {
                float abs = Math.abs(f11 - f12);
                if (abs <= 1.0f || abs <= f12) {
                    return new a((f13 + f2) / 2.0f, (f14 + f10) / 2.0f, (aVar.f8765c + f11) / 2.0f);
                }
            }
        }
        arrayList.add(new a(f2, f10, f11));
        return null;
    }
}
