package com.margelo.nitro.rive;

import app.rive.runtime.kotlin.core.File;
import java.util.ArrayList;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class a0 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6530d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridRiveFile f6531e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a0(HybridRiveFile hybridRiveFile, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6530d = i5;
        this.f6531e = hybridRiveFile;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6530d) {
            case 0:
                return new a0(this.f6531e, continuation, 0);
            case 1:
                return new a0(this.f6531e, continuation, 1);
            default:
                return new a0(this.f6531e, continuation, 2);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6530d) {
        }
        return ((a0) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        int i5 = this.f6530d;
        HybridRiveFile hybridRiveFile = this.f6531e;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                ki.b.R(obj);
                return new Double(hybridRiveFile.getArtboardCount());
            case 1:
                ko.a aVar2 = ko.a.f13464d;
                ki.b.R(obj);
                return hybridRiveFile.getArtboardNames();
            default:
                ko.a aVar3 = ko.a.f13464d;
                ki.b.R(obj);
                File riveFile = hybridRiveFile.getRiveFile();
                if (riveFile == null) {
                    return new String[0];
                }
                int viewModelCount = riveFile.getViewModelCount();
                ArrayList arrayList = new ArrayList();
                for (int i6 = 0; i6 < viewModelCount; i6++) {
                    try {
                        arrayList.add(riveFile.getViewModelByIndex(i6).getName());
                    } catch (Exception unused) {
                    }
                }
                return arrayList.toArray(new String[0]);
        }
    }
}
