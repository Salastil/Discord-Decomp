package vj;

import com.google.zxing.Result;
import java.util.EnumMap;
import jj.l;

/* loaded from: classes3.dex */
public final class i {

    /* renamed from: c, reason: collision with root package name */
    public static final int[] f19436c = {24, 20, 18, 17, 12, 6, 3, 10, 9, 5};
    public final int[] a;

    /* renamed from: b, reason: collision with root package name */
    public final StringBuilder f19437b;

    public i(int i5) {
        switch (i5) {
            case 1:
                this.a = new int[4];
                this.f19437b = new StringBuilder();
                break;
            default:
                this.a = new int[4];
                this.f19437b = new StringBuilder();
                break;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x00b8, code lost:
    
        if (r1.equals("99991") == false) goto L41;
     */
    /* JADX WARN: Removed duplicated region for block: B:41:0x014d  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x011d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public Result a(int i5, nj.a aVar, int[] iArr) {
        String str;
        String str2;
        EnumMap enumMap;
        StringBuilder sb2 = this.f19437b;
        sb2.setLength(0);
        int[] iArr2 = this.a;
        iArr2[0] = 0;
        iArr2[1] = 0;
        char c6 = 2;
        iArr2[2] = 0;
        iArr2[3] = 0;
        int i6 = aVar.f15509e;
        int i10 = iArr[1];
        int i11 = 0;
        for (int i12 = 0; i12 < 5 && i10 < i6; i12++) {
            int h6 = k.h(aVar, iArr2, i10, k.f19443g);
            sb2.append((char) ((h6 % 10) + 48));
            for (int i13 : iArr2) {
                i10 += i13;
            }
            if (h6 >= 10) {
                i11 |= 1 << (4 - i12);
            }
            if (i12 != 4) {
                i10 = aVar.c(aVar.b(i10));
            }
        }
        if (sb2.length() != 5) {
            throw jj.g.f12795i;
        }
        for (int i14 = 0; i14 < 10; i14++) {
            if (i11 == f19436c[i14]) {
                String sb3 = sb2.toString();
                int length = sb3.length();
                int i15 = 0;
                for (int i16 = length - 2; i16 >= 0; i16 -= 2) {
                    i15 += sb3.charAt(i16) - '0';
                }
                int i17 = i15 * 3;
                for (int i18 = length - 1; i18 >= 0; i18 -= 2) {
                    i17 += sb3.charAt(i18) - '0';
                }
                if ((i17 * 3) % 10 != i14) {
                    throw jj.g.f12795i;
                }
                String sb4 = sb2.toString();
                if (sb4.length() == 5) {
                    char charAt = sb4.charAt(0);
                    if (charAt == '0') {
                        str = "£";
                    } else if (charAt != '5') {
                        str = "";
                        if (charAt == '9') {
                            switch (sb4.hashCode()) {
                                case 54118329:
                                    if (sb4.equals("90000")) {
                                        c6 = 0;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case 54395376:
                                    if (sb4.equals("99990")) {
                                        c6 = 1;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case 54395377:
                                    break;
                                default:
                                    c6 = 65535;
                                    break;
                            }
                            switch (c6) {
                                case 0:
                                    str2 = null;
                                    break;
                                case 1:
                                    str2 = "Used";
                                    break;
                                case 2:
                                    str2 = "0.00";
                                    break;
                            }
                            if (str2 != null) {
                                enumMap = new EnumMap(jj.k.class);
                                enumMap.put((EnumMap) jj.k.f12807w, (jj.k) str2);
                                float f2 = i5;
                                Result result = new Result(sb4, null, new l[]{new l((iArr[0] + iArr[1]) / 2.0f, f2), new l(i10, f2)}, jj.a.N);
                                if (enumMap != null) {
                                    result.a(enumMap);
                                }
                                return result;
                            }
                        }
                    } else {
                        str = "$";
                    }
                    int parseInt = Integer.parseInt(sb4.substring(1));
                    String valueOf = String.valueOf(parseInt / 100);
                    int i19 = parseInt % 100;
                    str2 = str + valueOf + '.' + (i19 < 10 ? "0".concat(String.valueOf(i19)) : String.valueOf(i19));
                    if (str2 != null) {
                    }
                }
                enumMap = null;
                float f22 = i5;
                Result result2 = new Result(sb4, null, new l[]{new l((iArr[0] + iArr[1]) / 2.0f, f22), new l(i10, f22)}, jj.a.N);
                if (enumMap != null) {
                }
                return result2;
            }
        }
        throw jj.g.f12795i;
    }
}
