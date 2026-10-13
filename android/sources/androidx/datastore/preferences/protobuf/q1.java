package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public abstract class q1 {
    public static final m0 a;

    static {
        a = (n1.f1794f && n1.f1793e && !c.a()) ? new o1(1) : new o1(0);
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
            return c(b10, bArr[i5]);
        }
        if (i10 == 2) {
            return d(b10, bArr[i5], bArr[i5 + 1]);
        }
        throw new AssertionError();
    }

    public static int b(String str) {
        int length = str.length();
        int i5 = 0;
        int i6 = 0;
        while (i6 < length && str.charAt(i6) < 128) {
            i6++;
        }
        int i10 = length;
        while (true) {
            if (i6 >= length) {
                break;
            }
            char charAt = str.charAt(i6);
            if (charAt < 2048) {
                i10 += (127 - charAt) >>> 31;
                i6++;
            } else {
                int length2 = str.length();
                while (i6 < length2) {
                    char charAt2 = str.charAt(i6);
                    if (charAt2 < 2048) {
                        i5 += (127 - charAt2) >>> 31;
                    } else {
                        i5 += 2;
                        if (55296 <= charAt2 && charAt2 <= 57343) {
                            if (Character.codePointAt(str, i6) < 65536) {
                                throw new p1(i6, length2);
                            }
                            i6++;
                        }
                    }
                    i6++;
                }
                i10 += i5;
            }
        }
        if (i10 >= length) {
            return i10;
        }
        throw new IllegalArgumentException("UTF-8 length does not fit in int: " + (i10 + 4294967296L));
    }

    public static int c(int i5, int i6) {
        if (i5 > -12 || i6 > -65) {
            return -1;
        }
        return i5 ^ (i6 << 8);
    }

    public static int d(int i5, int i6, int i10) {
        if (i5 > -12 || i6 > -65 || i10 > -65) {
            return -1;
        }
        return (i5 ^ (i6 << 8)) ^ (i10 << 16);
    }
}
