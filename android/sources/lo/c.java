package lo;

import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.j;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class c extends a {
    private final CoroutineContext _context;
    private transient Continuation intercepted;

    public c(Continuation continuation, CoroutineContext coroutineContext) {
        super(continuation);
        this._context = coroutineContext;
    }

    @Override // kotlin.coroutines.Continuation
    @NotNull
    public CoroutineContext getContext() {
        CoroutineContext coroutineContext = this._context;
        Intrinsics.checkNotNull(coroutineContext);
        return coroutineContext;
    }

    @NotNull
    public final Continuation intercepted() {
        Continuation continuation = this.intercepted;
        if (continuation != null) {
            return continuation;
        }
        kotlin.coroutines.d dVar = (kotlin.coroutines.d) getContext().o(kotlin.coroutines.d.f13537h);
        Continuation gVar = dVar != null ? new sr.g((CoroutineDispatcher) dVar, this) : this;
        this.intercepted = gVar;
        return gVar;
    }

    @Override // lo.a
    public void releaseIntercepted() {
        Continuation continuation = this.intercepted;
        if (continuation != null && continuation != this) {
            CoroutineContext.Element o6 = getContext().o(kotlin.coroutines.d.f13537h);
            Intrinsics.checkNotNull(o6);
            ((CoroutineDispatcher) ((kotlin.coroutines.d) o6)).getClass();
            Intrinsics.checkNotNull(continuation, "null cannot be cast to non-null type kotlinx.coroutines.internal.DispatchedContinuation<*>");
            sr.g gVar = (sr.g) continuation;
            AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = sr.g.E;
            while (atomicReferenceFieldUpdater.get(gVar) == sr.h.f18109b) {
            }
            Object obj = atomicReferenceFieldUpdater.get(gVar);
            j jVar = obj instanceof j ? (j) obj : null;
            if (jVar != null) {
                jVar.o();
            }
        }
        this.intercepted = b.f14117d;
    }

    public c(Continuation continuation) {
        this(continuation, continuation != null ? continuation.getContext() : null);
    }
}
