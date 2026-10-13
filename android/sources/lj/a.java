package lj;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import f0.e;
import gj.c;
import hc.s0;
import java.util.Arrays;
import jj.d;
import jj.j;
import nj.b;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f14065b = {"CTRL_PS", " ", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "CTRL_LL", "CTRL_ML", "CTRL_DL", "CTRL_BS"};

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f14066c = {"CTRL_PS", " ", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "CTRL_US", "CTRL_ML", "CTRL_DL", "CTRL_BS"};

    /* renamed from: d, reason: collision with root package name */
    public static final String[] f14067d = {"CTRL_PS", " ", "\u0001", "\u0002", "\u0003", "\u0004", "\u0005", "\u0006", "\u0007", "\b", "\t", ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\u000b", "\f", "\r", "\u001b", "\u001c", "\u001d", "\u001e", "\u001f", "@", "\\", "^", "_", "`", "|", "~", "\u007f", "CTRL_LL", "CTRL_UL", "CTRL_PL", "CTRL_BS"};

    /* renamed from: e, reason: collision with root package name */
    public static final String[] f14068e = {"", "\r", "\r\n", ". ", ", ", ": ", "!", "\"", "#", "$", "%", "&", "'", "(", ")", "*", "+", ",", "-", ".", "/", ":", ";", "<", "=", ">", "?", "[", "]", "{", "}", "CTRL_UL"};

    /* renamed from: f, reason: collision with root package name */
    public static final String[] f14069f = {"CTRL_PS", " ", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ",", ".", "CTRL_UL", "CTRL_US"};
    public kj.a a;

    public static int b(boolean[] zArr, int i5, int i6) {
        int i10 = 0;
        for (int i11 = i5; i11 < i5 + i6; i11++) {
            i10 <<= 1;
            if (zArr[i11]) {
                i10 |= 1;
            }
        }
        return i10;
    }

    public final s0 a(kj.a aVar) {
        int i5;
        pj.a aVar2;
        String str;
        this.a = aVar;
        b bVar = (b) aVar.f13403d;
        boolean z5 = aVar.f13402c;
        int i6 = aVar.f13401b;
        int i10 = (z5 ? 11 : 14) + (i6 << 2);
        int[] iArr = new int[i10];
        int i11 = ((z5 ? 88 : 112) + (i6 << 4)) * i6;
        boolean[] zArr = new boolean[i11];
        int i12 = 2;
        int i13 = 1;
        if (z5) {
            for (int i14 = 0; i14 < i10; i14++) {
                iArr[i14] = i14;
            }
        } else {
            int i15 = i10 / 2;
            int i16 = ((((i15 - 1) / 15) * 2) + (i10 + 1)) / 2;
            for (int i17 = 0; i17 < i15; i17++) {
                iArr[(i15 - i17) - 1] = (i16 - r15) - 1;
                iArr[i15 + i17] = (i17 / 15) + i17 + i16 + 1;
            }
        }
        int i18 = 0;
        int i19 = 0;
        while (true) {
            if (i18 >= i6) {
                break;
            }
            int i20 = ((i6 - i18) << i12) + (z5 ? 9 : 12);
            int i21 = i18 << 1;
            int i22 = (i10 - 1) - i21;
            int i23 = 0;
            while (i23 < i20) {
                int i24 = i23 << 1;
                int i25 = 0;
                while (i25 < i12) {
                    int i26 = i21 + i25;
                    int i27 = i13;
                    int i28 = i21 + i23;
                    zArr[i19 + i24 + i25] = bVar.b(iArr[i26], iArr[i28]);
                    int i29 = i22 - i25;
                    zArr[(i20 * 2) + i19 + i24 + i25] = bVar.b(iArr[i28], iArr[i29]);
                    int i30 = i22 - i23;
                    zArr[(i20 * 4) + i19 + i24 + i25] = bVar.b(iArr[i29], iArr[i30]);
                    zArr[(i20 * 6) + i19 + i24 + i25] = bVar.b(iArr[i30], iArr[i26]);
                    i25++;
                    i13 = i27;
                    i6 = i6;
                    i12 = 2;
                }
                i23++;
                i12 = 2;
            }
            i19 += i20 << 3;
            i18++;
            i6 = i6;
            i12 = 2;
        }
        int i31 = i13;
        kj.a aVar3 = this.a;
        int i32 = aVar3.f13401b;
        int i33 = 8;
        if (i32 <= 2) {
            aVar2 = pj.a.j;
            i5 = 6;
        } else if (i32 <= 8) {
            aVar2 = pj.a.f16402n;
            i5 = 8;
        } else if (i32 <= 22) {
            aVar2 = pj.a.f16399i;
            i5 = 10;
        } else {
            aVar2 = pj.a.f16398h;
        }
        int i34 = aVar3.a;
        int i35 = i11 / i5;
        if (i35 < i34) {
            throw d.a();
        }
        int i36 = i11 % i5;
        int[] iArr2 = new int[i35];
        int i37 = 0;
        while (i37 < i35) {
            iArr2[i37] = b(zArr, i36, i5);
            i37++;
            i36 += i5;
        }
        try {
            new c(26, aVar2).z(i35 - i34, iArr2);
            int i38 = i31 << i5;
            int i39 = i38 - 1;
            int i40 = 0;
            int i41 = 0;
            while (i40 < i34) {
                int i42 = iArr2[i40];
                if (i42 == 0 || i42 == i39) {
                    throw d.a();
                }
                if (i42 == i31 || i42 == i38 - 2) {
                    i41++;
                }
                i40++;
                i31 = 1;
            }
            int i43 = (i34 * i5) - i41;
            boolean[] zArr2 = new boolean[i43];
            int i44 = 0;
            for (int i45 = 0; i45 < i34; i45++) {
                int i46 = iArr2[i45];
                int i47 = 1;
                if (i46 == 1 || i46 == i38 - 2) {
                    Arrays.fill(zArr2, i44, (i44 + i5) - 1, i46 > 1);
                    i44 = (i5 - 1) + i44;
                } else {
                    int i48 = i5 - 1;
                    while (i48 >= 0) {
                        int i49 = i44 + 1;
                        zArr2[i44] = (i46 & (i47 << i48)) != 0;
                        i48--;
                        i44 = i49;
                        i47 = 1;
                    }
                }
            }
            int i50 = (i43 + 7) / 8;
            byte[] bArr = new byte[i50];
            for (int i51 = 0; i51 < i50; i51++) {
                int i52 = i51 << 3;
                int i53 = i43 - i52;
                bArr[i51] = (byte) (i53 >= 8 ? b(zArr2, i52, 8) : b(zArr2, i52, i53) << (8 - i53));
            }
            StringBuilder sb2 = new StringBuilder(20);
            int i54 = 1;
            int i55 = 0;
            int i56 = 1;
            while (i55 < i43) {
                if (i56 != 6) {
                    int i57 = i56 == 4 ? 4 : 5;
                    if (i43 - i55 < i57) {
                        break;
                    }
                    int b10 = b(zArr2, i55, i57);
                    i55 += i57;
                    int b11 = e.b(i56);
                    if (b11 == 0) {
                        str = f14065b[b10];
                    } else if (b11 == 1) {
                        str = f14066c[b10];
                    } else if (b11 == 2) {
                        str = f14067d[b10];
                    } else if (b11 == 3) {
                        str = f14069f[b10];
                    } else {
                        if (b11 != 4) {
                            throw new IllegalStateException("Bad table");
                        }
                        str = f14068e[b10];
                    }
                    if (str.startsWith("CTRL_")) {
                        char charAt = str.charAt(5);
                        i54 = charAt != 'B' ? charAt != 'D' ? charAt != 'P' ? charAt != 'L' ? charAt != 'M' ? 1 : 3 : 2 : 5 : 4 : 6;
                        if (str.charAt(6) != 'L') {
                            int i58 = i56;
                            i56 = i54;
                            i54 = i58;
                            i33 = 8;
                        }
                    } else {
                        sb2.append(str);
                    }
                    i56 = i54;
                    i33 = 8;
                } else {
                    if (i43 - i55 < 5) {
                        break;
                    }
                    int b12 = b(zArr2, i55, 5);
                    int i59 = i55 + 5;
                    if (b12 == 0) {
                        if (i43 - i59 < 11) {
                            break;
                        }
                        b12 = b(zArr2, i59, 11) + 31;
                        i59 = i55 + 16;
                    }
                    int i60 = 0;
                    while (true) {
                        if (i60 >= b12) {
                            i55 = i59;
                            break;
                        }
                        if (i43 - i59 < i33) {
                            i55 = i43;
                            break;
                        }
                        sb2.append((char) b(zArr2, i59, i33));
                        i59 += 8;
                        i60++;
                    }
                    i56 = i54;
                }
            }
            return new s0(bArr, sb2.toString(), null, null);
        } catch (pj.b e9) {
            d dVar = d.f12792i;
            if (j.f12801d) {
                throw new d(e9);
            }
            throw d.f12792i;
        }
    }
}
