package sr;

import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;

/* loaded from: classes3.dex */
public class t extends nr.a implements CoroutineStackFrame {

    /* renamed from: v, reason: collision with root package name */
    public final Continuation f18125v;

    public t(Continuation continuation, CoroutineContext coroutineContext) {
        super(coroutineContext, true);
        this.f18125v = continuation;
    }

    @Override // nr.e1
    public final boolean R() {
        return true;
    }

    @Override // kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public final CoroutineStackFrame getCallerFrame() {
        Continuation continuation = this.f18125v;
        if (continuation instanceof CoroutineStackFrame) {
            return (CoroutineStackFrame) continuation;
        }
        return null;
    }

    @Override // nr.e1
    public void u(Object obj) {
        h.f(nr.x.u(obj), ko.f.b(this.f18125v));
    }

    @Override // nr.e1
    public void v(Object obj) {
        this.f18125v.resumeWith(nr.x.u(obj));
    }

    public void o0() {
    }
}
