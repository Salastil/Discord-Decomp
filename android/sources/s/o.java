package s;

import kotlin.collections.u;

/* loaded from: classes.dex */
public final class o extends r {

    /* renamed from: e, reason: collision with root package name */
    public int f17687e;

    public o(int i5) {
        this.a = q.a;
        this.f17691b = t.a.f18150c;
        if (i5 >= 0) {
            b(q.c(i5));
        } else {
            t.a.c("Capacity must be a positive value.");
            throw null;
        }
    }

    public final int a(int i5) {
        int i6 = this.f17692c;
        int i10 = i5 & i6;
        int i11 = 0;
        while (true) {
            long[] jArr = this.a;
            int i12 = i10 >> 3;
            int i13 = (i10 & 7) << 3;
            long j = ((jArr[i12 + 1] << (64 - i13)) & ((-i13) >> 63)) | (jArr[i12] >>> i13);
            long j5 = j & ((~j) << 7) & (-9187201950435737472L);
            if (j5 != 0) {
                return (i10 + (Long.numberOfTrailingZeros(j5) >> 3)) & i6;
            }
            i11 += 8;
            i10 = (i10 + i11) & i6;
        }
    }

    public final void b(int i5) {
        long[] jArr;
        int max = i5 > 0 ? Math.max(7, q.b(i5)) : 0;
        this.f17692c = max;
        if (max == 0) {
            jArr = q.a;
        } else {
            jArr = new long[((max + 15) & (-8)) >> 3];
            u.l(jArr, -9187201950435737472L);
        }
        this.a = jArr;
        int i6 = max >> 3;
        long j = 255 << ((max & 7) << 3);
        jArr[i6] = (jArr[i6] & (~j)) | j;
        this.f17687e = q.a(this.f17692c) - this.f17693d;
        this.f17691b = max == 0 ? t.a.f18150c : new Object[max];
    }
}
