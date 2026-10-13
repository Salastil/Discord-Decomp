package com.google.android.gms.internal.play_billing;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public abstract class e2 extends p1 {
    private static final Map zzb = new ConcurrentHashMap();
    protected g3 zzc;
    private int zzd;

    public e2() {
        this.zza = 0;
        this.zzd = -1;
        this.zzc = g3.f5740f;
    }

    public static void f(Class cls, e2 e2Var) {
        e2Var.e();
        zzb.put(cls, e2Var);
    }

    public static final boolean i(e2 e2Var, boolean z5) {
        byte byteValue = ((Byte) e2Var.j(1)).byteValue();
        if (byteValue == 1) {
            return true;
        }
        if (byteValue == 0) {
            return false;
        }
        boolean d6 = v2.f5858b.a(e2Var.getClass()).d(e2Var);
        if (z5) {
            e2Var.j(2);
        }
        return d6;
    }

    public static e2 m(Class cls) {
        Map map = zzb;
        e2 e2Var = (e2) map.get(cls);
        if (e2Var == null) {
            try {
                Class.forName(cls.getName(), true, cls.getClassLoader());
                e2Var = (e2) map.get(cls);
            } catch (ClassNotFoundException e9) {
                throw new IllegalStateException("Class initialization cannot fail.", e9);
            }
        }
        if (e2Var != null) {
            return e2Var;
        }
        e2 e2Var2 = (e2) ((e2) l3.c(cls)).j(6);
        if (e2Var2 == null) {
            throw new IllegalStateException();
        }
        map.put(cls, e2Var2);
        return e2Var2;
    }

    public static e2 o(e2 e2Var, byte[] bArr) {
        int length = bArr.length;
        z1 z1Var = z1.a;
        int i5 = r1.a;
        z1 z1Var2 = z1.a;
        if (length != 0) {
            e2 n6 = e2Var.n();
            try {
                y2 a = v2.f5858b.a(n6.getClass());
                s1 s1Var = new s1();
                z1Var2.getClass();
                a.i(n6, bArr, 0, length, s1Var);
                a.a(n6);
                e2Var = n6;
            } catch (f3 e9) {
                throw new n2(e9.getMessage());
            } catch (n2 e10) {
                throw e10;
            } catch (IOException e11) {
                if (e11.getCause() instanceof n2) {
                    throw ((n2) e11.getCause());
                }
                throw new n2(e11.getMessage(), e11);
            } catch (IndexOutOfBoundsException unused) {
                throw new n2("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either that the input has been truncated or that an embedded message misreported its own length.");
            }
        }
        if (e2Var == null || i(e2Var, true)) {
            return e2Var;
        }
        throw new n2(new f3().getMessage());
    }

    public static Object p(Method method, e2 e2Var, Object... objArr) {
        try {
            return method.invoke(e2Var, objArr);
        } catch (IllegalAccessException e9) {
            throw new RuntimeException("Couldn't use Java reflection to implement protocol message reflection.", e9);
        } catch (InvocationTargetException e10) {
            Throwable cause = e10.getCause();
            if (cause instanceof RuntimeException) {
                throw ((RuntimeException) cause);
            }
            if (cause instanceof Error) {
                throw ((Error) cause);
            }
            throw new RuntimeException("Unexpected exception thrown by generated accessor method.", cause);
        }
    }

    @Override // com.google.android.gms.internal.play_billing.p1
    public final void a(w1 w1Var) {
        y2 a = v2.f5858b.a(getClass());
        x1 x1Var = (x1) w1Var.f5868v;
        if (x1Var == null) {
            x1Var = new x1(w1Var);
        }
        a.e(this, x1Var);
    }

    @Override // com.google.android.gms.internal.play_billing.p1
    public final int c(y2 y2Var) {
        if (h()) {
            int b10 = y2Var.b(this);
            if (b10 >= 0) {
                return b10;
            }
            throw new IllegalStateException(k0.d.i(b10, "serialized size must be non-negative, was "));
        }
        int i5 = this.zzd & Integer.MAX_VALUE;
        if (i5 != Integer.MAX_VALUE) {
            return i5;
        }
        int b11 = y2Var.b(this);
        if (b11 < 0) {
            throw new IllegalStateException(k0.d.i(b11, "serialized size must be non-negative, was "));
        }
        this.zzd = (this.zzd & Integer.MIN_VALUE) | b11;
        return b11;
    }

    @Override // com.google.android.gms.internal.play_billing.p1
    public final int d() {
        if (h()) {
            int b10 = v2.f5858b.a(getClass()).b(this);
            if (b10 >= 0) {
                return b10;
            }
            throw new IllegalStateException(k0.d.i(b10, "serialized size must be non-negative, was "));
        }
        int i5 = this.zzd & Integer.MAX_VALUE;
        if (i5 != Integer.MAX_VALUE) {
            return i5;
        }
        int b11 = v2.f5858b.a(getClass()).b(this);
        if (b11 < 0) {
            throw new IllegalStateException(k0.d.i(b11, "serialized size must be non-negative, was "));
        }
        this.zzd = (this.zzd & Integer.MIN_VALUE) | b11;
        return b11;
    }

    public final void e() {
        this.zzd &= Integer.MAX_VALUE;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        return v2.f5858b.a(getClass()).c(this, (e2) obj);
    }

    public final void g() {
        this.zzd = (this.zzd & Integer.MIN_VALUE) | Integer.MAX_VALUE;
    }

    public final boolean h() {
        return (this.zzd & Integer.MIN_VALUE) != 0;
    }

    public final int hashCode() {
        if (h()) {
            return v2.f5858b.a(getClass()).h(this);
        }
        int i5 = this.zza;
        if (i5 != 0) {
            return i5;
        }
        int h6 = v2.f5858b.a(getClass()).h(this);
        this.zza = h6;
        return h6;
    }

    public abstract Object j(int i5);

    public final d2 k() {
        return (d2) j(5);
    }

    public final d2 l() {
        d2 d2Var = (d2) j(5);
        e2 e2Var = d2Var.f5727d;
        if (!e2Var.getClass().isInstance(this)) {
            throw new IllegalArgumentException("mergeFrom(MessageLite) can only merge messages of the same type.");
        }
        if (!e2Var.equals(this)) {
            if (!d2Var.f5728e.h()) {
                d2Var.d();
            }
            e2 e2Var2 = d2Var.f5728e;
            v2.f5858b.a(e2Var2.getClass()).f(e2Var2, this);
        }
        return d2Var;
    }

    public final e2 n() {
        return (e2) j(4);
    }

    public final void q() {
        v2.f5858b.a(getClass()).a(this);
        e();
    }

    public final String toString() {
        String obj = super.toString();
        char[] cArr = s2.a;
        StringBuilder sb2 = new StringBuilder();
        sb2.append("# ");
        sb2.append(obj);
        s2.c(this, sb2, 0);
        return sb2.toString();
    }
}
