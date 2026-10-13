package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class g extends f {
    public g(Flow flow, CoroutineContext coroutineContext, int i5, pr.a aVar, int i6) {
        super(flow, (i6 & 2) != 0 ? kotlin.coroutines.g.f13538d : coroutineContext, (i6 & 4) != 0 ? -3 : i5, (i6 & 8) != 0 ? pr.a.f16467d : aVar);
    }

    @Override // rr.e
    public final e f(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        return new g(this.f17583v, coroutineContext, i5, aVar);
    }

    @Override // rr.f
    public final Object g(FlowCollector flowCollector, Continuation continuation) {
        Object collect = this.f17583v.collect(flowCollector, continuation);
        return collect == ko.a.f13464d ? collect : Unit.a;
    }
}
