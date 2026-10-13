package rr;

import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.jvm.internal.CoroutineStackFrame;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class v extends lo.c implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final FlowCollector f17621d;

    /* renamed from: e, reason: collision with root package name */
    public final CoroutineContext f17622e;

    /* renamed from: i, reason: collision with root package name */
    public final int f17623i;

    /* renamed from: v, reason: collision with root package name */
    public CoroutineContext f17624v;

    /* renamed from: w, reason: collision with root package name */
    public Continuation f17625w;

    public v(FlowCollector flowCollector, CoroutineContext coroutineContext) {
        super(t.f17618d, kotlin.coroutines.g.f13538d);
        this.f17621d = flowCollector;
        this.f17622e = coroutineContext;
        this.f17623i = ((Number) coroutineContext.b0(0, new com.discord.c(28))).intValue();
    }

    public final Object b(Continuation continuation, Object obj) {
        CoroutineContext context = continuation.getContext();
        nr.x.l(context);
        CoroutineContext coroutineContext = this.f17624v;
        if (coroutineContext != context) {
            if (coroutineContext instanceof q) {
                throw new IllegalStateException(kotlin.text.r.b("\n            Flow exception transparency is violated:\n                Previous 'emit' call has thrown exception " + ((q) coroutineContext).f17617e + ", but then emission attempt of value '" + obj + "' has been detected.\n                Emissions from 'catch' blocks are prohibited in order to avoid unspecified behaviour, 'Flow.catch' operator can be used instead.\n                For a more detailed explanation, please refer to Flow documentation.\n            ").toString());
            }
            if (((Number) context.b0(0, new com.discord.chat.input.views.a(10, this))).intValue() != this.f17623i) {
                throw new IllegalStateException(("Flow invariant is violated:\n\t\tFlow was collected in " + this.f17622e + ",\n\t\tbut emission happened in " + context + ".\n\t\tPlease refer to 'flow' documentation or use 'flowOn' instead").toString());
            }
            this.f17624v = context;
        }
        this.f17625w = continuation;
        Function3 function3 = x.a;
        FlowCollector flowCollector = this.f17621d;
        Intrinsics.checkNotNull(flowCollector, "null cannot be cast to non-null type kotlinx.coroutines.flow.FlowCollector<kotlin.Any?>");
        Intrinsics.checkNotNull(this, "null cannot be cast to non-null type kotlin.coroutines.Continuation<kotlin.Unit>");
        Object invoke = function3.invoke(flowCollector, obj, this);
        if (!Intrinsics.areEqual(invoke, ko.a.f13464d)) {
            this.f17625w = null;
        }
        return invoke;
    }

    @Override // kotlinx.coroutines.flow.FlowCollector
    public final Object emit(Object obj, Continuation frame) {
        try {
            Object b10 = b(frame, obj);
            ko.a aVar = ko.a.f13464d;
            if (b10 == aVar) {
                Intrinsics.checkNotNullParameter(frame, "frame");
            }
            return b10 == aVar ? b10 : Unit.a;
        } catch (Throwable th2) {
            this.f17624v = new q(th2, frame.getContext());
            throw th2;
        }
    }

    @Override // lo.a, kotlin.coroutines.jvm.internal.CoroutineStackFrame
    public final CoroutineStackFrame getCallerFrame() {
        Continuation continuation = this.f17625w;
        if (continuation instanceof CoroutineStackFrame) {
            return (CoroutineStackFrame) continuation;
        }
        return null;
    }

    @Override // lo.c, kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        CoroutineContext coroutineContext = this.f17624v;
        return coroutineContext == null ? kotlin.coroutines.g.f13538d : coroutineContext;
    }

    @Override // lo.a
    public final StackTraceElement getStackTraceElement() {
        return null;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Throwable a = Result.a(obj);
        if (a != null) {
            this.f17624v = new q(a, getContext());
        }
        Continuation continuation = this.f17625w;
        if (continuation != null) {
            continuation.resumeWith(obj);
        }
        return ko.a.f13464d;
    }
}
