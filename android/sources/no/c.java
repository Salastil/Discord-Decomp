package no;

/* loaded from: classes3.dex */
public abstract class c {
    public static final po.b a = new po.b();

    public static final int a(int i5, int i6, int i10) {
        if (i10 > 0) {
            if (i5 < i6) {
                int i11 = i6 % i10;
                if (i11 < 0) {
                    i11 += i10;
                }
                int i12 = i5 % i10;
                if (i12 < 0) {
                    i12 += i10;
                }
                int i13 = (i11 - i12) % i10;
                if (i13 < 0) {
                    i13 += i10;
                }
                return i6 - i13;
            }
        } else {
            if (i10 >= 0) {
                throw new IllegalArgumentException("Step is zero.");
            }
            if (i5 > i6) {
                int i14 = -i10;
                int i15 = i5 % i14;
                if (i15 < 0) {
                    i15 += i14;
                }
                int i16 = i6 % i14;
                if (i16 < 0) {
                    i16 += i14;
                }
                int i17 = (i15 - i16) % i14;
                if (i17 < 0) {
                    i17 += i14;
                }
                return i17 + i6;
            }
        }
        return i6;
    }
}
