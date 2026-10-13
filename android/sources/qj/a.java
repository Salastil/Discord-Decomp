package qj;

import com.google.zxing.Result;
import e4.e;
import hc.s0;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import jc.o0;
import jj.c;
import jj.g;
import jj.i;
import jj.k;
import jj.l;
import rj.b;

/* loaded from: classes3.dex */
public final class a implements i {

    /* renamed from: b, reason: collision with root package name */
    public static final l[] f16904b = new l[0];
    public final b a = new b(0);

    /* JADX WARN: Code restructure failed: missing block: B:125:0x02d1, code lost:
    
        if ((java.lang.Math.abs(r15 - r1.d1(r3, r13).f18035c) + java.lang.Math.abs(r9 - r1.d1(r10, r13).f18035c)) <= (java.lang.Math.abs(r15 - r1.d1(r3, r12).f18035c) + java.lang.Math.abs(r9 - r1.d1(r10, r12).f18035c))) goto L104;
     */
    /* JADX WARN: Removed duplicated region for block: B:113:0x02d9  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x02eb  */
    /* JADX WARN: Removed duplicated region for block: B:119:0x02f3  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x0211  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0229  */
    @Override // jj.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Result a(e eVar, Map map) {
        l lVar;
        l lVar2;
        l lVar3;
        l lVar4;
        int i5;
        int i6;
        nj.b a12;
        l[] lVarArr;
        s0 s0Var;
        l lVar5;
        int i10;
        b bVar = this.a;
        boolean z5 = false;
        if (map == null || !map.containsKey(c.f12785d)) {
            e4.c cVar = new e4.c(eVar.k());
            l[] b10 = ((o0) cVar.f7940i).b();
            l lVar6 = b10[0];
            l lVar7 = b10[1];
            l lVar8 = b10[2];
            l lVar9 = b10[3];
            ArrayList arrayList = new ArrayList(4);
            arrayList.add(cVar.d1(lVar6, lVar7));
            arrayList.add(cVar.d1(lVar6, lVar8));
            arrayList.add(cVar.d1(lVar7, lVar9));
            arrayList.add(cVar.d1(lVar8, lVar9));
            Collections.sort(arrayList, new sj.b());
            sj.a aVar = (sj.a) arrayList.get(0);
            sj.a aVar2 = (sj.a) arrayList.get(1);
            HashMap hashMap = new HashMap();
            e4.c.U0(hashMap, aVar.a);
            e4.c.U0(hashMap, aVar.f18034b);
            e4.c.U0(hashMap, aVar2.a);
            e4.c.U0(hashMap, aVar2.f18034b);
            l lVar10 = null;
            l lVar11 = null;
            l lVar12 = null;
            for (Map.Entry entry : hashMap.entrySet()) {
                l lVar13 = (l) entry.getKey();
                boolean z6 = z5;
                if (((Integer) entry.getValue()).intValue() == 2) {
                    lVar11 = lVar13;
                } else if (lVar10 == null) {
                    lVar10 = lVar13;
                } else {
                    lVar12 = lVar13;
                }
                z5 = z6;
            }
            boolean z7 = z5;
            if (lVar10 == null || lVar11 == null || lVar12 == null) {
                throw g.f12795i;
            }
            l[] lVarArr2 = {lVar10, lVar11, lVar12};
            l.b(lVarArr2);
            l lVar14 = lVarArr2[z7 ? 1 : 0];
            l lVar15 = lVarArr2[1];
            l lVar16 = lVarArr2[2];
            if (hashMap.containsKey(lVar6)) {
                lVar6 = !hashMap.containsKey(lVar7) ? lVar7 : !hashMap.containsKey(lVar8) ? lVar8 : lVar9;
            }
            float f2 = lVar6.f12810b;
            float f10 = lVar6.a;
            sj.a d12 = cVar.d1(lVar16, lVar6);
            float f11 = lVar16.f12810b;
            float f12 = lVar16.a;
            int i11 = d12.f18035c;
            sj.a d13 = cVar.d1(lVar14, lVar6);
            float f13 = lVar14.f12810b;
            float f14 = lVar14.a;
            int i12 = d13.f18035c;
            if ((i11 & 1) == 1) {
                i11++;
            }
            int i13 = i11 + 2;
            if ((i12 & 1) == 1) {
                i12++;
            }
            int i14 = i12 + 2;
            if (i13 * 4 >= i14 * 7 || i14 * 4 >= i13 * 7) {
                lVar = lVar14;
                lVar2 = lVar16;
                lVar3 = lVar15;
                float P0 = e4.c.P0(lVar3, lVar) / i13;
                float G = jb.a.G(l.a(lVar2, lVar6));
                l lVar17 = new l((((f10 - f12) / G) * P0) + f10, (P0 * ((f2 - f11) / G)) + f2);
                float G2 = jb.a.G(l.a(lVar3, lVar2)) / i14;
                float G3 = jb.a.G(l.a(lVar, lVar6));
                l lVar18 = new l((((f10 - f14) / G3) * G2) + f10, (G2 * ((f2 - f13) / G3)) + f2);
                if (cVar.V0(lVar17)) {
                    if (cVar.V0(lVar18)) {
                    }
                    lVar4 = lVar17;
                    if (lVar4 != null) {
                    }
                    i5 = cVar.d1(lVar2, lVar6).f18035c;
                    i6 = cVar.d1(lVar, lVar6).f18035c;
                    if ((i5 & 1) == 1) {
                    }
                    int i15 = i5;
                    if ((i6 & 1) == 1) {
                    }
                    a12 = e4.c.a1((nj.b) cVar.f7939e, lVar2, lVar3, lVar, lVar6, i15, i6);
                } else {
                    if (!cVar.V0(lVar18)) {
                        lVar4 = null;
                        if (lVar4 != null) {
                            lVar6 = lVar4;
                        }
                        i5 = cVar.d1(lVar2, lVar6).f18035c;
                        i6 = cVar.d1(lVar, lVar6).f18035c;
                        if ((i5 & 1) == 1) {
                            i5++;
                        }
                        int i152 = i5;
                        if ((i6 & 1) == 1) {
                            i6++;
                        }
                        a12 = e4.c.a1((nj.b) cVar.f7939e, lVar2, lVar3, lVar, lVar6, i152, i6);
                    }
                    lVar4 = lVar18;
                    if (lVar4 != null) {
                    }
                    i5 = cVar.d1(lVar2, lVar6).f18035c;
                    i6 = cVar.d1(lVar, lVar6).f18035c;
                    if ((i5 & 1) == 1) {
                    }
                    int i1522 = i5;
                    if ((i6 & 1) == 1) {
                    }
                    a12 = e4.c.a1((nj.b) cVar.f7939e, lVar2, lVar3, lVar, lVar6, i1522, i6);
                }
            } else {
                float min = Math.min(i14, i13);
                float P02 = e4.c.P0(lVar15, lVar14) / min;
                float G4 = jb.a.G(l.a(lVar16, lVar6));
                l lVar19 = new l((((f10 - f12) / G4) * P02) + f10, (P02 * ((f2 - f11) / G4)) + f2);
                float G5 = jb.a.G(l.a(lVar15, lVar16)) / min;
                float G6 = jb.a.G(l.a(lVar14, lVar6));
                l lVar20 = new l((((f10 - f14) / G6) * G5) + f10, (G5 * ((f2 - f13) / G6)) + f2);
                if (cVar.V0(lVar19)) {
                    if (!cVar.V0(lVar20) || Math.abs(cVar.d1(lVar16, lVar19).f18035c - cVar.d1(lVar14, lVar19).f18035c) <= Math.abs(cVar.d1(lVar16, lVar20).f18035c - cVar.d1(lVar14, lVar20).f18035c)) {
                        lVar5 = lVar19;
                        if (lVar5 != null) {
                        }
                        int max = Math.max(cVar.d1(lVar16, lVar6).f18035c, cVar.d1(lVar14, lVar6).f18035c);
                        i10 = max + 1;
                        if ((i10 & 1) == 1) {
                        }
                        int i16 = i10;
                        a12 = e4.c.a1((nj.b) cVar.f7939e, lVar16, lVar15, lVar14, lVar6, i16, i16);
                        lVar2 = lVar16;
                        lVar3 = lVar15;
                        lVar = lVar14;
                    }
                    lVar5 = lVar20;
                    if (lVar5 != null) {
                    }
                    int max2 = Math.max(cVar.d1(lVar16, lVar6).f18035c, cVar.d1(lVar14, lVar6).f18035c);
                    i10 = max2 + 1;
                    if ((i10 & 1) == 1) {
                    }
                    int i162 = i10;
                    a12 = e4.c.a1((nj.b) cVar.f7939e, lVar16, lVar15, lVar14, lVar6, i162, i162);
                    lVar2 = lVar16;
                    lVar3 = lVar15;
                    lVar = lVar14;
                } else {
                    if (!cVar.V0(lVar20)) {
                        lVar5 = null;
                        if (lVar5 != null) {
                            lVar6 = lVar5;
                        }
                        int max22 = Math.max(cVar.d1(lVar16, lVar6).f18035c, cVar.d1(lVar14, lVar6).f18035c);
                        i10 = max22 + 1;
                        if ((i10 & 1) == 1) {
                            i10 = max22 + 2;
                        }
                        int i1622 = i10;
                        a12 = e4.c.a1((nj.b) cVar.f7939e, lVar16, lVar15, lVar14, lVar6, i1622, i1622);
                        lVar2 = lVar16;
                        lVar3 = lVar15;
                        lVar = lVar14;
                    }
                    lVar5 = lVar20;
                    if (lVar5 != null) {
                    }
                    int max222 = Math.max(cVar.d1(lVar16, lVar6).f18035c, cVar.d1(lVar14, lVar6).f18035c);
                    i10 = max222 + 1;
                    if ((i10 & 1) == 1) {
                    }
                    int i16222 = i10;
                    a12 = e4.c.a1((nj.b) cVar.f7939e, lVar16, lVar15, lVar14, lVar6, i16222, i16222);
                    lVar2 = lVar16;
                    lVar3 = lVar15;
                    lVar = lVar14;
                }
            }
            s0 i17 = bVar.i(a12);
            lVarArr = new l[]{lVar2, lVar3, lVar, lVar6};
            s0Var = i17;
        } else {
            nj.b k = eVar.k();
            int[] e9 = k.e();
            int[] c6 = k.c();
            if (e9 == null || c6 == null) {
                throw g.f12795i;
            }
            int i18 = k.f15510d;
            int i19 = e9[0];
            int i20 = e9[1];
            while (i19 < i18 && k.b(i19, i20)) {
                i19++;
            }
            if (i19 == i18) {
                throw g.f12795i;
            }
            int i21 = e9[0];
            int i22 = i19 - i21;
            if (i22 == 0) {
                throw g.f12795i;
            }
            int i23 = e9[1];
            int i24 = c6[1];
            int i25 = ((c6[0] - i21) + 1) / i22;
            int i26 = ((i24 - i23) + 1) / i22;
            if (i25 <= 0 || i26 <= 0) {
                throw g.f12795i;
            }
            int i27 = i22 / 2;
            int i28 = i23 + i27;
            int i29 = i21 + i27;
            nj.b bVar2 = new nj.b(i25, i26);
            for (int i30 = 0; i30 < i26; i30++) {
                int i31 = (i30 * i22) + i28;
                for (int i32 = 0; i32 < i25; i32++) {
                    if (k.b((i32 * i22) + i29, i31)) {
                        bVar2.f(i32, i30);
                    }
                }
            }
            s0Var = bVar.i(bVar2);
            lVarArr = f16904b;
        }
        Result result = new Result(s0Var.a, (byte[]) s0Var.f9865d, lVarArr, jj.a.f12782x);
        List list = (List) s0Var.f9867f;
        if (list != null) {
            result.b(k.f12804e, list);
        }
        String str = (String) s0Var.f9866e;
        if (str != null) {
            result.b(k.f12805i, str);
        }
        return result;
    }

    @Override // jj.i
    public final void reset() {
    }
}
