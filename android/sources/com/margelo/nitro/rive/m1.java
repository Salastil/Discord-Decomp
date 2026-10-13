package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class m1 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6577d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelListProperty f6578e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ double f6579i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ m1(HybridViewModelListProperty hybridViewModelListProperty, double d6, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6577d = i5;
        this.f6578e = hybridViewModelListProperty;
        this.f6579i = d6;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6577d) {
            case 0:
                return new m1(this.f6578e, this.f6579i, continuation, 0);
            default:
                return new m1(this.f6578e, this.f6579i, continuation, 1);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6577d) {
        }
        return ((m1) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6577d;
        double d6 = this.f6579i;
        HybridViewModelListProperty hybridViewModelListProperty = this.f6578e;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                return hybridViewModelListProperty.getInstanceAt(d6);
            default:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                hybridViewModelListProperty.removeInstanceAt(d6);
                return Unit.a;
        }
    }
}
