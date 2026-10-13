package s;

import kotlin.collections.u;

/* loaded from: classes.dex */
public abstract class j {
    public static final long[] a;

    static {
        long[] jArr = q.a;
        int c6 = q.c(0);
        int max = c6 > 0 ? Math.max(7, q.b(c6)) : 0;
        if (max != 0) {
            jArr = new long[((max + 15) & (-8)) >> 3];
            u.l(jArr, -9187201950435737472L);
        }
        int i5 = max >> 3;
        long j = 255 << ((max & 7) << 3);
        jArr[i5] = (jArr[i5] & (~j)) | j;
        long[] jArr2 = new long[max];
        a = new long[0];
    }
}
