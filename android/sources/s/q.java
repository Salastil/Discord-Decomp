package s;

import kotlin.collections.u;

/* loaded from: classes.dex */
public abstract class q {
    public static final long[] a = {-9187201950435737345L, -1};

    static {
        int c6 = c(0);
        int max = c6 > 0 ? Math.max(7, b(c6)) : 0;
        if (max != 0) {
            long[] jArr = new long[((max + 15) & (-8)) >> 3];
            u.l(jArr, -9187201950435737472L);
            int i5 = max >> 3;
            long j = 255 << ((max & 7) << 3);
            jArr[i5] = (jArr[i5] & (~j)) | j;
        }
        if (max != 0) {
            Object[] objArr = new Object[max];
        }
        if (max == 0) {
            return;
        }
        Object[] objArr2 = new Object[max];
    }

    public static final int a(int i5) {
        if (i5 == 7) {
            return 6;
        }
        return i5 - (i5 / 8);
    }

    public static final int b(int i5) {
        if (i5 > 0) {
            return (-1) >>> Integer.numberOfLeadingZeros(i5);
        }
        return 0;
    }

    public static final int c(int i5) {
        if (i5 == 7) {
            return 8;
        }
        return ((i5 - 1) / 7) + i5;
    }
}
