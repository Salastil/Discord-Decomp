package rr;

import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;

/* loaded from: classes3.dex */
public final class z implements Continuation, CoroutineStackFrame {

    /* renamed from: d, reason: collision with root package name */
    public final Continuation f17628d;

    /* renamed from: e, reason: collision with root package name */
    public final CoroutineContext f17629e;

    public z(Continuation continuation, CoroutineContext coroutineContext) {
        this.f17628d = continuation;
        this.f17629e = coroutineContext;
    }

    @Override // kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public final CoroutineStackFrame getCallerFrame() {
        Continuation continuation = this.f17628d;
        if (continuation instanceof CoroutineStackFrame) {
            return (CoroutineStackFrame) continuation;
        }
        return null;
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return this.f17629e;
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        this.f17628d.resumeWith(obj);
    }
}
