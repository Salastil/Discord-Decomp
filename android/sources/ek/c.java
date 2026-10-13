package ek;

import a5.a0;
import com.facebook.imageutils.JfifUtil;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import hc.s0;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/* loaded from: classes3.dex */
public final class c {
    public final gj.c a;

    public c(int i5) {
        switch (i5) {
            case 1:
                this.a = new gj.c(26, pj.a.f16403o);
                break;
            default:
                this.a = new gj.c(26, pj.a.f16400l);
                break;
        }
    }

    public void a(byte[] bArr, int i5, int i6, int i10, int i11) {
        int i12 = i6 + i10;
        int i13 = i11 == 0 ? 1 : 2;
        int[] iArr = new int[i12 / i13];
        for (int i14 = 0; i14 < i12; i14++) {
            if (i11 == 0 || i14 % 2 == i11 - 1) {
                iArr[i14 / i13] = bArr[i14 + i5] & 255;
            }
        }
        try {
            this.a.z(i10 / i13, iArr);
            for (int i15 = 0; i15 < i6; i15++) {
                if (i11 == 0 || i15 % 2 == i11 - 1) {
                    bArr[i15 + i5] = (byte) iArr[i15 / i13];
                }
            }
        } catch (pj.b unused) {
            throw jj.b.a();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:228:0x0353, code lost:
    
        throw jj.d.a();
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r18v2 */
    /* JADX WARN: Type inference failed for: r18v3, types: [java.lang.Throwable] */
    /* JADX WARN: Type inference failed for: r18v4 */
    /* JADX WARN: Type inference failed for: r18v6 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public s0 b(a3.f fVar, Map map) {
        int g6;
        f fVar2;
        ArrayList arrayList;
        ?? r18;
        String str;
        int g10;
        h s2 = fVar.s();
        int i5 = fVar.r().a;
        e r5 = fVar.r();
        h s5 = fVar.s();
        int i6 = f0.e.c(8)[r5.f8138b];
        nj.b bVar = (nj.b) fVar.f56b;
        int i10 = bVar.f15511e;
        int i11 = 0;
        for (int i12 = 0; i12 < i10; i12++) {
            for (int i13 = 0; i13 < i10; i13++) {
                if (d.a(i6, i12, i13)) {
                    bVar.a(i13, i12);
                }
            }
        }
        int i14 = s5.a * 4;
        int i15 = i14 + 17;
        int i16 = s5.f8150d;
        nj.b bVar2 = new nj.b(i15, i15);
        bVar2.g(0, 0, 9, 9);
        int i17 = i14 + 9;
        bVar2.g(i17, 0, 8, 9);
        bVar2.g(0, i17, 9, 8);
        int[] iArr = s5.f8148b;
        int length = iArr.length;
        int i18 = 0;
        while (i18 < length) {
            int i19 = iArr[i18] - 2;
            for (int i20 = i11; i20 < length; i20++) {
                if ((i18 != 0 || (i20 != 0 && i20 != length - 1)) && (i18 != length - 1 || i20 != 0)) {
                    bVar2.g(iArr[i20] - 2, i19, 5, 5);
                }
            }
            i18++;
            i11 = 0;
        }
        int i21 = 2;
        int i22 = 6;
        int i23 = 1;
        bVar2.g(6, 9, 1, i14);
        bVar2.g(9, 6, i14, 1);
        if (s5.a > 6) {
            int i24 = i14 + 6;
            bVar2.g(i24, 0, 3, 6);
            bVar2.g(0, i24, 6, 3);
        }
        byte[] bArr = new byte[i16];
        int i25 = i10 - 1;
        int i26 = i25;
        boolean z5 = true;
        int i27 = 0;
        int i28 = 0;
        int i29 = 0;
        while (i26 > 0) {
            if (i26 == i22) {
                i26--;
            }
            int i30 = 0;
            while (i30 < i10) {
                int i31 = z5 ? i25 - i30 : i30;
                int i32 = i23;
                int i33 = 0;
                for (int i34 = i21; i33 < i34; i34 = 2) {
                    int i35 = i26 - i33;
                    if (!bVar2.b(i35, i31)) {
                        i28++;
                        i29 <<= 1;
                        if (bVar.b(i35, i31)) {
                            i29 |= 1;
                        }
                        if (i28 == 8) {
                            bArr[i27] = (byte) i29;
                            i27++;
                            i28 = 0;
                            i29 = 0;
                        }
                    }
                    i33++;
                }
                i30++;
                i23 = i32;
                i21 = 2;
            }
            i26 -= 2;
            i22 = 6;
            i21 = 2;
            z5 = !z5;
        }
        int i36 = i23;
        if (i27 != i16) {
            throw jj.d.a();
        }
        int i37 = s2.f8150d;
        int i38 = s2.a;
        if (i16 != i37) {
            throw new IllegalArgumentException();
        }
        a0 a0Var = s2.f8149c[f0.e.b(i5)];
        c5.e[] eVarArr = (c5.e[]) a0Var.f125i;
        int i39 = a0Var.f124e;
        int i40 = 0;
        for (c5.e eVar : eVarArr) {
            i40 += eVar.f3328b;
        }
        a[] aVarArr = new a[i40];
        int i41 = 0;
        for (c5.e eVar2 : eVarArr) {
            int i42 = 0;
            while (i42 < eVar2.f3328b) {
                int i43 = eVar2.f3329c;
                aVarArr[i41] = new a(new byte[i39 + i43], i43);
                i42++;
                i41++;
            }
        }
        int length2 = aVarArr[0].f8136b.length;
        int i44 = i40 - 1;
        while (i44 >= 0 && aVarArr[i44].f8136b.length != length2) {
            i44--;
        }
        int i45 = i44 + 1;
        int i46 = length2 - i39;
        int i47 = 0;
        int i48 = 0;
        while (i47 < i46) {
            int i49 = i48;
            int i50 = 0;
            while (i50 < i41) {
                aVarArr[i50].f8136b[i47] = bArr[i49];
                i50++;
                i49++;
            }
            i47++;
            i48 = i49;
        }
        int i51 = i45;
        while (i51 < i41) {
            aVarArr[i51].f8136b[i46] = bArr[i48];
            i51++;
            i48++;
        }
        int length3 = aVarArr[0].f8136b.length;
        while (i46 < length3) {
            int i52 = i48;
            int i53 = 0;
            while (i53 < i41) {
                aVarArr[i53].f8136b[i53 < i45 ? i46 : i46 + 1] = bArr[i52];
                i53++;
                i52++;
            }
            i46++;
            i48 = i52;
        }
        int i54 = 0;
        for (int i55 = 0; i55 < i40; i55++) {
            i54 += aVarArr[i55].a;
        }
        byte[] bArr2 = new byte[i54];
        int i56 = 0;
        for (int i57 = 0; i57 < i40; i57++) {
            a aVar = aVarArr[i57];
            byte[] bArr3 = aVar.f8136b;
            int i58 = aVar.a;
            int length4 = bArr3.length;
            int[] iArr2 = new int[length4];
            for (int i59 = 0; i59 < length4; i59++) {
                iArr2[i59] = bArr3[i59] & 255;
            }
            try {
                this.a.z(bArr3.length - i58, iArr2);
                for (int i60 = 0; i60 < i58; i60++) {
                    bArr3[i60] = (byte) iArr2[i60];
                }
                int i61 = 0;
                while (i61 < i58) {
                    bArr2[i56] = bArr3[i61];
                    i61++;
                    i56++;
                }
            } catch (pj.b unused) {
                throw jj.b.a();
            }
        }
        char[] cArr = b.a;
        a5.g gVar = new a5.g(bArr2);
        StringBuilder sb2 = new StringBuilder(50);
        ArrayList arrayList2 = new ArrayList(i36);
        int i62 = -1;
        int i63 = -1;
        boolean z6 = false;
        nj.c cVar = null;
        while (true) {
            try {
                int d6 = gVar.d();
                f fVar3 = f.TERMINATOR;
                if (d6 < 4 || (g6 = gVar.g(4)) == 0) {
                    fVar2 = fVar3;
                } else if (g6 == 1) {
                    fVar2 = f.NUMERIC;
                } else if (g6 == 2) {
                    fVar2 = f.ALPHANUMERIC;
                } else if (g6 == 3) {
                    fVar2 = f.STRUCTURED_APPEND;
                } else if (g6 == 4) {
                    fVar2 = f.BYTE;
                } else if (g6 == 5) {
                    fVar2 = f.FNC1_FIRST_POSITION;
                } else if (g6 == 7) {
                    fVar2 = f.ECI;
                } else if (g6 == 8) {
                    fVar2 = f.KANJI;
                } else if (g6 == 9) {
                    fVar2 = f.FNC1_SECOND_POSITION;
                } else {
                    if (g6 != 13) {
                        throw new IllegalArgumentException();
                    }
                    fVar2 = f.HANZI;
                }
                int[] iArr3 = fVar2.f8145d;
                int ordinal = fVar2.ordinal();
                if (ordinal != 0) {
                    r18 = 0;
                    r18 = 0;
                    if (ordinal == 3) {
                        arrayList = arrayList2;
                        if (gVar.d() < 16) {
                            throw jj.d.a();
                        }
                        i62 = gVar.g(8);
                        i63 = gVar.g(8);
                    } else if (ordinal == 5) {
                        arrayList = arrayList2;
                        int g11 = gVar.g(8);
                        if ((g11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
                            g10 = g11 & 127;
                        } else if ((g11 & JfifUtil.MARKER_SOFn) == 128) {
                            g10 = ((g11 & 63) << 8) | gVar.g(8);
                        } else {
                            if ((g11 & 224) != 192) {
                                throw jj.d.a();
                            }
                            g10 = ((g11 & 31) << 16) | gVar.g(16);
                        }
                        HashMap hashMap = nj.c.f15514i;
                        if (g10 < 0 || g10 >= 900) {
                            break;
                        }
                        cVar = (nj.c) nj.c.f15514i.get(Integer.valueOf(g10));
                        if (cVar == null) {
                            throw jj.d.a();
                        }
                    } else if (ordinal == 7 || ordinal == 8) {
                        arrayList = arrayList2;
                        z6 = true;
                    } else if (ordinal != 9) {
                        int g12 = gVar.g(iArr3[i38 <= 9 ? (char) 0 : i38 <= 26 ? (char) 1 : (char) 2]);
                        int ordinal2 = fVar2.ordinal();
                        if (ordinal2 == 1) {
                            arrayList = arrayList2;
                            b.e(gVar, sb2, g12);
                        } else if (ordinal2 == 2) {
                            arrayList = arrayList2;
                            b.a(gVar, sb2, g12, z6);
                        } else if (ordinal2 == 4) {
                            arrayList = arrayList2;
                            b.b(gVar, sb2, g12, cVar, arrayList, map);
                        } else {
                            if (ordinal2 != 6) {
                                throw jj.d.a();
                            }
                            b.d(gVar, sb2, g12);
                            arrayList = arrayList2;
                        }
                    } else {
                        arrayList = arrayList2;
                        int g13 = gVar.g(4);
                        int g14 = gVar.g(iArr3[i38 <= 9 ? (char) 0 : i38 <= 26 ? (char) 1 : (char) 2]);
                        if (g13 == 1) {
                            b.c(gVar, sb2, g14);
                        }
                    }
                } else {
                    arrayList = arrayList2;
                    r18 = 0;
                }
                if (fVar2 == fVar3) {
                    int i64 = i62;
                    int i65 = i63;
                    String sb3 = sb2.toString();
                    ArrayList arrayList3 = arrayList.isEmpty() ? r18 : arrayList;
                    if (i5 == 1) {
                        str = "L";
                    } else if (i5 == 2) {
                        str = "M";
                    } else if (i5 == 3) {
                        str = "Q";
                    } else {
                        if (i5 != 4) {
                            throw r18;
                        }
                        str = "H";
                    }
                    return new s0(bArr2, sb3, arrayList3, str, i64, i65);
                }
                arrayList2 = arrayList;
            } catch (IllegalArgumentException unused2) {
                throw jj.d.a();
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002b A[Catch: b | d -> 0x0053, TryCatch #0 {b | d -> 0x0053, blocks: (B:10:0x0012, B:11:0x0027, B:13:0x002b, B:14:0x002e, B:16:0x0032, B:18:0x003c, B:20:0x0042, B:25:0x0047), top: B:9:0x0012 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public s0 c(nj.b bVar, Map map) {
        jj.b bVar2;
        nj.b bVar3;
        int i5;
        a3.f fVar = new a3.f(bVar, 3);
        try {
            return b(fVar, map);
        } catch (jj.b e9) {
            bVar2 = e9;
            e = null;
            try {
                fVar.t();
                fVar.f57c = null;
                fVar.f58d = null;
                fVar.a = true;
                fVar.s();
                fVar.r();
                bVar3 = (nj.b) fVar.f56b;
                i5 = 0;
                while (i5 < bVar3.f15510d) {
                    int i6 = i5 + 1;
                    for (int i10 = i6; i10 < bVar3.f15511e; i10++) {
                        if (bVar3.b(i5, i10) != bVar3.b(i10, i5)) {
                            bVar3.a(i10, i5);
                            bVar3.a(i5, i10);
                        }
                    }
                    i5 = i6;
                }
                s0 b10 = b(fVar, map);
                b10.f9868g = new g();
                return b10;
            } catch (jj.b | jj.d unused) {
                if (e != null) {
                    throw e;
                }
                throw bVar2;
            }
        } catch (jj.d e10) {
            e = e10;
            bVar2 = null;
            fVar.t();
            fVar.f57c = null;
            fVar.f58d = null;
            fVar.a = true;
            fVar.s();
            fVar.r();
            bVar3 = (nj.b) fVar.f56b;
            i5 = 0;
            while (i5 < bVar3.f15510d) {
            }
            s0 b102 = b(fVar, map);
            b102.f9868g = new g();
            return b102;
        }
    }
}
