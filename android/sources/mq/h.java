package mq;

import ip.a0;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class h {
    public static b a(List list, a0 a0Var, fp.k kVar) {
        List i02 = CollectionsKt.i0(list);
        ArrayList arrayList = new ArrayList();
        Iterator it = i02.iterator();
        while (it.hasNext()) {
            g b10 = b(it.next(), null);
            if (b10 != null) {
                arrayList.add(b10);
            }
        }
        if (a0Var == null) {
            return new b(arrayList, new aq.a(10, kVar));
        }
        c0 r5 = a0Var.g().r(kVar);
        Intrinsics.checkNotNullExpressionValue(r5, "getPrimitiveArrayKotlinType(...)");
        return new y(arrayList, r5);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v18, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v19, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v20, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v21, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v23, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v24, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v26, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v27, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v29, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v30, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v31, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v32, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v34, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v35, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v36, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v37, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v39, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v40, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v42, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v43, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v46, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v47, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v48, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v49, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v51, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v52, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v53, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v54, types: [java.util.ArrayList] */
    public static g b(Object obj, lp.a0 a0Var) {
        ?? r02;
        ?? r03;
        ?? r04;
        ?? r05;
        ?? r06;
        ?? r07;
        ?? r08;
        if (obj instanceof Byte) {
            return new d(((Number) obj).byteValue());
        }
        if (obj instanceof Short) {
            return new w(((Number) obj).shortValue());
        }
        if (obj instanceof Integer) {
            return new k(((Number) obj).intValue());
        }
        if (obj instanceof Long) {
            return new u(((Number) obj).longValue());
        }
        if (obj instanceof Character) {
            return new e((Character) obj);
        }
        if (obj instanceof Float) {
            return new c(((Number) obj).floatValue());
        }
        if (obj instanceof Double) {
            return new c(((Number) obj).doubleValue());
        }
        if (obj instanceof Boolean) {
            return new c((Boolean) obj);
        }
        if (obj instanceof String) {
            String value = (String) obj;
            Intrinsics.checkNotNullParameter(value, "value");
            return new x((Object) value);
        }
        int i5 = 0;
        if (obj instanceof byte[]) {
            byte[] bArr = (byte[]) obj;
            Intrinsics.checkNotNullParameter(bArr, "<this>");
            int length = bArr.length;
            if (length == 0) {
                r08 = m0.f13512d;
            } else if (length != 1) {
                Intrinsics.checkNotNullParameter(bArr, "<this>");
                r08 = new ArrayList(bArr.length);
                int length2 = bArr.length;
                while (i5 < length2) {
                    r08.add(Byte.valueOf(bArr[i5]));
                    i5++;
                }
            } else {
                r08 = b0.c(Byte.valueOf(bArr[0]));
            }
            return a(r08, a0Var, fp.k.E);
        }
        if (obj instanceof short[]) {
            short[] sArr = (short[]) obj;
            Intrinsics.checkNotNullParameter(sArr, "<this>");
            int length3 = sArr.length;
            if (length3 == 0) {
                r07 = m0.f13512d;
            } else if (length3 != 1) {
                Intrinsics.checkNotNullParameter(sArr, "<this>");
                r07 = new ArrayList(sArr.length);
                int length4 = sArr.length;
                while (i5 < length4) {
                    r07.add(Short.valueOf(sArr[i5]));
                    i5++;
                }
            } else {
                r07 = b0.c(Short.valueOf(sArr[0]));
            }
            return a(r07, a0Var, fp.k.F);
        }
        if (obj instanceof int[]) {
            return a(kotlin.collections.x.G((int[]) obj), a0Var, fp.k.G);
        }
        if (obj instanceof long[]) {
            long[] jArr = (long[]) obj;
            Intrinsics.checkNotNullParameter(jArr, "<this>");
            int length5 = jArr.length;
            if (length5 == 0) {
                r06 = m0.f13512d;
            } else if (length5 != 1) {
                Intrinsics.checkNotNullParameter(jArr, "<this>");
                r06 = new ArrayList(jArr.length);
                int length6 = jArr.length;
                while (i5 < length6) {
                    r06.add(Long.valueOf(jArr[i5]));
                    i5++;
                }
            } else {
                r06 = b0.c(Long.valueOf(jArr[0]));
            }
            return a(r06, a0Var, fp.k.I);
        }
        if (obj instanceof char[]) {
            char[] cArr = (char[]) obj;
            Intrinsics.checkNotNullParameter(cArr, "<this>");
            int length7 = cArr.length;
            if (length7 == 0) {
                r05 = m0.f13512d;
            } else if (length7 != 1) {
                Intrinsics.checkNotNullParameter(cArr, "<this>");
                r05 = new ArrayList(cArr.length);
                int length8 = cArr.length;
                while (i5 < length8) {
                    r05.add(Character.valueOf(cArr[i5]));
                    i5++;
                }
            } else {
                r05 = b0.c(Character.valueOf(cArr[0]));
            }
            return a(r05, a0Var, fp.k.f8867y);
        }
        if (obj instanceof float[]) {
            float[] fArr = (float[]) obj;
            Intrinsics.checkNotNullParameter(fArr, "<this>");
            int length9 = fArr.length;
            if (length9 == 0) {
                r04 = m0.f13512d;
            } else if (length9 != 1) {
                Intrinsics.checkNotNullParameter(fArr, "<this>");
                r04 = new ArrayList(fArr.length);
                int length10 = fArr.length;
                while (i5 < length10) {
                    r04.add(Float.valueOf(fArr[i5]));
                    i5++;
                }
            } else {
                r04 = b0.c(Float.valueOf(fArr[0]));
            }
            return a(r04, a0Var, fp.k.H);
        }
        if (obj instanceof double[]) {
            double[] dArr = (double[]) obj;
            Intrinsics.checkNotNullParameter(dArr, "<this>");
            int length11 = dArr.length;
            if (length11 == 0) {
                r03 = m0.f13512d;
            } else if (length11 != 1) {
                Intrinsics.checkNotNullParameter(dArr, "<this>");
                r03 = new ArrayList(dArr.length);
                int length12 = dArr.length;
                while (i5 < length12) {
                    r03.add(Double.valueOf(dArr[i5]));
                    i5++;
                }
            } else {
                r03 = b0.c(Double.valueOf(dArr[0]));
            }
            return a(r03, a0Var, fp.k.J);
        }
        if (!(obj instanceof boolean[])) {
            if (obj == null) {
                return new v(null);
            }
            return null;
        }
        boolean[] zArr = (boolean[]) obj;
        Intrinsics.checkNotNullParameter(zArr, "<this>");
        int length13 = zArr.length;
        if (length13 == 0) {
            r02 = m0.f13512d;
        } else if (length13 != 1) {
            Intrinsics.checkNotNullParameter(zArr, "<this>");
            r02 = new ArrayList(zArr.length);
            int length14 = zArr.length;
            while (i5 < length14) {
                r02.add(Boolean.valueOf(zArr[i5]));
                i5++;
            }
        } else {
            r02 = b0.c(Boolean.valueOf(zArr[0]));
        }
        return a(r02, a0Var, fp.k.f8866x);
    }
}
