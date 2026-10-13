package nd;

import java.util.Arrays;
import java.util.Random;

/* loaded from: classes3.dex */
public final class t0 {
    public final Random a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f15171b;

    /* renamed from: c, reason: collision with root package name */
    public final int[] f15172c;

    public t0() {
        this(new Random());
    }

    public final t0 a(int i5) {
        int[] iArr;
        Random random;
        int[] iArr2 = new int[i5];
        int[] iArr3 = new int[i5];
        int i6 = 0;
        while (true) {
            iArr = this.f15171b;
            random = this.a;
            if (i6 >= i5) {
                break;
            }
            iArr2[i6] = random.nextInt(iArr.length + 1);
            int i10 = i6 + 1;
            int nextInt = random.nextInt(i10);
            iArr3[i6] = iArr3[nextInt];
            iArr3[nextInt] = i6;
            i6 = i10;
        }
        Arrays.sort(iArr2);
        int[] iArr4 = new int[iArr.length + i5];
        int i11 = 0;
        int i12 = 0;
        for (int i13 = 0; i13 < iArr.length + i5; i13++) {
            if (i11 >= i5 || i12 != iArr2[i11]) {
                int i14 = i12 + 1;
                int i15 = iArr[i12];
                iArr4[i13] = i15;
                if (i15 >= 0) {
                    iArr4[i13] = i15 + i5;
                }
                i12 = i14;
            } else {
                iArr4[i13] = iArr3[i11];
                i11++;
            }
        }
        return new t0(iArr4, new Random(random.nextLong()));
    }

    public t0(int[] iArr, Random random) {
        this.f15171b = iArr;
        this.a = random;
        this.f15172c = new int[iArr.length];
        for (int i5 = 0; i5 < iArr.length; i5++) {
            this.f15172c[iArr[i5]] = i5;
        }
    }

    public t0(Random random) {
        this(new int[0], random);
    }
}
