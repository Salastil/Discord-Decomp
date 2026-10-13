package wj;

import com.google.zxing.Result;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import jj.g;
import jj.l;
import vj.h;

/* loaded from: classes3.dex */
public final class e extends a {

    /* renamed from: i, reason: collision with root package name */
    public static final int[] f19849i = {1, 10, 34, 70, 126};
    public static final int[] j = {4, 20, 48, 81};
    public static final int[] k = {0, 161, 961, 2015, 2715};

    /* renamed from: l, reason: collision with root package name */
    public static final int[] f19850l = {0, 336, 1036, 1516};

    /* renamed from: m, reason: collision with root package name */
    public static final int[] f19851m = {8, 6, 4, 3, 1};

    /* renamed from: n, reason: collision with root package name */
    public static final int[] f19852n = {2, 4, 6, 8};

    /* renamed from: o, reason: collision with root package name */
    public static final int[][] f19853o = {new int[]{3, 8, 2, 1}, new int[]{3, 5, 5, 1}, new int[]{3, 3, 7, 1}, new int[]{3, 1, 9, 1}, new int[]{2, 7, 4, 1}, new int[]{2, 5, 6, 1}, new int[]{2, 3, 8, 1}, new int[]{1, 5, 7, 1}, new int[]{1, 3, 9, 1}};

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f19854g = new ArrayList();

    /* renamed from: h, reason: collision with root package name */
    public final ArrayList f19855h = new ArrayList();

    public static void j(ArrayList arrayList, d dVar) {
        if (dVar == null) {
            return;
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            d dVar2 = (d) it.next();
            if (dVar2.a == dVar.a) {
                dVar2.f19848d++;
                return;
            }
        }
        arrayList.add(dVar);
    }

