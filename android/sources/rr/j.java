package rr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class j extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public int f17594d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f17595e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ k f17596i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f17597v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(k kVar, FlowCollector flowCollector, Continuation continuation) {
        super(2, continuation);
        this.f17596i = kVar;
        this.f17597v = flowCollector;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        j jVar = new j(this.f17596i, this.f17597v, continuation);
        jVar.f17595e = obj;
        return jVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((j) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f17594d;
        if (i5 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.f17595e;
            Ref.ObjectRef objectRef = new Ref.ObjectRef();
            k kVar = this.f17596i;
            Flow flow = kVar.f17583v;
            i iVar = new i(objectRef, coroutineScope, kVar, this.f17597v);
            this.f17594d = 1;
            if (flow.collect(iVar, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }
}
