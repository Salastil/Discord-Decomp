package androidx.datastore.preferences.protobuf;

import java.util.Arrays;
import java.util.List;
import java.util.logging.Logger;

/* loaded from: classes.dex */
public abstract class x0 {
    public static final Class a;

    /* renamed from: b, reason: collision with root package name */
    public static final f1 f1834b;

    /* renamed from: c, reason: collision with root package name */
    public static final f1 f1835c;

    /* renamed from: d, reason: collision with root package name */
    public static final f1 f1836d;

    static {
        Class<?> cls;
        try {
            cls = Class.forName("androidx.datastore.preferences.protobuf.GeneratedMessageV3");
        } catch (Throwable unused) {
            cls = null;
        }
        a = cls;
        f1834b = v(false);
        f1835c = v(true);
        f1836d = new f1();
    }

    public static void A(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                double doubleValue = ((Double) list.get(i6)).doubleValue();
                jVar.getClass();
                jVar.K(i5, Double.doubleToRawLongBits(doubleValue));
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Double) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10 += 8;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.L(Double.doubleToRawLongBits(((Double) list.get(i6)).doubleValue()));
            i6++;
        }
    }

    public static void B(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.M(i5, ((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += j.w(((Integer) list.get(i11)).intValue());
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.N(((Integer) list.get(i6)).intValue());
            i6++;
        }
    }

    public static void C(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.I(i5, ((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Integer) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10 += 4;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.J(((Integer) list.get(i6)).intValue());
            i6++;
        }
    }

    public static void D(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.K(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Long) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10 += 8;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.L(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static void E(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                float floatValue = ((Float) list.get(i6)).floatValue();
                jVar.getClass();
                jVar.I(i5, Float.floatToRawIntBits(floatValue));
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Float) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10 += 4;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.J(Float.floatToRawIntBits(((Float) list.get(i6)).floatValue()));
            i6++;
        }
    }

    public static void F(int i5, List list, f0 f0Var, w0 w0Var) {
        if (list == null || list.isEmpty()) {
            return;
        }
        f0Var.getClass();
        for (int i6 = 0; i6 < list.size(); i6++) {
            f0Var.b(i5, list.get(i6), w0Var);
        }
    }

    public static void G(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.M(i5, ((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += j.w(((Integer) list.get(i11)).intValue());
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.N(((Integer) list.get(i6)).intValue());
            i6++;
        }
    }

    public static void H(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.U(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += j.A(((Long) list.get(i11)).longValue());
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.V(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static void I(int i5, List list, f0 f0Var, w0 w0Var) {
        if (list == null || list.isEmpty()) {
            return;
        }
        f0Var.getClass();
        for (int i6 = 0; i6 < list.size(); i6++) {
            ((j) f0Var.a).O(i5, (a) list.get(i6), w0Var);
        }
    }

    public static void J(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.I(i5, ((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Integer) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10 += 4;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.J(((Integer) list.get(i6)).intValue());
            i6++;
        }
    }

    public static void K(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.K(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Long) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10 += 8;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.L(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static void L(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                int intValue = ((Integer) list.get(i6)).intValue();
                jVar.S(i5, (intValue >> 31) ^ (intValue << 1));
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            int intValue2 = ((Integer) list.get(i11)).intValue();
            i10 += j.z((intValue2 >> 31) ^ (intValue2 << 1));
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            int intValue3 = ((Integer) list.get(i6)).intValue();
            jVar.T((intValue3 >> 31) ^ (intValue3 << 1));
            i6++;
        }
    }

    public static void M(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                long longValue = ((Long) list.get(i6)).longValue();
                jVar.U(i5, (longValue >> 63) ^ (longValue << 1));
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            long longValue2 = ((Long) list.get(i11)).longValue();
            i10 += j.A((longValue2 >> 63) ^ (longValue2 << 1));
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            long longValue3 = ((Long) list.get(i6)).longValue();
            jVar.V((longValue3 >> 63) ^ (longValue3 << 1));
            i6++;
        }
    }

    public static void N(int i5, List list, f0 f0Var) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!(list instanceof a0)) {
            while (i6 < list.size()) {
                jVar.P(i5, (String) list.get(i6));
                i6++;
            }
            return;
        }
        a0 a0Var = (a0) list;
        while (i6 < list.size()) {
            Object R = a0Var.R(i6);
            if (R instanceof String) {
                jVar.P(i5, (String) R);
            } else {
                jVar.G(i5, (f) R);
            }
            i6++;
        }
    }

    public static void O(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.S(i5, ((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += j.z(((Integer) list.get(i11)).intValue());
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.T(((Integer) list.get(i6)).intValue());
            i6++;
        }
    }

    public static void P(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.U(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += j.A(((Long) list.get(i11)).longValue());
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.V(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static int a(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int y5 = j.y(i5) * size;
        for (int i6 = 0; i6 < list.size(); i6++) {
            y5 += j.s((f) list.get(i6));
        }
        return y5;
    }

    public static int b(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (j.y(i5) * size) + c(list);
    }

    public static int c(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += j.w(((Integer) list.get(i6)).intValue());
        }
        return i5;
    }

    public static int d(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return j.t(i5) * size;
    }

    public static int e(List list) {
        return list.size() * 4;
    }

    public static int f(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return j.u(i5) * size;
    }

    public static int g(List list) {
        return list.size() * 8;
    }

    public static int h(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (j.y(i5) * size) + i(list);
    }

    public static int i(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += j.w(((Integer) list.get(i6)).intValue());
        }
        return i5;
    }

    public static int j(int i5, List list) {
        if (list.size() == 0) {
            return 0;
        }
        return (j.y(i5) * list.size()) + k(list);
    }

    public static int k(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += j.A(((Long) list.get(i6)).longValue());
        }
        return i5;
    }

    public static int l(int i5, List list, w0 w0Var) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int y5 = j.y(i5) * size;
        for (int i6 = 0; i6 < size; i6++) {
            int b10 = ((a) list.get(i6)).b(w0Var);
            y5 += j.z(b10) + b10;
        }
        return y5;
    }

    public static int m(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (j.y(i5) * size) + n(list);
    }

    public static int n(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            int intValue = ((Integer) list.get(i6)).intValue();
            i5 += j.z((intValue >> 31) ^ (intValue << 1));
        }
        return i5;
    }

    public static int o(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (j.y(i5) * size) + p(list);
    }

    public static int p(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            long longValue = ((Long) list.get(i6)).longValue();
            i5 += j.A((longValue >> 63) ^ (longValue << 1));
        }
        return i5;
    }

    public static int q(int i5, List list) {
        int size = list.size();
        int i6 = 0;
        if (size == 0) {
            return 0;
        }
        int y5 = j.y(i5) * size;
        if (!(list instanceof a0)) {
            while (i6 < size) {
                Object obj = list.get(i6);
                if (obj instanceof f) {
                    int size2 = ((f) obj).size();
                    y5 = j.z(size2) + size2 + y5;
                } else {
                    y5 = j.x((String) obj) + y5;
                }
                i6++;
            }
            return y5;
        }
        a0 a0Var = (a0) list;
        while (i6 < size) {
            Object R = a0Var.R(i6);
            if (R instanceof f) {
                int size3 = ((f) R).size();
                y5 = j.z(size3) + size3 + y5;
            } else {
                y5 = j.x((String) R) + y5;
            }
            i6++;
        }
        return y5;
    }

    public static int r(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (j.y(i5) * size) + s(list);
    }

    public static int s(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += j.z(((Integer) list.get(i6)).intValue());
        }
        return i5;
    }

    public static int t(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (j.y(i5) * size) + u(list);
    }

    public static int u(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += j.A(((Long) list.get(i6)).longValue());
        }
        return i5;
    }

    public static f1 v(boolean z5) {
        Class<?> cls;
        try {
            cls = Class.forName("androidx.datastore.preferences.protobuf.UnknownFieldSetSchema");
        } catch (Throwable unused) {
            cls = null;
        }
        if (cls != null) {
            try {
                return (f1) cls.getConstructor(Boolean.TYPE).newInstance(Boolean.valueOf(z5));
            } catch (Throwable unused2) {
            }
        }
        return null;
    }

    public static void w(f1 f1Var, Object obj, Object obj2) {
        f1Var.getClass();
        t tVar = (t) obj;
        e1 e1Var = tVar.unknownFields;
        e1 e1Var2 = ((t) obj2).unknownFields;
        if (!e1Var2.equals(e1.f1736f)) {
            int i5 = e1Var.a + e1Var2.a;
            int[] copyOf = Arrays.copyOf(e1Var.f1737b, i5);
            System.arraycopy(e1Var2.f1737b, 0, copyOf, e1Var.a, e1Var2.a);
            Object[] copyOf2 = Arrays.copyOf(e1Var.f1738c, i5);
            System.arraycopy(e1Var2.f1738c, 0, copyOf2, e1Var.a, e1Var2.a);
            e1Var = new e1(i5, copyOf, copyOf2, true);
        }
        tVar.unknownFields = e1Var;
    }

    public static boolean x(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    public static void y(int i5, List list, f0 f0Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        j jVar = (j) f0Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                jVar.F(i5, ((Boolean) list.get(i6)).booleanValue());
                i6++;
            }
            return;
        }
        jVar.R(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Boolean) list.get(i11)).getClass();
            Logger logger = j.f1765h;
            i10++;
        }
        jVar.T(i10);
        while (i6 < list.size()) {
            jVar.D(((Boolean) list.get(i6)).booleanValue() ? (byte) 1 : (byte) 0);
            i6++;
        }
    }

    public static void z(int i5, List list, f0 f0Var) {
        if (list == null || list.isEmpty()) {
            return;
        }
        f0Var.getClass();
        for (int i6 = 0; i6 < list.size(); i6++) {
            ((j) f0Var.a).G(i5, (f) list.get(i6));
        }
    }
}
