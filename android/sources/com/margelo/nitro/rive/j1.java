package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class j1 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6566d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelListProperty f6567e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelInstanceSpec f6568i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ j1(HybridViewModelListProperty hybridViewModelListProperty, HybridViewModelInstanceSpec hybridViewModelInstanceSpec, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6566d = i5;
        this.f6567e = hybridViewModelListProperty;
        this.f6568i = hybridViewModelInstanceSpec;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6566d) {
            case 0:
                return new j1(this.f6567e, this.f6568i, continuation, 0);
            default:
                return new j1(this.f6567e, this.f6568i, continuation, 1);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6566d) {
        }
        return ((j1) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6566d;
        HybridViewModelInstanceSpec hybridViewModelInstanceSpec = this.f6568i;
        HybridViewModelListProperty hybridViewModelListProperty = this.f6567e;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                hybridViewModelListProperty.addInstance(hybridViewModelInstanceSpec);
                break;
            default:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                hybridViewModelListProperty.removeInstance(hybridViewModelInstanceSpec);
                break;
        }
        return Unit.a;
    }
}
