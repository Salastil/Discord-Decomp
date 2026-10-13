package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class a1 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6532d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridViewModelPropertySpec f6533e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a1(HybridViewModelPropertySpec hybridViewModelPropertySpec, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6532d = i5;
        this.f6533e = hybridViewModelPropertySpec;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6532d) {
            case 0:
                return new a1((HybridViewModelBooleanProperty) this.f6533e, continuation, 0);
            case 1:
                return new a1((HybridViewModelColorProperty) this.f6533e, continuation, 1);
            case 2:
                return new a1((HybridViewModelEnumProperty) this.f6533e, continuation, 2);
            case 3:
                return new a1((HybridViewModelListProperty) this.f6533e, continuation, 3);
            case 4:
                return new a1((HybridViewModelNumberProperty) this.f6533e, continuation, 4);
            default:
                return new a1((HybridViewModelStringProperty) this.f6533e, continuation, 5);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6532d) {
        }
        return ((a1) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6532d;
        HybridViewModelPropertySpec hybridViewModelPropertySpec = this.f6533e;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                return Boolean.valueOf(((HybridViewModelBooleanProperty) hybridViewModelPropertySpec).getValue());
            case 1:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                return new Double(((HybridViewModelColorProperty) hybridViewModelPropertySpec).getValue());
            case 2:
                ko.a aVar3 = ko.a.f13464d;
                ki.b.R(obj);
                return ((HybridViewModelEnumProperty) hybridViewModelPropertySpec).getValue();
            case 3:
                ko.a aVar4 = ko.a.f13464d;
                ki.b.R(obj);
                return new Double(((HybridViewModelListProperty) hybridViewModelPropertySpec).getLength());
            case 4:
                ko.a aVar5 = ko.a.f13464d;
                ki.b.R(obj);
                return new Double(((HybridViewModelNumberProperty) hybridViewModelPropertySpec).getValue());
            default:
                ko.a aVar6 = ko.a.f13464d;
                ki.b.R(obj);
                return ((HybridViewModelStringProperty) hybridViewModelPropertySpec).getValue();
        }
    }
}
