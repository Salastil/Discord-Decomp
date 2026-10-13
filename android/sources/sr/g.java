package sr;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.e0;
import nr.o1;
import nr.p0;

/* loaded from: classes3.dex */
public final class g extends e0 implements CoroutineStackFrame, Continuation {
    public static final /* synthetic */ AtomicReferenceFieldUpdater E = AtomicReferenceFieldUpdater.newUpdater(g.class, Object.class, "_reusableCancellableContinuation$volatile");
    private volatile /* synthetic */ Object _reusableCancellableContinuation$volatile;

    /* renamed from: v, reason: collision with root package name */
    public final CoroutineDispatcher f18105v;

    /* renamed from: w, reason: collision with root package name */
    public final lo.c f18106w;

    /* renamed from: x, reason: collision with root package name */
    public Object f18107x;

    /* renamed from: y, reason: collision with root package name */
    public final Object f18108y;

    public g(CoroutineDispatcher coroutineDispatcher, lo.c cVar) {
        super(-1);
        this.f18105v = coroutineDispatcher;
        this.f18106w = cVar;
        this.f18107x = h.a;
        this.f18108y = y.b(cVar.getContext());
    }

    @Override // kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public final CoroutineStackFrame getCallerFrame() {
        return this.f18106w;
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return this.f18106w.getContext();
    }

    @Override // nr.e0
    public final Object i() {
        Object obj = this.f18107x;
        this.f18107x = h.a;
        return obj;
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        Throwable a = Result.a(obj);
        Object qVar = a == null ? obj : new nr.q(a, false);
        lo.c cVar = this.f18106w;
        CoroutineContext context = cVar.getContext();
        CoroutineDispatcher coroutineDispatcher = this.f18105v;
        if (h.h(coroutineDispatcher, context)) {
            this.f18107x = qVar;
            this.f15613i = 0;
            h.g(coroutineDispatcher, cVar.getContext(), this);
            return;
        }
        p0 a10 = o1.a();
        if (a10.f15647i >= 4294967296L) {
            this.f18107x = qVar;
            this.f15613i = 0;
            a10.q0(this);
            return;
        }
        a10.s0(true);
        try {
            CoroutineContext context2 = cVar.getContext();
            Object c6 = y.c(context2, this.f18108y);
            try {
                cVar.resumeWith(obj);
                Unit unit = Unit.a;
                while (a10.u0()) {
                }
            } finally {
                y.a(context2, c6);
            }
        } finally {
            try {
            } finally {
            }
        }
    }

    public final String toString() {
        return "DispatchedContinuation[" + this.f18105v + ", " + nr.x.y(this.f18106w) + ']';
    }

    @Override // nr.e0
    public final Continuation d() {
        return this;
    }
}
