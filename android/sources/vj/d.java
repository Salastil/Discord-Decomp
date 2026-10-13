package vj;

import com.facebook.imageutils.TiffUtil;
import com.facebook.react.views.image.ReactImageView;
import com.google.zxing.Result;
import java.util.Arrays;
import java.util.Map;

/* loaded from: classes3.dex */
public final class d extends h {

    /* renamed from: c, reason: collision with root package name */
    public static final char[] f19424c = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-. $/+%abcd*".toCharArray();

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f19425d;

    /* renamed from: e, reason: collision with root package name */
    public static final int f19426e;
    public final StringBuilder a = new StringBuilder(20);

    /* renamed from: b, reason: collision with root package name */
    public final int[] f19427b = new int[6];

    static {
        int[] iArr = {276, 328, 324, 322, 296, 292, 290, 336, TiffUtil.TIFF_TAG_ORIENTATION, 266, 424, 420, 418, 404, 402, 394, 360, 356, 354, 308, 282, 344, 332, 326, ReactImageView.REMOTE_IMAGE_FADE_DURATION_MS, 278, 436, 434, 428, 422, 406, 410, 364, 358, 310, 314, 302, 468, 466, 458, 366, 374, 430, 294, 474, 470, 306, 350};
        f19425d = iArr;
        f19426e = iArr[47];
    }

    public static void g(CharSequence charSequence, int i5, int i6) {
        int i10 = 0;
        int i11 = 1;
        for (int i12 = i5 - 1; i12 >= 0; i12--) {
            i10 += "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-. $/+%abcd*".indexOf(charSequence.charAt(i12)) * i11;
            i11++;
            if (i11 > i6) {
                i11 = 1;
            }
        }
        if (charSequence.charAt(i5) != f19424c[i10 % 47]) {
            throw jj.b.a();
        }
    }

