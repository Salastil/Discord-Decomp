package androidx.datastore.preferences.protobuf;

import java.lang.reflect.Field;
import java.nio.Buffer;
import java.nio.ByteOrder;
import java.security.AccessController;
import java.util.logging.Level;
import java.util.logging.Logger;
import sun.misc.Unsafe;

/* loaded from: classes.dex */
public abstract class n1 {
    public static final Logger a = Logger.getLogger(n1.class.getName());

    /* renamed from: b, reason: collision with root package name */
    public static final Unsafe f1790b;

    /* renamed from: c, reason: collision with root package name */
    public static final Class f1791c;

    /* renamed from: d, reason: collision with root package name */
    public static final m1 f1792d;

    /* renamed from: e, reason: collision with root package name */
    public static final boolean f1793e;

    /* renamed from: f, reason: collision with root package name */
    public static final boolean f1794f;

    /* renamed from: g, reason: collision with root package name */
    public static final long f1795g;

    /* renamed from: h, reason: collision with root package name */
    public static final boolean f1796h;

    /* JADX WARN: Removed duplicated region for block: B:19:0x01db  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x01eb  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x01ee  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00e5 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    static {
        Class cls;
        Class<?> cls2;
        boolean z5;
        Unsafe unsafe;
        boolean z6;
        Field d6;
        m1 m1Var;
        Unsafe i5 = i();
        f1790b = i5;
        f1791c = c.a;
        Class cls3 = Long.TYPE;
        boolean e9 = e(cls3);
        Class cls4 = Integer.TYPE;
        boolean e10 = e(cls4);
        m1 m1Var2 = null;
        if (i5 != null) {
            if (!c.a()) {
                m1Var2 = new l1(i5);
            } else if (e9) {
                m1Var2 = new k1(i5, 1);
            } else if (e10) {
                m1Var2 = new k1(i5, 0);
            }
        }
        f1792d = m1Var2;
        Class cls5 = Byte.TYPE;
        if (i5 != null) {
            try {
                cls2 = i5.getClass();
                cls2.getMethod("objectFieldOffset", Field.class);
                cls2.getMethod("getLong", Object.class, cls3);
            } catch (Throwable th2) {
                cls = Field.class;
                a.log(Level.WARNING, "platform method missing - proto runtime falling back to safer methods: " + th2);
            }
            if (d() != null) {
                if (!c.a()) {
                    cls2.getMethod("getByte", cls3);
                    cls2.getMethod("putByte", cls3, cls5);
                    cls2.getMethod("getInt", cls3);
                    cls2.getMethod("putInt", cls3, cls4);
                    cls2.getMethod("getLong", cls3);
                    cls2.getMethod("putLong", cls3, cls3);
                    cls2.getMethod("copyMemory", cls3, cls3, cls3);
                    cls2.getMethod("copyMemory", Object.class, cls3, Object.class, cls3, cls3);
                }
                cls = Field.class;
                z5 = true;
                f1793e = z5;
                unsafe = f1790b;
                if (unsafe != null) {
                    try {
                        Class<?> cls6 = unsafe.getClass();
                        cls6.getMethod("objectFieldOffset", cls);
                        cls6.getMethod("arrayBaseOffset", Class.class);
                        cls6.getMethod("arrayIndexScale", Class.class);
                        cls6.getMethod("getInt", Object.class, cls3);
                        cls6.getMethod("putInt", Object.class, cls3, cls4);
                        cls6.getMethod("getLong", Object.class, cls3);
                        cls6.getMethod("putLong", Object.class, cls3, cls3);
                        cls6.getMethod("getObject", Object.class, cls3);
                        cls6.getMethod("putObject", Object.class, cls3, Object.class);
                        if (!c.a()) {
                            cls6.getMethod("getByte", Object.class, cls3);
                            cls6.getMethod("putByte", Object.class, cls3, cls5);
                            cls6.getMethod("getBoolean", Object.class, cls3);
                            cls6.getMethod("putBoolean", Object.class, cls3, Boolean.TYPE);
                            cls6.getMethod("getFloat", Object.class, cls3);
                            cls6.getMethod("putFloat", Object.class, cls3, Float.TYPE);
                            cls6.getMethod("getDouble", Object.class, cls3);
                            cls6.getMethod("putDouble", Object.class, cls3, Double.TYPE);
                        }
                        z6 = true;
                    } catch (Throwable th3) {
                        a.log(Level.WARNING, "platform method missing - proto runtime falling back to safer methods: " + th3);
                    }
                    f1794f = z6;
                    f1795g = b(byte[].class);
                    b(boolean[].class);
                    c(boolean[].class);
                    b(int[].class);
                    c(int[].class);
                    b(long[].class);
                    c(long[].class);
                    b(float[].class);
                    c(float[].class);
                    b(double[].class);
                    c(double[].class);
                    b(Object[].class);
                    c(Object[].class);
                    d6 = d();
                    if (d6 != null && (m1Var = f1792d) != null) {
                        m1Var.j(d6);
                    }
                    f1796h = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
                }
                z6 = false;
                f1794f = z6;
                f1795g = b(byte[].class);
                b(boolean[].class);
                c(boolean[].class);
                b(int[].class);
                c(int[].class);
                b(long[].class);
                c(long[].class);
                b(float[].class);
                c(float[].class);
                b(double[].class);
                c(double[].class);
                b(Object[].class);
                c(Object[].class);
                d6 = d();
                if (d6 != null) {
                    m1Var.j(d6);
                }
                f1796h = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
            }
        }
        cls = Field.class;
        z5 = false;
        f1793e = z5;
        unsafe = f1790b;
        if (unsafe != null) {
        }
        z6 = false;
        f1794f = z6;
        f1795g = b(byte[].class);
        b(boolean[].class);
        c(boolean[].class);
        b(int[].class);
        c(int[].class);
        b(long[].class);
        c(long[].class);
        b(float[].class);
        c(float[].class);
        b(double[].class);
        c(double[].class);
        b(Object[].class);
        c(Object[].class);
        d6 = d();
        if (d6 != null) {
        }
        f1796h = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
    }

    public static Object a(Class cls) {
        try {
            return f1790b.allocateInstance(cls);
        } catch (InstantiationException e9) {
            throw new IllegalStateException(e9);
        }
    }

    public static int b(Class cls) {
        if (f1794f) {
            return f1792d.a(cls);
        }
        return -1;
    }

    public static void c(Class cls) {
        if (f1794f) {
            f1792d.b(cls);
        }
    }

    public static Field d() {
        Field field;
        Field field2;
        if (c.a()) {
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

    public static boolean e(Class cls) {
        if (!c.a()) {
            return false;
        }
        try {
            Class cls2 = f1791c;
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

    public static byte f(byte[] bArr, long j) {
        return f1792d.d(f1795g + j, bArr);
    }

    public static byte g(long j, Object obj) {
        return (byte) ((f1792d.g((-4) & j, obj) >>> ((int) (((~j) & 3) << 3))) & 255);
    }

    public static byte h(long j, Object obj) {
        return (byte) ((f1792d.g((-4) & j, obj) >>> ((int) ((j & 3) << 3))) & 255);
    }

    public static Unsafe i() {
        try {
            return (Unsafe) AccessController.doPrivileged(new j1());
        } catch (Throwable unused) {
            return null;
        }
    }

    public static void j(byte[] bArr, byte b10, long j) {
        f1792d.l(bArr, f1795g + j, b10);
    }

    public static void k(Object obj, long j, byte b10) {
        long j5 = (-4) & j;
        int g6 = f1792d.g(j5, obj);
        int i5 = ((~((int) j)) & 3) << 3;
        m(((255 & b10) << i5) | (g6 & (~(255 << i5))), j5, obj);
    }

    public static void l(Object obj, long j, byte b10) {
        long j5 = (-4) & j;
        int i5 = (((int) j) & 3) << 3;
        m(((255 & b10) << i5) | (f1792d.g(j5, obj) & (~(255 << i5))), j5, obj);
    }

    public static void m(int i5, long j, Object obj) {
        f1792d.o(i5, j, obj);
    }

    public static void n(Object obj, long j, long j5) {
        f1792d.p(obj, j, j5);
    }

    public static void o(long j, Object obj, Object obj2) {
        f1792d.q(j, obj, obj2);
    }
}
