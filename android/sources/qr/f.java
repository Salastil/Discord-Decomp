package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class f implements Flow {

    /* renamed from: d, reason: collision with root package name */
    public final Flow f16973d;

    public f(Flow flow) {
        this.f16973d = flow;
    }

    /* JADX WARN: Type inference failed for: r1v0, types: [T, a5.h] */
    @Override // kotlinx.coroutines.flow.Flow
    public final Object collect(FlowCollector flowCollector, Continuation continuation) {
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = rr.c.f17577b;
        Object collect = this.f16973d.collect(new e(this, objectRef, flowCollector), continuation);
        return collect == ko.a.f13464d ? collect : Unit.a;
    }
}
