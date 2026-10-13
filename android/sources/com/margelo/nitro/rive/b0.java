package com.margelo.nitro.rive;

import java.nio.ByteBuffer;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class b0 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ByteBuffer f6534d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ HybridRiveFileFactory f6535e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ReferencedAssetsType f6536i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b0(ByteBuffer byteBuffer, HybridRiveFileFactory hybridRiveFileFactory, ReferencedAssetsType referencedAssetsType, Continuation continuation) {
        super(1, continuation);
        this.f6534d = byteBuffer;
        this.f6535e = hybridRiveFileFactory;
        this.f6536i = referencedAssetsType;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new b0(this.f6534d, this.f6535e, this.f6536i, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((b0) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        s buildRiveFile;
        ByteBuffer byteBuffer = this.f6534d;
        ko.a aVar = ko.a.f13464d;
        ki.b.R(obj);
        try {
            byte[] bArr = new byte[byteBuffer.remaining()];
            byteBuffer.get(bArr);
            buildRiveFile = this.f6535e.buildRiveFile(bArr, this.f6536i);
            HybridRiveFile hybridRiveFile = new HybridRiveFile();
            hybridRiveFile.setRiveFile(buildRiveFile.a);
            hybridRiveFile.setReferencedAssetCache(buildRiveFile.f6592b);
            hybridRiveFile.setAssetLoader(buildRiveFile.f6593c);
            return hybridRiveFile;
        } catch (Exception e9) {
            throw new Error(a3.e.k("Failed to load Rive file from bytes: ", e9.getMessage()));
        }
    }
}
