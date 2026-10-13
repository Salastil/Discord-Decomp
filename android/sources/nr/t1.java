package nr;

import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.CoroutineDispatcher;

/* loaded from: classes3.dex */
public final class t1 extends sr.t {
    private volatile boolean threadLocalIsSet;

    /* renamed from: w, reason: collision with root package name */
    public final ThreadLocal f15662w;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public t1(Continuation continuation, CoroutineContext coroutineContext) {
        super(continuation, coroutineContext.o(r0) == null ? coroutineContext.r(r0) : coroutineContext);
        u1 u1Var = u1.f15663d;
        this.f15662w = new ThreadLocal();
        if (continuation.getContext().o(kotlin.coroutines.d.f13537h) instanceof CoroutineDispatcher) {
            return;
        }
        Object c6 = sr.y.c(coroutineContext, null);
        sr.y.a(coroutineContext, c6);
        r0(coroutineContext, c6);
    }

    @Override // sr.t
    public final void o0() {
        q0();
    }

    public final boolean p0() {
        boolean z5 = this.threadLocalIsSet && this.f15662w.get() == null;
        this.f15662w.remove();
        return !z5;
    }

    public final void q0() {
        if (this.threadLocalIsSet) {
            Pair pair = (Pair) this.f15662w.get();
            if (pair != null) {
                sr.y.a((CoroutineContext) pair.f13474d, pair.f13475e);
            }
            this.f15662w.remove();
        }
    }

    public final void r0(CoroutineContext coroutineContext, Object obj) {
        this.threadLocalIsSet = true;
        this.f15662w.set(new Pair(coroutineContext, obj));
    }

    @Override // sr.t, nr.e1
    public final void v(Object obj) {
        q0();
        Object u5 = x.u(obj);
        Continuation continuation = this.f18125v;
        CoroutineContext context = continuation.getContext();
        Object c6 = sr.y.c(context, null);
        t1 c8 = c6 != sr.y.a ? r.c(continuation, context, c6) : null;
        try {
            continuation.resumeWith(u5);
            Unit unit = Unit.a;
            if (c8 == null || c8.p0()) {
                sr.y.a(context, c6);
            }
        } catch (Throwable th2) {
            if (c8 == null || c8.p0()) {
                sr.y.a(context, c6);
            }
            throw th2;
        }
    }
}
