package ij;

/* loaded from: classes3.dex */
public abstract class e1 {
    public static final io.sentry.config.a a;

    static {
        a = (c1.f10848e && c1.f10847d && !d.a()) ? new d1(1) : new d1(0);
    }

    public static int a(byte[] bArr, int i5, int i6) {
        byte b10 = bArr[i5 - 1];
        int i10 = i6 - i5;
        if (i10 == 0) {
            if (b10 > -12) {
                return -1;
            }
            return b10;
        }
        if (i10 == 1) {
            return b(b10, bArr[i5]);
        }
        if (i10 == 2) {
            return c(b10, bArr[i5], bArr[i5 + 1]);
        }
        throw new AssertionError();
    }

    public static int b(int i5, int i6) {
        if (i5 > -12 || i6 > -65) {
            return -1;
        }
        return i5 ^ (i6 << 8);
    }

    public static int c(int i5, int i6, int i10) {
        if (i5 > -12 || i6 > -65 || i10 > -65) {
            return -1;
        }
        return (i5 ^ (i6 << 8)) ^ (i10 << 16);
    }
}
