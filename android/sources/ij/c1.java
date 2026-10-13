package ij;

import java.lang.reflect.Field;
import java.nio.Buffer;
import java.nio.ByteOrder;
import java.security.AccessController;
import java.util.logging.Level;
import java.util.logging.Logger;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public abstract class c1 {
    public static final Unsafe a;

    /* renamed from: b, reason: collision with root package name */
    public static final Class f10845b;

    /* renamed from: c, reason: collision with root package name */
    public static final b1 f10846c;

    /* renamed from: d, reason: collision with root package name */
    public static final boolean f10847d;

    /* renamed from: e, reason: collision with root package name */
    public static final boolean f10848e;

    /* renamed from: f, reason: collision with root package name */
    public static final long f10849f;

    /* renamed from: g, reason: collision with root package name */
    public static final boolean f10850g;

    static {
        Unsafe j = j();
        a = j;
        f10845b = d.a;
        boolean f2 = f(Long.TYPE);
        boolean f10 = f(Integer.TYPE);
        b1 b1Var = null;
        if (j != null) {
            if (!d.a()) {
                b1Var = new a1(j);
            } else if (f2) {
                b1Var = new z0(j, 1);
            } else if (f10) {
                b1Var = new z0(j, 0);
            }
        }
        f10846c = b1Var;
        f10847d = b1Var == null ? false : b1Var.r();
        f10848e = b1Var == null ? false : b1Var.q();
        f10849f = c(byte[].class);
        c(boolean[].class);
        d(boolean[].class);
        c(int[].class);
        d(int[].class);
        c(long[].class);
        d(long[].class);
        c(float[].class);
        d(float[].class);
        c(double[].class);
        d(double[].class);
        c(Object[].class);
        d(Object[].class);
        Field e9 = e();
        if (e9 != null && b1Var != null) {
            b1Var.j(e9);
        }
        f10850g = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
    }

    public static void a(Throwable th2) {
        Logger.getLogger(c1.class.getName()).log(Level.WARNING, "platform method missing - proto runtime falling back to safer methods: " + th2);
    }

    public static Object b(Class cls) {
        try {
            return a.allocateInstance(cls);
        } catch (InstantiationException e9) {
            throw new IllegalStateException(e9);
        }
    }

    public static int c(Class cls) {
        if (f10848e) {
            return f10846c.a(cls);
        }
        return -1;
    }

    public static void d(Class cls) {
        if (f10848e) {
            f10846c.b(cls);
        }
    }

    public static Field e() {
        Field field;
        Field field2;
        if (d.a()) {
            try {
                field2 = Buffer.class.getDeclaredField("effectiveDirectAddress");
            } catch (Throwable unused) {
                field2 = null;
            }
            if (field2 != null) {
                return field2;
            }
        }
        try {
            field = Buffer.class.getDeclaredField("address");
        } catch (Throwable unused2) {
            field = null;
        }
        if (field == null || field.getType() != Long.TYPE) {
            return null;
        }
        return field;
    }

    public static boolean f(Class cls) {
        if (!d.a()) {
            return false;
        }
        try {
            Class cls2 = f10845b;
            Class cls3 = Boolean.TYPE;
            cls2.getMethod("peekLong", cls, cls3);
            cls2.getMethod("pokeLong", cls, Long.TYPE, cls3);
            Class cls4 = Integer.TYPE;
            cls2.getMethod("pokeInt", cls, cls4, cls3);
            cls2.getMethod("peekInt", cls, cls3);
            cls2.getMethod("pokeByte", cls, Byte.TYPE);
            cls2.getMethod("peekByte", cls);
            cls2.getMethod("pokeByteArray", cls, byte[].class, cls4, cls4);
            cls2.getMethod("peekByteArray", cls, byte[].class, cls4, cls4);
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public static byte g(byte[] bArr, long j) {
        return f10846c.d(f10849f + j, bArr);
    }

    public static byte h(long j, Object obj) {
        return (byte) ((f10846c.g((-4) & j, obj) >>> ((int) (((~j) & 3) << 3))) & 255);
    }

    public static byte i(long j, Object obj) {
        return (byte) ((f10846c.g((-4) & j, obj) >>> ((int) ((j & 3) << 3))) & 255);
    }

    public static Unsafe j() {
        try {
            return (Unsafe) AccessController.doPrivileged(new y0());
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void k(Object obj, long j, byte b10) {
        long j5 = (-4) & j;
        int g6 = f10846c.g(j5, obj);
        int i5 = ((~((int) j)) & 3) << 3;
        m(((255 & b10) << i5) | (g6 & (~(255 << i5))), j5, obj);
    }

    public static void l(Object obj, long j, byte b10) {
        long j5 = (-4) & j;
        int i5 = (((int) j) & 3) << 3;
        m(((255 & b10) << i5) | (f10846c.g(j5, obj) & (~(255 << i5))), j5, obj);
    }

    public static void m(int i5, long j, Object obj) {
        f10846c.n(i5, j, obj);
    }

    public static void n(Object obj, long j, long j5) {
        f10846c.o(obj, j, j5);
    }

    public static void o(long j, Object obj, Object obj2) {
        f10846c.p(j, obj, obj2);
    }
}
