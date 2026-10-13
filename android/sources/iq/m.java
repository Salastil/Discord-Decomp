package iq;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* loaded from: classes3.dex */
public final class m {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f12232b;

    /* renamed from: c, reason: collision with root package name */
    public final a f12233c;

    /* renamed from: d, reason: collision with root package name */
    public final l f12234d;

    /* renamed from: e, reason: collision with root package name */
    public final Method f12235e;

    public m(a aVar, Object obj, a aVar2, l lVar, Class cls) {
        if (aVar == null) {
            throw new IllegalArgumentException("Null containingTypeDefaultInstance");
        }
        if (lVar.f12230e == i0.f12215x && aVar2 == null) {
            throw new IllegalArgumentException("Null messageDefaultInstance");
        }
        this.a = aVar;
        this.f12232b = obj;
        this.f12233c = aVar2;
        this.f12234d = lVar;
        if (!o.class.isAssignableFrom(cls)) {
            this.f12235e = null;
            return;
        }
        try {
            this.f12235e = cls.getMethod("valueOf", Integer.TYPE);
        } catch (NoSuchMethodException e9) {
            String name = cls.getName();
            throw new RuntimeException(a3.e.n(new StringBuilder(name.length() + 52), "Generated message class \"", name, "\" missing method \"valueOf\"."), e9);
        }
    }

    public final Object a(Object obj) {
        if (this.f12234d.f12230e.f12217d != j0.F) {
            return obj;
        }
        try {
            return this.f12235e.invoke(null, (Integer) obj);
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

    public final Object b(Object obj) {
        return this.f12234d.f12230e.f12217d == j0.F ? Integer.valueOf(((o) obj).a()) : obj;
    }
}
