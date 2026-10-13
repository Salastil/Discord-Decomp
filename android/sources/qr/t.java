package qr;

import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class t implements a0, Flow, rr.s {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ c0 f17032d;

    public t(c0 c0Var) {
        this.f17032d = c0Var;
    }

    @Override // rr.s
    public final Flow b(CoroutineContext coroutineContext, int i5, pr.a aVar) {
        return ((((i5 < 0 || i5 >= 2) && i5 != -2) || aVar != pr.a.f16468e) && !((i5 == 0 || i5 == -3) && aVar == pr.a.f16467d)) ? new rr.g(this, coroutineContext, i5, aVar) : this;
    }

    @Override // kotlinx.coroutines.flow.Flow
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        this.f17032d.collect(flowCollector, continuation);
        return ko.a.f13464d;
    }
}
