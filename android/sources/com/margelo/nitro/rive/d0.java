package com.margelo.nitro.rive;

import java.net.URI;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class d0 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6548d;

    /* renamed from: e, reason: collision with root package name */
    public int f6549e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f6550i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ HybridRiveFileFactory f6551v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ ReferencedAssetsType f6552w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d0(String str, HybridRiveFileFactory hybridRiveFileFactory, ReferencedAssetsType referencedAssetsType, Continuation continuation, int i5) {
        super(1, continuation);
        this.f6548d = i5;
        this.f6550i = str;
        this.f6551v = hybridRiveFileFactory;
        this.f6552w = referencedAssetsType;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        switch (this.f6548d) {
            case 0:
                return new d0(this.f6550i, this.f6551v, this.f6552w, continuation, 0);
            case 1:
                return new d0(this.f6550i, this.f6551v, this.f6552w, continuation, 1);
            default:
                return new d0(this.f6550i, this.f6551v, this.f6552w, continuation, 2);
        }
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Continuation continuation = (Continuation) obj;
        switch (this.f6548d) {
        }
        return ((d0) create(continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        switch (this.f6548d) {
            case 0:
                String str = this.f6550i;
                ko.a aVar = ko.a.f13464d;
                int i5 = this.f6549e;
                try {
                    if (i5 == 0) {
                        ki.b.R(obj);
                        String path = new URI(str).getPath();
                        if (path == null) {
                            throw new Error("fromFileURL: Invalid URL: ".concat(str));
                        }
                        ur.e eVar = nr.g0.a;
                        ur.d dVar = ur.d.f19093i;
                        c0 c0Var = new c0(path, this.f6551v, this.f6552w, null, 0);
                        this.f6549e = 1;
                        obj = nr.x.A(dVar, c0Var, this);
                        if (obj == aVar) {
                            return aVar;
                        }
                    } else {
                        if (i5 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                    }
                    s sVar = (s) obj;
                    HybridRiveFile hybridRiveFile = new HybridRiveFile();
                    hybridRiveFile.setRiveFile(sVar.a);
                    hybridRiveFile.setReferencedAssetCache(sVar.f6592b);
                    hybridRiveFile.setAssetLoader(sVar.f6593c);
                    return hybridRiveFile;
                } catch (Exception e9) {
                    throw new Error(a3.e.k("Failed to load Rive file: ", e9.getMessage()));
                }
            case 1:
                ko.a aVar2 = ko.a.f13464d;
                int i6 = this.f6549e;
                try {
                    if (i6 == 0) {
                        ki.b.R(obj);
                        ur.e eVar2 = nr.g0.a;
                        ur.d dVar2 = ur.d.f19093i;
                        c0 c0Var2 = new c0(this.f6550i, this.f6551v, this.f6552w, null, 1);
                        this.f6549e = 1;
                        obj = nr.x.A(dVar2, c0Var2, this);
                        if (obj == aVar2) {
                            return aVar2;
                        }
                    } else {
                        if (i6 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                    }
                    s sVar2 = (s) obj;
                    HybridRiveFile hybridRiveFile2 = new HybridRiveFile();
                    hybridRiveFile2.setRiveFile(sVar2.a);
                    hybridRiveFile2.setReferencedAssetCache(sVar2.f6592b);
                    hybridRiveFile2.setAssetLoader(sVar2.f6593c);
                    return hybridRiveFile2;
                } catch (Exception e10) {
                    throw new Error(a3.e.k("Failed to load Rive file: ", e10.getMessage()));
                }
            default:
                ko.a aVar3 = ko.a.f13464d;
                int i10 = this.f6549e;
                try {
                    if (i10 == 0) {
                        ki.b.R(obj);
                        ur.e eVar3 = nr.g0.a;
                        ur.d dVar3 = ur.d.f19093i;
                        c0 c0Var3 = new c0(this.f6550i, this.f6551v, this.f6552w, null, 2);
                        this.f6549e = 1;
                        obj = nr.x.A(dVar3, c0Var3, this);
                        if (obj == aVar3) {
                            return aVar3;
                        }
                    } else {
                        if (i10 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                    }
                    s sVar3 = (s) obj;
                    HybridRiveFile hybridRiveFile3 = new HybridRiveFile();
                    hybridRiveFile3.setRiveFile(sVar3.a);
                    hybridRiveFile3.setReferencedAssetCache(sVar3.f6592b);
                    hybridRiveFile3.setAssetLoader(sVar3.f6593c);
                    return hybridRiveFile3;
                } catch (Exception e11) {
                    throw new Error(a3.e.k("Failed to download Rive file: ", e11.getMessage()), e11);
                }
        }
    }
}
