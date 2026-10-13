package bg;

/* loaded from: classes3.dex */
public final class p0 extends q0 {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public p0(String str, String str2) {
        super(new n0(str, r3), (Character) '=');
        char[] charArray = str2.toCharArray();
        if (charArray.length != 64) {
            throw new IllegalArgumentException();
        }
    }

    @Override // bg.q0
    public final void a(StringBuilder sb2, byte[] bArr, int i5) {
        int i6 = 0;
        b.m(0, i5, bArr.length);
        for (int i10 = i5; i10 >= 3; i10 -= 3) {
            int i11 = ((bArr[i6 + 1] & 255) << 8) | ((bArr[i6] & 255) << 16) | (bArr[i6 + 2] & 255);
            n0 n0Var = this.a;
            char[] cArr = n0Var.f2969b;
            char[] cArr2 = n0Var.f2969b;
            sb2.append(cArr[i11 >>> 18]);
            sb2.append(cArr2[(i11 >>> 12) & 63]);
            sb2.append(cArr2[(i11 >>> 6) & 63]);
            sb2.append(cArr2[i11 & 63]);
            i6 += 3;
        }
        if (i6 < i5) {
            b(sb2, bArr, i6, i5 - i6);
        }
    }
}
