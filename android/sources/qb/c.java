package qb;

import ds.o;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.x;

/* loaded from: classes3.dex */
public final class c extends h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public int f16746d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ o f16747e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f16748i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f16749v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(o oVar, Ref.ObjectRef objectRef, Ref.ObjectRef objectRef2, Continuation continuation) {
        super(2, continuation);
        this.f16747e = oVar;
        this.f16748i = objectRef;
        this.f16749v = objectRef2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new c(this.f16747e, this.f16748i, this.f16749v, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((c) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f16746d;
        if (i5 == 0) {
            ki.b.R(obj);
            this.f16746d = 1;
            if (x.j(1000L, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        this.f16747e.invoke(this.f16748i.element, this.f16749v.element);
        return Unit.a;
    }
}
