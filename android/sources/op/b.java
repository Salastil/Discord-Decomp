package op;

import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final b f16148e = new b(0);

    /* renamed from: i, reason: collision with root package name */
    public static final b f16149i = new b(1);

    /* renamed from: v, reason: collision with root package name */
    public static final b f16150v = new b(2);

    /* renamed from: w, reason: collision with root package name */
    public static final b f16151w = new b(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16152d;

    public /* synthetic */ b(int i5) {
        this.f16152d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f16152d) {
            case 0:
                ParameterizedType it = (ParameterizedType) obj;
                List list = c.a;
                Intrinsics.checkNotNullParameter(it, "it");
                Type ownerType = it.getOwnerType();
                if (ownerType instanceof ParameterizedType) {
                    return (ParameterizedType) ownerType;
                }
                return null;
            case 1:
                ParameterizedType it2 = (ParameterizedType) obj;
                List list2 = c.a;
                Intrinsics.checkNotNullParameter(it2, "it");
                Type[] actualTypeArguments = it2.getActualTypeArguments();
                Intrinsics.checkNotNullExpressionValue(actualTypeArguments, "getActualTypeArguments(...)");
                return kotlin.collections.x.o(actualTypeArguments);
            case 2:
                String simpleName = ((Class) obj).getSimpleName();
                Intrinsics.checkNotNullExpressionValue(simpleName, "getSimpleName(...)");
                return Boolean.valueOf(simpleName.length() == 0);
            default:
                String simpleName2 = ((Class) obj).getSimpleName();
                if (!hq.e.f(simpleName2)) {
                    simpleName2 = null;
                }
                if (simpleName2 != null) {
                    return hq.e.e(simpleName2);
                }
                return null;
        }
    }
}
