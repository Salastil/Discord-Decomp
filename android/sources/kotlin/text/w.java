package kotlin.text;

/* loaded from: classes3.dex */
public class w extends v {
    /* JADX WARN: Removed duplicated region for block: B:101:0x0147  */
    /* JADX WARN: Removed duplicated region for block: B:126:0x0135  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0132  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x013d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final boolean d(String str) {
        char c6;
        boolean z5;
        boolean z6;
        int charAt;
        int i5;
        boolean z7;
        boolean z8;
        boolean z10 = true;
        int length = str.length() - 1;
        int i6 = 0;
        while (true) {
            c6 = ' ';
            if (i6 > length || str.charAt(i6) > ' ') {
                break;
            }
            i6++;
        }
        if (i6 > length) {
            return false;
        }
        while (length > i6 && str.charAt(length) <= ' ') {
            length--;
        }
        if (str.charAt(i6) == '+' || str.charAt(i6) == '-') {
            i6++;
        }
        if (i6 > length) {
            return false;
        }
        if (str.charAt(i6) == '0') {
            int i10 = i6 + 1;
            if (i10 > length) {
                return true;
            }
            if ((str.charAt(i10) | ' ') == 120) {
                int i11 = i6 + 2;
                int i12 = i11;
                while (true) {
                    if (i12 > length) {
                        z5 = z10;
                        break;
                    }
                    z5 = z10;
                    if (((str.charAt(i12) - '0') & 65535) >= 10 && (((r15 | ' ') - 97) & 65535) >= 6) {
                        break;
                    }
                    i12++;
                    z10 = z5;
                }
                boolean z11 = i11 != i12 ? z5 : false;
                if (i12 <= length) {
                    if (str.charAt(i12) == '.') {
                        int i13 = i12 + 1;
                        int i14 = i13;
                        while (i14 <= length) {
                            char c8 = c6;
                            if (((str.charAt(i14) - '0') & 65535) >= 10 && (((r15 | ' ') - 97) & 65535) >= 6) {
                                break;
                            }
                            i14++;
                            c6 = c8;
                        }
                        z8 = i13 != i14 ? z5 : false;
                        i12 = i14;
                    } else {
                        z8 = false;
                    }
                    if (z11 || z8) {
                        i6 = i12;
                        if (i6 != -1 || i6 > length) {
                            return false;
                        }
                        z6 = z5;
                        if (!z6) {
                            int i15 = i6;
                            while (i15 <= length && ((str.charAt(i15) - '0') & 65535) < 10) {
                                i15++;
                            }
                            boolean z12 = i6 != i15 ? z5 : false;
                            if (i15 > length) {
                                i6 = i15;
                            } else {
                                if (str.charAt(i15) == '.') {
                                    int i16 = i15 + 1;
                                    i5 = i16;
                                    while (i5 <= length && ((str.charAt(i5) - '0') & 65535) < 10) {
                                        i5++;
                                    }
                                    if (i16 != i5) {
                                        z7 = z5;
                                        if (!z12 || z7) {
                                            i6 = i5;
                                        } else {
                                            String str2 = length == i5 + 2 ? "NaN" : length == i5 + 7 ? "Infinity" : null;
                                            i6 = (str2 != null && StringsKt__StringsKt.q(i5, str, str2, false) == i5) ? length + 1 : -1;
                                        }
                                    }
                                } else {
                                    i5 = i15;
                                }
                                z7 = false;
                                if (z12) {
                                }
                                i6 = i5;
                            }
                            if (i6 == -1) {
                                return false;
                            }
                            if (i6 > length) {
                                return z5;
                            }
                        }
                        int i17 = i6 + 1;
                        charAt = str.charAt(i6) | ' ';
                        if (charAt == (!z6 ? 112 : 101)) {
                            if (z6 || (!(charAt == 102 || charAt == 100) || i17 <= length)) {
                                return false;
                            }
                            return z5;
                        }
                        if (i17 > length) {
                            return false;
                        }
                        if ((str.charAt(i17) == '+' || str.charAt(i17) == '-') && (i17 = i6 + 2) > length) {
                            return false;
                        }
                        while (i17 <= length && ((str.charAt(i17) - '0') & 65535) < 10) {
                            i17++;
                        }
                        if (i17 > length) {
                            return z5;
                        }
                        if (i17 != length) {
                            return false;
                        }
                        int charAt2 = str.charAt(i17) | ' ';
                        if (charAt2 == 102 || charAt2 == 100) {
                            return z5;
                        }
                        return false;
                    }
                }
                i6 = -1;
                if (i6 != -1) {
                }
                return false;
            }
        }
        z5 = true;
        z6 = false;
        if (!z6) {
        }
        int i172 = i6 + 1;
        charAt = str.charAt(i6) | ' ';
        if (charAt == (!z6 ? 112 : 101)) {
        }
    }
}
