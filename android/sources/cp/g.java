package cp;

import java.lang.reflect.Constructor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g extends ys.l {

    /* renamed from: b, reason: collision with root package name */
    public final Constructor f6902b;

    public g(Constructor constructor) {
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        this.f6902b = constructor;
    }

    @Override // ys.l
    public final String d() {
        Class<?>[] parameterTypes = this.f6902b.getParameterTypes();
        Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
        return kotlin.collections.x.A(parameterTypes, "", "<init>(", ")V", b.E, 24);
    }
}
