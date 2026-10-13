package zo;

import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class y implements ParameterizedType, Type {

    /* renamed from: d, reason: collision with root package name */
    public final Class f21338d;

    /* renamed from: e, reason: collision with root package name */
    public final Type f21339e;

    /* renamed from: i, reason: collision with root package name */
    public final Type[] f21340i;

    public y(Class rawType, Type type, ArrayList typeArguments) {
        Intrinsics.checkNotNullParameter(rawType, "rawType");
        Intrinsics.checkNotNullParameter(typeArguments, "typeArguments");
        this.f21338d = rawType;
        this.f21339e = type;
        this.f21340i = (Type[]) typeArguments.toArray(new Type[0]);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof ParameterizedType)) {
            return false;
        }
        ParameterizedType parameterizedType = (ParameterizedType) obj;
        return Intrinsics.areEqual(this.f21338d, parameterizedType.getRawType()) && Intrinsics.areEqual(this.f21339e, parameterizedType.getOwnerType()) && Arrays.equals(this.f21340i, parameterizedType.getActualTypeArguments());
    }

    @Override // java.lang.reflect.ParameterizedType
    public final Type[] getActualTypeArguments() {
        return this.f21340i;
    }

    @Override // java.lang.reflect.ParameterizedType
    public final Type getOwnerType() {
        return this.f21339e;
    }

    @Override // java.lang.reflect.ParameterizedType
    public final Type getRawType() {
        return this.f21338d;
    }

    @Override // java.lang.reflect.Type
    public final String getTypeName() {
        StringBuilder sb2 = new StringBuilder();
        Class cls = this.f21338d;
        Type type = this.f21339e;
        if (type != null) {
            sb2.append(c0.e(type));
            sb2.append("$");
            sb2.append(cls.getSimpleName());
        } else {
            sb2.append(c0.e(cls));
        }
        Type[] typeArr = this.f21340i;
        if (typeArr.length != 0) {
            kotlin.collections.x.x(typeArr, sb2, ", ", "<", ">", x.f21337d);
        }
        return sb2.toString();
    }

    public final int hashCode() {
        int hashCode = this.f21338d.hashCode();
        Type type = this.f21339e;
        return (hashCode ^ (type != null ? type.hashCode() : 0)) ^ Arrays.hashCode(this.f21340i);
    }

    public final String toString() {
        return getTypeName();
    }
}
