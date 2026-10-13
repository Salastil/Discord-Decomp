package wc;

import qc.k;

/* loaded from: classes3.dex */
public final class e {

    /* renamed from: d, reason: collision with root package name */
    public static final long[] f19779d = {128, 64, 32, 16, 8, 4, 2, 1};
    public final byte[] a = new byte[8];

    /* renamed from: b, reason: collision with root package name */
    public int f19780b;

    /* renamed from: c, reason: collision with root package name */
    public int f19781c;

    public static long a(byte[] bArr, int i5, boolean z5) {
        long j = bArr[0] & 255;
        if (z5) {
            j &= ~f19779d[i5 - 1];
        }
        for (int i6 = 1; i6 < i5; i6++) {
            j = (j << 8) | (bArr[i6] & 255);
        }
        return j;
    }

    public final long b(k kVar, boolean z5, boolean z6, int i5) {
        int i6;
        int i10 = this.f19780b;
        byte[] bArr = this.a;
        if (i10 == 0) {
            if (!kVar.a(bArr, 0, 1, z5)) {
                return -1L;
            }
            int i11 = bArr[0] & 255;
            int i12 = 0;
            while (true) {
                if (i12 >= 8) {
                    i6 = -1;
                    break;
                }
                if ((f19779d[i12] & i11) != 0) {
                    i6 = i12 + 1;
                    break;
                }
                i12++;
            }
            this.f19781c = i6;
            if (i6 == -1) {
                throw new IllegalStateException("No valid varint length mask found");
            }
            this.f19780b = 1;
        }
        int i13 = this.f19781c;
        if (i13 > i5) {
            this.f19780b = 0;
            return -2L;
        }
        if (i13 != 1) {
            kVar.readFully(bArr, 1, i13 - 1);
        }
        this.f19780b = 0;
        return a(bArr, this.f19781c, z6);
    }
}
