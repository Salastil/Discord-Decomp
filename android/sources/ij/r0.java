package ij;

import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class r0 {
    public static final Class a;

    /* renamed from: b, reason: collision with root package name */
    public static final u0 f10921b;

    /* renamed from: c, reason: collision with root package name */
    public static final u0 f10922c;

    static {
        Class<?> cls;
        Class<?> cls2;
        u0 u0Var = null;
        try {
            cls = Class.forName("com.google.protobuf.GeneratedMessageV3");
        } catch (Throwable unused) {
            cls = null;
        }
        a = cls;
        try {
            cls2 = Class.forName("com.google.protobuf.UnknownFieldSetSchema");
        } catch (Throwable unused2) {
            cls2 = null;
        }
        if (cls2 != null) {
            try {
                u0Var = (u0) cls2.getConstructor(null).newInstance(null);
            } catch (Throwable unused3) {
            }
        }
        f10921b = u0Var;
        f10922c = new u0();
    }

    public static void a(u0 u0Var, Object obj, Object obj2) {
        u0Var.getClass();
        r rVar = (r) obj;
        t0 t0Var = rVar.f10920c;
        t0 t0Var2 = ((r) obj2).f10920c;
        t0 t0Var3 = t0.f10924e;
        if (!t0Var3.equals(t0Var2)) {
            if (t0Var3.equals(t0Var)) {
                int i5 = t0Var.a + t0Var2.a;
                int[] copyOf = Arrays.copyOf(t0Var.f10925b, i5);
                System.arraycopy(t0Var2.f10925b, 0, copyOf, t0Var.a, t0Var2.a);
                Object[] copyOf2 = Arrays.copyOf(t0Var.f10926c, i5);
                System.arraycopy(t0Var2.f10926c, 0, copyOf2, t0Var.a, t0Var2.a);
                t0Var = new t0(i5, copyOf, copyOf2, true);
            } else {
                t0Var.getClass();
                if (!t0Var2.equals(t0Var3)) {
                    if (!t0Var.f10927d) {
                        throw new UnsupportedOperationException();
                    }
                    int i6 = t0Var.a + t0Var2.a;
                    t0Var.a(i6);
                    System.arraycopy(t0Var2.f10925b, 0, t0Var.f10925b, t0Var.a, t0Var2.a);
                    System.arraycopy(t0Var2.f10926c, 0, t0Var.f10926c, t0Var.a, t0Var2.a);
                    t0Var.a = i6;
                }
            }
        }
        rVar.f10920c = t0Var;
    }

    public static boolean b(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }
}
