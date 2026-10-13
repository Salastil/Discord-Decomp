package op;

import java.lang.reflect.Member;
import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class z extends v {
    public final Object a;

    public z(Object recordComponent) {
        Intrinsics.checkNotNullParameter(recordComponent, "recordComponent");
        this.a = recordComponent;
    }

    @Override // op.v
    public final Member b() {
        Object recordComponent = this.a;
        Intrinsics.checkNotNullParameter(recordComponent, "recordComponent");
        e4.e eVar = ki.b.a;
        Method method = null;
        if (eVar == null) {
            Class<?> cls = recordComponent.getClass();
            try {
                eVar = new e4.e(17, cls.getMethod("getType", null), cls.getMethod("getAccessor", null));
            } catch (NoSuchMethodException unused) {
                eVar = new e4.e(17, method, method);
            }
            ki.b.a = eVar;
        }
        Method method2 = (Method) eVar.f7944i;
        if (method2 != null) {
            Object invoke = method2.invoke(recordComponent, null);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type java.lang.reflect.Method");
            method = (Method) invoke;
        }
        if (method != null) {
            return method;
        }
        throw new NoSuchMethodError("Can't find `getAccessor` method");
    }

    public final yp.d f() {
        Object recordComponent = this.a;
        Intrinsics.checkNotNullParameter(recordComponent, "recordComponent");
        e4.e eVar = ki.b.a;
        Class cls = null;
        if (eVar == null) {
            Class<?> cls2 = recordComponent.getClass();
            try {
                eVar = new e4.e(17, cls2.getMethod("getType", null), cls2.getMethod("getAccessor", null));
            } catch (NoSuchMethodException unused) {
                eVar = new e4.e(17, cls, cls);
            }
            ki.b.a = eVar;
        }
        Method method = (Method) eVar.f7943e;
        if (method != null) {
            Object invoke = method.invoke(recordComponent, null);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type java.lang.Class<*>");
            cls = (Class) invoke;
        }
        if (cls != null) {
            return new p(cls);
        }
        throw new NoSuchMethodError("Can't find `getType` method");
    }
}
