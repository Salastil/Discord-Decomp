package bg;

/* loaded from: classes3.dex */
public abstract class j0 {

    /* renamed from: d, reason: collision with root package name */
    public static final char[] f2955d = "0123456789abcdef".toCharArray();

    public final boolean equals(Object obj) {
        boolean z5;
        if (obj instanceof j0) {
            byte[] bArr = ((i0) this).f2952e;
            int length = bArr.length * 8;
            byte[] bArr2 = ((i0) ((j0) obj)).f2952e;
            if (length == bArr2.length * 8) {
                if (bArr.length == bArr2.length) {
                    z5 = true;
                    for (int i5 = 0; i5 < bArr.length; i5++) {
                        z5 &= bArr[i5] == bArr2[i5];
                    }
                } else {
                    z5 = false;
                }
                if (z5) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        byte[] bArr = ((i0) this).f2952e;
        if (bArr.length * 8 < 32) {
            int i5 = bArr[0] & 255;
            for (int i6 = 1; i6 < bArr.length; i6++) {
                i5 |= (bArr[i6] & 255) << (i6 * 8);
            }
            return i5;
        }
        int length = bArr.length;
        if (length < 4) {
            throw new IllegalStateException(b.d("HashCode#asInt() requires >= 4 bytes (it only has %s bytes).", Integer.valueOf(length)));
        }
        int i10 = bArr[0] & 255;
        int i11 = bArr[1] & 255;
        int i12 = bArr[2] & 255;
        return ((bArr[3] & 255) << 24) | i10 | (i11 << 8) | (i12 << 16);
    }

    public final String toString() {
        byte[] bArr = ((i0) this).f2952e;
        int length = bArr.length;
        StringBuilder sb2 = new StringBuilder(length + length);
        for (byte b10 : bArr) {
            char[] cArr = f2955d;
            sb2.append(cArr[(b10 >> 4) & 15]);
            sb2.append(cArr[b10 & 15]);
        }
        return sb2.toString();
    }
}
