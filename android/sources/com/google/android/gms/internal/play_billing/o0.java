package com.google.android.gms.internal.play_billing;

import java.lang.reflect.Field;
import java.security.PrivilegedExceptionAction;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public final class o0 extends a2 {

    /* renamed from: b, reason: collision with root package name */
    public static final Unsafe f5785b;

    /* renamed from: c, reason: collision with root package name */
    public static final long f5786c;

    /* renamed from: d, reason: collision with root package name */
    public static final long f5787d;

    /* renamed from: e, reason: collision with root package name */
    public static final long f5788e;

    /* renamed from: f, reason: collision with root package name */
    public static final long f5789f;

    /* renamed from: g, reason: collision with root package name */
    public static final long f5790g;

    static {
        Unsafe R;
        try {
            try {
                R = Unsafe.getUnsafe();
            } catch (SecurityException unused) {
                try {
                    R = (Unsafe) Class.forName("java.security.AccessController").getMethod("doPrivileged", PrivilegedExceptionAction.class).invoke(null, new t0());
                } catch (Exception unused2) {
                    R = R();
                    Unsafe unsafe = R;
                }
            }
            try {
                f5787d = R.objectFieldOffset(q0.class.getDeclaredField("i"));
                f5786c = R.objectFieldOffset(q0.class.getDeclaredField("e"));
                f5788e = R.objectFieldOffset(q0.class.getDeclaredField("d"));
                f5789f = R.objectFieldOffset(p0.class.getDeclaredField("a"));
                f5790g = R.objectFieldOffset(p0.class.getDeclaredField("b"));
                f5785b = R;
            } catch (NoSuchFieldException e9) {
                throw new RuntimeException(e9);
            }
        } catch (Exception e10) {
            throw new RuntimeException("Could not initialize intrinsics", e10);
        }
    }

    public static /* synthetic */ Unsafe R() {
        for (Field field : Unsafe.class.getDeclaredFields()) {
            field.setAccessible(true);
            Object obj = field.get(null);
            if (Unsafe.class.isInstance(obj)) {
                return (Unsafe) Unsafe.class.cast(obj);
            }
        }
        throw new NoSuchFieldError("the Unsafe");
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean A(b1 b1Var, k0 k0Var, k0 k0Var2) {
        return s0.a(f5785b, b1Var, f5786c, k0Var, k0Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean E(q0 q0Var, Object obj, Object obj2) {
        return s0.a(f5785b, q0Var, f5788e, obj, obj2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final boolean G(q0 q0Var, p0 p0Var, p0 p0Var2) {
        return s0.a(f5785b, q0Var, f5787d, p0Var, p0Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final k0 e(b1 b1Var) {
        k0 k0Var;
        k0 k0Var2 = k0.f5754d;
        do {
            k0Var = b1Var.f5810e;
            if (k0Var2 == k0Var) {
                break;
            }
        } while (!A(b1Var, k0Var, k0Var2));
        return k0Var;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final p0 o(b1 b1Var) {
        p0 p0Var;
        p0 p0Var2 = p0.f5800c;
        do {
            p0Var = b1Var.f5811i;
            if (p0Var2 == p0Var) {
                break;
            }
        } while (!G(b1Var, p0Var, p0Var2));
        return p0Var;
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void s(p0 p0Var, p0 p0Var2) {
        f5785b.putObject(p0Var, f5790g, p0Var2);
    }

    @Override // com.google.android.gms.internal.play_billing.a2
    public final void v(p0 p0Var, Thread thread) {
        f5785b.putObject(p0Var, f5789f, thread);
    }
}
