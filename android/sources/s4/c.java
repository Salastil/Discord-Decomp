package s4;

import java.util.Arrays;

/* loaded from: classes.dex */
public final class c {
    public final float[] a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f17753b;

    public c(float[] fArr, int[] iArr) {
        this.a = fArr;
        this.f17753b = iArr;
    }

    public final void a(c cVar) {
        int i5 = 0;
        while (true) {
            int[] iArr = cVar.f17753b;
            if (i5 >= iArr.length) {
                return;
            }
            this.a[i5] = cVar.a[i5];
            this.f17753b[i5] = iArr[i5];
            i5++;
        }
    }

    public final c b(float[] fArr) {
        int u5;
        int[] iArr = new int[fArr.length];
        for (int i5 = 0; i5 < fArr.length; i5++) {
            float f2 = fArr[i5];
            float[] fArr2 = this.a;
            int binarySearch = Arrays.binarySearch(fArr2, f2);
            int[] iArr2 = this.f17753b;
            if (binarySearch >= 0) {
                u5 = iArr2[binarySearch];
            } else {
                int i6 = -(binarySearch + 1);
                if (i6 == 0) {
                    u5 = iArr2[0];
                } else if (i6 == iArr2.length - 1) {
                    u5 = iArr2[iArr2.length - 1];
                } else {
                    int i10 = i6 - 1;
                    float f10 = fArr2[i10];
                    u5 = ta.a.u(iArr2[i10], iArr2[i6], (f2 - f10) / (fArr2[i6] - f10));
                }
            }
            iArr[i5] = u5;
        }
        return new c(fArr, iArr);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && c.class == obj.getClass()) {
            c cVar = (c) obj;
            if (Arrays.equals(this.a, cVar.a) && Arrays.equals(this.f17753b, cVar.f17753b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(this.f17753b) + (Arrays.hashCode(this.a) * 31);
    }
}
