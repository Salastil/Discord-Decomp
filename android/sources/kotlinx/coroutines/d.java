package kotlinx.coroutines;

import kotlin.coroutines.CoroutineContext;
import nr.w1;

/* loaded from: classes3.dex */
public final class d extends CoroutineDispatcher {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f13601i = 0;

    static {
        new d();
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        w1 w1Var = (w1) coroutineContext.o(w1.f15674i);
        if (w1Var == null) {
            throw new UnsupportedOperationException("Dispatchers.Unconfined.dispatch function can only be used by the yield function. If you wrap Unconfined dispatcher in your code, make sure you properly delegate isDispatchNeeded and dispatch calls.");
        }
        w1Var.f15675e = true;
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        return "Dispatchers.Unconfined";
    }
}
