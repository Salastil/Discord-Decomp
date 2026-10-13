package com.discord.billing;

import com.discord.billing.BillingManager;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/discord/billing/BillingManager$ClientReadyState;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.BillingManager$suspendUntilReady$3", f = "BillingManager.kt", l = {298}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$suspendUntilReady$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ CompletableDeferred $deferred;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public BillingManager$suspendUntilReady$3(CompletableDeferred completableDeferred, Continuation continuation) {
        super(2, continuation);
        this.$deferred = completableDeferred;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BillingManager$suspendUntilReady$3(this.$deferred, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            CompletableDeferred completableDeferred = this.$deferred;
            this.label = 1;
            obj = completableDeferred.A(this);
            if (obj == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return ((Boolean) obj).booleanValue() ? BillingManager.ClientReadyState.AFTER_WAIT : BillingManager.ClientReadyState.TIMEOUT;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BillingManager$suspendUntilReady$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
