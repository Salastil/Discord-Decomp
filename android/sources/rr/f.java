package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.channels.ProducerScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public abstract class f extends e {

    /* renamed from: v, reason: collision with root package name */
    public final Flow f17583v;

    public f(Flow flow, CoroutineContext coroutineContext, int i5, pr.a aVar) {
        super(coroutineContext, i5, aVar);
        this.f17583v = flow;
    }

    @Override // rr.e
    public final Object c(ProducerScope producerScope, Continuation continuation) {
        Object g6 = g(new y(producerScope), continuation);
        return g6 == ko.a.f13464d ? g6 : Unit.a;
    }

    @Override // rr.e, kotlinx.coroutines.flow.Flow
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        if (this.f17581e == -3) {
            CoroutineContext context = continuation.getContext();
            Boolean bool = Boolean.FALSE;
            com.discord.c cVar = new com.discord.c(22);
            CoroutineContext coroutineContext = this.f17580d;
            CoroutineContext r5 = !((Boolean) coroutineContext.b0(bool, cVar)).booleanValue() ? context.r(coroutineContext) : nr.r.a(context, coroutineContext, false);
            if (Intrinsics.areEqual(r5, context)) {
                Object g6 = g(flowCollector, continuation);
                return g6 == ko.a.f13464d ? g6 : Unit.a;
            }
            jo.a aVar = kotlin.coroutines.d.f13537h;
            if (Intrinsics.areEqual(r5.o(aVar), context.o(aVar))) {
                CoroutineContext context2 = continuation.getContext();
                if (!(flowCollector instanceof y) && !(flowCollector instanceof u)) {
                    flowCollector = new b0(flowCollector, context2);
                }
                Object b10 = c.b(r5, flowCollector, sr.y.b(r5), new b4.d(this, (Continuation) null, 11), continuation);
                return b10 == ko.a.f13464d ? b10 : Unit.a;
            }
        }
        Object collect = super.collect(flowCollector, continuation);
        return collect == ko.a.f13464d ? collect : Unit.a;
    }

    public abstract Object g(FlowCollector flowCollector, Continuation continuation);

    @Override // rr.e
    public final String toString() {
        return this.f17583v + " -> " + super.toString();
    }
}
