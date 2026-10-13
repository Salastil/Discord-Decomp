package zf;

/* loaded from: classes3.dex */
public final class h {
    public final char a;

    public h(char c6) {
        this.a = c6;
    }

    public final String toString() {
        char[] cArr = new char[6];
        cArr[0] = '\\';
        cArr[1] = 'u';
        cArr[2] = 0;
        cArr[3] = 0;
        cArr[4] = 0;
        cArr[5] = 0;
        int i5 = this.a;
        for (int i6 = 0; i6 < 4; i6++) {
            cArr[5 - i6] = "0123456789ABCDEF".charAt(i5 & 15);
            i5 >>= 4;
        }
        String copyValueOf = String.copyValueOf(cArr);
        return a3.e.n(new StringBuilder(String.valueOf(copyValueOf).length() + 18), "CharMatcher.is('", copyValueOf, "')");
    }
}
