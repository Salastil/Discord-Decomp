package com.margelo.nitro.rive;

import app.rive.runtime.kotlin.core.RiveRenderImage;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class l0 extends lo.h implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public int f6572d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ p f6573e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l0(p pVar, Continuation continuation) {
        super(1, continuation);
        this.f6573e = pVar;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new l0(this.f6573e, continuation);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        return ((l0) create((Continuation) obj)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f6572d;
        if (i5 == 0) {
            ki.b.R(obj);
            p pVar = this.f6573e;
            g a = pVar.a();
            this.f6572d = 1;
            obj = a.a(pVar, this);
            if (obj == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        byte[] bArr = (byte[]) obj;
        return new HybridRiveImage(RiveRenderImage.Companion.fromEncoded$default(RiveRenderImage.INSTANCE, bArr, null, 2, null), bArr.length);
    }
}
