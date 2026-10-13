package cp;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.List;
import kotlin.Lazy;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q1 implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final r1 f6935d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6936e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f6937i;

    public q1(r1 r1Var, int i5, Lazy lazy) {
        this.f6935d = r1Var;
        this.f6936e = i5;
        this.f6937i = lazy;
    }

    /* JADX WARN: Type inference failed for: r0v2, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        r1 r1Var = this.f6935d;
        Type javaType = r1Var.getJavaType();
        if (javaType instanceof Class) {
            Class cls = (Class) javaType;
            Class componentType = cls.isArray() ? cls.getComponentType() : Object.class;
            Intrinsics.checkNotNull(componentType);
            return componentType;
        }
        boolean z5 = javaType instanceof GenericArrayType;
        int i5 = this.f6936e;
        if (z5) {
            if (i5 == 0) {
                Type genericComponentType = ((GenericArrayType) javaType).getGenericComponentType();
                Intrinsics.checkNotNull(genericComponentType);
                return genericComponentType;
            }
            throw new u1("Array type has been queried for a non-0th argument: " + r1Var);
        }
        if (!(javaType instanceof ParameterizedType)) {
            throw new u1("Non-generic type has been queried for arguments: " + r1Var);
        }
        Type type = (Type) ((List) this.f6937i.getValue()).get(i5);
        if (!(type instanceof WildcardType)) {
            return type;
        }
        WildcardType wildcardType = (WildcardType) type;
        Type[] lowerBounds = wildcardType.getLowerBounds();
        Intrinsics.checkNotNullExpressionValue(lowerBounds, "getLowerBounds(...)");
        Type type2 = (Type) kotlin.collections.x.t(lowerBounds);
        if (type2 == null) {
            Type[] upperBounds = wildcardType.getUpperBounds();
            Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
            type2 = (Type) kotlin.collections.x.s(upperBounds);
        }
        Intrinsics.checkNotNull(type2);
        return type2;
    }
}
