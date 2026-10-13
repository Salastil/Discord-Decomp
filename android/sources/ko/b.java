package ko;

import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;

/* loaded from: classes3.dex */
public final class b extends lo.f {

    /* renamed from: d, reason: collision with root package name */
    public int f13468d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f13469e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Continuation f13470i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(Continuation continuation, Continuation continuation2, Function2 function2) {
        super(continuation);
        this.f13469e = function2;
        this.f13470i = continuation2;
        Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Any?>");
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f13468d;
        if (i5 != 0) {
            if (i5 != 1) {
                throw new IllegalStateException("This coroutine had already completed");
            }
            this.f13468d = 2;
            ki.b.R(obj);
            return obj;
        }
        this.f13468d = 1;
        ki.b.R(obj);
        Function2 function2 = this.f13469e;
        Intrinsics.checkNotNull(function2, "null cannot be cast to non-null type kotlin.Function2<R of kotlin.coroutines.intrinsics.IntrinsicsKt__IntrinsicsJvmKt.createCoroutineUnintercepted, kotlin.coroutines.Continuation<T of kotlin.coroutines.intrinsics.IntrinsicsKt__IntrinsicsJvmKt.createCoroutineUnintercepted>, kotlin.Any?>");
        return ((Function2) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function2, 2)).invoke(this.f13470i, this);
    }
}
