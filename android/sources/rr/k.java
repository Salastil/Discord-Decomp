package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class k extends f {

    /* renamed from: w, reason: collision with root package name */
    public final qr.p f17598w;

    public k(qr.p pVar, Flow flow, CoroutineContext coroutineContext, int i5, pr.a aVar) {
        super(flow, coroutineContext, i5, aVar);
        this.f17598w = pVar;
    }

    @Override // rr.e
    public final e f(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        return new k(this.f17598w, this.f17583v, coroutineContext, i5, aVar);
    }

    @Override // rr.f
    public final Object g(FlowCollector flowCollector, Continuation continuation) {
        Object i5 = nr.x.i(new j(this, flowCollector, null), continuation);
        return i5 == ko.a.f13464d ? i5 : Unit.a;
    }
}
