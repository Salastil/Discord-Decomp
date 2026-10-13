package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class n1 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelListProperty f6580d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ double f6581e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ double f6582i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n1(HybridViewModelListProperty hybridViewModelListProperty, double d6, double d7, Continuation continuation) {
        super(1, continuation);
        this.f6580d = hybridViewModelListProperty;
        this.f6581e = d6;
        this.f6582i = d7;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new n1(this.f6580d, this.f6581e, this.f6582i, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((n1) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        this.f6580d.swap(this.f6581e, this.f6582i);
        return Unit.a;
    }
}
