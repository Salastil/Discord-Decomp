package ij;

import java.lang.reflect.Field;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public abstract class b1 {
    public final Unsafe a;

    public b1(Unsafe unsafe) {
        this.a = unsafe;
    }

    public final int a(Class cls) {
        return this.a.arrayBaseOffset(cls);
    }

    public final int b(Class cls) {
        return this.a.arrayIndexScale(cls);
    }

    public abstract boolean c(long j, Object obj);

    public abstract byte d(long j, Object obj);

    public abstract double e(long j, Object obj);

    public abstract float f(long j, Object obj);

    public final int g(long j, Object obj) {
        return this.a.getInt(obj, j);
    }

    public final long h(long j, Object obj) {
        return this.a.getLong(obj, j);
    }

    public final Object i(long j, Object obj) {
        return this.a.getObject(obj, j);
    }

    public final long j(Field field) {
        return this.a.objectFieldOffset(field);
    }

    public abstract void k(Object obj, long j, boolean z5);

    public abstract void l(Object obj, long j, double d6);

    public abstract void m(Object obj, long j, float f2);

    public final void n(int i5, long j, Object obj) {
        this.a.putInt(obj, j, i5);
    }

    public final void o(Object obj, long j, long j5) {
        this.a.putLong(obj, j, j5);
    }

    public final void p(long j, Object obj, Object obj2) {
        this.a.putObject(obj, j, obj2);
    }

    public boolean q() {
        Unsafe unsafe = this.a;
        if (unsafe == null) {
            return false;
        }
        try {
            Class<?> cls = unsafe.getClass();
            cls.getMethod("objectFieldOffset", Field.class);
            cls.getMethod("arrayBaseOffset", Class.class);
            cls.getMethod("arrayIndexScale", Class.class);
            Class cls2 = Long.TYPE;
            cls.getMethod("getInt", Object.class, cls2);
            cls.getMethod("putInt", Object.class, cls2, Integer.TYPE);
            cls.getMethod("getLong", Object.class, cls2);
            cls.getMethod("putLong", Object.class, cls2, cls2);
            cls.getMethod("getObject", Object.class, cls2);
            cls.getMethod("putObject", Object.class, cls2, Object.class);
            return true;
        } catch (Throwable th2) {
            c1.a(th2);
            return false;
        }
    }

    public abstract boolean r();
}
