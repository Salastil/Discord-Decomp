package androidx.datastore.preferences.protobuf;

import java.util.Map;

/* loaded from: classes.dex */
public final class j0 {
    /* JADX WARN: Removed duplicated region for block: B:16:0x012f  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x013e  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x014f  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0160  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0168  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0170  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x017c  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0188  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x01a2  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x01ad  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x01b4  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x01ca  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x01d0  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x01d6  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01dc  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01e7  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x01f2  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x01fd  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0204  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0138 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int a(int i5, Object obj, Object obj2) {
        int A;
        int size;
        int z5;
        v1 v1Var;
        int size2;
        int z6;
        i0 i0Var = (i0) obj;
        h0 h0Var = (h0) obj2;
        int i6 = 0;
        if (i0Var.isEmpty()) {
            return 0;
        }
        for (Map.Entry entry : i0Var.entrySet()) {
            Object key = entry.getKey();
            Object value = entry.getValue();
            h0Var.getClass();
            int y5 = j.y(i5);
            g0 g0Var = h0Var.a;
            v1 v1Var2 = g0Var.a;
            int i10 = o.f1797c;
            int i11 = 1;
            int y6 = j.y(1);
            s1 s1Var = v1.f1822v;
            if (v1Var2 == s1Var) {
                y6 *= 2;
            }
            switch (v1Var2.ordinal()) {
                case 0:
                    ((Double) key).getClass();
                    A = 8;
                    int i12 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y10 = j.y(2);
                    if (v1Var == s1Var) {
                        y10 *= 2;
                    }
                    switch (v1Var.ordinal()) {
                        case 0:
                            ((Double) value).getClass();
                            i11 = 8;
                            int i13 = i11 + y10 + i12;
                            i6 = a3.e.c(i13, i13, y5, i6);
                        case 1:
                            ((Float) value).getClass();
                            i11 = 4;
                            int i132 = i11 + y10 + i12;
                            i6 = a3.e.c(i132, i132, y5, i6);
                        case 2:
                            i11 = j.A(((Long) value).longValue());
                            int i1322 = i11 + y10 + i12;
                            i6 = a3.e.c(i1322, i1322, y5, i6);
                        case 3:
                            i11 = j.A(((Long) value).longValue());
                            int i13222 = i11 + y10 + i12;
                            i6 = a3.e.c(i13222, i13222, y5, i6);
                        case 4:
                            i11 = j.w(((Integer) value).intValue());
                            int i132222 = i11 + y10 + i12;
                            i6 = a3.e.c(i132222, i132222, y5, i6);
                        case 5:
                            ((Long) value).getClass();
                            i11 = 8;
                            int i1322222 = i11 + y10 + i12;
                            i6 = a3.e.c(i1322222, i1322222, y5, i6);
                        case 6:
                            ((Integer) value).getClass();
                            i11 = 4;
                            int i13222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i13222222, i13222222, y5, i6);
                        case 7:
                            ((Boolean) value).getClass();
                            int i132222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i132222222, i132222222, y5, i6);
                        case 8:
                            if (value instanceof f) {
                                size2 = ((f) value).size();
                                z6 = j.z(size2);
                                i11 = z6 + size2;
                                int i1322222222 = i11 + y10 + i12;
                                i6 = a3.e.c(i1322222222, i1322222222, y5, i6);
                            } else {
                                i11 = j.x((String) value);
                                int i13222222222 = i11 + y10 + i12;
                                i6 = a3.e.c(i13222222222, i13222222222, y5, i6);
                            }
                        case 9:
                            i11 = ((a) value).a();
                            int i132222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i132222222222, i132222222222, y5, i6);
                        case 10:
                            size2 = ((a) value).a();
                            z6 = j.z(size2);
                            i11 = z6 + size2;
                            int i1322222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i1322222222222, i1322222222222, y5, i6);
                        case 11:
                            if (value instanceof f) {
                                size2 = ((f) value).size();
                                z6 = j.z(size2);
                            } else {
                                size2 = ((byte[]) value).length;
                                z6 = j.z(size2);
                            }
                            i11 = z6 + size2;
                            int i13222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i13222222222222, i13222222222222, y5, i6);
                        case 12:
                            i11 = j.z(((Integer) value).intValue());
                            int i132222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i132222222222222, i132222222222222, y5, i6);
                        case 13:
                            i11 = j.w(((Integer) value).intValue());
                            int i1322222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i1322222222222222, i1322222222222222, y5, i6);
                        case 14:
                            ((Integer) value).getClass();
                            i11 = 4;
                            int i13222222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i13222222222222222, i13222222222222222, y5, i6);
                        case 15:
                            ((Long) value).getClass();
                            i11 = 8;
                            int i132222222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i132222222222222222, i132222222222222222, y5, i6);
                        case 16:
                            int intValue = ((Integer) value).intValue();
                            i11 = j.z((intValue >> 31) ^ (intValue << 1));
                            int i1322222222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i1322222222222222222, i1322222222222222222, y5, i6);
                        case 17:
                            long longValue = ((Long) value).longValue();
                            i11 = j.A((longValue >> 63) ^ (longValue << 1));
                            int i13222222222222222222 = i11 + y10 + i12;
                            i6 = a3.e.c(i13222222222222222222, i13222222222222222222, y5, i6);
                        default:
                            throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
                    }
                case 1:
                    ((Float) key).getClass();
                    A = 4;
                    int i122 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y102 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 2:
                    A = j.A(((Long) key).longValue());
                    int i1222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y1022 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 3:
                    A = j.A(((Long) key).longValue());
                    int i12222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y10222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 4:
                    A = j.w(((Integer) key).intValue());
                    int i122222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y102222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 5:
                    ((Long) key).getClass();
                    A = 8;
                    int i1222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y1022222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 6:
                    ((Integer) key).getClass();
                    A = 4;
                    int i12222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y10222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 7:
                    ((Boolean) key).getClass();
                    A = 1;
                    int i122222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y102222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 8:
                    if (key instanceof f) {
                        size = ((f) key).size();
                        z5 = j.z(size);
                        A = size + z5;
                        int i1222222222 = A + y6;
                        v1Var = g0Var.f1754b;
                        int y1022222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    } else {
                        A = j.x((String) key);
                        int i12222222222 = A + y6;
                        v1Var = g0Var.f1754b;
                        int y10222222222 = j.y(2);
                        if (v1Var == s1Var) {
                        }
                        switch (v1Var.ordinal()) {
                        }
                    }
                case 9:
                    A = ((a) key).a();
                    int i122222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y102222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 10:
                    size = ((a) key).a();
                    z5 = j.z(size);
                    A = size + z5;
                    int i1222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y1022222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 11:
                    if (key instanceof f) {
                        size = ((f) key).size();
                        z5 = j.z(size);
                    } else {
                        size = ((byte[]) key).length;
                        z5 = j.z(size);
                    }
                    A = size + z5;
                    int i12222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y10222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 12:
                    A = j.z(((Integer) key).intValue());
                    int i122222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y102222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 13:
                    A = j.w(((Integer) key).intValue());
                    int i1222222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y1022222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 14:
                    ((Integer) key).getClass();
                    A = 4;
                    int i12222222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y10222222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 15:
                    ((Long) key).getClass();
                    A = 8;
                    int i122222222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y102222222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 16:
                    int intValue2 = ((Integer) key).intValue();
                    A = j.z((intValue2 >> 31) ^ (intValue2 << 1));
                    int i1222222222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y1022222222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                case 17:
                    long longValue2 = ((Long) key).longValue();
                    A = j.A((longValue2 << 1) ^ (longValue2 >> 63));
                    int i12222222222222222222 = A + y6;
                    v1Var = g0Var.f1754b;
                    int y10222222222222222222 = j.y(2);
                    if (v1Var == s1Var) {
                    }
                    switch (v1Var.ordinal()) {
                    }
                default:
                    throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
            }
        }
        return i6;
    }

    public static i0 b(Object obj, Object obj2) {
        i0 i0Var = (i0) obj;
        i0 i0Var2 = (i0) obj2;
        if (!i0Var2.isEmpty()) {
            if (!i0Var.f1763d) {
                i0Var = i0Var.b();
            }
            i0Var.a();
            if (!i0Var2.isEmpty()) {
                i0Var.putAll(i0Var2);
            }
        }
        return i0Var;
    }
}
