package com.discord.billing;

import com.android.billingclient.api.BillingClient;
import com.discord.billing.BillingManager;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lo.h;

@Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0010\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", ""}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.BillingManager$reconnect$1", f = "BillingManager.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$reconnect$1 extends h implements Function1<Continuation, Object> {
    int label;
    final /* synthetic */ BillingManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public BillingManager$reconnect$1(BillingManager billingManager, Continuation continuation) {
        super(1, continuation);
        this.this$0 = billingManager;
    }

    @Override // lo.a
    public final Continuation create(Continuation continuation) {
        return new BillingManager$reconnect$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        BillingClient billingClient;
        BillingManager$billingClientStateListener$1 billingManager$billingClientStateListener$1;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        billingClient = this.this$0.billingClient;
        if (billingClient == null) {
            Intrinsics.throwUninitializedPropertyAccessException("billingClient");
            billingClient = null;
        }
        billingManager$billingClientStateListener$1 = this.this$0.billingClientStateListener;
        billingClient.h(billingManager$billingClientStateListener$1);
        this.this$0.updateConnectionState(BillingManager.ConnectionState.CONNECTING);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Continuation continuation) {
        return ((BillingManager$reconnect$1) create(continuation)).invokeSuspend(Unit.a);
    }
}