    @Override // vj.h
    public final Result b(int i5, nj.a aVar, Map map) {
        d l6 = l(aVar, false, i5, map);
        ArrayList arrayList = this.f19854g;
        j(arrayList, l6);
        aVar.e();
        d l7 = l(aVar, true, i5, map);
        ArrayList arrayList2 = this.f19855h;
        j(arrayList2, l7);
        aVar.e();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            d dVar = (d) it.next();
            int i6 = dVar.f19848d;
            c cVar = dVar.f19847c;
            if (i6 > 1) {
                Iterator it2 = arrayList2.iterator();
                while (it2.hasNext()) {
                    d dVar2 = (d) it2.next();
                    int i10 = dVar2.f19848d;
                    c cVar2 = dVar2.f19847c;
                    if (i10 > 1) {
                        int i11 = ((dVar2.f19844b * 16) + dVar.f19844b) % 79;
                        int i12 = (cVar.a * 9) + cVar2.a;
                        if (i12 > 72) {
                            i12--;
                        }
                        if (i12 > 8) {
                            i12--;
                        }
                        if (i11 == i12) {
                            String valueOf = String.valueOf((dVar.a * 4537077) + dVar2.a);
                            StringBuilder sb2 = new StringBuilder(14);
                            for (int length = 13 - valueOf.length(); length > 0; length--) {
                                sb2.append('0');
                            }
                            sb2.append(valueOf);
                            int i13 = 0;
                            for (int i14 = 0; i14 < 13; i14++) {
                                int charAt = sb2.charAt(i14) - '0';
                                if ((i14 & 1) == 0) {
                                    charAt *= 3;
                                }
                                i13 += charAt;
                            }
                            int i15 = 10 - (i13 % 10);
                            if (i15 == 10) {
                                i15 = 0;
                            }
                            sb2.append(i15);
                            l[] lVarArr = cVar.f19846c;
                            l[] lVarArr2 = cVar2.f19846c;
                            return new Result(sb2.toString(), null, new l[]{lVarArr[0], lVarArr[1], lVarArr2[0], lVarArr2[1]}, jj.a.J);
                        }
                    }
                }
            }
        }
        throw g.f12795i;
    }

    /* JADX WARN: Code restructure failed: missing block: B:118:0x009a, code lost:
    
        if (r6 < 4) goto L39;
     */
    /* JADX WARN: Code restructure failed: missing block: B:119:0x009c, code lost:
    
        r17 = false;
        r16 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:120:0x00a1, code lost:
    
        r16 = false;
        r17 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:128:0x00b8, code lost:
    
        if (r6 < 4) goto L39;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final b k(nj.a aVar, c cVar, boolean z5) {
        int[] iArr;
        float[] fArr;
        float[] fArr2;
        int[] iArr2;
        int[] iArr3;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        boolean z11;
        int[] iArr4 = cVar.f19845b;
        int i5 = 0;
        while (true) {
            iArr = this.f19839b;
            if (i5 >= iArr.length) {
                break;
            }
            iArr[i5] = 0;
            i5++;
        }
        if (z5) {
            h.f(iArr4[0], aVar, iArr);
        } else {
            h.e(iArr4[1] + 1, aVar, iArr);
            int i6 = 0;
            for (int length = iArr.length - 1; i6 < length; length--) {
                int i10 = iArr[i6];
                iArr[i6] = iArr[length];
                iArr[length] = i10;
                i6++;
            }
        }
        int i11 = z5 ? 16 : 15;
        float L = jb.a.L(iArr) / i11;
        int i12 = 0;
        while (true) {
            int length2 = iArr.length;
            fArr = this.f19841d;
            fArr2 = this.f19840c;
            iArr2 = this.f19843f;
            iArr3 = this.f19842e;
            if (i12 >= length2) {
                break;
            }
            float f2 = iArr[i12] / L;
            int i13 = (int) (0.5f + f2);
            if (i13 <= 0) {
                i13 = 1;
            } else if (i13 > 8) {
                i13 = 8;
            }
            int i14 = i12 / 2;
            if ((i12 & 1) == 0) {
                iArr3[i14] = i13;
                fArr2[i14] = f2 - i13;
            } else {
                iArr2[i14] = i13;
                fArr[i14] = f2 - i13;
            }
            i12++;
        }
        int L2 = jb.a.L(iArr3);
        int L3 = jb.a.L(iArr2);
        if (z5) {
            if (L2 > 12) {
                z6 = false;
                z7 = true;
            } else if (L2 < 4) {
                z7 = false;
                z6 = true;
            } else {
                z6 = false;
                z7 = false;
            }
            if (L3 <= 12) {
            }
            z8 = false;
            z10 = true;
        } else {
            if (L2 > 11) {
                z6 = false;
                z7 = true;
            } else if (L2 < 5) {
                z7 = false;
                z6 = true;
            } else {
                z6 = false;
                z7 = false;
            }
            if (L3 <= 10) {
            }
            z8 = false;
            z10 = true;
        }
        int i15 = (L2 + L3) - i11;
        boolean z12 = (L2 & 1) == z5;
        boolean z13 = (L3 & 1) == 1;
        if (i15 != 1) {
            z11 = true;
            if (i15 != -1) {
                if (i15 != 0) {
                    throw g.f12795i;
                }
                if (z12) {
                    if (!z13) {
                        throw g.f12795i;
                    }
                    if (L2 < L3) {
                        z6 = true;
                        z10 = true;
                    } else {
                        z7 = true;
                        z8 = true;
                    }
                } else if (z13) {
                    throw g.f12795i;
                }
            } else if (z12) {
                if (z13) {
                    throw g.f12795i;
                }
                z6 = true;
            } else {
                if (!z13) {
                    throw g.f12795i;
                }
                z8 = true;
            }
        } else if (z12) {
            if (z13) {
                throw g.f12795i;
            }
            z7 = true;
            z11 = true;
        } else {
            if (!z13) {
                throw g.f12795i;
            }
            z10 = true;
            z11 = true;
        }
        if (z6) {
            if (z7) {
                throw g.f12795i;
            }
            a.h(fArr2, iArr3);
        }
        if (z7) {
            a.g(fArr2, iArr3);
        }
        if (z8) {
            if (z10) {
                throw g.f12795i;
            }
            a.h(fArr2, iArr2);
        }
        if (z10) {
            a.g(fArr, iArr2);
        }
        int i16 = 0;
        int i17 = 0;
        for (int length3 = iArr3.length - 1; length3 >= 0; length3--) {
            int i18 = iArr3[length3];
            i16 = (i16 * 9) + i18;
            i17 += i18;
        }
        int i19 = 0;
        int i20 = 0;
        for (int length4 = iArr2.length - 1; length4 >= 0; length4--) {
            int i21 = iArr2[length4];
            i19 = (i19 * 9) + i21;
            i20 += i21;
        }
        int i22 = (i19 * 3) + i16;
        if (!z5) {
            if ((i20 & 1) != 0 || i20 > 10 || i20 < 4) {
                throw g.f12795i;
            }
            int i23 = (10 - i20) / 2;
            int i24 = f19852n[i23];
            return new b((jb.a.u(iArr2, 9 - i24, false) * j[i23]) + jb.a.u(iArr3, i24, true) + f19850l[i23], i22);
        }
        if ((i17 & 1) != 0 || i17 > 12 || i17 < 4) {
            throw g.f12795i;
        }
        int i25 = (12 - i17) / 2;
        int i26 = f19851m[i25];
        return new b((jb.a.u(iArr3, i26, false) * f19849i[i25]) + jb.a.u(iArr2, 9 - i26, z11) + k[i25], i22);
    }

    public final d l(nj.a aVar, boolean z5, int i5, Map map) {
        try {
            c n6 = n(aVar, i5, z5, m(aVar, z5));
            if (map != null && map.get(jj.c.F) != null) {
                throw new ClassCastException();
            }
            b k5 = k(aVar, n6, true);
            b k7 = k(aVar, n6, false);
            return new d((k5.a * 1597) + k7.a, (k7.f19844b * 4) + k5.f19844b, n6);
        } catch (g unused) {
            return null;
        }
    }

    public final int[] m(nj.a aVar, boolean z5) {
        int[] iArr = this.a;
        iArr[0] = 0;
        iArr[1] = 0;
        iArr[2] = 0;
        iArr[3] = 0;
        int i5 = aVar.f15509e;
        int i6 = 0;
        boolean z6 = false;
        while (i6 < i5) {
            z6 = !aVar.a(i6);
            if (z5 == z6) {
                break;
            }
            i6++;
        }
        int i10 = 0;
        int i11 = i6;
        while (i6 < i5) {
            if (aVar.a(i6) != z6) {
                iArr[i10] = iArr[i10] + 1;
            } else {
                if (i10 != 3) {
                    i10++;
                } else {
                    if (a.i(iArr)) {
                        return new int[]{i11, i6};
                    }
                    i11 += iArr[0] + iArr[1];
                    iArr[0] = iArr[2];
                    iArr[1] = iArr[3];
                    iArr[2] = 0;
                    iArr[3] = 0;
                    i10--;
                }
                iArr[i10] = 1;
                z6 = !z6;
            }
            i6++;
        }
        throw g.f12795i;
    }

    public final c n(nj.a aVar, int i5, boolean z5, int[] iArr) {
        int i6;
        int i10;
        boolean a = aVar.a(iArr[0]);
        int i11 = iArr[0] - 1;
        while (i11 >= 0 && a != aVar.a(i11)) {
            i11--;
        }
        int i12 = i11 + 1;
        int i13 = iArr[0] - i12;
        int[] iArr2 = this.a;
        System.arraycopy(iArr2, 0, iArr2, 1, iArr2.length - 1);
        iArr2[0] = i13;
        for (int i14 = 0; i14 < 9; i14++) {
            if (h.d(iArr2, f19853o[i14], 0.45f) < 0.2f) {
                int i15 = iArr[1];
                if (z5) {
                    int i16 = aVar.f15509e - 1;
                    i6 = i16 - i15;
                    i10 = i16 - i12;
                } else {
                    i6 = i15;
                    i10 = i12;
                }
                return new c(i14, i10, i6, i5, new int[]{i12, i15});
            }
        }
        throw g.f12795i;
    }

    @Override // vj.h, jj.i
    public final void reset() {
        this.f19854g.clear();
        this.f19855h.clear();
    }
}
