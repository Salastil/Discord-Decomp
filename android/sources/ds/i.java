package ds;

import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class i {
    public static final char[] a = new char[117];

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f7731b = new byte[126];

    static {
        for (int i5 = 0; i5 < 32; i5++) {
        }
        a('b', 8);
        a('t', 9);
        a('n', 10);
        a('f', 12);
        a('r', 13);
        a('/', 47);
        a('\"', 34);
        a('\\', 92);
        byte[] bArr = f7731b;
        for (int i6 = 0; i6 < 33; i6++) {
            bArr[i6] = ByteCompanionObject.MAX_VALUE;
        }
        bArr[9] = 3;
        bArr[10] = 3;
        bArr[13] = 3;
        bArr[32] = 3;
        bArr[44] = 4;
        bArr[58] = 5;
        bArr[123] = 6;
        bArr[125] = 7;
        bArr[91] = 8;
        bArr[93] = 9;
        bArr[34] = 1;
        bArr[92] = 2;
    }

    public static void a(char c6, int i5) {
        if (c6 != 'u') {
            a[c6] = (char) i5;
        }
    }
}
