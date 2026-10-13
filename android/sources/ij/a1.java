package ij;

import java.lang.reflect.Field;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public final class a1 extends b1 {
    @Override // ij.b1
    public final boolean c(long j, Object obj) {
        return this.a.getBoolean(obj, j);
    }

    @Override // ij.b1
    public final byte d(long j, Object obj) {
        return this.a.getByte(obj, j);
    }

    @Override // ij.b1
    public final double e(long j, Object obj) {
        return this.a.getDouble(obj, j);
    }

    @Override // ij.b1
    public final float f(long j, Object obj) {
        return this.a.getFloat(obj, j);
    }

    @Override // ij.b1
    public final void k(Object obj, long j, boolean z5) {
        this.a.putBoolean(obj, j, z5);
    }

    @Override // ij.b1
    public final void l(Object obj, long j, double d6) {
        this.a.putDouble(obj, j, d6);
    }

    @Override // ij.b1
    public final void m(Object obj, long j, float f2) {
        this.a.putFloat(obj, j, f2);
    }

    @Override // ij.b1
    public final boolean q() {
        if (!super.q()) {
            return false;
        }
        try {
            Class<?> cls = this.a.getClass();
            Class cls2 = Long.TYPE;
            cls.getMethod("getByte", Object.class, cls2);
            cls.getMethod("putByte", Object.class, cls2, Byte.TYPE);
            cls.getMethod("getBoolean", Object.class, cls2);
            cls.getMethod("putBoolean", Object.class, cls2, Boolean.TYPE);
            cls.getMethod("getFloat", Object.class, cls2);
            cls.getMethod("putFloat", Object.class, cls2, Float.TYPE);
            cls.getMethod("getDouble", Object.class, cls2);
            cls.getMethod("putDouble", Object.class, cls2, Double.TYPE);
            return true;
        } catch (Throwable th2) {
            c1.a(th2);
            return false;
        }
    }

    @Override // ij.b1
    public final boolean r() {
        Unsafe unsafe = this.a;
        if (unsafe != null) {
            try {
                Class<?> cls = unsafe.getClass();
                cls.getMethod("objectFieldOffset", Field.class);
                Class cls2 = Long.TYPE;
                cls.getMethod("getLong", Object.class, cls2);
                if (c1.e() != null) {
                    try {
                        Class<?> cls3 = this.a.getClass();
                        cls3.getMethod("getByte", cls2);
                        cls3.getMethod("putByte", cls2, Byte.TYPE);
                        cls3.getMethod("getInt", cls2);
                        cls3.getMethod("putInt", cls2, Integer.TYPE);
                        cls3.getMethod("getLong", cls2);
                        cls3.getMethod("putLong", cls2, cls2);
                        cls3.getMethod("copyMemory", cls2, cls2, cls2);
                        cls3.getMethod("copyMemory", Object.class, cls2, Object.class, cls2, cls2);
                        return true;
                    } catch (Throwable th2) {
                        c1.a(th2);
                        return false;
                    }
                }
            } catch (Throwable th3) {
                c1.a(th3);
            }
        }
        return false;
    }
}
