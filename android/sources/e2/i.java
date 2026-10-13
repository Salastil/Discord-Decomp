package e2;

import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class i extends j {
    public final lo.h a;

    /* renamed from: b, reason: collision with root package name */
    public final nr.o f7852b;

    /* renamed from: c, reason: collision with root package name */
    public final a0 f7853c;

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineContext f7854d;

    /* JADX WARN: Multi-variable type inference failed */
    public i(Function2 transform, nr.o ack, a0 a0Var, CoroutineContext callerContext) {
        Intrinsics.checkNotNullParameter(transform, "transform");
        Intrinsics.checkNotNullParameter(ack, "ack");
        Intrinsics.checkNotNullParameter(callerContext, "callerContext");
        this.a = (lo.h) transform;
        this.f7852b = ack;
        this.f7853c = a0Var;
        this.f7854d = callerContext;
    }
}
