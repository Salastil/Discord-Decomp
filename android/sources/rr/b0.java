package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class b0 implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final CoroutineContext f17574d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f17575e;

    /* renamed from: i, reason: collision with root package name */
    public final b4.d f17576i;

    public b0(FlowCollector flowCollector, CoroutineContext coroutineContext) {
        this.f17574d = coroutineContext;
        this.f17575e = sr.y.b(coroutineContext);
        this.f17576i = new b4.d(flowCollector, (Continuation) null, 12);
    }

    @Override // kotlinx.coroutines.flow.FlowCollector
    public final Object emit(Object obj, Continuation continuation) {
        Object b10 = c.b(this.f17574d, obj, this.f17575e, this.f17576i, continuation);
        return b10 == ko.a.f13464d ? b10 : Unit.a;
    }
}
