package op;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.Collection;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d0 extends a0 implements yp.d {
    public final WildcardType a;

    /* renamed from: b, reason: collision with root package name */
    public final m0 f16159b;

    public d0(WildcardType reflectType) {
        Intrinsics.checkNotNullParameter(reflectType, "reflectType");
        this.a = reflectType;
        this.f16159b = m0.f13512d;
    }

    @Override // op.a0
    public final Type b() {
        return this.a;
    }

    public final a0 c() {
        WildcardType wildcardType = this.a;
        Type[] upperBounds = wildcardType.getUpperBounds();
        Type[] lowerBounds = wildcardType.getLowerBounds();
        if (upperBounds.length > 1 || lowerBounds.length > 1) {
            throw new UnsupportedOperationException("Wildcard types with many bounds are not yet supported: " + wildcardType);
        }
        if (lowerBounds.length == 1) {
            Intrinsics.checkNotNull(lowerBounds);
            Object D = kotlin.collections.x.D(lowerBounds);
            Intrinsics.checkNotNullExpressionValue(D, "single(...)");
            Type type = (Type) D;
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
        if (upperBounds.length != 1) {
            return null;
        }
        Intrinsics.checkNotNull(upperBounds);
        Type type2 = (Type) kotlin.collections.x.D(upperBounds);
        if (Intrinsics.areEqual(type2, Object.class)) {
            return null;
        }
        Intrinsics.checkNotNull(type2);
        Intrinsics.checkNotNullParameter(type2, "type");
        boolean z6 = type2 instanceof Class;
        if (z6) {
            Class cls2 = (Class) type2;
            if (cls2.isPrimitive()) {
                return new y(cls2);
            }
        }
        return ((type2 instanceof GenericArrayType) || (z6 && ((Class) type2).isArray())) ? new h(type2) : type2 instanceof WildcardType ? new d0((WildcardType) type2) : new p(type2);
    }

    @Override // yp.b
    public final Collection getAnnotations() {
        return this.f16159b;
    }
}
