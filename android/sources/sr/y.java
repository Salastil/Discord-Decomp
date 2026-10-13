package sr;

import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import nr.n1;

/* loaded from: classes3.dex */
public abstract class y {
    public static final a5.h a = new a5.h("NO_THREAD_ELEMENTS");

    /* renamed from: b, reason: collision with root package name */
    public static final com.discord.c f18129b = new com.discord.c(29);

    /* renamed from: c, reason: collision with root package name */
    public static final x f18130c = new x(0);

    /* renamed from: d, reason: collision with root package name */
    public static final x f18131d = new x(1);

    public static final void a(CoroutineContext coroutineContext, Object obj) {
        if (obj == a) {
            return;
        }
        if (!(obj instanceof a0)) {
            Object b02 = coroutineContext.b0(null, f18130c);
            Intrinsics.checkNotNull(b02, "null cannot be cast to non-null type kotlinx.coroutines.ThreadContextElement<kotlin.Any?>");
            a3.e.w(b02);
            throw null;
        }
        a0 a0Var = (a0) obj;
        n1[] n1VarArr = a0Var.f18100c;
        int length = n1VarArr.length - 1;
        if (length < 0) {
            return;
        }
        n1 n1Var = n1VarArr[length];
        Intrinsics.checkNotNull(null);
        Object obj2 = a0Var.f18099b[length];
        throw null;
    }

    public static final Object b(CoroutineContext coroutineContext) {
        Object b02 = coroutineContext.b0(0, f18129b);
        Intrinsics.checkNotNull(b02);
        return b02;
    }

    public static final Object c(CoroutineContext coroutineContext, Object obj) {
        if (obj == null) {
            obj = b(coroutineContext);
        }
        if (obj == 0) {
            return a;
        }
        if (obj instanceof Integer) {
            return coroutineContext.b0(new a0(((Number) obj).intValue(), coroutineContext), f18131d);
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlinx.coroutines.ThreadContextElement<kotlin.Any?>");
        a3.e.w(obj);
        throw null;
    }
}
