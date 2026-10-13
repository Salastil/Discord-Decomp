package ij;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public abstract class r extends b {

    /* renamed from: d, reason: collision with root package name */
    public static final ConcurrentHashMap f10918d = new ConcurrentHashMap();

    /* renamed from: b, reason: collision with root package name */
    public int f10919b;

    /* renamed from: c, reason: collision with root package name */
    public t0 f10920c;

    public r() {
        this.a = 0;
        this.f10919b = -1;
        this.f10920c = t0.f10924e;
    }

    public static r b(Class cls) {
        ConcurrentHashMap concurrentHashMap = f10918d;
        r rVar = (r) concurrentHashMap.get(cls);
        if (rVar == null) {
            try {
                Class.forName(cls.getName(), true, cls.getClassLoader());
                rVar = (r) concurrentHashMap.get(cls);
            } catch (ClassNotFoundException e9) {
                throw new IllegalStateException("Class initialization cannot fail.", e9);
            }
        }
        if (rVar != null) {
            return rVar;
        }
        r rVar2 = (r) ((r) c1.b(cls)).a(6);
        if (rVar2 == null) {
            throw new IllegalStateException();
        }
        concurrentHashMap.put(cls, rVar2);
        return rVar2;
    }

    public static Object c(Method method, r rVar, Object... objArr) {
        try {
            return method.invoke(rVar, objArr);
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

    public static final boolean d(r rVar, boolean z5) {
        byte byteValue = ((Byte) rVar.a(1)).byteValue();
        if (byteValue == 1) {
            return true;
        }
        if (byteValue == 0) {
            return false;
        }
        n0 n0Var = n0.f10907c;
        n0Var.getClass();
        boolean b10 = n0Var.a(rVar.getClass()).b(rVar);
        if (z5) {
            rVar.a(2);
        }
        return b10;
    }

    public static r g(r rVar, j jVar, l lVar) {
        r f2 = rVar.f();
        try {
            n0 n0Var = n0.f10907c;
            n0Var.getClass();
            q0 a = n0Var.a(f2.getClass());
            androidx.datastore.preferences.protobuf.h hVar = (androidx.datastore.preferences.protobuf.h) jVar.f10877b;
            if (hVar == null) {
                hVar = new androidx.datastore.preferences.protobuf.h(jVar);
            }
            a.f(f2, hVar, lVar);
            a.a(f2);
            return f2;
        } catch (s0 e9) {
            throw new v(e9.getMessage());
        } catch (v e10) {
            if (e10.f10928d) {
                throw new v(e10.getMessage(), e10);
            }
            throw e10;
        } catch (IOException e11) {
            if (e11.getCause() instanceof v) {
                throw ((v) e11.getCause());
            }
            throw new v(e11.getMessage(), e11);
        } catch (RuntimeException e12) {
            if (e12.getCause() instanceof v) {
                throw ((v) e12.getCause());
            }
            throw e12;
        }
    }

    public static void h(Class cls, r rVar) {
        rVar.f10919b &= Integer.MAX_VALUE;
        f10918d.put(cls, rVar);
    }

    public abstract Object a(int i5);

    public final boolean e() {
        return (this.f10919b & Integer.MIN_VALUE) != 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        n0 n0Var = n0.f10907c;
        n0Var.getClass();
        return n0Var.a(getClass()).e(this, (r) obj);
    }

    public final r f() {
        return (r) a(4);
    }

    public final int hashCode() {
        if (e()) {
            n0 n0Var = n0.f10907c;
            n0Var.getClass();
            return n0Var.a(getClass()).g(this);
        }
        if (this.a == 0) {
            n0 n0Var2 = n0.f10907c;
            n0Var2.getClass();
            this.a = n0Var2.a(getClass()).g(this);
        }
        return this.a;
    }

    public final String toString() {
        String obj = super.toString();
        char[] cArr = i0.a;
        StringBuilder sb2 = new StringBuilder();
        sb2.append("# ");
        sb2.append(obj);
        i0.c(this, sb2, 0);
        return sb2.toString();
    }
}
