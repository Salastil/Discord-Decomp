package ko;

import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.g;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;

/* loaded from: classes3.dex */
public class f {
    /* JADX WARN: Multi-variable type inference failed */
    public static Continuation a(Continuation continuation, Continuation completion, Function2 function2) {
        Intrinsics.checkNotNullParameter(function2, "<this>");
        Intrinsics.checkNotNullParameter(completion, "completion");
        Intrinsics.checkNotNullParameter(completion, "completion");
        if (function2 instanceof lo.a) {
            return ((lo.a) function2).create(continuation, completion);
        }
        CoroutineContext context = completion.getContext();
        return context == g.f13538d ? new b(completion, continuation, function2) : new c(completion, context, function2, continuation);
    }

    public static Continuation b(Continuation continuation) {
        Continuation intercepted;
        Intrinsics.checkNotNullParameter(continuation, "<this>");
        lo.c cVar = continuation instanceof lo.c ? (lo.c) continuation : null;
        return (cVar == null || (intercepted = cVar.intercepted()) == null) ? continuation : intercepted;
    }

    public static Object c(Function2 function2, Object obj, Continuation completion) {
        Object eVar;
        Intrinsics.checkNotNullParameter(function2, "<this>");
        Intrinsics.checkNotNullParameter(completion, "completion");
        Intrinsics.checkNotNullParameter(completion, "completion");
        CoroutineContext context = completion.getContext();
        if (context == g.f13538d) {
            Intrinsics.checkNotNull(completion, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
            eVar = new d(completion);
        } else {
            Intrinsics.checkNotNull(completion, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
            eVar = new e(completion, context);
        }
        return ((Function2) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function2, 2)).invoke(obj, eVar);
    }
}
