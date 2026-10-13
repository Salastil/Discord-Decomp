package ad;

/* loaded from: classes3.dex */
public final class x extends ds.a {
    public static int H(byte[] bArr, int i5) {
        return (bArr[i5 + 3] & 255) | ((bArr[i5] & 255) << 24) | ((bArr[i5 + 1] & 255) << 16) | ((bArr[i5 + 2] & 255) << 8);
    }
}
