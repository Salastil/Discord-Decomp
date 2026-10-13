package zo;

import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class e0 implements WildcardType, Type {

    /* renamed from: i, reason: collision with root package name */
    @NotNull
    public static final d0 f21325i = new d0(null);

    /* renamed from: v, reason: collision with root package name */
    public static final e0 f21326v = new e0(null, null);

    /* renamed from: d, reason: collision with root package name */
    public final Type f21327d;

    /* renamed from: e, reason: collision with root package name */
    public final Type f21328e;

    public e0(Type type, Type type2) {
        this.f21327d = type;
        this.f21328e = type2;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof WildcardType)) {
            return false;
        }
        WildcardType wildcardType = (WildcardType) obj;
        return Arrays.equals(getUpperBounds(), wildcardType.getUpperBounds()) && Arrays.equals(getLowerBounds(), wildcardType.getLowerBounds());
    }

    @Override // java.lang.reflect.WildcardType
    public final Type[] getLowerBounds() {
        Type type = this.f21328e;
        return type == null ? new Type[0] : new Type[]{type};
    }

    @Override // java.lang.reflect.Type
    public final String getTypeName() {
        Type type = this.f21328e;
        if (type != null) {
            return "? super " + c0.e(type);
        }
        Type type2 = this.f21327d;
        if (type2 == null || Intrinsics.areEqual(type2, Object.class)) {
            return "?";
        }
        return "? extends " + c0.e(type2);
    }

    @Override // java.lang.reflect.WildcardType
    public final Type[] getUpperBounds() {
        Type type = this.f21327d;
        if (type == null) {
            type = Object.class;
        }
        return new Type[]{type};
    }

    public final int hashCode() {
        return Arrays.hashCode(getUpperBounds()) ^ Arrays.hashCode(getLowerBounds());
    }

    public final String toString() {
        return getTypeName();
    }
}