    public static int h(int[] iArr) {
        int i5 = 0;
        for (int i6 : iArr) {
            i5 += i6;
        }
        int length = iArr.length;
        int i10 = 0;
        for (int i11 = 0; i11 < length; i11++) {
            int round = Math.round((iArr[i11] * 9.0f) / i5);
            if (round <= 0 || round > 4) {
                return -1;
            }
            if ((i11 & 1) == 0) {
                for (int i12 = 0; i12 < round; i12++) {
                    i10 = (i10 << 1) | 1;
                }
            } else {
                i10 <<= round;
            }
        }
        return i10;
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x0128, code lost:
    
        if (r6 < 'A') goto L123;
     */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x012a, code lost:
    
        if (r6 > 'Z') goto L125;
     */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x012c, code lost:
    
        r6 = r6 - '@';
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x0137, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x013c, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x013d, code lost:
    
        r15.append(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:113:0x0143, code lost:
    
        r13 = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x016b, code lost:
    
        return new com.google.zxing.Result(r15.toString(), null, new jj.l[]{new jj.l((r1[1] + r1[0]) / 2.0f, r13), new jj.l((r9 / 2.0f) + r3, r13)}, jj.a.f12780v);
     */
    /* JADX WARN: Code restructure failed: missing block: B:116:0x016e, code lost:
    
        throw jj.g.f12795i;
     */
    /* JADX WARN: Code restructure failed: missing block: B:118:0x0171, code lost:
    
        throw jj.g.f12795i;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x0052, code lost:
    
        r5 = vj.d.f19424c[r6];
        r4.append(r5);
        r6 = r2.length;
        r7 = 0;
        r9 = r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x005c, code lost:
    
        if (r7 >= r6) goto L116;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x005e, code lost:
    
        r9 = r9 + r2[r7];
        r7 = r7 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x0064, code lost:
    
        r6 = r14.b(r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x006a, code lost:
    
        if (r5 != '*') goto L96;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x006c, code lost:
    
        r4.deleteCharAt(r4.length() - 1);
        r5 = r2.length;
        r7 = 0;
        r9 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0077, code lost:
    
        if (r7 >= r5) goto L117;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0079, code lost:
    
        r9 = r9 + r2[r7];
        r7 = r7 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x007f, code lost:
    
        if (r6 == r15) goto L94;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x0085, code lost:
    
        if (r14.a(r6) == false) goto L94;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x008b, code lost:
    
        if (r4.length() < 2) goto L92;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x008d, code lost:
    
        r14 = r4.length();
        g(r4, r14 - 2, 20);
        g(r4, r14 - 1, 15);
        r4.setLength(r4.length() - 2);
        r14 = r4.length();
        r15 = new java.lang.StringBuilder(r14);
        r2 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x00b0, code lost:
    
        if (r2 >= r14) goto L126;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x00b2, code lost:
    
        r5 = r4.charAt(r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x00b8, code lost:
    
        if (r5 < 'a') goto L88;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00bc, code lost:
    
        if (r5 > 'd') goto L88;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x00c0, code lost:
    
        if (r2 >= (r14 - 1)) goto L118;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x00c2, code lost:
    
        r2 = r2 + 1;
        r6 = r4.charAt(r2);
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x00ce, code lost:
    
        switch(r5) {
            case 97: goto L80;
            case 98: goto L56;
            case 99: goto L49;
            case 100: goto L43;
            default: goto L42;
        };
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x00d1, code lost:
    
        r5 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x012f, code lost:
    
        r15.append(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0140, code lost:
    
        r2 = r2 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x00d4, code lost:
    
        if (r6 < 'A') goto L119;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x00d6, code lost:
    
        if (r6 > 'Z') goto L120;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x00d8, code lost:
    
        r6 = r6 + ' ';
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x00da, code lost:
    
        r5 = (char) r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x00e0, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x00e1, code lost:
    
        if (r6 < 'A') goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x00e3, code lost:
    
        if (r6 > 'O') goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x00e5, code lost:
    
        r6 = r6 - ' ';
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x00e8, code lost:
    
        if (r6 != 'Z') goto L124;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x00ea, code lost:
    
        r5 = ':';
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x00f1, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x00f2, code lost:
    
        if (r6 < 'A') goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x00f6, code lost:
    
        if (r6 > 'E') goto L60;
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x00f8, code lost:
    
        r6 = r6 - '&';
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x00fd, code lost:
    
        if (r6 < 'F') goto L65;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0101, code lost:
    
        if (r6 > 'J') goto L65;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0103, code lost:
    
        r6 = r6 - 11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x0108, code lost:
    
        if (r6 < 'K') goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x010a, code lost:
    
        if (r6 > 'O') goto L69;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x010c, code lost:
    
        r6 = r6 + 16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x0111, code lost:
    
        if (r6 < 'P') goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x0115, code lost:
    
        if (r6 > 'S') goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x0117, code lost:
    
        r6 = r6 + '+';
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x011c, code lost:
    
        if (r6 < 'T') goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x011e, code lost:
    
        if (r6 > 'Z') goto L122;
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x0120, code lost:
    
        r5 = 127;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x0127, code lost:
    
        throw jj.d.a();
     */
    @Override // vj.h
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Result b(int i5, nj.a aVar, Map map) {
        int b10;
        int i6 = aVar.f15509e;
        int b11 = aVar.b(0);
        int[] iArr = this.f19427b;
        Arrays.fill(iArr, 0);
        int length = iArr.length;
        boolean z5 = false;
        int i10 = 0;
        int i11 = b11;
        while (b11 < i6) {
            if (aVar.a(b11) != z5) {
                iArr[i10] = iArr[i10] + 1;
            } else {
                if (i10 != length - 1) {
                    i10++;
                } else if (h(iArr) == f19426e) {
                    int b12 = aVar.b(new int[]{i11, b11}[1]);
                    Arrays.fill(iArr, 0);
                    StringBuilder sb2 = this.a;
                    sb2.setLength(0);
                    while (true) {
                        h.e(b12, aVar, iArr);
                        int h6 = h(iArr);
                        if (h6 < 0) {
                            throw jj.g.f12795i;
                        }
                        int i12 = 0;
                        while (true) {
                            int[] iArr2 = f19425d;
                            if (i12 >= iArr2.length) {
                                throw jj.g.f12795i;
                            }
                            if (iArr2[i12] == h6) {
                                break;
                            }
                            i12++;
                        }
                        b12 = b10;
                    }
                } else {
                    i11 += iArr[0] + iArr[1];
                    int i13 = i10 - 1;
                    System.arraycopy(iArr, 2, iArr, 0, i13);
                    iArr[i13] = 0;
                    iArr[i10] = 0;
                    i10--;
                }
                iArr[i10] = 1;
                z5 = !z5;
            }
            b11++;
        }
        throw jj.g.f12795i;
    }
}
