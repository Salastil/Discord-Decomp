package rr;

import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;

/* loaded from: classes3.dex */
public abstract class x {
    public static final Function3 a;

    static {
        w wVar = w.f17626d;
        Intrinsics.checkNotNull(wVar, "null cannot be cast to non-null type kotlin.Function3<kotlinx.coroutines.flow.FlowCollector<kotlin.Any?>, kotlin.Any?, kotlin.coroutines.Continuation<kotlin.Unit>, kotlin.Any?>");
        a = (Function3) TypeIntrinsics.beforeCheckcastToFunctionOfArity(wVar, 3);
    }
}
