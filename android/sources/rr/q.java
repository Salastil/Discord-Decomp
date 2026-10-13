package rr;

import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public final class q implements CoroutineContext {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ CoroutineContext f17616d;

    /* renamed from: e, reason: collision with root package name */
    public final Throwable f17617e;

    public q(Throwable th2, CoroutineContext coroutineContext) {
        this.f17616d = coroutineContext;
        this.f17617e = th2;
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext C(kotlin.coroutines.f fVar) {
        return this.f17616d.C(fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final Object b0(Object obj, Function2 function2) {
        return this.f17616d.b0(obj, function2);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext.Element o(kotlin.coroutines.f fVar) {
        return this.f17616d.o(fVar);
    }

    @Override // kotlin.coroutines.CoroutineContext
    public final CoroutineContext r(CoroutineContext coroutineContext) {
        return this.f17616d.r(coroutineContext);
    }
}
