package androidx.datastore.preferences.protobuf;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes.dex */
public abstract class t extends a {
    private static Map<Object, t> defaultInstanceMap = new ConcurrentHashMap();
    protected int memoizedSerializedSize;
    protected e1 unknownFields;

    public t() {
        this.memoizedHashCode = 0;
        this.unknownFields = e1.f1736f;
        this.memoizedSerializedSize = -1;
    }

    public static t e(Class cls) {
        t tVar = defaultInstanceMap.get(cls);
        if (tVar == null) {
            try {
                Class.forName(cls.getName(), true, cls.getClassLoader());
                tVar = defaultInstanceMap.get(cls);
            } catch (ClassNotFoundException e9) {
                throw new IllegalStateException("Class initialization cannot fail.", e9);
            }
        }
        if (tVar != null) {
            return tVar;
        }
        t tVar2 = (t) ((t) n1.a(cls)).d(6);
        if (tVar2 == null) {
            throw new IllegalStateException();
        }
        defaultInstanceMap.put(cls, tVar2);
        return tVar2;
    }

    public static Object f(Method method, t tVar, Object... objArr) {
        try {
            return method.invoke(tVar, objArr);
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

    public static void h(Class cls, t tVar) {
        defaultInstanceMap.put(cls, tVar);
    }

    @Override // androidx.datastore.preferences.protobuf.a
    public final int a() {
        if (this.memoizedSerializedSize == -1) {
            t0 t0Var = t0.f1812c;
            t0Var.getClass();
            this.memoizedSerializedSize = t0Var.a(getClass()).e(this);
        }
        return this.memoizedSerializedSize;
    }

    @Override // androidx.datastore.preferences.protobuf.a
    public final void c(j jVar) {
        t0 t0Var = t0.f1812c;
        t0Var.getClass();
        w0 a = t0Var.a(getClass());
        f0 f0Var = jVar.f1767c;
        if (f0Var == null) {
            f0Var = new f0(jVar);
        }
        a.d(this, f0Var);
    }

    public abstract Object d(int i5);

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!((t) d(6)).getClass().isInstance(obj)) {
            return false;
        }
        t0 t0Var = t0.f1812c;
        t0Var.getClass();
        return t0Var.a(getClass()).h(this, (t) obj);
    }

    public final boolean g() {
        byte byteValue = ((Byte) d(1)).byteValue();
        if (byteValue == 1) {
            return true;
        }
        if (byteValue == 0) {
            return false;
        }
        t0 t0Var = t0.f1812c;
        t0Var.getClass();
        boolean b10 = t0Var.a(getClass()).b(this);
        d(2);
        return b10;
    }

    public final int hashCode() {
        int i5 = this.memoizedHashCode;
        if (i5 != 0) {
            return i5;
        }
        t0 t0Var = t0.f1812c;
        t0Var.getClass();
        int g6 = t0Var.a(getClass()).g(this);
        this.memoizedHashCode = g6;
        return g6;
    }

    public final String toString() {
        String obj = super.toString();
        StringBuilder sb2 = new StringBuilder();
        sb2.append("# ");
        sb2.append(obj);
        m0.k(this, sb2, 0);
        return sb2.toString();
    }
}
