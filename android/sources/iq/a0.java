package iq;

/* loaded from: classes3.dex */
public abstract class a0 {
    public static final z a = new z();

    /* renamed from: b, reason: collision with root package name */
    public static final hs.c f12186b = new hs.c(8);

    public static int a(int i5, int i6) {
        if (i5 > -12 || i6 > -65) {
            return -1;
        }
        return i5 ^ (i6 << 8);
    }

    public static int b(byte[] bArr, int i5, int i6) {
        byte b10 = bArr[i5 - 1];
        int i10 = i6 - i5;
        if (i10 == 0) {
            if (b10 > -12) {
                return -1;
            }
            return b10;
        }
        if (i10 == 1) {
            return a(b10, bArr[i5]);
        }
        if (i10 != 2) {
            throw new AssertionError();
        }
        byte b11 = bArr[i5];
        byte b12 = bArr[i5 + 1];
        if (b10 > -12 || b11 > -65 || b12 > -65) {
            return -1;
        }
        return (b12 << 16) ^ ((b11 << 8) ^ b10);
    }

    public static int c(byte[] bArr, int i5, int i6) {
        while (i5 < i6 && bArr[i5] >= 0) {
            i5++;
        }
        if (i5 >= i6) {
            return 0;
        }
        while (i5 < i6) {
            int i10 = i5 + 1;
            byte b10 = bArr[i5];
            if (b10 >= 0) {
                i5 = i10;
            } else if (b10 < -32) {
                if (i10 >= i6) {
                    return b10;
                }
                if (b10 < -62) {
                    return -1;
                }
                i5 += 2;
                if (bArr[i10] > -65) {
                    return -1;
                }
            } else if (b10 < -16) {
                if (i10 >= i6 - 1) {
                    return b(bArr, i10, i6);
                }
                int i11 = i5 + 2;
                byte b11 = bArr[i10];
                if (b11 > -65) {
                    return -1;
                }
                if (b10 == -32 && b11 < -96) {
                    return -1;
                }
                if (b10 == -19 && b11 >= -96) {
                    return -1;
                }
                i5 += 3;
                if (bArr[i11] > -65) {
                    return -1;
                }
            } else {
                if (i10 >= i6 - 2) {
                    return b(bArr, i10, i6);
                }
                int i12 = i5 + 2;
                byte b12 = bArr[i10];
                if (b12 > -65) {
                    return -1;
                }
                if ((((b12 + 112) + (b10 << 28)) >> 30) != 0) {
                    return -1;
                }
                int i13 = i5 + 3;
                if (bArr[i12] > -65) {
                    return -1;
                }
                i5 += 4;
                if (bArr[i13] > -65) {
                    return -1;
                }
            }
        }
        return 0;
    }
}
