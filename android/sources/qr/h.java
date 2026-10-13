package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class h extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public int f16985d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f16986e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f16987i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(Continuation continuation, Ref.ObjectRef objectRef, FlowCollector flowCollector) {
        super(1, continuation);
        this.f16986e = flowCollector;
        this.f16987i = objectRef;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new h(continuation, this.f16987i, this.f16986e);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((h) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f16985d;
        Ref.ObjectRef objectRef = this.f16987i;
        if (i5 == 0) {
            ki.b.R(obj);
            a5.h hVar = rr.c.f17577b;
            Object obj2 = objectRef.element;
            if (obj2 == hVar) {
                obj2 = null;
            }
            this.f16985d = 1;
            if (this.f16986e.emit(obj2, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        objectRef.element = null;
        return Unit.a;
    }
}
