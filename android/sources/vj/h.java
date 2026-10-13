package vj;

import com.google.zxing.Result;
import java.util.Arrays;
import java.util.EnumMap;
import java.util.Map;
import jj.l;

/* loaded from: classes3.dex */
public abstract class h implements jj.i {
    public static float d(int[] iArr, int[] iArr2, float f2) {
        int length = iArr.length;
        int i5 = 0;
        int i6 = 0;
        for (int i10 = 0; i10 < length; i10++) {
            i5 += iArr[i10];
            i6 += iArr2[i10];
        }
        if (i5 < i6) {
            return Float.POSITIVE_INFINITY;
        }
        float f10 = i5;
        float f11 = f10 / i6;
        float f12 = f2 * f11;
        float f13 = 0.0f;
        for (int i11 = 0; i11 < length; i11++) {
            float f14 = iArr2[i11] * f11;
            float f15 = iArr[i11];
            float f16 = f15 > f14 ? f15 - f14 : f14 - f15;
            if (f16 > f12) {
                return Float.POSITIVE_INFINITY;
            }
            f13 += f16;
        }
        return f13 / f10;
    }

    public static void e(int i5, nj.a aVar, int[] iArr) {
        int length = iArr.length;
        int i6 = 0;
        Arrays.fill(iArr, 0, length, 0);
        int i10 = aVar.f15509e;
        if (i5 >= i10) {
            throw jj.g.f12795i;
        }
        boolean z5 = !aVar.a(i5);
        while (i5 < i10) {
            if (aVar.a(i5) == z5) {
                i6++;
                if (i6 == length) {
                    break;
                }
                iArr[i6] = 1;
                z5 = !z5;
            } else {
                iArr[i6] = iArr[i6] + 1;
            }
            i5++;
        }
        if (i6 != length) {
            if (i6 != length - 1 || i5 != i10) {
                throw jj.g.f12795i;
            }
        }
    }

    public static void f(int i5, nj.a aVar, int[] iArr) {
        int length = iArr.length;
        boolean a = aVar.a(i5);
        while (i5 > 0 && length >= 0) {
            i5--;
            if (aVar.a(i5) != a) {
                length--;
                a = !a;
            }
        }
        if (length >= 0) {
            throw jj.g.f12795i;
        }
        e(i5 + 1, aVar, iArr);
    }

    @Override // jj.i
    public Result a(e4.e eVar, Map map) {
        nj.d dVar = (nj.d) eVar.f7943e;
        try {
            return c(eVar, map);
        } catch (jj.g e9) {
            if (map == null || !map.containsKey(jj.c.f12787i) || !dVar.a.e()) {
                throw e9;
            }
            eq.d f2 = dVar.a.f();
            Result c6 = c(new e4.e(new nj.d(f2)), map);
            Map map2 = c6.f6295e;
            jj.k kVar = jj.k.f12803d;
            int i5 = 270;
            if (map2 != null && map2.containsKey(kVar)) {
                i5 = (((Integer) map2.get(kVar)).intValue() + 270) % 360;
            }
            c6.b(kVar, Integer.valueOf(i5));
            l[] lVarArr = c6.f6293c;
            if (lVarArr != null) {
                int i6 = f2.f8192c;
                for (int i10 = 0; i10 < lVarArr.length; i10++) {
                    l lVar = lVarArr[i10];
                    lVarArr[i10] = new l((i6 - lVar.f12810b) - 1.0f, lVar.a);
                }
            }
            return c6;
        }
    }

    public abstract Result b(int i5, nj.a aVar, Map map);

    public final Result c(e4.e eVar, Map map) {
        Map map2;
        int i5;
        e4.e eVar2 = eVar;
        Map map3 = map;
        eq.d dVar = ((nj.d) eVar2.f7943e).a;
        int i6 = dVar.f8191b;
        int i10 = dVar.f8192c;
        nj.a aVar = new nj.a(i6);
        int i11 = 1;
        boolean z5 = map3 != null && map3.containsKey(jj.c.f12787i);
        int max = Math.max(1, i10 >> (z5 ? 8 : 5));
        int i12 = z5 ? i10 : 15;
        int i13 = i10 / 2;
        int i14 = 0;
        while (i14 < i12) {
            int i15 = i14 + 1;
            int i16 = i15 / 2;
            if ((i14 & 1) != 0) {
                i16 = -i16;
            }
            int i17 = (i16 * max) + i13;
            if (i17 < 0 || i17 >= i10) {
                break;
            }
            try {
                aVar = eVar2.l(aVar, i17);
                int i18 = 0;
                while (i18 < 2) {
                    if (i18 == i11) {
                        aVar.e();
                        if (map3 != null) {
                            jj.c cVar = jj.c.F;
                            if (map3.containsKey(cVar)) {
                                EnumMap enumMap = new EnumMap(jj.c.class);
                                enumMap.putAll(map3);
                                enumMap.remove(cVar);
                                map3 = enumMap;
                            }
                        }
                    }
                    try {
                        Result b10 = b(i17, aVar, map3);
                        if (i18 == i11) {
                            try {
                                b10.b(jj.k.f12803d, 180);
                                l[] lVarArr = b10.f6293c;
                                if (lVarArr != null) {
                                    i5 = i11;
                                    float f2 = i6;
                                    try {
                                        l lVar = lVarArr[0];
                                        map2 = map3;
                                        try {
                                            lVarArr[0] = new l((f2 - lVar.a) - 1.0f, lVar.f12810b);
                                            l lVar2 = lVarArr[i5];
                                            lVarArr[i5] = new l((f2 - lVar2.a) - 1.0f, lVar2.f12810b);
                                        } catch (jj.j unused) {
                                            continue;
                                            i18++;
                                            map3 = map2;
                                            i11 = i5;
                                        }
                                    } catch (jj.j unused2) {
                                        map2 = map3;
                                    }
                                }
                            } catch (jj.j unused3) {
                                map2 = map3;
                                i5 = i11;
                            }
                        }
                        return b10;
                    } catch (jj.j unused4) {
                        map2 = map3;
                        i5 = i11;
                    }
                }
            } catch (jj.g unused5) {
            }
            eVar2 = eVar;
            i14 = i15;
            i11 = i11;
        }
        throw jj.g.f12795i;
    }

    @Override // jj.i
    public void reset() {
    }
}
