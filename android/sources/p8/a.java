package p8;

import com.facebook.react.common.ReactConstants;

/* loaded from: classes3.dex */
public abstract class a {
    public static c a = b.f16317b;

    public static void a(Object obj, String str, String str2) {
        if (a.isLoggable(3)) {
            a.d(str, String.format(null, str2, obj));
        }
    }

    public static void b(String str, String str2) {
        if (a.isLoggable(3)) {
            a.d(str, str2);
        }
    }

    public static void c(String str, String str2, Object obj, Object obj2) {
        if (a.isLoggable(3)) {
            a.d(str, String.format(null, str2, obj, obj2));
        }
    }

    public static void d(Class cls, String str) {
        if (a.isLoggable(6)) {
            a.e(cls.getSimpleName(), str);
        }
    }

    public static void e(Class cls, String str, Throwable th2) {
        if (a.isLoggable(6)) {
            a.e(cls.getSimpleName(), str, th2);
        }
    }

    public static void f(Class cls, String str, Object... objArr) {
        if (a.isLoggable(6)) {
            a.e(cls.getSimpleName(), String.format(null, str, objArr));
        }
    }

    public static void g(String str, String str2) {
        if (a.isLoggable(6)) {
            a.e(str, str2);
        }
    }

    public static void h(String str, String str2, Throwable th2) {
        if (a.isLoggable(6)) {
            a.e(str, str2, th2);
        }
    }

    public static void i(String str, String str2, Object... objArr) {
        if (a.isLoggable(6)) {
            a.e(str, String.format(null, str2, objArr));
        }
    }

    public static void j(String str, Throwable th2, String str2, Object... objArr) {
        if (a.isLoggable(6)) {
            a.e(str, String.format(null, str2, objArr), th2);
        }
    }

    public static void k(String str, String str2) {
        if (a.isLoggable(4)) {
            a.i(str, str2);
        }
    }

    public static void l(String str, String str2, Integer num, Integer num2) {
        if (a.isLoggable(4)) {
            a.i(str, String.format(null, str2, num, num2));
        }
    }

    public static void m(String str, String str2, Integer num, Integer num2, Integer num3) {
        if (a.isLoggable(4)) {
            a.i(str, String.format(null, str2, num, num2, num3));
        }
    }

    public static void n(String str, String str2, Object... objArr) {
        if (a.isLoggable(4)) {
            a.i(str, String.format(null, str2, objArr));
        }
    }

    public static void o(Class cls, String str, Object obj, Object obj2) {
        if (a.isLoggable(2)) {
            a.v(cls.getSimpleName(), String.format(null, str, obj, obj2));
        }
    }

    public static void p(Class cls, String str, Object obj, Object obj2, Object obj3) {
        if (a.isLoggable(2)) {
            String format = String.format(null, str, obj, obj2, obj3);
            if (a.isLoggable(2)) {
                a.v(cls.getSimpleName(), format);
            }
        }
    }

    public static void q(String str, Object obj, Class cls) {
        if (a.isLoggable(2)) {
            a.v(cls.getSimpleName(), String.format(null, str, obj));
        }
    }

    public static void r(Class cls, String str) {
        if (a.isLoggable(5)) {
            a.w(cls.getSimpleName(), str);
        }
    }

    public static void s(Class cls, String str, Exception exc) {
        if (a.isLoggable(5)) {
            a.w(cls.getSimpleName(), str, exc);
        }
    }

    public static void t(Class cls, String str, Object... objArr) {
        if (a.isLoggable(5)) {
            a.w(cls.getSimpleName(), String.format(null, str, objArr));
        }
    }

    public static void u(Exception exc, String str, Object... objArr) {
        if (a.isLoggable(5)) {
            s(ha.b.class, String.format(null, str, objArr), exc);
        }
    }

    public static void v(String str, String str2) {
        if (a.isLoggable(5)) {
            a.w(str, str2);
        }
    }

    public static void w(String str, String str2, Exception exc) {
        if (a.isLoggable(5)) {
            a.w(str, str2, exc);
        }
    }

    public static void x(String str, String str2, Object... objArr) {
        if (a.isLoggable(5)) {
            a.w(str, String.format(null, str2, objArr));
        }
    }

    public static void y(Throwable th2, String str, Object... objArr) {
        if (a.isLoggable(5)) {
            a.w(ReactConstants.TAG, String.format(null, str, objArr), th2);
        }
    }

    public static void z(String str, String str2, Object... objArr) {
        if (a.isLoggable(6)) {
            a.wtf(str, String.format(null, str2, objArr));
        }
    }
}
