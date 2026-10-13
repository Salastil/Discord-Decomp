package ak;

import hc.s0;
import java.io.ByteArrayOutputStream;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.HashMap;
import jj.l;
import ve.i;

/* loaded from: classes3.dex */
public abstract class g {
    public static final i a = new i(5);

    public static c a(e eVar) {
        int[] iArr;
        int i5;
        l lVar;
        l lVar2;
        l lVar3;
        l lVar4;
        if (eVar == null) {
            return null;
        }
        boolean z5 = eVar.f664v;
        c cVar = (c) eVar.f8000e;
        a[] aVarArr = (a[]) eVar.f8001i;
        a I = eVar.I();
        int i6 = -1;
        if (I == null) {
            iArr = null;
        } else {
            int i10 = I.f653f;
            int p3 = eVar.p((int) (z5 ? cVar.f655c : cVar.f657e).f12810b);
            int i11 = -1;
            int i12 = 1;
            int i13 = 0;
            for (int p5 = eVar.p((int) (z5 ? cVar.f654b : cVar.f656d).f12810b); p5 < p3; p5++) {
                a aVar = aVarArr[p5];
                if (aVar != null) {
                    aVar.d();
                    int i14 = aVar.f653f;
                    int i15 = i14 - i11;
                    if (i15 == 0) {
                        i13++;
                    } else if (i15 == 1) {
                        i12 = Math.max(i12, i13);
                        i11 = aVar.f653f;
                        i13 = 1;
                    } else if (i14 >= i10) {
                        aVarArr[p5] = null;
                    } else {
                        i13 = 1;
                        i11 = i14;
                    }
                }
            }
            iArr = new int[i10];
            for (a aVar2 : aVarArr) {
                if (aVar2 != null && (i5 = aVar2.f653f) < i10) {
                    iArr[i5] = iArr[i5] + 1;
                }
            }
        }
        if (iArr == null) {
            return null;
        }
        for (int i16 : iArr) {
            i6 = Math.max(i6, i16);
        }
        int i17 = 0;
        for (int i18 : iArr) {
            i17 += i6 - i18;
            if (i18 > 0) {
                break;
            }
        }
        for (int i19 = 0; i17 > 0 && aVarArr[i19] == null; i19++) {
            i17--;
        }
        int i20 = 0;
        for (int length = iArr.length - 1; length >= 0; length--) {
            int i21 = iArr[length];
            i20 += i6 - i21;
            if (i21 > 0) {
                break;
            }
        }
        for (int length2 = aVarArr.length - 1; i20 > 0 && aVarArr[length2] == null; length2--) {
            i20--;
        }
        l lVar5 = cVar.f654b;
        l lVar6 = cVar.f655c;
        l lVar7 = cVar.f656d;
        l lVar8 = cVar.f657e;
        if (i17 > 0) {
            l lVar9 = z5 ? lVar5 : lVar7;
            l lVar10 = new l(lVar9.a, ((int) lVar9.f12810b) - i17 >= 0 ? r11 : 0);
            if (z5) {
                lVar2 = lVar7;
                lVar = lVar10;
            } else {
                lVar = lVar5;
                lVar2 = lVar10;
            }
        } else {
            lVar = lVar5;
            lVar2 = lVar7;
        }
        if (i20 > 0) {
            l lVar11 = z5 ? lVar6 : lVar8;
            int i22 = ((int) lVar11.f12810b) + i20;
            int i23 = cVar.a.f15511e;
            if (i22 >= i23) {
                i22 = i23 - 1;
            }
            l lVar12 = new l(lVar11.a, i22);
            if (!z5) {
                lVar3 = lVar6;
                lVar4 = lVar12;
                return new c(cVar.a, lVar, lVar3, lVar2, lVar4);
            }
            lVar3 = lVar12;
        } else {
            lVar3 = lVar6;
        }
        lVar4 = lVar8;
        return new c(cVar.a, lVar, lVar3, lVar2, lVar4);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:271:0x03fc, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Removed duplicated region for block: B:278:0x0407  */
    /* JADX WARN: Removed duplicated region for block: B:295:0x0457 A[ADDED_TO_REGION] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static s0 b(int[] iArr, int i5, int[] iArr2) {
        int[] iArr3;
        char c6;
        int i6;
        int i10;
        long j;
        int i11;
        int i12;
        e4.l lVar;
        e4.l lVar2;
        int i13;
        int i14;
        if (iArr.length == 0) {
            throw jj.d.a();
        }
        int i15 = 1;
        int i16 = 1 << (i5 + 1);
        if (iArr2.length > (i16 / 2) + 3 || i16 < 0 || i16 > 512) {
            throw jj.b.a();
        }
        bk.a aVar = (bk.a) a.f19405d;
        if (iArr.length == 0) {
            throw new IllegalArgumentException();
        }
        int length = iArr.length;
        int i17 = 0;
        if (length <= 1 || iArr[0] != 0) {
            iArr3 = iArr;
        } else {
            int i18 = 1;
            while (i18 < length && iArr[i18] == 0) {
                i18++;
            }
            if (i18 == length) {
                iArr3 = new int[]{0};
            } else {
                int i19 = length - i18;
                int[] iArr4 = new int[i19];
                System.arraycopy(iArr, i18, iArr4, 0, i19);
                iArr3 = iArr4;
            }
        }
        int[] iArr5 = new int[i16];
        boolean z5 = false;
        for (int i20 = i16; i20 > 0; i20--) {
            int i21 = aVar.a[i20];
            if (i21 == 0) {
                i14 = iArr3[iArr3.length - 1];
            } else {
                if (i21 == 1) {
                    i13 = 0;
                    for (int i22 : iArr3) {
                        i13 = aVar.a(i13, i22);
                    }
                } else {
                    i13 = iArr3[0];
                    int length2 = iArr3.length;
                    for (int i23 = 1; i23 < length2; i23++) {
                        i13 = aVar.a(aVar.c(i21, i13), iArr3[i23]);
                    }
                }
                i14 = i13;
            }
            iArr5[i16 - i20] = i14;
            if (i14 != 0) {
                z5 = true;
            }
        }
        if (z5) {
            e4.l lVar3 = aVar.f3036d;
            e4.l lVar4 = aVar.f3035c;
            for (int i24 : iArr2) {
                lVar3 = lVar3.G(new e4.l(aVar, new int[]{(929 - aVar.a[(iArr.length - 1) - i24]) % 929, 1}));
            }
            e4.l lVar5 = new e4.l(aVar, iArr5);
            if (i16 < 0) {
                throw new IllegalArgumentException();
            }
            int[] iArr6 = new int[i16 + 1];
            iArr6[0] = 1;
            e4.l lVar6 = new e4.l(aVar, iArr6);
            if (lVar6.B() >= lVar5.B()) {
                lVar6 = lVar5;
                lVar5 = lVar6;
            }
            e4.l lVar7 = lVar5;
            e4.l lVar8 = lVar6;
            e4.l lVar9 = aVar.f3036d;
            e4.l lVar10 = lVar4;
            while (lVar8.B() >= i16 / 2) {
                if (lVar8.E()) {
                    throw jj.b.a();
                }
                int b10 = aVar.b(lVar8.y(lVar8.B()));
                e4.l lVar11 = lVar4;
                while (lVar7.B() >= lVar8.B() && !lVar7.E()) {
                    int B = lVar7.B() - lVar8.B();
                    int c8 = aVar.c(lVar7.y(lVar7.B()), b10);
                    if (B < 0) {
                        throw new IllegalArgumentException();
                    }
                    if (c8 == 0) {
                        i12 = i15;
                        lVar = lVar4;
                    } else {
                        int[] iArr7 = new int[B + 1];
                        iArr7[i17] = c8;
                        i12 = i15;
                        lVar = new e4.l(aVar, iArr7);
                    }
                    lVar11 = lVar11.r(lVar);
                    int[] iArr8 = (int[]) lVar8.f7960i;
                    bk.a aVar2 = (bk.a) lVar8.f7959e;
                    if (B < 0) {
                        throw new IllegalArgumentException();
                    }
                    if (c8 == 0) {
                        lVar2 = aVar2.f3035c;
                    } else {
                        int length3 = iArr8.length;
                        int[] iArr9 = new int[B + length3];
                        int i25 = 0;
                        while (i25 < length3) {
                            int[] iArr10 = iArr8;
                            iArr9[i25] = aVar2.c(iArr10[i25], c8);
                            i25++;
                            iArr8 = iArr10;
                        }
                        lVar2 = new e4.l(aVar2, iArr9);
                    }
                    lVar7 = lVar7.L(lVar2);
                    i15 = i12;
                    i17 = 0;
                }
                int i26 = i15;
                e4.l L = lVar11.G(lVar9).L(lVar10);
                bk.a aVar3 = (bk.a) L.f7959e;
                int[] iArr11 = (int[]) L.f7960i;
                int length4 = iArr11.length;
                int[] iArr12 = new int[length4];
                for (int i27 = 0; i27 < length4; i27++) {
                    int i28 = iArr11[i27];
                    aVar3.getClass();
                    iArr12[i27] = (929 - i28) % 929;
                }
                e4.l lVar12 = new e4.l(aVar3, iArr12);
                e4.l lVar13 = lVar7;
                lVar7 = lVar8;
                lVar8 = lVar13;
                lVar10 = lVar9;
                i17 = 0;
                lVar9 = lVar12;
                i15 = i26;
            }
            int i29 = i15;
            int i30 = i17;
            int y5 = lVar9.y(i30);
            if (y5 == 0) {
                throw jj.b.a();
            }
            int b11 = aVar.b(y5);
            e4.l[] lVarArr = {lVar9.F(b11), lVar8.F(b11)};
            e4.l lVar14 = lVarArr[i30];
            e4.l lVar15 = lVarArr[i29];
            int B2 = lVar14.B();
            int[] iArr13 = new int[B2];
            int i31 = 0;
            for (int i32 = i29; i32 < 929 && i31 < B2; i32++) {
                if (lVar14.v(i32) == 0) {
                    iArr13[i31] = aVar.b(i32);
                    i31++;
                }
            }
            if (i31 != B2) {
                throw jj.b.a();
            }
            int B3 = lVar14.B();
            int[] iArr14 = new int[B3];
            for (int i33 = i29; i33 <= B3; i33++) {
                iArr14[B3 - i33] = aVar.c(i33, lVar14.y(i33));
            }
            if (B3 == 0) {
                throw new IllegalArgumentException();
            }
            if (B3 > i29 && iArr14[0] == 0) {
                int i34 = 1;
                while (i34 < B3 && iArr14[i34] == 0) {
                    i34++;
                }
                if (i34 == B3) {
                    iArr14 = new int[]{0};
                } else {
                    int i35 = B3 - i34;
                    int[] iArr15 = new int[i35];
                    System.arraycopy(iArr14, i34, iArr15, 0, i35);
                    iArr14 = iArr15;
                }
            }
            int[] iArr16 = new int[B2];
            for (int i36 = 0; i36 < B2; i36++) {
                int b12 = aVar.b(iArr13[i36]);
                int v5 = (929 - lVar15.v(b12)) % 929;
                if (b12 == 0) {
                    i11 = iArr14[iArr14.length - 1];
                } else if (b12 == 1) {
                    int i37 = 0;
                    for (int i38 : iArr14) {
                        i37 = aVar.a(i37, i38);
                    }
                    i11 = i37;
                } else {
                    int i39 = iArr14[0];
                    int length5 = iArr14.length;
                    for (int i40 = 1; i40 < length5; i40++) {
                        i39 = aVar.a(aVar.c(b12, i39), iArr14[i40]);
                    }
                    i11 = i39;
                }
                iArr16[i36] = aVar.c(v5, aVar.b(i11));
            }
            for (int i41 = 0; i41 < B2; i41++) {
                int length6 = iArr.length - 1;
                int i42 = iArr13[i41];
                if (i42 == 0) {
                    throw new IllegalArgumentException();
                }
                int i43 = length6 - aVar.f3034b[i42];
                if (i43 < 0) {
                    throw jj.b.a();
                }
                iArr[i43] = ((929 + iArr[i43]) - iArr16[i41]) % 929;
            }
        }
        if (iArr.length < 4) {
            throw jj.d.a();
        }
        int i44 = iArr[0];
        if (i44 > iArr.length) {
            throw jj.d.a();
        }
        if (i44 == 0) {
            if (i16 >= iArr.length) {
                throw jj.d.a();
            }
            iArr[0] = iArr.length - i16;
        }
        String valueOf = String.valueOf(i5);
        char[] cArr = d.a;
        StringBuilder sb2 = new StringBuilder(iArr.length << 1);
        Charset charset = StandardCharsets.ISO_8859_1;
        int i45 = iArr[1];
        zj.b bVar = new zj.b();
        int i46 = 2;
        int i47 = 2;
        char c10 = 0;
        while (true) {
            int i48 = iArr[c10];
            if (i47 >= i48) {
                if (sb2.length() == 0) {
                    throw jj.d.a();
                }
                s0 s0Var = new s0(null, sb2.toString(), null, valueOf);
                s0Var.f9868g = bVar;
                return s0Var;
            }
            if (i45 != 913) {
                switch (i45) {
                    case 900:
                        c6 = 0;
                        i6 = d.c(iArr, i47, sb2);
                        break;
                    case 901:
                        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                        long j5 = 900;
                        if (i45 != 901) {
                            if (i45 == 924) {
                                int i49 = i47;
                                long j7 = 0;
                                boolean z6 = false;
                                int i50 = 0;
                                while (i49 < iArr[0] && !z6) {
                                    int i51 = i49 + 1;
                                    int i52 = iArr[i49];
                                    if (i52 < 900) {
                                        i50++;
                                        j7 = (j7 * j5) + i52;
                                    } else {
                                        if (i52 != 928) {
                                            switch (i52) {
                                                default:
                                                    switch (i52) {
                                                    }
                                                case 900:
                                                case 901:
                                                case 902:
                                                    z6 = true;
                                                    break;
                                            }
                                            if (i50 % 5 == 0 || i50 <= 0) {
                                                j = j5;
                                            } else {
                                                int i53 = 0;
                                                while (i53 < 6) {
                                                    byteArrayOutputStream.write((byte) (j7 >> ((5 - i53) * 8)));
                                                    i53++;
                                                    j5 = j5;
                                                }
                                                j = j5;
                                                j7 = 0;
                                                i50 = 0;
                                            }
                                            j5 = j;
                                        }
                                        z6 = true;
                                        if (i50 % 5 == 0) {
                                        }
                                        j = j5;
                                        j5 = j;
                                    }
                                    i49 = i51;
                                    if (i50 % 5 == 0) {
                                    }
                                    j = j5;
                                    j5 = j;
                                }
                                i47 = i49;
                            }
                            c6 = 0;
                        } else {
                            int[] iArr17 = new int[6];
                            int i54 = iArr[i47];
                            long j10 = 0;
                            c6 = 0;
                            boolean z7 = false;
                            i47++;
                            int i55 = 0;
                            while (true) {
                                i10 = iArr[0];
                                if (i47 < i10 && !z7) {
                                    int i56 = i55 + 1;
                                    iArr17[i55] = i54;
                                    j10 = (j10 * 900) + i54;
                                    int i57 = i47 + 1;
                                    i54 = iArr[i47];
                                    if (i54 != 928) {
                                        switch (i54) {
                                            case 900:
                                            case 901:
                                            case 902:
                                                break;
                                            default:
                                                switch (i54) {
                                                    case 922:
                                                    case 923:
                                                    case 924:
                                                        break;
                                                    default:
                                                        if (i56 % 5 != 0 || i56 <= 0) {
                                                            i47 = i57;
                                                            i55 = i56;
                                                            break;
                                                        } else {
                                                            for (int i58 = 0; i58 < 6; i58++) {
                                                                byteArrayOutputStream.write((byte) (j10 >> ((5 - i58) * 8)));
                                                            }
                                                            i47 = i57;
                                                            j10 = 0;
                                                            i55 = 0;
                                                            break;
                                                        }
                                                        break;
                                                }
                                        }
                                    }
                                    i55 = i56;
                                    z7 = true;
                                }
                            }
                            if (i47 == i10 && i54 < 900) {
                                iArr17[i55] = i54;
                                i55++;
                            }
                            for (int i59 = 0; i59 < i55; i59++) {
                                byteArrayOutputStream.write((byte) iArr17[i59]);
                            }
                        }
                        sb2.append(new String(byteArrayOutputStream.toByteArray(), charset));
                        i6 = i47;
                        break;
                    case 902:
                        i6 = d.b(iArr, i47, sb2);
                        c6 = 0;
                        break;
                    default:
                        switch (i45) {
                            case 922:
                            case 923:
                                throw jj.d.a();
                            case 924:
                                break;
                            case 925:
                                i6 = i47 + 1;
                                c6 = 0;
                                break;
                            case 926:
                                i6 = i47 + 2;
                                c6 = 0;
                                break;
                            case 927:
                                i6 = i47 + 1;
                                int i60 = iArr[i47];
                                HashMap hashMap = nj.c.f15514i;
                                if (i60 >= 0 && i60 < 900) {
                                    charset = Charset.forName(((nj.c) nj.c.f15514i.get(Integer.valueOf(i60))).name());
                                    c6 = 0;
                                    break;
                                }
                                break;
                            case 928:
                                if (i47 + 2 > i48) {
                                    throw jj.d.a();
                                }
                                int[] iArr18 = new int[i46];
                                int i61 = 0;
                                while (i61 < i46) {
                                    iArr18[i61] = iArr[i47];
                                    i61++;
                                    i47++;
                                }
                                Integer.parseInt(d.a(i46, iArr18));
                                i6 = d.c(iArr, i47, new StringBuilder());
                                int i62 = iArr[i6] == 923 ? i6 + 1 : -1;
                                while (i6 < iArr[0]) {
                                    int i63 = iArr[i6];
                                    if (i63 == 922) {
                                        i6++;
                                        bVar.a = true;
                                    } else {
                                        if (i63 != 923) {
                                            throw jj.d.a();
                                        }
                                        switch (iArr[i6 + 1]) {
                                            case 0:
                                                i6 = d.c(iArr, i6 + 2, new StringBuilder());
                                                break;
                                            case 1:
                                                StringBuilder sb3 = new StringBuilder();
                                                i6 = d.b(iArr, i6 + 2, sb3);
                                                Integer.parseInt(sb3.toString());
                                                break;
                                            case 2:
                                                StringBuilder sb4 = new StringBuilder();
                                                i6 = d.b(iArr, i6 + 2, sb4);
                                                Long.parseLong(sb4.toString());
                                                break;
                                            case 3:
                                                i6 = d.c(iArr, i6 + 2, new StringBuilder());
                                                break;
                                            case 4:
                                                i6 = d.c(iArr, i6 + 2, new StringBuilder());
                                                break;
                                            case 5:
                                                StringBuilder sb5 = new StringBuilder();
                                                i6 = d.b(iArr, i6 + 2, sb5);
                                                Long.parseLong(sb5.toString());
                                                break;
                                            case 6:
                                                StringBuilder sb6 = new StringBuilder();
                                                i6 = d.b(iArr, i6 + 2, sb6);
                                                Integer.parseInt(sb6.toString());
                                                break;
                                            default:
                                                throw jj.d.a();
                                        }
                                    }
                                }
                                if (i62 != -1) {
                                    int i64 = i6 - i62;
                                    if (bVar.a) {
                                        i64--;
                                    }
                                    Arrays.copyOfRange(iArr, i62, i64 + i62);
                                }
                                c6 = 0;
                                break;
                            default:
                                i6 = d.c(iArr, i47 - 1, sb2);
                                c6 = 0;
                                break;
                        }
                }
            } else {
                c6 = 0;
                i6 = i47 + 1;
                sb2.append((char) iArr[i47]);
            }
            if (i6 >= iArr.length) {
                throw jj.d.a();
            }
            i47 = i6 + 1;
            i45 = iArr[i6];
            c10 = c6;
            i46 = 2;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:135:0x0032, code lost:
    
        continue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:137:0x0032, code lost:
    
        continue;
     */
    /* JADX WARN: Code restructure failed: missing block: B:139:0x0032, code lost:
    
        continue;
     */
    /* JADX WARN: Removed duplicated region for block: B:11:0x0025  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0060 A[EDGE_INSN: B:32:0x0060->B:33:0x0060 BREAK  A[LOOP:2: B:20:0x0045->B:28:0x0045], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static a c(nj.b bVar, int i5, int i6, boolean z5, int i10, int i11, int i12, int i13) {
        int i14;
        a aVar;
        int i15;
        a aVar2;
        int i16 = i5;
        int i17 = z5 ? -1 : 1;
        boolean z6 = z5;
        int i18 = i10;
        int i19 = 0;
        loop0: while (true) {
            if (i19 >= 2) {
                break;
            }
            while (true) {
                if (!z6) {
                    if (i18 >= i6) {
                        break;
                    }
                    if (z6 != bVar.b(i18, i11)) {
                        break;
                    }
                } else {
                    if (i18 < i16) {
                        break;
                    }
                    if (z6 != bVar.b(i18, i11)) {
                        if (Math.abs(i10 - i18) > 2) {
                            i18 = i10;
                            break loop0;
                        }
                        i18 += i17;
                    }
                }
            }
            i17 = -i17;
            z6 = !z6;
            i19++;
        }
        int[] iArr = new int[8];
        int i20 = z5 ? 1 : -1;
        boolean z7 = z5;
        int i21 = 0;
        int i22 = i18;
        while (true) {
            if (z5) {
                if (i22 >= i6) {
                    break;
                }
                if (i21 < 8) {
                    break;
                }
                if (bVar.b(i22, i11) == z7) {
                    iArr[i21] = iArr[i21] + 1;
                    i22 += i20;
                } else {
                    i21++;
                    z7 = !z7;
                }
            } else {
                if (i22 < i16) {
                    break;
                }
                if (i21 < 8) {
                }
            }
        }
        if (i21 != 8) {
            if (z5) {
                i16 = i6;
            }
            if (i22 != i16 || i21 != 7) {
                iArr = null;
            }
        }
        if (iArr != null) {
            int L = jb.a.L(iArr);
            if (z5) {
                i14 = i18 + L;
            } else {
                for (int i23 = 0; i23 < iArr.length / 2; i23++) {
                    int i24 = iArr[i23];
                    iArr[i23] = iArr[(iArr.length - 1) - i23];
                    iArr[(iArr.length - 1) - i23] = i24;
                }
                int i25 = i18;
                i18 -= L;
                i14 = i25;
            }
            if (i12 - 2 <= L && L <= i13 + 2) {
                float[][] fArr = f.a;
                float L2 = jb.a.L(iArr);
                int[] iArr2 = new int[8];
                int i26 = 0;
                int i27 = 0;
                for (int i28 = 0; i28 < 17; i28++) {
                    float f2 = ((i28 * L2) / 17.0f) + (L2 / 34.0f);
                    int i29 = iArr[i27] + i26;
                    if (i29 <= f2) {
                        i27++;
                        i26 = i29;
                    }
                    iArr2[i27] = iArr2[i27] + 1;
                }
                long j = 0;
                for (int i30 = 0; i30 < 8; i30++) {
                    for (int i31 = 0; i31 < iArr2[i30]; i31++) {
                        j = (j << 1) | (i30 % 2 == 0 ? 1 : 0);
                    }
                }
                int i32 = (int) j;
                int i33 = 262143;
                int[] iArr3 = zj.a.f21268b;
                int binarySearch = Arrays.binarySearch(iArr3, i32 & 262143);
                int[] iArr4 = zj.a.f21269c;
                if ((binarySearch < 0 ? -1 : (iArr4[binarySearch] - 1) % 929) == -1) {
                    i32 = -1;
                }
                if (i32 == -1) {
                    int L3 = jb.a.L(iArr);
                    float[] fArr2 = new float[8];
                    if (L3 > 1) {
                        for (int i34 = 0; i34 < 8; i34++) {
                            fArr2[i34] = iArr[i34] / L3;
                        }
                    }
                    float f10 = Float.MAX_VALUE;
                    i32 = -1;
                    int i35 = 0;
                    while (true) {
                        float[][] fArr3 = f.a;
                        if (i35 >= fArr3.length) {
                            break;
                        }
                        float[] fArr4 = fArr3[i35];
                        float f11 = 0.0f;
                        int i36 = i33;
                        for (int i37 = 0; i37 < 8; i37++) {
                            float f12 = fArr4[i37] - fArr2[i37];
                            f11 = (f12 * f12) + f11;
                            if (f11 >= f10) {
                                break;
                            }
                        }
                        if (f11 < f10) {
                            i32 = iArr3[i35];
                            f10 = f11;
                        }
                        i35++;
                        i33 = i36;
                    }
                }
                int binarySearch2 = Arrays.binarySearch(iArr3, i32 & i33);
                int i38 = binarySearch2 < 0 ? -1 : (iArr4[binarySearch2] - 1) % 929;
                if (i38 == -1) {
                    return null;
                }
                int[] iArr5 = new int[8];
                int i39 = 0;
                int i40 = 7;
                while (true) {
                    int i41 = i32 & 1;
                    if (i41 != i39) {
                        i40--;
                        if (i40 < 0) {
                            return new a(i18, i14, ((((iArr5[0] - iArr5[2]) + iArr5[4]) - iArr5[6]) + 9) % 9, i38, 1, (byte) 0);
                        }
                        a aVar3 = aVar;
                        i15 = i38;
                        aVar2 = aVar3;
                        i39 = i41;
                    } else {
                        a aVar4 = aVar;
                        i15 = i38;
                        aVar2 = aVar4;
                    }
                    iArr5[i40] = iArr5[i40] + 1;
                    i32 >>= 1;
                    int i42 = i15;
                    aVar = aVar2;
                    i38 = i42;
                }
            }
        }
        return null;
    }

    public static e d(nj.b bVar, c cVar, l lVar, boolean z5, int i5, int i6) {
        boolean z6 = z5;
        e eVar = new e(cVar, z5);
        int i10 = 0;
        while (i10 < 2) {
            int i11 = i10 == 0 ? 1 : -1;
            int i12 = (int) lVar.a;
            int i13 = (int) lVar.f12810b;
            while (i13 <= cVar.f661i && i13 >= cVar.f660h) {
                a c6 = c(bVar, 0, bVar.f15510d, z6, i12, i13, i5, i6);
                if (c6 != null) {
                    ((a[]) eVar.f8001i)[eVar.p(i13)] = c6;
                    i12 = z5 ? c6.f649b : c6.f650c;
                }
                i13 += i11;
                z6 = z5;
            }
            i10++;
            z6 = z5;
        }
        return eVar;
    }
}
