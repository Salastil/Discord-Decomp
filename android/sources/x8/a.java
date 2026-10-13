package x8;

import java.io.UnsupportedEncodingException;

/* loaded from: classes3.dex */
public abstract class a {
    public static boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f20290b = a("RIFF");

    /* renamed from: c, reason: collision with root package name */
    public static final byte[] f20291c = a("WEBP");

    /* renamed from: d, reason: collision with root package name */
    public static final byte[] f20292d = a("VP8 ");

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f20293e = a("VP8L");

    /* renamed from: f, reason: collision with root package name */
    public static final byte[] f20294f = a("VP8X");

    public static byte[] a(String str) {
        try {
            return str.getBytes("ASCII");
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException("ASCII not found!", e9);
        }
    }

    public static boolean b(int i5, byte[] bArr, byte[] bArr2) {
        if (bArr2 != null && bArr2.length + i5 <= bArr.length) {
            for (int i6 = 0; i6 < bArr2.length; i6++) {
                if (bArr[i6 + i5] == bArr2[i6]) {
                }
            }
            return true;
        }
        return false;
    }
}
