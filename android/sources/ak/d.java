package ak;

import java.math.BigInteger;

/* loaded from: classes3.dex */
public abstract class d {
    public static final char[] a = ";<>@[\\]_`~!\r\t,:\n-.$/\"|*()?{}'".toCharArray();

    /* renamed from: b, reason: collision with root package name */
    public static final char[] f662b = "0123456789&\r\t,:#-.$/+%*=^".toCharArray();

    /* renamed from: c, reason: collision with root package name */
    public static final BigInteger[] f663c;

    static {
        BigInteger[] bigIntegerArr = new BigInteger[16];
        f663c = bigIntegerArr;
        bigIntegerArr[0] = BigInteger.ONE;
        BigInteger valueOf = BigInteger.valueOf(900L);
        bigIntegerArr[1] = valueOf;
        int i5 = 2;
        while (true) {
            BigInteger[] bigIntegerArr2 = f663c;
            if (i5 >= bigIntegerArr2.length) {
                return;
            }
            bigIntegerArr2[i5] = bigIntegerArr2[i5 - 1].multiply(valueOf);
            i5++;
        }
    }

    public static String a(int i5, int[] iArr) {
        BigInteger bigInteger = BigInteger.ZERO;
        for (int i6 = 0; i6 < i5; i6++) {
            bigInteger = bigInteger.add(f663c[(i5 - i6) - 1].multiply(BigInteger.valueOf(iArr[i6])));
        }
        String bigInteger2 = bigInteger.toString();
        if (bigInteger2.charAt(0) == '1') {
            return bigInteger2.substring(1);
        }
        throw jj.d.a();
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x003a, code lost:
    
        r10.append(a(r3, r0));
        r3 = 0;
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0032  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0038 A[ADDED_TO_REGION, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int b(int[] iArr, int i5, StringBuilder sb2) {
        int[] iArr2 = new int[15];
        boolean z5 = false;
        int i6 = 0;
        while (true) {
            int i10 = iArr[0];
            if (i5 < i10 && !z5) {
                int i11 = i5 + 1;
                int i12 = iArr[i5];
                if (i11 == i10) {
                    z5 = true;
                }
                if (i12 < 900) {
                    iArr2[i6] = i12;
                    i6++;
                } else {
                    if (i12 != 900 && i12 != 901 && i12 != 928) {
                        switch (i12) {
                        }
                        if (i6 % 15 == 0 || i12 == 902 || z5) {
                        }
                    }
                    z5 = true;
                    if (i6 % 15 == 0) {
                    }
                }
                i5 = i11;
                if (i6 % 15 == 0) {
                }
            }
        }
        return i5;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:65:0x00a5, code lost:
    
        if (r12 != 900) goto L43;
     */
    /* JADX WARN: Failed to find 'out' block for switch in B:15:0x0035. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:16:0x0038. Please report as an issue. */
    /* JADX WARN: Failed to find 'out' block for switch in B:92:0x00f0. Please report as an issue. */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0131  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0134 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:81:0x00d2  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int c(int[] iArr, int i5, StringBuilder sb2) {
        char c6;
        char c8;
        int i6;
        int i10 = 1;
        int i11 = (iArr[0] - i5) << 1;
        int[] iArr2 = new int[i11];
        int[] iArr3 = new int[i11];
        int i12 = i5;
        boolean z5 = false;
        int i13 = 0;
        while (i12 < iArr[0] && !z5) {
            int i14 = i12 + 1;
            int i15 = iArr[i12];
            if (i15 < 900) {
                iArr2[i13] = i15 / 30;
                iArr2[i13 + 1] = i15 % 30;
                i13 += 2;
            } else if (i15 != 913) {
                if (i15 != 928) {
                    switch (i15) {
                        case 900:
                            iArr2[i13] = 900;
                            i13++;
                            break;
                        case 901:
                        case 902:
                            break;
                        default:
                            switch (i15) {
                            }
                    }
                }
                z5 = true;
            } else {
                iArr2[i13] = 913;
                i12 += 2;
                iArr3[i13] = iArr[i14];
                i13++;
            }
            i12 = i14;
        }
        int i16 = 0;
        int i17 = 1;
        int i18 = 1;
        while (i16 < i13) {
            int i19 = iArr2[i16];
            int b10 = f0.e.b(i17);
            char c10 = ' ';
            if (b10 != 0) {
                if (b10 != i10) {
                    if (b10 != 2) {
                        char[] cArr = a;
                        if (b10 != 3) {
                            if (b10 != 4) {
                                if (b10 == 5) {
                                    if (i19 < 29) {
                                        c10 = cArr[i19];
                                        i17 = i18;
                                        c8 = c10;
                                        c6 = 913;
                                    } else {
                                        if (i19 != 29 && i19 != 900) {
                                            if (i19 == 913) {
                                                sb2.append((char) iArr3[i16]);
                                            }
                                            i17 = i18;
                                        }
                                        c6 = 913;
                                        c8 = 0;
                                        i17 = 1;
                                    }
                                }
                                c6 = 913;
                                c8 = 0;
                            } else if (i19 < 26) {
                                c8 = (char) (i19 + 65);
                                i17 = i18;
                                c6 = 913;
                            } else {
                                if (i19 != 26) {
                                }
                                i17 = i18;
                                c8 = c10;
                                c6 = 913;
                            }
                        } else if (i19 < 29) {
                            c10 = cArr[i19];
                            c8 = c10;
                            c6 = 913;
                        } else {
                            if (i19 != 29) {
                                if (i19 != 900) {
                                    if (i19 == 913) {
                                        sb2.append((char) iArr3[i16]);
                                    }
                                    c6 = 913;
                                    c8 = 0;
                                }
                                i17 = 1;
                                c6 = 913;
                                c8 = 0;
                            }
                            c6 = 913;
                            c8 = 0;
                            i17 = 1;
                        }
                    } else {
                        if (i19 < 25) {
                            c10 = f662b[i19];
                        } else {
                            if (i19 != 900) {
                                if (i19 != 913) {
                                    switch (i19) {
                                        case 25:
                                            i17 = 4;
                                            break;
                                        case 27:
                                            i17 = 2;
                                            break;
                                        case 28:
                                            c6 = 913;
                                            c8 = 0;
                                            i17 = 1;
                                            break;
                                        case 29:
                                            i18 = i17;
                                            i17 = 6;
                                            break;
                                    }
                                } else {
                                    sb2.append((char) iArr3[i16]);
                                }
                                c6 = 913;
                                c8 = 0;
                            }
                            i17 = 1;
                            c6 = 913;
                            c8 = 0;
                        }
                        c8 = c10;
                        c6 = 913;
                    }
                } else if (i19 < 26) {
                    i6 = i19 + 97;
                    c8 = (char) i6;
                    c6 = 913;
                } else {
                    if (i19 != 900) {
                        if (i19 != 913) {
                            switch (i19) {
                                case 26:
                                    c8 = c10;
                                    c6 = 913;
                                    break;
                                case 27:
                                    i18 = i17;
                                    c8 = 0;
                                    i17 = 5;
                                    c6 = 913;
                                    break;
                                case 28:
                                    i17 = 3;
                                    break;
                            }
                        } else {
                            sb2.append((char) iArr3[i16]);
                        }
                        c6 = 913;
                        c8 = 0;
                    }
                    i17 = 1;
                    c6 = 913;
                    c8 = 0;
                }
                if (c8 == 0) {
                    sb2.append(c8);
                }
                i16++;
                i10 = 1;
            } else if (i19 < 26) {
                i6 = i19 + 65;
                c8 = (char) i6;
                c6 = 913;
                if (c8 == 0) {
                }
                i16++;
                i10 = 1;
            } else {
                if (i19 != 900) {
                    c6 = 913;
                    if (i19 != 913) {
                        switch (i19) {
                            case 26:
                                c8 = ' ';
                                break;
                            case 27:
                                i17 = 2;
                                break;
                            case 28:
                                i17 = 3;
                                break;
                            case 29:
                                i18 = i17;
                                i17 = 6;
                                break;
                        }
                        if (c8 == 0) {
                        }
                        i16++;
                        i10 = 1;
                    } else {
                        sb2.append((char) iArr3[i16]);
                    }
                } else {
                    c6 = 913;
                    i17 = 1;
                }
                c8 = 0;
                if (c8 == 0) {
                }
                i16++;
                i10 = 1;
            }
        }
        return i12;
    }
}
