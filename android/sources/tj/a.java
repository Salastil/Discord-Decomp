package tj;

import com.google.zxing.Result;
import e4.e;
import ek.c;
import java.text.DecimalFormat;
import java.util.Map;
import jj.d;
import jj.g;
import jj.i;
import jj.k;
import jj.l;
import nj.b;

/* loaded from: classes3.dex */
public final class a implements i {

    /* renamed from: b, reason: collision with root package name */
    public static final l[] f18655b = new l[0];
    public final c a = new c(1);

    @Override // jj.i
    public final Result a(e eVar, Map map) {
        byte[] bArr;
        String valueOf;
        if (map == null || !map.containsKey(jj.c.f12785d)) {
            throw g.f12795i;
        }
        b k = eVar.k();
        int i5 = k.f15510d;
        int i6 = k.f15511e;
        int i10 = -1;
        int i11 = i6;
        int i12 = -1;
        for (int i13 = 0; i13 < i6; i13++) {
            int i14 = 0;
            while (true) {
                int i15 = k.f15512i;
                if (i14 < i15) {
                    int i16 = k.f15513v[(i15 * i13) + i14];
                    if (i16 != 0) {
                        if (i13 < i11) {
                            i11 = i13;
                        }
                        if (i13 > i12) {
                            i12 = i13;
                        }
                        int i17 = i14 << 5;
                        if (i17 < i5) {
                            int i18 = 0;
                            while ((i16 << (31 - i18)) == 0) {
                                i18++;
                            }
                            int i19 = i18 + i17;
                            if (i19 < i5) {
                                i5 = i19;
                            }
                        }
                        if (i17 + 31 > i10) {
                            int i20 = 31;
                            while ((i16 >>> i20) == 0) {
                                i20--;
                            }
                            int i21 = i17 + i20;
                            if (i21 > i10) {
                                i10 = i21;
                            }
                        }
                    }
                    i14++;
                }
            }
        }
        int[] iArr = (i10 < i5 || i12 < i11) ? null : new int[]{i5, i11, (i10 - i5) + 1, (i12 - i11) + 1};
        if (iArr == null) {
            throw g.f12795i;
        }
        int i22 = iArr[0];
        int i23 = iArr[1];
        int i24 = iArr[2];
        int i25 = iArr[3];
        int[] iArr2 = new int[33];
        for (int i26 = 0; i26 < 33; i26++) {
            int i27 = (((i25 / 2) + (i26 * i25)) / 33) + i23;
            for (int i28 = 0; i28 < 30; i28++) {
                if (k.b((((((i26 & 1) * i24) / 2) + ((i24 / 2) + (i28 * i24))) / 30) + i22, i27)) {
                    int i29 = (i28 / 32) + i26;
                    iArr2[i29] = iArr2[i29] | (1 << (i28 & 31));
                }
            }
        }
        c cVar = this.a;
        cVar.getClass();
        byte[] bArr2 = new byte[144];
        for (int i30 = 0; i30 < 33; i30++) {
            int[] iArr3 = uj.a.a[i30];
            for (int i31 = 0; i31 < 30; i31++) {
                int i32 = iArr3[i31];
                if (i32 >= 0 && ((iArr2[(i31 / 32) + i30] >>> (i31 & 31)) & 1) != 0) {
                    int i33 = i32 / 6;
                    bArr2[i33] = (byte) (bArr2[i33] | ((byte) (1 << (5 - (i32 % 6)))));
                }
            }
        }
        cVar.a(bArr2, 0, 10, 10, 0);
        int i34 = bArr2[0] & 15;
        if (i34 == 2 || i34 == 3 || i34 == 4) {
            cVar.a(bArr2, 20, 84, 40, 1);
            cVar.a(bArr2, 20, 84, 40, 2);
            bArr = new byte[94];
        } else {
            if (i34 != 5) {
                throw d.a();
            }
            cVar.a(bArr2, 20, 68, 56, 1);
            cVar.a(bArr2, 20, 68, 56, 2);
            bArr = new byte[78];
        }
        System.arraycopy(bArr2, 0, bArr, 0, 10);
        System.arraycopy(bArr2, 20, bArr, 10, bArr.length - 10);
        StringBuilder sb2 = new StringBuilder(144);
        if (i34 == 2 || i34 == 3) {
            if (i34 == 2) {
                valueOf = new DecimalFormat("0000000000".substring(0, uj.a.a(bArr, new byte[]{39, 40, 41, 42, 31, 32}))).format(uj.a.a(bArr, new byte[]{33, 34, 35, 36, 25, 26, 27, 28, 29, 30, 19, 20, 21, 22, 23, 24, 13, 14, 15, 16, 17, 18, 7, 8, 9, 10, 11, 12, 1, 2}));
            } else {
                String[] strArr = uj.a.f18946b;
                valueOf = String.valueOf(new char[]{strArr[0].charAt(uj.a.a(bArr, new byte[]{39, 40, 41, 42, 31, 32})), strArr[0].charAt(uj.a.a(bArr, new byte[]{33, 34, 35, 36, 25, 26})), strArr[0].charAt(uj.a.a(bArr, new byte[]{27, 28, 29, 30, 19, 20})), strArr[0].charAt(uj.a.a(bArr, new byte[]{21, 22, 23, 24, 13, 14})), strArr[0].charAt(uj.a.a(bArr, new byte[]{15, 16, 17, 18, 7, 8})), strArr[0].charAt(uj.a.a(bArr, new byte[]{9, 10, 11, 12, 1, 2}))});
            }
            DecimalFormat decimalFormat = new DecimalFormat("000");
            String format = decimalFormat.format(uj.a.a(bArr, new byte[]{53, 54, 43, 44, 45, 46, 47, 48, 37, 38}));
            String format2 = decimalFormat.format(uj.a.a(bArr, new byte[]{55, 56, 57, 58, 59, 60, 49, 50, 51, 52}));
            sb2.append(uj.a.b(bArr, 10, 84));
            if (sb2.toString().startsWith("[)>\u001e01\u001d")) {
                sb2.insert(9, valueOf + (char) 29 + format + (char) 29 + format2 + (char) 29);
            } else {
                sb2.insert(0, valueOf + (char) 29 + format + (char) 29 + format2 + (char) 29);
            }
        } else if (i34 == 4) {
            sb2.append(uj.a.b(bArr, 1, 93));
        } else if (i34 == 5) {
            sb2.append(uj.a.b(bArr, 1, 77));
        }
        String sb3 = sb2.toString();
        String valueOf2 = String.valueOf(i34);
        Result result = new Result(sb3, bArr, f18655b, jj.a.G);
        if (valueOf2 != null) {
            result.b(k.f12805i, valueOf2);
        }
        return result;
    }

    @Override // jj.i
    public final void reset() {
    }
}
