package op;

import bs.a1;
import ip.d1;
import java.lang.annotation.Annotation;
import java.lang.reflect.AnnotatedElement;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.Collection;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class v extends r implements yp.b, yp.c {
    @Override // yp.b
    public final d a(hq.c fqName) {
        Annotation[] declaredAnnotations;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Member b10 = b();
        Intrinsics.checkNotNull(b10, "null cannot be cast to non-null type java.lang.reflect.AnnotatedElement");
        AnnotatedElement annotatedElement = (AnnotatedElement) b10;
        if (annotatedElement == null || (declaredAnnotations = annotatedElement.getDeclaredAnnotations()) == null) {
            return null;
        }
        return nf.e.i(declaredAnnotations, fqName);
    }

    public abstract Member b();

    public final hq.e c() {
        String name = b().getName();
        return name != null ? hq.e.e(name) : hq.g.a;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0132  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x012f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final ArrayList d(Type[] parameterTypes, Annotation[][] parameterAnnotations, boolean z5) {
        Method method;
        ArrayList arrayList;
        a0 hVar;
        String str;
        boolean z6;
        e4.l lVar;
        Intrinsics.checkNotNullParameter(parameterTypes, "parameterTypes");
        Intrinsics.checkNotNullParameter(parameterAnnotations, "parameterAnnotations");
        ArrayList arrayList2 = new ArrayList(parameterTypes.length);
        a aVar = a.a;
        Member member = b();
        Intrinsics.checkNotNullParameter(member, "member");
        e4.l lVar2 = a.f16147b;
        Object obj = null;
        if (lVar2 == null) {
            synchronized (aVar) {
                lVar2 = a.f16147b;
                if (lVar2 == null) {
                    Intrinsics.checkNotNullParameter(member, "member");
                    Class<?> cls = member.getClass();
                    try {
                        lVar = new e4.l(17, cls.getMethod("getParameters", null), c.d(cls).loadClass("java.lang.reflect.Parameter").getMethod("getName", null));
                    } catch (NoSuchMethodException unused) {
                        lVar = new e4.l(17, obj, obj);
                    }
                    a.f16147b = lVar;
                    lVar2 = lVar;
                }
            }
        }
        Method method2 = (Method) lVar2.f7959e;
        if (method2 == null || (method = (Method) lVar2.f7960i) == null) {
            arrayList = null;
        } else {
            Object invoke = method2.invoke(member, null);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Array<*>");
            Object[] objArr = (Object[]) invoke;
            arrayList = new ArrayList(objArr.length);
            for (Object obj2 : objArr) {
                Object invoke2 = method.invoke(obj2, null);
                Intrinsics.checkNotNull(invoke2, "null cannot be cast to non-null type kotlin.String");
                arrayList.add((String) invoke2);
            }
        }
        int size = arrayList != null ? arrayList.size() - parameterTypes.length : 0;
        int length = parameterTypes.length;
        for (int i5 = 0; i5 < length; i5++) {
            Type type = parameterTypes[i5];
            Intrinsics.checkNotNullParameter(type, "type");
            boolean z7 = type instanceof Class;
            if (z7) {
                Class cls2 = (Class) type;
                if (cls2.isPrimitive()) {
                    hVar = new y(cls2);
                    if (arrayList == null) {
                        str = (String) CollectionsKt.M(i5 + size, arrayList);
                        if (str == null) {
                            throw new IllegalStateException(("No parameter with index " + i5 + '+' + size + " (name=" + c() + " type=" + hVar + ") in " + this).toString());
                        }
                    } else {
                        str = null;
                    }
                    if (z5) {
                        Intrinsics.checkNotNullParameter(parameterTypes, "<this>");
                        z6 = true;
                        if (i5 == parameterTypes.length - 1) {
                            arrayList2.add(new c0(hVar, parameterAnnotations[i5], str, z6));
                        }
                    }
                    z6 = false;
                    arrayList2.add(new c0(hVar, parameterAnnotations[i5], str, z6));
                }
            }
            hVar = ((type instanceof GenericArrayType) || (z7 && ((Class) type).isArray())) ? new h(type) : type instanceof WildcardType ? new d0((WildcardType) type) : new p(type);
            if (arrayList == null) {
            }
            if (z5) {
            }
            z6 = false;
            arrayList2.add(new c0(hVar, parameterAnnotations[i5], str, z6));
        }
        return arrayList2;
    }

    public final a1 e() {
        int modifiers = b().getModifiers();
        return Modifier.isPublic(modifiers) ? d1.f12132d : Modifier.isPrivate(modifiers) ? ip.a1.f12120d : Modifier.isProtected(modifiers) ? Modifier.isStatic(modifiers) ? mp.c.f14572d : mp.b.f14571d : mp.a.f14570d;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof v) && Intrinsics.areEqual(b(), ((v) obj).b());
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        Annotation[] declaredAnnotations;
        Member b10 = b();
        Intrinsics.checkNotNull(b10, "null cannot be cast to non-null type java.lang.reflect.AnnotatedElement");
        AnnotatedElement annotatedElement = (AnnotatedElement) b10;
        return (annotatedElement == null || (declaredAnnotations = annotatedElement.getDeclaredAnnotations()) == null) ? m0.f13512d : nf.e.m(declaredAnnotations);
    }

    public final int hashCode() {
        return b().hashCode();
    }

    public final String toString() {
        return getClass().getName() + ": " + b();
    }
}
