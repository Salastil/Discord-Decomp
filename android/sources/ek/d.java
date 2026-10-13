package ek;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class d {
    public static final int[] a = {2, 1, 4, 3};

    public static boolean a(int i5, int i6, int i10) {
        switch (i5) {
            case 1:
                if (((i6 + i10) & 1) == 0) {
                }
                break;
            case 2:
                if ((i6 & 1) == 0) {
                }
                break;
            case 3:
                if (i10 % 3 == 0) {
                }
                break;
            case 4:
                if ((i6 + i10) % 3 == 0) {
                }
                break;
            case 5:
                if ((((i10 / 3) + (i6 / 2)) & 1) == 0) {
                }
                break;
            case 6:
                if ((i6 * i10) % 6 == 0) {
                }
                break;
            case 7:
                if ((i6 * i10) % 6 < 3) {
                }
                break;
            default:
                if (((((i6 * i10) % 3) + i6 + i10) & 1) == 0) {
                }
                break;
        }
        return true;
    }
}
