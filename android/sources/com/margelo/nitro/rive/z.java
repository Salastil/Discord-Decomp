package com.margelo.nitro.rive;

import android.app.Activity;
import com.margelo.nitro.core.HybridObject;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class z extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6609d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridObject f6610e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f6611i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ z(HybridObject hybridObject, Object obj, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6609d = i5;
        this.f6610e = hybridObject;
        this.f6611i = obj;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6609d) {
            case 0:
                return new z((HybridRiveFile) this.f6610e, (ArtboardBy) this.f6611i, continuation, 0);
            case 1:
                return new z((HybridRiveFile) this.f6610e, (String) this.f6611i, continuation, 1);
            case 2:
                return new z((HybridRiveView) this.f6610e, (Function0) this.f6611i, continuation, 2);
            case 3:
                return new z((HybridViewModel) this.f6610e, (String) this.f6611i, continuation, 3);
            default:
                return new z((HybridViewModelInstance) this.f6610e, (String) this.f6611i, continuation, 4);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6609d) {
        }
        return ((z) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6609d;
        Object obj2 = this.f6611i;
        HybridObject hybridObject = this.f6610e;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                return ((HybridRiveFile) hybridObject).defaultArtboardViewModel((ArtboardBy) obj2);
            case 1:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                return ((HybridRiveFile) hybridObject).viewModelByName((String) obj2);
            case 2:
                ko.a aVar3 = ko.a.f13464d;
                ki.b.R(obj);
                Activity currentActivity = ((HybridRiveView) hybridObject).getContext().getCurrentActivity();
                if (currentActivity != null) {
                    currentActivity.runOnUiThread(new s0(1, (Function0) obj2));
                }
                return Unit.a;
            case 3:
                ko.a aVar4 = ko.a.f13464d;
                ki.b.R(obj);
                return ((HybridViewModel) hybridObject).createInstanceByName((String) obj2);
            default:
                ko.a aVar5 = ko.a.f13464d;
                ki.b.R(obj);
                return ((HybridViewModelInstance) hybridObject).viewModel((String) obj2);
        }
    }
}
