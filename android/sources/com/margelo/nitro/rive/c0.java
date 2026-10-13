package com.margelo.nitro.rive;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;

/* loaded from: classes3.dex */
public final class c0 extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6539d;

    /* renamed from: e, reason: collision with root package name */
    public int f6540e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f6541i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ HybridRiveFileFactory f6542v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ ReferencedAssetsType f6543w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c0(String str, HybridRiveFileFactory hybridRiveFileFactory, ReferencedAssetsType referencedAssetsType, Continuation continuation, int i5) {
        super(2, continuation);
        this.f6539d = i5;
        this.f6541i = str;
        this.f6542v = hybridRiveFileFactory;
        this.f6543w = referencedAssetsType;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f6539d) {
            case 0:
                return new c0(this.f6541i, this.f6542v, this.f6543w, continuation, 0);
            case 1:
                return new c0(this.f6541i, this.f6542v, this.f6543w, continuation, 1);
            default:
                return new c0(this.f6541i, this.f6542v, this.f6543w, continuation, 2);
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        CoroutineScope coroutineScope = (CoroutineScope) obj;
        Continuation continuation = (Continuation) obj2;
        switch (this.f6539d) {
        }
        return ((c0) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        s buildRiveFile;
        s buildRiveFile2;
        s buildRiveFile3;
        int i5 = this.f6539d;
        ReferencedAssetsType referencedAssetsType = this.f6543w;
        HybridRiveFileFactory hybridRiveFileFactory = this.f6542v;
        String str = this.f6541i;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i6 = this.f6540e;
                if (i6 == 0) {
                    ki.b.R(obj);
                    this.f6540e = 1;
                    ur.e eVar = nr.g0.a;
                    obj = nr.x.A(ur.d.f19093i, new t(str, null, 0), this);
                    if (obj == aVar) {
                        return aVar;
                    }
                } else {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                buildRiveFile = hybridRiveFileFactory.buildRiveFile((byte[]) obj, referencedAssetsType);
                return buildRiveFile;
            case 1:
                ko.a aVar2 = ko.a.f13464d;
                int i10 = this.f6540e;
                if (i10 == 0) {
                    ki.b.R(obj);
                    this.f6540e = 1;
                    ur.e eVar2 = nr.g0.a;
                    obj = nr.x.A(ur.d.f19093i, new t(str, null, 3), this);
                    if (obj == aVar2) {
                        return aVar2;
                    }
                } else {
                    if (i10 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                buildRiveFile2 = hybridRiveFileFactory.buildRiveFile((byte[]) obj, referencedAssetsType);
                return buildRiveFile2;
            default:
                ko.a aVar3 = ko.a.f13464d;
                int i11 = this.f6540e;
                if (i11 == 0) {
                    ki.b.R(obj);
                    this.f6540e = 1;
                    ur.e eVar3 = nr.g0.a;
                    obj = nr.x.A(ur.d.f19093i, new t(str, null, 1), this);
                    if (obj == aVar3) {
                        return aVar3;
                    }
                } else {
                    if (i11 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                buildRiveFile3 = hybridRiveFileFactory.buildRiveFile((byte[]) obj, referencedAssetsType);
                return buildRiveFile3;
        }
    }
}
