package vj;

import com.facebook.imageutils.JfifUtil;
import com.facebook.imageutils.TiffUtil;
import com.facebook.react.common.assets.ReactFontManager;
import com.google.zxing.Result;
import java.util.Arrays;
import java.util.Map;
import jj.l;

/* loaded from: classes3.dex */
public final class c extends h {

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f19421d = {52, 289, 97, 352, 49, 304, 112, 37, 292, 100, 265, 73, 328, 25, 280, 88, 13, 268, 76, 28, 259, 67, 322, 19, TiffUtil.TIFF_TAG_ORIENTATION, 82, 7, 262, 70, 22, 385, 193, 448, 145, ReactFontManager.TypefaceStyle.NORMAL, JfifUtil.MARKER_RST0, 133, 388, 196, 168, 162, 138, 42};
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final StringBuilder f19422b = new StringBuilder(20);

    /* renamed from: c, reason: collision with root package name */
    public final int[] f19423c = new int[9];

    public c(boolean z5) {
        this.a = z5;
    }

    public static int g(int[] iArr) {
        int length = iArr.length;
        int i5 = 0;
        while (true) {
            int i6 = Integer.MAX_VALUE;
            for (int i10 : iArr) {
                if (i10 < i6 && i10 > i5) {
                    i6 = i10;
                }
            }
            int i11 = 0;
            int i12 = 0;
            int i13 = 0;
            for (int i14 = 0; i14 < length; i14++) {
                int i15 = iArr[i14];
                if (i15 > i6) {
                    i12 |= 1 << ((length - 1) - i14);
                    i11++;
                    i13 += i15;
                }
            }
            if (i11 == 3) {
                for (int i16 = 0; i16 < length && i11 > 0; i16++) {
                    int i17 = iArr[i16];
                    if (i17 > i6) {
                        i11--;
                        if ((i17 << 1) >= i13) {
                            return -1;
                        }
                    }
                }
                return i12;
            }
            if (i11 <= 3) {
                return -1;
            }
            i5 = i6;
        }
    }

    @Override // vj.h
    public final Result b(int i5, nj.a aVar, Map map) {
        int i6;
        char c6;
        int[] iArr = this.f19423c;
        Arrays.fill(iArr, 0);
        StringBuilder sb2 = this.f19422b;
        sb2.setLength(0);
        int i10 = aVar.f15509e;
        int b10 = aVar.b(0);
        int length = iArr.length;
        boolean z5 = false;
        int i11 = 0;
        int i12 = b10;
        while (b10 < i10) {
            boolean z6 = true;
            if (aVar.a(b10) != z5) {
                iArr[i11] = iArr[i11] + 1;
            } else {
                if (i11 != length - 1) {
                    i6 = 1;
                    i11++;
                } else if (g(iArr) == 148 && aVar.d(Math.max(0, i12 - ((b10 - i12) / 2)), i12)) {
                    int b11 = aVar.b(new int[]{i12, b10}[1]);
                    while (true) {
                        h.e(b11, aVar, iArr);
                        int g6 = g(iArr);
                        if (g6 < 0) {
                            throw jj.g.f12795i;
                        }
                        int i13 = 0;
                        while (true) {
                            if (i13 < 43) {
                                if (f19421d[i13] == g6) {
                                    c6 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-. $/+%".charAt(i13);
                                    break;
                                }
                                i13++;
                            } else {
                                if (g6 != 148) {
                                    throw jj.g.f12795i;
                                }
                                c6 = '*';
                            }
                        }
                        sb2.append(c6);
                        boolean z7 = z6;
                        int i14 = b11;
                        for (int i15 : iArr) {
                            i14 += i15;
                        }
                        int b12 = aVar.b(i14);
                        if (c6 == '*') {
                            sb2.setLength(sb2.length() - 1);
                            int i16 = 0;
                            for (int i17 : iArr) {
                                i16 += i17;
                            }
                            int i18 = (b12 - b11) - i16;
                            if (b12 != i10 && (i18 << 1) < i16) {
                                throw jj.g.f12795i;
                            }
                            if (this.a) {
                                int length2 = sb2.length() - 1;
                                int i19 = 0;
                                for (int i20 = 0; i20 < length2; i20++) {
                                    i19 += "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-. $/+%".indexOf(sb2.charAt(i20));
                                }
                                if (sb2.charAt(length2) != "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-. $/+%".charAt(i19 % 43)) {
                                    throw jj.b.a();
                                }
                                sb2.setLength(length2);
                            }
                            if (sb2.length() == 0) {
                                throw jj.g.f12795i;
                            }
                            float f2 = (r6[z7 ? 1 : 0] + r6[0]) / 2.0f;
                            float f10 = i5;
                            return new Result(sb2.toString(), null, new l[]{new l(f2, f10), new l((i16 / 2.0f) + b11, f10)}, jj.a.f12779i);
                        }
                        z6 = z7 ? 1 : 0;
                        b11 = b12;
                    }
                } else {
                    i6 = 1;
                    i12 += iArr[0] + iArr[1];
                    int i21 = i11 - 1;
                    System.arraycopy(iArr, 2, iArr, 0, i21);
                    iArr[i21] = 0;
                    iArr[i11] = 0;
                    i11--;
                }
                iArr[i11] = i6;
                z5 = !z5;
            }
            b10++;
        }
        throw jj.g.f12795i;
    }
}
