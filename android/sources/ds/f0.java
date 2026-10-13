package ds;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class f0 {
    public static final String[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f7721b;

    static {
        String[] strArr = new String[93];
        for (int i5 = 0; i5 < 32; i5++) {
            strArr[i5] = "\\u" + b(i5 >> 12) + b(i5 >> 8) + b(i5 >> 4) + b(i5);
        }
        strArr[34] = "\\\"";
        strArr[92] = "\\\\";
        strArr[9] = "\\t";
        strArr[8] = "\\b";
        strArr[10] = "\\n";
        strArr[13] = "\\r";
        strArr[12] = "\\f";
        a = strArr;
        byte[] bArr = new byte[93];
        for (int i6 = 0; i6 < 32; i6++) {
            bArr[i6] = 1;
        }
        bArr[34] = 34;
        bArr[92] = 92;
        bArr[9] = 116;
        bArr[8] = 98;
        bArr[10] = 110;
        bArr[13] = 114;
        bArr[12] = 102;
        f7721b = bArr;
    }

    public static final void a(String value, StringBuilder sb2) {
        Intrinsics.checkNotNullParameter(sb2, "<this>");
        Intrinsics.checkNotNullParameter(value, "value");
        sb2.append('\"');
        int length = value.length();
        int i5 = 0;
        for (int i6 = 0; i6 < length; i6++) {
            char charAt = value.charAt(i6);
            String[] strArr = a;
            if (charAt < strArr.length && strArr[charAt] != null) {
                sb2.append((CharSequence) value, i5, i6);
                sb2.append(strArr[charAt]);
                i5 = i6 + 1;
            }
        }
        if (i5 != 0) {
            sb2.append((CharSequence) value, i5, value.length());
        } else {
            sb2.append(value);
        }
        sb2.append('\"');
    }

    public static final char b(int i5) {
        int i6 = i5 & 15;
        return (char) (i6 < 10 ? i6 + 48 : i6 + 87);
    }
}
