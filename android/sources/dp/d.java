package dp;

import cp.u1;
import java.lang.annotation.Annotation;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;

/* loaded from: classes3.dex */
public final class d implements InvocationHandler {
    public final Class a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f7653b;

    /* renamed from: c, reason: collision with root package name */
    public final fo.u f7654c;

    /* renamed from: d, reason: collision with root package name */
    public final fo.u f7655d;

    /* renamed from: e, reason: collision with root package name */
    public final List f7656e;

    public d(Class cls, Map map, fo.u uVar, fo.u uVar2, List list) {
        this.a = cls;
        this.f7653b = map;
        this.f7654c = uVar;
        this.f7655d = uVar2;
        this.f7656e = list;
    }

    @Override // java.lang.reflect.InvocationHandler
    public final Object invoke(Object obj, Method method, Object[] objArr) {
        boolean areEqual;
        boolean z5;
        KClass u5;
        String name = method.getName();
        Class cls = this.a;
        if (name != null) {
            int hashCode = name.hashCode();
            if (hashCode != -1776922004) {
                if (hashCode != 147696667) {
                    if (hashCode == 1444986633 && name.equals("annotationType")) {
                        return cls;
                    }
                } else if (name.equals("hashCode")) {
                    return Integer.valueOf(((Number) this.f7655d.getValue()).intValue());
                }
            } else if (name.equals("toString")) {
                return (String) this.f7654c.getValue();
            }
        }
        boolean areEqual2 = Intrinsics.areEqual(name, "equals");
        Map map = this.f7653b;
        boolean z6 = false;
        if (!areEqual2 || objArr == null || objArr.length != 1) {
            if (map.containsKey(name)) {
                return map.get(name);
            }
            StringBuilder sb2 = new StringBuilder("Method is not supported: ");
            sb2.append(method);
            sb2.append(" (args: ");
            if (objArr == null) {
                objArr = new Object[0];
            }
            sb2.append(kotlin.collections.x.H(objArr));
            sb2.append(')');
            throw new u1(sb2.toString());
        }
        Object D = kotlin.collections.x.D(objArr);
        Annotation annotation = D instanceof Annotation ? (Annotation) D : null;
        if (Intrinsics.areEqual((annotation == null || (u5 = com.facebook.imagepipeline.nativecode.c.u(annotation)) == null) ? null : com.facebook.imagepipeline.nativecode.c.z(u5), cls)) {
            List<Method> list = this.f7656e;
            if (list == null || !list.isEmpty()) {
                for (Method method2 : list) {
                    Object obj2 = map.get(method2.getName());
                    Object invoke = method2.invoke(D, null);
                    if (obj2 instanceof boolean[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.BooleanArray");
                        areEqual = Arrays.equals((boolean[]) obj2, (boolean[]) invoke);
                    } else if (obj2 instanceof char[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.CharArray");
                        areEqual = Arrays.equals((char[]) obj2, (char[]) invoke);
                    } else if (obj2 instanceof byte[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.ByteArray");
                        areEqual = Arrays.equals((byte[]) obj2, (byte[]) invoke);
                    } else if (obj2 instanceof short[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.ShortArray");
                        areEqual = Arrays.equals((short[]) obj2, (short[]) invoke);
                    } else if (obj2 instanceof int[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.IntArray");
                        areEqual = Arrays.equals((int[]) obj2, (int[]) invoke);
                    } else if (obj2 instanceof float[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.FloatArray");
                        areEqual = Arrays.equals((float[]) obj2, (float[]) invoke);
                    } else if (obj2 instanceof long[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.LongArray");
                        areEqual = Arrays.equals((long[]) obj2, (long[]) invoke);
                    } else if (obj2 instanceof double[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.DoubleArray");
                        areEqual = Arrays.equals((double[]) obj2, (double[]) invoke);
                    } else if (obj2 instanceof Object[]) {
                        Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<*>");
                        areEqual = Arrays.equals((Object[]) obj2, (Object[]) invoke);
                    } else {
                        areEqual = Intrinsics.areEqual(obj2, invoke);
                    }
                    if (!areEqual) {
                        z5 = false;
                        break;
                    }
                }
            }
            z5 = true;
            if (z5) {
                z6 = true;
            }
        }
        return Boolean.valueOf(z6);
    }
}
