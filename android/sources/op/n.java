package op;

import java.lang.annotation.Annotation;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.TypeVariable;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class n extends r implements yp.b, yp.e {
    public final Class a;

    public n(Class klass) {
        Intrinsics.checkNotNullParameter(klass, "klass");
        this.a = klass;
    }

    @Override // yp.b
    public final d a(hq.c fqName) {
        Annotation[] declaredAnnotations;
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Class cls = this.a;
        if (cls == null || (declaredAnnotations = cls.getDeclaredAnnotations()) == null) {
            return null;
        }
        return nf.e.i(declaredAnnotations, fqName);
    }

    public final List b() {
        Field[] declaredFields = this.a.getDeclaredFields();
        Intrinsics.checkNotNullExpressionValue(declaredFields, "getDeclaredFields(...)");
        return kr.s.q(kr.s.n(kr.s.j(kotlin.collections.x.o(declaredFields), k.f16166d), l.f16167d));
    }

    public final hq.c c() {
        return c.a(this.a).a();
    }

    public final List d() {
        Method[] declaredMethods = this.a.getDeclaredMethods();
        Intrinsics.checkNotNullExpressionValue(declaredMethods, "getDeclaredMethods(...)");
        return kr.s.q(kr.s.n(kr.s.i(kotlin.collections.x.o(declaredMethods), new aq.a(12, this)), m.f16168d));
    }

    public final hq.e e() {
        Class cls = this.a;
        if (!cls.isAnonymousClass()) {
            hq.e e9 = hq.e.e(cls.getSimpleName());
            Intrinsics.checkNotNull(e9);
            return e9;
        }
        String missingDelimiterValue = cls.getName();
        Intrinsics.checkNotNullExpressionValue(missingDelimiterValue, "getName(...)");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "<this>");
        Intrinsics.checkNotNullParameter(".", "delimiter");
        Intrinsics.checkNotNullParameter(missingDelimiterValue, "missingDelimiterValue");
        int M = StringsKt.M(0, 6, missingDelimiterValue, ".");
        if (M != -1) {
            missingDelimiterValue = missingDelimiterValue.substring(1 + M, missingDelimiterValue.length());
            Intrinsics.checkNotNullExpressionValue(missingDelimiterValue, "substring(...)");
        }
        hq.e e10 = hq.e.e(missingDelimiterValue);
        Intrinsics.checkNotNull(e10);
        return e10;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof n) {
            return Intrinsics.areEqual(this.a, ((n) obj).a);
        }
        return false;
    }

    public final ArrayList f() {
        Class clazz = this.a;
        Intrinsics.checkNotNullParameter(clazz, "clazz");
        e4.i iVar = ks.n.a;
        if (iVar == null) {
            try {
                iVar = new e4.i(Class.class.getMethod("isSealed", null), Class.class.getMethod("getPermittedSubclasses", null), Class.class.getMethod("isRecord", null), Class.class.getMethod("getRecordComponents", null));
            } catch (NoSuchMethodException unused) {
                iVar = new e4.i(r2, r2, r2, r2);
            }
            ks.n.a = iVar;
        }
        Method method = (Method) iVar.f7955v;
        r2 = method != null ? (Object[]) method.invoke(clazz, null) : null;
        if (r2 == null) {
            r2 = new Object[0];
        }
        ArrayList arrayList = new ArrayList(r2.length);
        for (Object obj : r2) {
            arrayList.add(new z(obj));
        }
        return arrayList;
    }

    public final boolean g() {
        Class clazz = this.a;
        Intrinsics.checkNotNullParameter(clazz, "clazz");
        e4.i iVar = ks.n.a;
        Boolean bool = null;
        if (iVar == null) {
            try {
                iVar = new e4.i(Class.class.getMethod("isSealed", null), Class.class.getMethod("getPermittedSubclasses", null), Class.class.getMethod("isRecord", null), Class.class.getMethod("getRecordComponents", null));
            } catch (NoSuchMethodException unused) {
                iVar = new e4.i(bool, bool, bool, bool);
            }
            ks.n.a = iVar;
        }
        Method method = (Method) iVar.f7954i;
        if (method != null) {
            Object invoke = method.invoke(clazz, null);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Boolean");
            bool = (Boolean) invoke;
        }
        if (bool != null) {
            return bool.booleanValue();
        }
        return false;
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        Annotation[] declaredAnnotations;
        Class cls = this.a;
        return (cls == null || (declaredAnnotations = cls.getDeclaredAnnotations()) == null) ? m0.f13512d : nf.e.m(declaredAnnotations);
    }

    @Override // yp.e
    public final ArrayList getTypeParameters() {
        TypeVariable[] typeParameters = this.a.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
        ArrayList arrayList = new ArrayList(typeParameters.length);
        for (TypeVariable typeVariable : typeParameters) {
            arrayList.add(new b0(typeVariable));
        }
        return arrayList;
    }

    public final boolean h() {
        Class clazz = this.a;
        Intrinsics.checkNotNullParameter(clazz, "clazz");
        e4.i iVar = ks.n.a;
        Boolean bool = null;
        if (iVar == null) {
            try {
                iVar = new e4.i(Class.class.getMethod("isSealed", null), Class.class.getMethod("getPermittedSubclasses", null), Class.class.getMethod("isRecord", null), Class.class.getMethod("getRecordComponents", null));
            } catch (NoSuchMethodException unused) {
                iVar = new e4.i(bool, bool, bool, bool);
            }
            ks.n.a = iVar;
        }
        Method method = (Method) iVar.f7952d;
        if (method != null) {
            Object invoke = method.invoke(clazz, null);
            Intrinsics.checkNotNull(invoke, "null cannot be cast to non-null type kotlin.Boolean");
            bool = (Boolean) invoke;
        }
        if (bool != null) {
            return bool.booleanValue();
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        a3.e.v(n.class, sb2, ": ");
        sb2.append(this.a);
        return sb2.toString();
    }
}
