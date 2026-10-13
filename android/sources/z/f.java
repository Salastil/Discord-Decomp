package z;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public interface f {
    boolean all(Function1 function1);

    Object foldIn(Object obj, Function2 function2);

    default f then(f other) {
        Intrinsics.checkNotNullParameter(other, "other");
        return other == c.a ? this : new b(this, other);
    }
}
