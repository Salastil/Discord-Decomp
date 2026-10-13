package cp;

import java.lang.reflect.Type;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class x0 implements Type {

    /* renamed from: d, reason: collision with root package name */
    public final Type[] f6995d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6996e;

    public x0(Type[] types) {
        Intrinsics.checkNotNullParameter(types, "types");
        this.f6995d = types;
        this.f6996e = Arrays.hashCode(types);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof x0) {
            return Arrays.equals(this.f6995d, ((x0) obj).f6995d);
        }
        return false;
    }

    @Override // java.lang.reflect.Type
    public final String getTypeName() {
        return kotlin.collections.x.A(this.f6995d, ", ", "[", "]", null, 56);
    }

    public final int hashCode() {
        return this.f6996e;
    }

    public final String toString() {
        return getTypeName();
    }
}
