package kotlin.collections;

import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class b0 {
    public static go.e a(go.e builder) {
        Intrinsics.checkNotNullParameter(builder, "builder");
        builder.i();
        builder.f9403i = true;
        return builder.f9402e > 0 ? builder : go.e.f9400w;
    }

    public static go.e b() {
        return new go.e(0, 1, null);
    }

    public static List c(Object obj) {
        List singletonList = Collections.singletonList(obj);
        Intrinsics.checkNotNullExpressionValue(singletonList, "singletonList(...)");
        return singletonList;
    }

    public static void d(int i5, Object[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        if (i5 < array.length) {
            array[i5] = null;
        }
    }
}
