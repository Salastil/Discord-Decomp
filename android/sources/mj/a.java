package mj;

import c5.e;
import gj.c;
import jc.o0;
import jj.g;
import jj.l;
import m3.n;
import nj.b;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: g, reason: collision with root package name */
    public static final int[] f14510g = {3808, 476, 2107, 1799};
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f14511b;

    /* renamed from: c, reason: collision with root package name */
    public int f14512c;

    /* renamed from: d, reason: collision with root package name */
    public int f14513d;

    /* renamed from: e, reason: collision with root package name */
    public int f14514e;

    /* renamed from: f, reason: collision with root package name */
    public int f14515f;

    public a(b bVar) {
        this.a = bVar;
    }

    public static l[] b(l[] lVarArr, int i5, int i6) {
        float f2 = i6 / (i5 * 2.0f);
        l lVar = lVarArr[0];
        float f10 = lVar.a;
        l lVar2 = lVarArr[2];
        float f11 = lVar2.a;
        float f12 = f10 - f11;
        float f13 = lVar.f12810b;
        float f14 = lVar2.f12810b;
        float f15 = f13 - f14;
        float f16 = (f10 + f11) / 2.0f;
        float f17 = (f13 + f14) / 2.0f;
        float f18 = f12 * f2;
        float f19 = f15 * f2;
        l lVar3 = new l(f16 + f18, f17 + f19);
        l lVar4 = new l(f16 - f18, f17 - f19);
        l lVar5 = lVarArr[1];
        float f20 = lVar5.a;
        l lVar6 = lVarArr[3];
        float f21 = lVar6.a;
        float f22 = f20 - f21;
        float f23 = lVar5.f12810b;
        float f24 = lVar6.f12810b;
        float f25 = f23 - f24;
        float f26 = (f20 + f21) / 2.0f;
        float f27 = (f23 + f24) / 2.0f;
        float f28 = f22 * f2;
        float f29 = f2 * f25;
        return new l[]{lVar3, new l(f26 + f28, f27 + f29), lVar4, new l(f26 - f28, f27 - f29)};
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final kj.a a(boolean z5) {
        l c6;
        l lVar;
        l lVar2;
        l lVar3;
        char c8;
        l c10;
        l c11;
        l lVar4;
        l lVar5;
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        long j;
        int i16;
        e eVar;
        e eVar2;
        e eVar3;
        e eVar4;
        b bVar = this.a;
        int i17 = -1;
        int i18 = 1;
        int i19 = 0;
        try {
            l[] b10 = new o0(bVar).b();
            lVar2 = b10[0];
            lVar3 = b10[1];
            lVar = b10[2];
            c6 = b10[3];
        } catch (g unused) {
            int i20 = bVar.f15510d / 2;
            int i21 = bVar.f15511e / 2;
            int i22 = i20 + 7;
            int i23 = i21 - 7;
            l c12 = e(new e(i22, i23, 5), false, 1, -1).c();
            int i24 = i21 + 7;
            l c13 = e(new e(i22, i24, 5), false, 1, 1).c();
            int i25 = i20 - 7;
            l c14 = e(new e(i25, i24, 5), false, -1, 1).c();
            c6 = e(new e(i25, i23, 5), false, -1, -1).c();
            lVar = c14;
            lVar2 = c12;
            lVar3 = c13;
        }
        int G = jb.a.G((((lVar2.a + c6.a) + lVar3.a) + lVar.a) / 4.0f);
        int G2 = jb.a.G((((lVar2.f12810b + c6.f12810b) + lVar3.f12810b) + lVar.f12810b) / 4.0f);
        char c15 = 15;
        try {
            l[] b11 = new o0(bVar, 15, G, G2).b();
            lVar5 = b11[0];
            lVar4 = b11[1];
            c10 = b11[2];
            c11 = b11[3];
            c8 = 3;
        } catch (g unused2) {
            int i26 = G + 7;
            int i27 = G2 - 7;
            l c16 = e(new e(i26, i27, 5), false, 1, -1).c();
            int i28 = G2 + 7;
            c8 = 3;
            l c17 = e(new e(i26, i28, 5), false, 1, 1).c();
            int i29 = G - 7;
            c10 = e(new e(i29, i28, 5), false, -1, 1).c();
            c11 = e(new e(i29, i27, 5), false, -1, -1).c();
            lVar4 = c17;
            lVar5 = c16;
        }
        e eVar5 = new e(jb.a.G((((lVar5.a + c11.a) + lVar4.a) + c10.a) / 4.0f), jb.a.G((((lVar5.f12810b + c11.f12810b) + lVar4.f12810b) + c10.f12810b) / 4.0f), 5);
        this.f14514e = 1;
        boolean z6 = true;
        e eVar6 = eVar5;
        e eVar7 = eVar6;
        e eVar8 = eVar7;
        while (true) {
            i5 = eVar8.f3329c;
            i6 = eVar8.f3328b;
            i10 = eVar5.f3329c;
            i11 = i19;
            i12 = eVar5.f3328b;
            char c18 = c15;
            if (this.f14514e >= 9) {
                i13 = i18;
                break;
            }
            e e9 = e(eVar5, z6, i18, i17);
            int i30 = e9.f3329c;
            int i31 = e9.f3328b;
            e e10 = e(eVar6, z6, i18, i18);
            e e11 = e(eVar7, z6, i17, i18);
            e e12 = e(eVar8, z6, i17, i17);
            int i32 = e12.f3329c;
            i13 = i18;
            int i33 = e12.f3328b;
            if (this.f14514e > 2) {
                int i34 = i33 - i31;
                int i35 = i32 - i30;
                int i36 = i6 - i12;
                int i37 = i5 - i10;
                double sqrt = (((float) Math.sqrt((i35 * i35) + (i34 * i34))) * this.f14514e) / (((float) Math.sqrt((i37 * i37) + (i36 * i36))) * (this.f14514e + 2));
                if (sqrt < 0.75d || sqrt > 1.25d) {
                    break;
                }
                eVar3 = e9;
                e eVar9 = new e(i31 - 3, i30 + 3, 5);
                eVar = e10;
                e eVar10 = new e(e10.f3328b - 3, e10.f3329c - 3, 5);
                eVar2 = e11;
                e eVar11 = new e(e11.f3328b + 3, e11.f3329c - 3, 5);
                eVar4 = e12;
                e eVar12 = new e(i33 + 3, i32 + 3, 5);
                int c19 = c(eVar12, eVar9);
                if (c19 == 0 || c(eVar9, eVar10) != c19 || c(eVar10, eVar11) != c19 || c(eVar11, eVar12) != c19) {
                    break;
                }
            } else {
                eVar = e10;
                eVar2 = e11;
                eVar3 = e9;
                eVar4 = e12;
            }
            z6 = !z6;
            this.f14514e++;
            i19 = i11;
            c15 = c18;
            eVar5 = eVar3;
            i18 = i13;
            eVar8 = eVar4;
            eVar6 = eVar;
            eVar7 = eVar2;
            i17 = -1;
        }
        int i38 = this.f14514e;
        if (i38 != 5 && i38 != 7) {
            throw g.f12795i;
        }
        this.f14511b = i38 == 5 ? i13 : i11;
        int i39 = i38 * 2;
        l[] b12 = b(new l[]{new l(i12 + 0.5f, i10 - 0.5f), new l(eVar6.f3328b + 0.5f, eVar6.f3329c + 0.5f), new l(eVar7.f3328b - 0.5f, eVar7.f3329c + 0.5f), new l(i6 - 0.5f, i5 - 0.5f)}, i39 - 3, i39);
        if (z5) {
            l lVar6 = b12[i11];
            b12[i11] = b12[2];
            b12[2] = lVar6;
        }
        if (!g(b12[i11]) || !g(b12[i13]) || !g(b12[2]) || !g(b12[c8])) {
            throw g.f12795i;
        }
        int i40 = this.f14514e * 2;
        int[] iArr = {h(b12[i11], b12[i13], i40), h(b12[i13], b12[2], i40), h(b12[2], b12[c8], i40), h(b12[c8], b12[i11], i40)};
        int i41 = i11;
        int i42 = i41;
        while (i41 < 4) {
            int i43 = iArr[i41];
            i42 = (i42 << 3) + ((i43 >> (i40 - 2)) << 1) + (i43 & 1);
            i41++;
        }
        int i44 = ((i42 & 1) << 11) + (i42 >> 1);
        for (int i45 = i11; i45 < 4; i45++) {
            if (Integer.bitCount(f14510g[i45] ^ i44) <= 2) {
                this.f14515f = i45;
                long j5 = 0;
                int i46 = i11;
                while (true) {
                    i14 = 10;
                    if (i46 >= 4) {
                        break;
                    }
                    int i47 = iArr[(this.f14515f + i46) % 4];
                    if (this.f14511b) {
                        j = j5 << 7;
                        i16 = (i47 >> 1) & 127;
                    } else {
                        j = j5 << 10;
                        i16 = ((i47 >> 2) & 992) + ((i47 >> 1) & 31);
                    }
                    j5 = j + i16;
                    i46++;
                }
                if (this.f14511b) {
                    i14 = 7;
                    i15 = 2;
                } else {
                    i15 = 4;
                }
                int i48 = i14 - i15;
                int[] iArr2 = new int[i14];
                for (int i49 = i14 - 1; i49 >= 0; i49--) {
                    iArr2[i49] = ((int) j5) & 15;
                    j5 >>= 4;
                }
                try {
                    new c(26, pj.a.k).z(i48, iArr2);
                    int i50 = i11;
                    int i51 = i50;
                    while (i50 < i15) {
                        i51 = (i51 << 4) + iArr2[i50];
                        i50++;
                    }
                    if (this.f14511b) {
                        this.f14512c = (i51 >> 6) + 1;
                        this.f14513d = (i51 & 63) + 1;
                    } else {
                        this.f14512c = (i51 >> 11) + 1;
                        this.f14513d = (i51 & 2047) + 1;
                    }
                    int i52 = this.f14515f;
                    l lVar7 = b12[i52 % 4];
                    l lVar8 = b12[(i52 + 1) % 4];
                    l lVar9 = b12[(i52 + 2) % 4];
                    l lVar10 = b12[(i52 + 3) % 4];
                    int d6 = d();
                    float f2 = d6 / 2.0f;
                    float f10 = this.f14514e;
                    float f11 = f2 - f10;
                    float f12 = f2 + f10;
                    return new kj.a(n.M0(bVar, d6, d6, nj.e.a(f11, f11, f12, f11, f12, f12, f11, f12, lVar7.a, lVar7.f12810b, lVar8.a, lVar8.f12810b, lVar9.a, lVar9.f12810b, lVar10.a, lVar10.f12810b)), b(b12, this.f14514e * 2, d()), this.f14511b, this.f14513d, this.f14512c);
                } catch (pj.b unused3) {
                    throw g.f12795i;
                }
            }
        }
        throw g.f12795i;
    }

    public final int c(e eVar, e eVar2) {
        int i5 = eVar.f3328b;
        int i6 = eVar.f3329c;
        int i10 = eVar2.f3328b;
        int i11 = i5 - i10;
        int i12 = i6 - eVar2.f3329c;
        float sqrt = (float) Math.sqrt((i12 * i12) + (i11 * i11));
        float f2 = (i10 - i5) / sqrt;
        float f10 = (r13 - i6) / sqrt;
        float f11 = i5;
        float f12 = i6;
        b bVar = this.a;
        boolean b10 = bVar.b(i5, i6);
        int ceil = (int) Math.ceil(sqrt);
        int i13 = 0;
        for (int i14 = 0; i14 < ceil; i14++) {
            f11 += f2;
            f12 += f10;
            if (bVar.b(jb.a.G(f11), jb.a.G(f12)) != b10) {
                i13++;
            }
        }
        float f13 = i13 / sqrt;
        if (f13 <= 0.1f || f13 >= 0.9f) {
            return (f13 <= 0.1f) == b10 ? 1 : -1;
        }
        return 0;
    }

    public final int d() {
        if (this.f14511b) {
            return (this.f14512c * 4) + 11;
        }
        int i5 = this.f14512c;
        if (i5 <= 4) {
            return (i5 * 4) + 15;
        }
        return ((((i5 - 4) / 8) + 1) * 2) + (i5 * 4) + 15;
    }

    public final e e(e eVar, boolean z5, int i5, int i6) {
        b bVar;
        int i10 = eVar.f3328b + i5;
        int i11 = eVar.f3329c;
        while (true) {
            i11 += i6;
            boolean f2 = f(i10, i11);
            bVar = this.a;
            if (!f2 || bVar.b(i10, i11) != z5) {
                break;
            }
            i10 += i5;
        }
        int i12 = i10 - i5;
        int i13 = i11 - i6;
        while (f(i12, i13) && bVar.b(i12, i13) == z5) {
            i12 += i5;
        }
        int i14 = i12 - i5;
        while (f(i14, i13) && bVar.b(i14, i13) == z5) {
            i13 += i6;
        }
        return new e(i14, i13 - i6, 5);
    }

    public final boolean f(int i5, int i6) {
        if (i5 < 0) {
            return false;
        }
        b bVar = this.a;
        return i5 < bVar.f15510d && i6 > 0 && i6 < bVar.f15511e;
    }

    public final boolean g(l lVar) {
        return f(jb.a.G(lVar.a), jb.a.G(lVar.f12810b));
    }

    public final int h(l lVar, l lVar2, int i5) {
        float f2 = lVar.a;
        float f10 = lVar.f12810b;
        float f11 = lVar2.a;
        float f12 = lVar2.f12810b;
        float f13 = f2 - f11;
        float f14 = f10 - f12;
        float sqrt = (float) Math.sqrt((f14 * f14) + (f13 * f13));
        float f15 = sqrt / i5;
        float f16 = lVar.a;
        float f17 = ((lVar2.a - f16) * f15) / sqrt;
        float f18 = ((f12 - f10) * f15) / sqrt;
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            float f19 = i10;
            if (this.a.b(jb.a.G((f19 * f17) + f16), jb.a.G((f19 * f18) + f10))) {
                i6 |= 1 << ((i5 - i10) - 1);
            }
        }
        return i6;
    }
}
