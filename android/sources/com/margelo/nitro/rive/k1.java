package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class k1 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelListProperty f6569d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelInstanceSpec f6570e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ double f6571i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k1(HybridViewModelListProperty hybridViewModelListProperty, HybridViewModelInstanceSpec hybridViewModelInstanceSpec, double d6, Continuation continuation) {
        super(1, continuation);
        this.f6569d = hybridViewModelListProperty;
        this.f6570e = hybridViewModelInstanceSpec;
        this.f6571i = d6;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new k1(this.f6569d, this.f6570e, this.f6571i, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((k1) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        this.f6569d.addInstanceAt(this.f6570e, this.f6571i);
        return Unit.a;
    }
}
