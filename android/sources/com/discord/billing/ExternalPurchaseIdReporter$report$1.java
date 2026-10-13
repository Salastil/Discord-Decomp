package com.discord.billing;

import com.discord.logging.Log;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Reflection;
import kotlin.text.b0;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.ExternalPurchaseIdReporter$report$1", f = "ExternalPurchaseIdReporter.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ExternalPurchaseIdReporter$report$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $externalProductId;
    final /* synthetic */ String $externalPurchaseId;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ExternalPurchaseIdReporter$report$1(String str, String str2, Continuation continuation) {
        super(2, continuation);
        this.$externalProductId = str;
        this.$externalPurchaseId = str2;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ExternalPurchaseIdReporter$report$1(this.$externalProductId, this.$externalPurchaseId, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        String simpleName;
        int postExternalPurchaseId;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        Log.i$default(Log.INSTANCE, "ExternalPurchaseIdReporter", a3.e.l("reporting external purchase id product=", this.$externalProductId, " token=", b0.B(12, this.$externalPurchaseId)), (Throwable) null, 4, (Object) null);
        Integer num = null;
        try {
            postExternalPurchaseId = ExternalPurchaseIdReporter.INSTANCE.postExternalPurchaseId(this.$externalPurchaseId, this.$externalProductId);
            Integer num2 = new Integer(postExternalPurchaseId);
            simpleName = null;
            num = num2;
        } catch (Exception e9) {
            Log.INSTANCE.w("ExternalPurchaseIdReporter", "external purchase id report failed product=" + this.$externalProductId, e9);
            simpleName = Reflection.getOrCreateKotlinClass(e9.getClass()).getSimpleName();
            if (simpleName == null) {
                simpleName = "Exception";
            }
        }
        ExternalPurchaseIdReporter.INSTANCE.trackResult(num, simpleName);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ExternalPurchaseIdReporter$report$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
