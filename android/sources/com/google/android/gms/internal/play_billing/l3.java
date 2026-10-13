package com.google.android.gms.internal.play_billing;

import java.lang.reflect.Field;
import java.nio.Buffer;
import java.nio.ByteOrder;
import java.security.AccessController;
import java.util.logging.Level;
import java.util.logging.Logger;
import libcore.io.Memory;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public abstract class l3 {
    public static final Unsafe a;

    /* renamed from: b, reason: collision with root package name */
    public static final Class f5760b;

    /* renamed from: c, reason: collision with root package name */
    public static final k3 f5761c;

    /* renamed from: d, reason: collision with root package name */
    public static final boolean f5762d;

    /* renamed from: e, reason: collision with root package name */
    public static final boolean f5763e;

    /* JADX WARN: Removed duplicated region for block: B:25:0x0132  */
    static {
        boolean z5;
        Field p3;
        k3 k3Var;
        Unsafe e9 = e();
        a = e9;
        int i5 = r1.a;
        f5760b = Memory.class;
        Class cls = Long.TYPE;
        boolean m5 = m(cls);
        Class cls2 = Integer.TYPE;
        boolean m6 = m(cls2);
        k3 k3Var2 = null;
        if (e9 != null) {
            if (m5) {
                k3Var2 = new j3(e9);
            } else if (m6) {
                k3Var2 = new i3(e9);
            }
        }
        f5761c = k3Var2;
        if (k3Var2 != null) {
            try {
                Class<?> cls3 = k3Var2.a.getClass();
                cls3.getMethod("objectFieldOffset", Field.class);
                cls3.getMethod("getLong", Object.class, cls);
                p();
            } catch (Throwable th2) {
                Logger.getLogger(l3.class.getName()).logp(Level.WARNING, "com.google.protobuf.UnsafeUtil", "logMissingMethod", "platform method missing - proto runtime falling back to safer methods: ".concat(th2.toString()));
            }
        }
        k3 k3Var3 = f5761c;
        if (k3Var3 != null) {
            try {
                Class<?> cls4 = k3Var3.a.getClass();
                cls4.getMethod("objectFieldOffset", Field.class);
                cls4.getMethod("arrayBaseOffset", Class.class);
                cls4.getMethod("arrayIndexScale", Class.class);
                cls4.getMethod("getInt", Object.class, cls);
                cls4.getMethod("putInt", Object.class, cls, cls2);
                cls4.getMethod("getLong", Object.class, cls);
                cls4.getMethod("putLong", Object.class, cls, cls);
                cls4.getMethod("getObject", Object.class, cls);
                cls4.getMethod("putObject", Object.class, cls, Object.class);
                z5 = true;
            } catch (Throwable th3) {
                Logger.getLogger(l3.class.getName()).logp(Level.WARNING, "com.google.protobuf.UnsafeUtil", "logMissingMethod", "platform method missing - proto runtime falling back to safer methods: ".concat(th3.toString()));
            }
            f5762d = z5;
            n(byte[].class);
            n(boolean[].class);
            o(boolean[].class);
            n(int[].class);
            o(int[].class);
            n(long[].class);
            o(long[].class);
            n(float[].class);
            o(float[].class);
            n(double[].class);
            o(double[].class);
            n(Object[].class);
            o(Object[].class);
            p3 = p();
            if (p3 != null && (k3Var = f5761c) != null) {
                k3Var.a.objectFieldOffset(p3);
            }
            f5763e = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
        }
        z5 = false;
        f5762d = z5;
        n(byte[].class);
        n(boolean[].class);
        o(boolean[].class);
        n(int[].class);
        o(int[].class);
        n(long[].class);
        o(long[].class);
        n(float[].class);
        o(float[].class);
        n(double[].class);
        o(double[].class);
        n(Object[].class);
        o(Object[].class);
        p3 = p();
        if (p3 != null) {
            k3Var.a.objectFieldOffset(p3);
        }
        f5763e = ByteOrder.nativeOrder() == ByteOrder.BIG_ENDIAN;
    }

    public static int a(long j, Object obj) {
        return f5761c.a.getInt(obj, j);
    }

    public static long b(long j, Object obj) {
        return f5761c.a.getLong(obj, j);
    }

    public static Object c(Class cls) {
        try {
            return a.allocateInstance(cls);
        } catch (InstantiationException e9) {
            throw new IllegalStateException(e9);
        }
    }

    public static Object d(long j, Object obj) {
        return f5761c.a.getObject(obj, j);
    }

    public static Unsafe e() {
        Unsafe unsafe;
        try {
            unsafe = (Unsafe) AccessController.doPrivileged(new h3());
        } catch (Throwable unused) {
            unsafe = null;
        }
        if (unsafe == null) {
            return null;
        }
        try {
            unsafe.arrayBaseOffset(byte[].class);
            return unsafe;
        } catch (Exception unused2) {
            Logger.getLogger(l3.class.getName()).logp(Level.WARNING, "com.google.protobuf.UnsafeUtil", "getUnsafe", "As part of the planned removal, sun.misc.Unsafe is available in the current environment but configured to throw on use. Protobuf will continue without using it, but with slightly reduced performance. --sun-misc-unsafe-memory-access=allow is likely available to opt back in if desired. A later Protobuf version release will stop using sun.misc.Unsafe entirely.");
            return null;
        }
    }

    public static /* synthetic */ void f(Object obj, long j, boolean z5) {
        Unsafe unsafe = f5761c.a;
        long j5 = (-4) & j;
        int i5 = unsafe.getInt(obj, j5);
        int i6 = ((~((int) j)) & 3) << 3;
        unsafe.putInt(obj, j5, ((z5 ? 1 : 0) << i6) | ((~(255 << i6)) & i5));
    }

    public static /* synthetic */ void g(Object obj, long j, boolean z5) {
        Unsafe unsafe = f5761c.a;
        long j5 = (-4) & j;
        int i5 = (((int) j) & 3) << 3;
        unsafe.putInt(obj, j5, ((z5 ? 1 : 0) << i5) | ((~(255 << i5)) & unsafe.getInt(obj, j5)));
    }

    public static void h(int i5, long j, Object obj) {
        f5761c.a.putInt(obj, j, i5);
    }

    public static void i(Object obj, long j, long j5) {
        f5761c.a.putLong(obj, j, j5);
    }

    public static void j(long j, Object obj, Object obj2) {
        f5761c.a.putObject(obj, j, obj2);
    }

    public static /* bridge */ /* synthetic */ boolean k(long j, Object obj) {
        return ((byte) ((f5761c.a.getInt(obj, (-4) & j) >>> ((int) (((~j) & 3) << 3))) & 255)) != 0;
    }

    public static /* bridge */ /* synthetic */ boolean l(long j, Object obj) {
        return ((byte) ((f5761c.a.getInt(obj, (-4) & j) >>> ((int) ((j & 3) << 3))) & 255)) != 0;
    }

    public static boolean m(Class cls) {
        int i5 = r1.a;
        try {
            Class cls2 = f5760b;
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

    public static void n(Class cls) {
        if (f5762d) {
            f5761c.a.arrayBaseOffset(cls);
        }
    }

    public static void o(Class cls) {
        if (f5762d) {
            f5761c.a.arrayIndexScale(cls);
        }
    }

    public static Field p() {
        Field field;
        Field field2;
        int i5 = r1.a;
        try {
            field = Buffer.class.getDeclaredField("effectiveDirectAddress");
        } catch (Throwable unused) {
            field = null;
        }
        if (field != null) {
            return field;
        }
        try {
            field2 = Buffer.class.getDeclaredField("address");
        } catch (Throwable unused2) {
            field2 = null;
        }
        if (field2 == null || field2.getType() != Long.TYPE) {
            return null;
        }
        return field2;
    }
}
