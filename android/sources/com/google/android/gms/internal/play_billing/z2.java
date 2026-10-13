package com.google.android.gms.internal.play_billing;

import java.util.Arrays;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class z2 {
    public static final a a;

    static {
        int i5 = r1.a;
        a = new a();
    }

    public static void a(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!(list instanceof f2)) {
            if (!z5) {
                while (i6 < list.size()) {
                    int intValue = ((Integer) list.get(i6)).intValue();
                    w1Var.O(i5, (intValue >> 31) ^ (intValue + intValue));
                    i6++;
                }
                return;
            }
            w1Var.N(i5, 2);
            int i10 = 0;
            for (int i11 = 0; i11 < list.size(); i11++) {
                int intValue2 = ((Integer) list.get(i11)).intValue();
                i10 += w1.S((intValue2 >> 31) ^ (intValue2 + intValue2));
            }
            w1Var.P(i10);
            while (i6 < list.size()) {
                int intValue3 = ((Integer) list.get(i6)).intValue();
                w1Var.P((intValue3 >> 31) ^ (intValue3 + intValue3));
                i6++;
            }
            return;
        }
        f2 f2Var = (f2) list;
        if (!z5) {
            while (i6 < f2Var.f5736i) {
                int b10 = f2Var.b(i6);
                w1Var.O(i5, (b10 >> 31) ^ (b10 + b10));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i12 = 0;
        for (int i13 = 0; i13 < f2Var.f5736i; i13++) {
            int b11 = f2Var.b(i13);
            i12 += w1.S((b11 >> 31) ^ (b11 + b11));
        }
        w1Var.P(i12);
        while (i6 < f2Var.f5736i) {
            int b12 = f2Var.b(i6);
            w1Var.P((b12 >> 31) ^ (b12 + b12));
            i6++;
        }
    }

    public static void b(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                long longValue = ((Long) list.get(i6)).longValue();
                w1Var.Q(i5, (longValue >> 63) ^ (longValue + longValue));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            long longValue2 = ((Long) list.get(i11)).longValue();
            i10 += w1.T((longValue2 >> 63) ^ (longValue2 + longValue2));
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            long longValue3 = ((Long) list.get(i6)).longValue();
            w1Var.R((longValue3 >> 63) ^ (longValue3 + longValue3));
            i6++;
        }
    }

    public static void c(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!(list instanceof f2)) {
            if (!z5) {
                while (i6 < list.size()) {
                    w1Var.O(i5, ((Integer) list.get(i6)).intValue());
                    i6++;
                }
                return;
            }
            w1Var.N(i5, 2);
            int i10 = 0;
            for (int i11 = 0; i11 < list.size(); i11++) {
                i10 += w1.S(((Integer) list.get(i11)).intValue());
            }
            w1Var.P(i10);
            while (i6 < list.size()) {
                w1Var.P(((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        f2 f2Var = (f2) list;
        if (!z5) {
            while (i6 < f2Var.f5736i) {
                w1Var.O(i5, f2Var.b(i6));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i12 = 0;
        for (int i13 = 0; i13 < f2Var.f5736i; i13++) {
            i12 += w1.S(f2Var.b(i13));
        }
        w1Var.P(i12);
        while (i6 < f2Var.f5736i) {
            w1Var.P(f2Var.b(i6));
            i6++;
        }
    }

    public static void d(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                w1Var.Q(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += w1.T(((Long) list.get(i11)).longValue());
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.R(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static boolean e(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    public static int f(List list) {
        int size = list.size();
        int i5 = 0;
        if (size == 0) {
            return 0;
        }
        if (!(list instanceof f2)) {
            int i6 = 0;
            while (i5 < size) {
                i6 += w1.T(((Integer) list.get(i5)).intValue());
                i5++;
            }
            return i6;
        }
        f2 f2Var = (f2) list;
        int i10 = 0;
        while (i5 < size) {
            i10 += w1.T(f2Var.b(i5));
            i5++;
        }
        return i10;
    }

    public static int g(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (w1.S(i5 << 3) + 4) * size;
    }

    public static int h(int i5, List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        return (w1.S(i5 << 3) + 8) * size;
    }

    public static int i(List list) {
        int size = list.size();
        int i5 = 0;
        if (size == 0) {
            return 0;
        }
        if (!(list instanceof f2)) {
            int i6 = 0;
            while (i5 < size) {
                i6 += w1.T(((Integer) list.get(i5)).intValue());
                i5++;
            }
            return i6;
        }
        f2 f2Var = (f2) list;
        int i10 = 0;
        while (i5 < size) {
            i10 += w1.T(f2Var.b(i5));
            i5++;
        }
        return i10;
    }

    public static int j(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += w1.T(((Long) list.get(i6)).longValue());
        }
        return i5;
    }

    public static int k(List list) {
        int size = list.size();
        int i5 = 0;
        if (size == 0) {
            return 0;
        }
        if (!(list instanceof f2)) {
            int i6 = 0;
            while (i5 < size) {
                int intValue = ((Integer) list.get(i5)).intValue();
                i6 += w1.S((intValue >> 31) ^ (intValue + intValue));
                i5++;
            }
            return i6;
        }
        f2 f2Var = (f2) list;
        int i10 = 0;
        while (i5 < size) {
            int b10 = f2Var.b(i5);
            i10 += w1.S((b10 >> 31) ^ (b10 + b10));
            i5++;
        }
        return i10;
    }

    public static int l(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            long longValue = ((Long) list.get(i6)).longValue();
            i5 += w1.T((longValue >> 63) ^ (longValue + longValue));
        }
        return i5;
    }

    public static int m(List list) {
        int size = list.size();
        int i5 = 0;
        if (size == 0) {
            return 0;
        }
        if (!(list instanceof f2)) {
            int i6 = 0;
            while (i5 < size) {
                i6 += w1.S(((Integer) list.get(i5)).intValue());
                i5++;
            }
            return i6;
        }
        f2 f2Var = (f2) list;
        int i10 = 0;
        while (i5 < size) {
            i10 += w1.S(f2Var.b(i5));
            i5++;
        }
        return i10;
    }

    public static int n(List list) {
        int size = list.size();
        if (size == 0) {
            return 0;
        }
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            i5 += w1.T(((Long) list.get(i6)).longValue());
        }
        return i5;
    }

    public static void o(Object obj, Object obj2) {
        e2 e2Var = (e2) obj;
        g3 g3Var = e2Var.zzc;
        g3 g3Var2 = ((e2) obj2).zzc;
        g3 g3Var3 = g3.f5740f;
        if (!g3Var3.equals(g3Var2)) {
            if (g3Var3.equals(g3Var)) {
                int i5 = g3Var.a + g3Var2.a;
                int[] copyOf = Arrays.copyOf(g3Var.f5741b, i5);
                System.arraycopy(g3Var2.f5741b, 0, copyOf, g3Var.a, g3Var2.a);
                Object[] copyOf2 = Arrays.copyOf(g3Var.f5742c, i5);
                System.arraycopy(g3Var2.f5742c, 0, copyOf2, g3Var.a, g3Var2.a);
                g3Var = new g3(i5, copyOf, copyOf2, true);
            } else {
                g3Var.getClass();
                if (!g3Var2.equals(g3Var3)) {
                    if (!g3Var.f5744e) {
                        throw new UnsupportedOperationException();
                    }
                    int i6 = g3Var.a + g3Var2.a;
                    g3Var.e(i6);
                    System.arraycopy(g3Var2.f5741b, 0, g3Var.f5741b, g3Var.a, g3Var2.a);
                    System.arraycopy(g3Var2.f5742c, 0, g3Var.f5742c, g3Var.a, g3Var2.a);
                    g3Var.a = i6;
                }
            }
        }
        e2Var.zzc = g3Var;
    }

    public static void p(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                boolean booleanValue = ((Boolean) list.get(i6)).booleanValue();
                w1Var.P(i5 << 3);
                w1Var.E(booleanValue ? (byte) 1 : (byte) 0);
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Boolean) list.get(i11)).getClass();
            i10++;
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.E(((Boolean) list.get(i6)).booleanValue() ? (byte) 1 : (byte) 0);
            i6++;
        }
    }

    public static void q(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                w1Var.I(i5, Double.doubleToRawLongBits(((Double) list.get(i6)).doubleValue()));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Double) list.get(i11)).getClass();
            i10 += 8;
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.J(Double.doubleToRawLongBits(((Double) list.get(i6)).doubleValue()));
            i6++;
        }
    }

    public static void r(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!(list instanceof f2)) {
            if (!z5) {
                while (i6 < list.size()) {
                    w1Var.K(i5, ((Integer) list.get(i6)).intValue());
                    i6++;
                }
                return;
            }
            w1Var.N(i5, 2);
            int i10 = 0;
            for (int i11 = 0; i11 < list.size(); i11++) {
                i10 += w1.T(((Integer) list.get(i11)).intValue());
            }
            w1Var.P(i10);
            while (i6 < list.size()) {
                w1Var.L(((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        f2 f2Var = (f2) list;
        if (!z5) {
            while (i6 < f2Var.f5736i) {
                w1Var.K(i5, f2Var.b(i6));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i12 = 0;
        for (int i13 = 0; i13 < f2Var.f5736i; i13++) {
            i12 += w1.T(f2Var.b(i13));
        }
        w1Var.P(i12);
        while (i6 < f2Var.f5736i) {
            w1Var.L(f2Var.b(i6));
            i6++;
        }
    }

    public static void s(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!(list instanceof f2)) {
            if (!z5) {
                while (i6 < list.size()) {
                    w1Var.G(i5, ((Integer) list.get(i6)).intValue());
                    i6++;
                }
                return;
            }
            w1Var.N(i5, 2);
            int i10 = 0;
            for (int i11 = 0; i11 < list.size(); i11++) {
                ((Integer) list.get(i11)).getClass();
                i10 += 4;
            }
            w1Var.P(i10);
            while (i6 < list.size()) {
                w1Var.H(((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        f2 f2Var = (f2) list;
        if (!z5) {
            while (i6 < f2Var.f5736i) {
                w1Var.G(i5, f2Var.b(i6));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i12 = 0;
        for (int i13 = 0; i13 < f2Var.f5736i; i13++) {
            f2Var.b(i13);
            i12 += 4;
        }
        w1Var.P(i12);
        while (i6 < f2Var.f5736i) {
            w1Var.H(f2Var.b(i6));
            i6++;
        }
    }

    public static void t(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                w1Var.I(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Long) list.get(i11)).getClass();
            i10 += 8;
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.J(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static void u(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                w1Var.G(i5, Float.floatToRawIntBits(((Float) list.get(i6)).floatValue()));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Float) list.get(i11)).getClass();
            i10 += 4;
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.H(Float.floatToRawIntBits(((Float) list.get(i6)).floatValue()));
            i6++;
        }
    }

    public static void v(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!(list instanceof f2)) {
            if (!z5) {
                while (i6 < list.size()) {
                    w1Var.K(i5, ((Integer) list.get(i6)).intValue());
                    i6++;
                }
                return;
            }
            w1Var.N(i5, 2);
            int i10 = 0;
            for (int i11 = 0; i11 < list.size(); i11++) {
                i10 += w1.T(((Integer) list.get(i11)).intValue());
            }
            w1Var.P(i10);
            while (i6 < list.size()) {
                w1Var.L(((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        f2 f2Var = (f2) list;
        if (!z5) {
            while (i6 < f2Var.f5736i) {
                w1Var.K(i5, f2Var.b(i6));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i12 = 0;
        for (int i13 = 0; i13 < f2Var.f5736i; i13++) {
            i12 += w1.T(f2Var.b(i13));
        }
        w1Var.P(i12);
        while (i6 < f2Var.f5736i) {
            w1Var.L(f2Var.b(i6));
            i6++;
        }
    }

    public static void w(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                w1Var.Q(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            i10 += w1.T(((Long) list.get(i11)).longValue());
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.R(((Long) list.get(i6)).longValue());
            i6++;
        }
    }

    public static void x(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!(list instanceof f2)) {
            if (!z5) {
                while (i6 < list.size()) {
                    w1Var.G(i5, ((Integer) list.get(i6)).intValue());
                    i6++;
                }
                return;
            }
            w1Var.N(i5, 2);
            int i10 = 0;
            for (int i11 = 0; i11 < list.size(); i11++) {
                ((Integer) list.get(i11)).getClass();
                i10 += 4;
            }
            w1Var.P(i10);
            while (i6 < list.size()) {
                w1Var.H(((Integer) list.get(i6)).intValue());
                i6++;
            }
            return;
        }
        f2 f2Var = (f2) list;
        if (!z5) {
            while (i6 < f2Var.f5736i) {
                w1Var.G(i5, f2Var.b(i6));
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i12 = 0;
        for (int i13 = 0; i13 < f2Var.f5736i; i13++) {
            f2Var.b(i13);
            i12 += 4;
        }
        w1Var.P(i12);
        while (i6 < f2Var.f5736i) {
            w1Var.H(f2Var.b(i6));
            i6++;
        }
    }

    public static void y(int i5, List list, x1 x1Var, boolean z5) {
        if (list == null || list.isEmpty()) {
            return;
        }
        w1 w1Var = x1Var.a;
        int i6 = 0;
        if (!z5) {
            while (i6 < list.size()) {
                w1Var.I(i5, ((Long) list.get(i6)).longValue());
                i6++;
            }
            return;
        }
        w1Var.N(i5, 2);
        int i10 = 0;
        for (int i11 = 0; i11 < list.size(); i11++) {
            ((Long) list.get(i11)).getClass();
            i10 += 8;
        }
        w1Var.P(i10);
        while (i6 < list.size()) {
            w1Var.J(((Long) list.get(i6)).longValue());
            i6++;
        }
    }
}
