package ak;

import java.lang.reflect.Array;

/* loaded from: classes3.dex */
public abstract class f {
    public static final float[][] a = (float[][]) Array.newInstance((Class<?>) Float.TYPE, 2787, 8);

    static {
        int i5;
        for (int i6 = 0; i6 < 2787; i6++) {
            int i10 = zj.a.f21268b[i6];
            int i11 = i10 & 1;
            int i12 = 0;
            while (i12 < 8) {
                float f2 = 0.0f;
                while (true) {
                    i5 = i10 & 1;
                    if (i5 == i11) {
                        f2 += 1.0f;
                        i10 >>= 1;
                    }
                }
                a[i6][7 - i12] = f2 / 17.0f;
                i12++;
                i11 = i5;
            }
        }
    }
}
