package zo;

import java.lang.reflect.GenericArrayType;
import java.lang.reflect.Type;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a implements GenericArrayType, Type {

    /* renamed from: d, reason: collision with root package name */
    public final Type f21323d;

    public a(Type elementType) {
        Intrinsics.checkNotNullParameter(elementType, "elementType");
        this.f21323d = elementType;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof GenericArrayType) {
            return Intrinsics.areEqual(this.f21323d, ((GenericArrayType) obj).getGenericComponentType());
        }
        return false;
    }

    @Override // java.lang.reflect.GenericArrayType
    public final Type getGenericComponentType() {
        return this.f21323d;
    }

    @Override // java.lang.reflect.Type
    public final String getTypeName() {
        return c0.e(this.f21323d) + "[]";
    }

    public final int hashCode() {
        return this.f21323d.hashCode();
    }

    public final String toString() {
        return getTypeName();
    }
}
