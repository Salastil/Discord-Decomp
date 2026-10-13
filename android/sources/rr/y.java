package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlinx.coroutines.channels.ProducerScope;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class y implements FlowCollector {

    /* renamed from: d, reason: collision with root package name */
    public final pr.v f17627d;

    public y(ProducerScope producerScope) {
        this.f17627d = producerScope;
    }

    @Override // kotlinx.coroutines.flow.FlowCollector
    public final Object emit(Object obj, Continuation continuation) {
        Object p3 = this.f17627d.p(obj, continuation);
        return p3 == ko.a.f13464d ? p3 : Unit.a;
    }
}
