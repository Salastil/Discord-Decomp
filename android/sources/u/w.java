package u;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes.dex */
public final class w extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18771d;

    /* renamed from: e, reason: collision with root package name */
    public int f18772e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f18773i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Function2 f18774v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ l f18775w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ w(Function2 function2, l lVar, Continuation continuation, int i5) {
        super(2, continuation);
        this.f18771d = i5;
        this.f18774v = function2;
        this.f18775w = lVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f18771d) {
            case 0:
                w wVar = new w(this.f18774v, this.f18775w, continuation, 0);
                wVar.f18773i = obj;
                return wVar;
            default:
                w wVar2 = new w(this.f18774v, this.f18775w, continuation, 1);
                wVar2.f18773i = obj;
                return wVar2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f18771d) {
        }
        return ((w) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        switch (this.f18771d) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i5 = this.f18772e;
                if (i5 == 0) {
                    ki.b.R(obj);
                    q qVar = new q(this.f18775w, ((CoroutineScope) this.f18773i).getCoroutineContext());
                    this.f18772e = 1;
                    if (this.f18774v.invoke(qVar, this) == aVar) {
                        return aVar;
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            default:
                ko.a aVar2 = ko.a.f13464d;
                int i6 = this.f18772e;
                if (i6 == 0) {
                    ki.b.R(obj);
                    q qVar2 = new q(this.f18775w, ((CoroutineScope) this.f18773i).getCoroutineContext());
                    this.f18772e = 1;
                    if (this.f18774v.invoke(qVar2, this) == aVar2) {
                        return aVar2;
                    }
                } else {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
        }
    }
}
