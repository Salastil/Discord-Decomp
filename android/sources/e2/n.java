package e2;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final class n extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f7862d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ a0 f7863e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(a0 a0Var, Continuation continuation) {
        super(2, continuation);
        this.f7863e = a0Var;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        n nVar = new n(this.f7863e, continuation);
        nVar.f7862d = obj;
        return nVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((n) create((a0) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        a0 a0Var = (a0) this.f7862d;
        a0 a0Var2 = this.f7863e;
        boolean z5 = false;
        if (!(a0Var2 instanceof b) && !(a0Var2 instanceof e) && a0Var == a0Var2) {
            z5 = true;
        }
        return Boolean.valueOf(z5);
    }
}
