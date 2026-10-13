package dk;

import a3.f;
import com.google.zxing.Result;
import e4.e;
import ek.c;
import ek.h;
import fk.d;
import hc.s0;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import jj.g;
import jj.i;
import jj.k;
import jj.l;
import m3.n;
import nj.b;

/* loaded from: classes3.dex */
public final class a implements i {

    /* renamed from: b, reason: collision with root package name */
    public static final l[] f7605b = new l[0];
    public final c a = new c(0);

    @Override // jj.i
    public final Result a(e eVar, Map map) {
        fk.a aVar;
        int i5;
        float f2;
        float f10;
        float f11;
        float f12;
        float f13;
        int i6;
        l[] lVarArr;
        s0 c6;
        l[] lVarArr2;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14 = 3;
        c cVar = this.a;
        int i15 = 1;
        int i16 = 0;
        if (map == null || !map.containsKey(jj.c.f12785d)) {
            b k = eVar.k();
            ha.l lVar = new ha.l(k);
            if (map != null && map.get(jj.c.F) != null) {
                throw new ClassCastException();
            }
            f fVar = new f(k, 4);
            ArrayList arrayList = (ArrayList) fVar.f57c;
            boolean z5 = map != null && map.containsKey(jj.c.f12787i);
            int i17 = k.f15511e;
            int i18 = k.f15510d;
            int i19 = (i17 * 3) / 388;
            if (i19 < 3 || z5) {
                i19 = 3;
            }
            int[] iArr = new int[5];
            int i20 = i19 - 1;
            boolean z6 = false;
            while (true) {
                aVar = null;
                if (i20 >= i17 || z6) {
                    break;
                }
                f.c(iArr);
                int i21 = i14;
                int i22 = 0;
                int i23 = 0;
                while (i23 < i18) {
                    if (k.b(i23, i20)) {
                        if ((i22 & 1) == i15) {
                            i22++;
                        }
                        iArr[i22] = iArr[i22] + i15;
                    } else if ((i22 & 1) != 0) {
                        iArr[i22] = iArr[i22] + 1;
                    } else if (i22 == 4) {
                        if (!f.i(iArr)) {
                            int i24 = i15;
                            iArr[0] = iArr[2];
                            iArr[i24] = iArr[i21];
                            iArr[2] = iArr[4];
                            iArr[i21] = i24;
                            iArr[4] = 0;
                        } else if (fVar.k(i20, i23, iArr)) {
                            if (fVar.a) {
                                z6 = fVar.l();
                                i10 = 2;
                            } else {
                                if (arrayList.size() > i15) {
                                    Iterator it = arrayList.iterator();
                                    fk.c cVar2 = null;
                                    while (true) {
                                        if (!it.hasNext()) {
                                            i10 = 2;
                                            i11 = 0;
                                            break;
                                        }
                                        fk.c cVar3 = (fk.c) it.next();
                                        Iterator it2 = it;
                                        if (cVar3.f8774d >= 2) {
                                            if (cVar2 != null) {
                                                fVar.a = true;
                                                i10 = 2;
                                                i11 = ((int) (Math.abs(cVar2.a - cVar3.a) - Math.abs(cVar2.f12810b - cVar3.f12810b))) / 2;
                                                break;
                                            }
                                            cVar2 = cVar3;
                                        }
                                        it = it2;
                                    }
                                } else {
                                    i11 = 0;
                                    i10 = 2;
                                }
                                if (i11 > iArr[i10]) {
                                    i20 += (i11 - r7) - 2;
                                    i23 = i18 - 1;
                                }
                            }
                            f.c(iArr);
                            i22 = 0;
                            i19 = i10;
                        } else {
                            iArr[0] = iArr[2];
                            iArr[1] = iArr[i21];
                            iArr[2] = iArr[4];
                            iArr[i21] = 1;
                            iArr[4] = 0;
                        }
                        i22 = i21;
                    } else {
                        i22++;
                        iArr[i22] = iArr[i22] + 1;
                    }
                    i23++;
                    i15 = 1;
                }
                if (f.i(iArr) && fVar.k(i20, i18, iArr)) {
                    int i25 = iArr[0];
                    if (fVar.a) {
                        i19 = i25;
                        z6 = fVar.l();
                    } else {
                        i19 = i25;
                    }
                }
                i20 += i19;
                i14 = i21;
                i15 = 1;
            }
            int i26 = i14;
            int size = arrayList.size();
            if (size < i26) {
                throw g.f12795i;
            }
            float f14 = 0.0f;
            if (size > i26) {
                Iterator it3 = arrayList.iterator();
                float f15 = 0.0f;
                float f16 = 0.0f;
                while (it3.hasNext()) {
                    float f17 = ((fk.c) it3.next()).f8773c;
                    f15 += f17;
                    f16 += f17 * f17;
                }
                float f18 = f15 / size;
                float sqrt = (float) Math.sqrt((f16 / r1) - (f18 * f18));
                Collections.sort(arrayList, new d(f18, 1));
                float max = Math.max(0.2f * f18, sqrt);
                int i27 = 0;
                while (i27 < arrayList.size() && arrayList.size() > 3) {
                    if (Math.abs(((fk.c) arrayList.get(i27)).f8773c - f18) > max) {
                        arrayList.remove(i27);
                        i27--;
                    }
                    i27++;
                }
            }
            if (arrayList.size() > 3) {
                Iterator it4 = arrayList.iterator();
                while (it4.hasNext()) {
                    f14 += ((fk.c) it4.next()).f8773c;
                }
                i5 = 0;
                Collections.sort(arrayList, new d(f14 / arrayList.size(), 0));
                arrayList.subList(3, arrayList.size()).clear();
            } else {
                i5 = 0;
            }
            fk.c[] cVarArr = {(fk.c) arrayList.get(i5), (fk.c) arrayList.get(1), (fk.c) arrayList.get(2)};
            l.b(cVarArr);
            fk.c cVar4 = cVarArr[i5];
            fk.c cVar5 = cVarArr[1];
            fk.c cVar6 = cVarArr[2];
            float N = lVar.N(cVar5, cVar6);
            float f19 = cVar5.f12810b;
            float f20 = cVar5.a;
            float f21 = cVar6.f12810b;
            float f22 = cVar6.a;
            float N2 = lVar.N(cVar5, cVar4);
            float f23 = cVar4.f12810b;
            float f24 = cVar4.a;
            float f25 = (N2 + N) / 2.0f;
            if (f25 < 1.0f) {
                throw g.f12795i;
            }
            int G = (jb.a.G(l.a(cVar5, cVar4) / f25) + jb.a.G(l.a(cVar5, cVar6) / f25)) / 2;
            int i28 = G + 7;
            int i29 = i28 & 3;
            if (i29 == 0) {
                i28 = G + 8;
            } else if (i29 == 2) {
                i28 = G + 6;
            } else if (i29 == 3) {
                throw g.f12795i;
            }
            int i30 = i28;
            int[] iArr2 = h.f8146e;
            if (i30 % 4 != 1) {
                throw jj.d.a();
            }
            try {
                h c8 = h.c((i30 - 17) / 4);
                int i31 = (c8.a * 4) + 10;
                if (c8.f8148b.length > 0) {
                    float f26 = (f22 - f20) + f24;
                    f10 = f22;
                    float f27 = (f21 - f19) + f23;
                    float f28 = 1.0f - (3.0f / i31);
                    int c10 = (int) k0.d.c(f26, f20, f28, f20);
                    int c11 = (int) k0.d.c(f27, f19, f28, f19);
                    f2 = f19;
                    for (int i32 = 4; i32 <= 16; i32 <<= 1) {
                        try {
                            aVar = lVar.Q(f25, i32, c10, c11);
                            break;
                        } catch (g unused) {
                        }
                    }
                } else {
                    f2 = f19;
                    f10 = f22;
                }
                fk.a aVar2 = aVar;
                float f29 = i30 - 3.5f;
                if (aVar2 != null) {
                    f11 = aVar2.a;
                    f12 = aVar2.f12810b;
                    f13 = f29 - 3.0f;
                } else {
                    f11 = (f10 - f20) + f24;
                    f12 = (f21 - f2) + f23;
                    f13 = f29;
                }
                b M0 = n.M0(k, i30, i30, nj.e.a(3.5f, 3.5f, f29, 3.5f, f13, f13, 3.5f, f29, cVar5.a, cVar5.f12810b, cVar6.a, cVar6.f12810b, f11, f12, cVar4.a, cVar4.f12810b));
                if (aVar2 == null) {
                    i6 = 3;
                    lVarArr = new l[]{cVar4, cVar5, cVar6};
                } else {
                    i6 = 3;
                    lVarArr = new l[]{cVar4, cVar5, cVar6, aVar2};
                }
                c6 = cVar.c(M0, map);
                lVarArr2 = lVarArr;
            } catch (IllegalArgumentException unused2) {
                throw jj.d.a();
            }
        } else {
            b k5 = eVar.k();
            int[] e9 = k5.e();
            int i33 = k5.f15510d;
            int[] c12 = k5.c();
            if (e9 == null || c12 == null) {
                throw g.f12795i;
            }
            int i34 = k5.f15511e;
            int i35 = e9[0];
            int i36 = e9[1];
            boolean z7 = true;
            int i37 = 0;
            while (i35 < i33 && i36 < i34) {
                i13 = i16;
                if (z7 != k5.b(i35, i36)) {
                    int i38 = i37 + 1;
                    if (i38 == 5) {
                        break;
                    }
                    z7 = !z7;
                    i37 = i38;
                }
                i35++;
                i36++;
                i16 = i13;
            }
            i13 = i16;
            if (i35 == i33 || i36 == i34) {
                throw g.f12795i;
            }
            int i39 = e9[i13];
            float f30 = (i35 - i39) / 7.0f;
            int i40 = e9[1];
            int i41 = c12[1];
            int i42 = c12[i13];
            if (i39 >= i42 || i40 >= i41) {
                throw g.f12795i;
            }
            int i43 = i41 - i40;
            if (i43 != i42 - i39 && (i42 = i39 + i43) >= i33) {
                throw g.f12795i;
            }
            int round = Math.round(((i42 - i39) + 1) / f30);
            int round2 = Math.round((i43 + 1) / f30);
            if (round <= 0 || round2 <= 0) {
                throw g.f12795i;
            }
            if (round2 != round) {
                throw g.f12795i;
            }
            int i44 = (int) (f30 / 2.0f);
            int i45 = i40 + i44;
            int i46 = i39 + i44;
            int i47 = (((int) ((round - 1) * f30)) + i46) - i42;
            if (i47 > 0) {
                if (i47 > i44) {
                    throw g.f12795i;
                }
                i46 -= i47;
            }
            int i48 = (((int) ((round2 - 1) * f30)) + i45) - i41;
            if (i48 > 0) {
                if (i48 > i44) {
                    throw g.f12795i;
                }
                i45 -= i48;
            }
            b bVar = new b(round, round2);
            for (int i49 = i13; i49 < round2; i49++) {
                int i50 = ((int) (i49 * f30)) + i45;
                for (int i51 = i13; i51 < round; i51++) {
                    if (k5.b(((int) (i51 * f30)) + i46, i50)) {
                        bVar.f(i51, i49);
                    }
                }
            }
            c6 = cVar.c(bVar, map);
            lVarArr2 = f7605b;
            i6 = 3;
        }
        int i52 = c6.f9863b;
        if ((c6.f9868g instanceof ek.g) && lVarArr2.length >= i6) {
            l lVar2 = lVarArr2[0];
            lVarArr2[0] = lVarArr2[2];
            lVarArr2[2] = lVar2;
        }
        Result result = new Result(c6.a, (byte[]) c6.f9865d, lVarArr2, jj.a.I);
        List list = (List) c6.f9867f;
        if (list != null) {
            result.b(k.f12804e, list);
        }
        String str = (String) c6.f9866e;
        if (str != null) {
            result.b(k.f12805i, str);
        }
        if (i52 >= 0 && (i12 = c6.f9864c) >= 0) {
            result.b(k.F, Integer.valueOf(i12));
            result.b(k.G, Integer.valueOf(i52));
        }
        return result;
    }

    @Override // jj.i
    public final void reset() {
    }
}
