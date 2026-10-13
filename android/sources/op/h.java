package op;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends a0 implements yp.d {
    public final Type a;

    /* renamed from: b, reason: collision with root package name */
    public final a0 f16162b;

    /* renamed from: c, reason: collision with root package name */
    public final m0 f16163c;

    /* JADX WARN: Multi-variable type inference failed */
    public h(Type reflectType) {
        a0 hVar;
        a0 a0Var;
        Intrinsics.checkNotNullParameter(reflectType, "reflectType");
        this.a = reflectType;
        if (!(reflectType instanceof GenericArrayType)) {
            if (reflectType instanceof Class) {
                Class cls = (Class) reflectType;
                if (cls.isArray()) {
                    Class<?> type = cls.getComponentType();
                    Intrinsics.checkNotNullExpressionValue(type, "getComponentType(...)");
                    Intrinsics.checkNotNullParameter(type, "type");
                    hVar = (type == 0 || !type.isPrimitive()) ? ((type instanceof GenericArrayType) || (type != 0 && type.isArray())) ? new h(type) : type instanceof WildcardType ? new d0((WildcardType) type) : new p(type) : new y(type);
                }
            }
            throw new IllegalArgumentException("Not an array type (" + reflectType.getClass() + "): " + reflectType);
        }
        Type type2 = ((GenericArrayType) reflectType).getGenericComponentType();
        Intrinsics.checkNotNullExpressionValue(type2, "getGenericComponentType(...)");
        Intrinsics.checkNotNullParameter(type2, "type");
        boolean z5 = type2 instanceof Class;
        if (z5) {
            Class cls2 = (Class) type2;
            if (cls2.isPrimitive()) {
                a0Var = new y(cls2);
                this.f16162b = a0Var;
                this.f16163c = m0.f13512d;
            }
        }
        hVar = ((type2 instanceof GenericArrayType) || (z5 && ((Class) type2).isArray())) ? new h(type2) : type2 instanceof WildcardType ? new d0((WildcardType) type2) : new p(type2);
        a0Var = hVar;
        this.f16162b = a0Var;
        this.f16163c = m0.f13512d;
    }

    @Override // op.a0
    public final Type b() {
        return this.a;
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        return this.f16163c;
    }
}
