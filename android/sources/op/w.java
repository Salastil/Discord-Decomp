package op;

import java.lang.annotation.Annotation;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w extends v implements yp.e {
    public final Method a;

    public w(Method member) {
        Intrinsics.checkNotNullParameter(member, "member");
        this.a = member;
    }

    @Override // op.v
    public final Member b() {
        return this.a;
    }

    public final a0 f() {
        Type type = this.a.getGenericReturnType();
        Intrinsics.checkNotNullExpressionValue(type, "getGenericReturnType(...)");
        Intrinsics.checkNotNullParameter(type, "type");
        boolean z5 = type instanceof Class;
        if (z5) {
            Class cls = (Class) type;
            if (cls.isPrimitive()) {
                return new y(cls);
            }
        }
        return ((type instanceof GenericArrayType) || (z5 && ((Class) type).isArray())) ? new h(type) : type instanceof WildcardType ? new d0((WildcardType) type) : new p(type);
    }

    public final List g() {
        Method method = this.a;
        Type[] genericParameterTypes = method.getGenericParameterTypes();
        Intrinsics.checkNotNullExpressionValue(genericParameterTypes, "getGenericParameterTypes(...)");
        Annotation[][] parameterAnnotations = method.getParameterAnnotations();
        Intrinsics.checkNotNullExpressionValue(parameterAnnotations, "getParameterAnnotations(...)");
        return d(genericParameterTypes, parameterAnnotations, method.isVarArgs());
    }

    @Override // yp.e
    public final ArrayList getTypeParameters() {
        TypeVariable<Method>[] typeParameters = this.a.getTypeParameters();
        Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
        ArrayList arrayList = new ArrayList(typeParameters.length);
        for (TypeVariable<Method> typeVariable : typeParameters) {
            arrayList.add(new b0(typeVariable));
        }
        return arrayList;
    }
}
