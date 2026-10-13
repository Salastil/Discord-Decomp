package androidx.lifecycle;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes.dex */
public final class f0 extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2182d = 1;

    /* renamed from: e, reason: collision with root package name */
    public int f2183e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Function2 f2184i;

    /* renamed from: v, reason: collision with root package name */
    public /* synthetic */ Object f2185v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f0(Function2 function2, Object obj, Continuation continuation) {
        super(2, continuation);
        this.f2184i = function2;
        this.f2185v = obj;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f2182d) {
            case 0:
                f0 f0Var = new f0(this.f2184i, continuation);
                f0Var.f2185v = obj;
                return f0Var;
            default:
                return new f0(this.f2184i, this.f2185v, continuation);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f2182d) {
        }
        return ((f0) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        switch (this.f2182d) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i5 = this.f2183e;
                if (i5 == 0) {
                    ki.b.R(obj);
                    CoroutineScope coroutineScope = (CoroutineScope) this.f2185v;
                    this.f2183e = 1;
                    if (this.f2184i.invoke(coroutineScope, this) == aVar) {
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
                int i6 = this.f2183e;
                if (i6 != 0) {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    return obj;
                }
                ki.b.R(obj);
                Object obj2 = this.f2185v;
                this.f2183e = 1;
                Object invoke = this.f2184i.invoke(obj2, this);
                return invoke == aVar2 ? aVar2 : invoke;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f0(Function2 function2, Continuation continuation) {
        super(2, continuation);
        this.f2184i = function2;
    }
}
