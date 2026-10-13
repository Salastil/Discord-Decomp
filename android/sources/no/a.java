package no;

import java.lang.reflect.Method;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class a {

    @NotNull
    public static final a a = new a();

    /* renamed from: b, reason: collision with root package name */
    public static final Method f15581b;

    static {
        Method method;
        Method[] methods = Throwable.class.getMethods();
        Intrinsics.checkNotNull(methods);
        int length = methods.length;
        int i5 = 0;
        while (true) {
            method = null;
            if (i5 >= length) {
                break;
            }
            Method method2 = methods[i5];
            if (Intrinsics.areEqual(method2.getName(), "addSuppressed")) {
                Class<?>[] parameterTypes = method2.getParameterTypes();
                Intrinsics.checkNotNullExpressionValue(parameterTypes, "getParameterTypes(...)");
                Intrinsics.checkNotNullParameter(parameterTypes, "<this>");
                if (Intrinsics.areEqual(parameterTypes.length == 1 ? parameterTypes[0] : null, Throwable.class)) {
                    method = method2;
                    break;
                }
            }
            i5++;
        }
        f15581b = method;
        int length2 = methods.length;
        for (int i6 = 0; i6 < length2 && !Intrinsics.areEqual(methods[i6].getName(), "getSuppressed"); i6++) {
        }
    }
}
