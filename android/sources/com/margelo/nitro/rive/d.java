package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;

/* loaded from: classes3.dex */
public final class d extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public int f6544d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Flow f6545e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f6546i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ BaseHybridViewModelPropertyImpl f6547v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(Flow flow, int i5, BaseHybridViewModelPropertyImpl baseHybridViewModelPropertyImpl, Continuation continuation) {
        super(2, continuation);
        this.f6545e = flow;
        this.f6546i = i5;
        this.f6547v = baseHybridViewModelPropertyImpl;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new d(this.f6545e, this.f6546i, this.f6547v, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f6544d;
        if (i5 == 0) {
            ki.b.R(obj);
            int i6 = this.f6546i;
            if (i6 < 0) {
                throw new IllegalArgumentException(k0.d.i(i6, "Drop count should be non-negative, but had ").toString());
            }
            c cVar = new c(0, this.f6547v);
            this.f6544d = 1;
            Object collect = this.f6545e.collect(new qr.m(new Ref.IntRef(), i6, cVar), this);
            if (collect != aVar) {
                collect = Unit.a;
            }
            if (collect == aVar) {
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
