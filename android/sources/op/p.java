package op;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.TypeVariable;
import java.lang.reflect.WildcardType;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p extends a0 implements yp.d {
    public final Type a;

    /* renamed from: b, reason: collision with root package name */
    public final r f16170b;

    public p(Type reflectType) {
        r nVar;
        Intrinsics.checkNotNullParameter(reflectType, "reflectType");
        this.a = reflectType;
        if (reflectType instanceof Class) {
            nVar = new n((Class) reflectType);
        } else if (reflectType instanceof TypeVariable) {
            nVar = new b0((TypeVariable) reflectType);
        } else {
            if (!(reflectType instanceof ParameterizedType)) {
                throw new IllegalStateException("Not a classifier type (" + reflectType.getClass() + "): " + reflectType);
            }
            Type rawType = ((ParameterizedType) reflectType).getRawType();
            Intrinsics.checkNotNull(rawType, "null cannot be cast to non-null type java.lang.Class<*>");
            nVar = new n((Class) rawType);
        }
        this.f16170b = nVar;
    }

    @Override // op.a0, yp.b
    public final d a(hq.c fqName) {
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return null;
    }

    @Override // op.a0
    public final Type b() {
        return this.a;
    }

    public final ArrayList c() {
        a0 hVar;
        List<Type> c6 = c.c(this.a);
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(c6, 10));
        for (Type type : c6) {
            Intrinsics.checkNotNullParameter(type, "type");
            boolean z5 = type instanceof Class;
            if (z5) {
                Class cls = (Class) type;
                if (cls.isPrimitive()) {
                    hVar = new y(cls);
                    arrayList.add(hVar);
                }
            }
            hVar = ((type instanceof GenericArrayType) || (z5 && ((Class) type).isArray())) ? new h(type) : type instanceof WildcardType ? new d0((WildcardType) type) : new p(type);
            arrayList.add(hVar);
        }
        return arrayList;
    }

    public final boolean d() {
        Type type = this.a;
        if (type instanceof Class) {
            TypeVariable[] typeParameters = ((Class) type).getTypeParameters();
            Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
            if (!(typeParameters.length == 0)) {
                return true;
            }
        }
        return false;
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        return m0.f13512d;
    }
}
