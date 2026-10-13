package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class y0 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6607d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridViewModel f6608e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ y0(HybridViewModel hybridViewModel, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6607d = i5;
        this.f6608e = hybridViewModel;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6607d) {
            case 0:
                return new y0(this.f6608e, continuation, 0);
            case 1:
                return new y0(this.f6608e, continuation, 1);
            case 2:
                return new y0(this.f6608e, continuation, 2);
            default:
                return new y0(this.f6608e, continuation, 3);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6607d) {
        }
        return ((y0) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6607d;
        HybridViewModel hybridViewModel = this.f6608e;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                return hybridViewModel.createInstance();
            case 1:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                return hybridViewModel.createDefaultInstance();
            case 2:
                ko.a aVar3 = ko.a.f13464d;
                ki.b.R(obj);
                return new Double(hybridViewModel.getInstanceCount());
            default:
                ko.a aVar4 = ko.a.f13464d;
                ki.b.R(obj);
                return new Double(hybridViewModel.getPropertyCount());
        }
    }
}
