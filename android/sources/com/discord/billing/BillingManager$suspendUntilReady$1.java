package com.discord.billing;

import kotlin.Metadata;
import kotlin.coroutines.Continuation;
import org.jetbrains.annotations.NotNull;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.BillingManager", f = "BillingManager.kt", l = {297}, m = "suspendUntilReady")
/* loaded from: classes.dex */
public final class BillingManager$suspendUntilReady$1 extends lo.c {
    Object L$0;
    int label;
    /* synthetic */ Object result;
    final /* synthetic */ BillingManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public BillingManager$suspendUntilReady$1(BillingManager billingManager, Continuation continuation) {
        super(continuation);
        this.this$0 = billingManager;
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        Object suspendUntilReady;
        this.result = obj;
        this.label |= Integer.MIN_VALUE;
        suspendUntilReady = this.this$0.suspendUntilReady(0L, this);
        return suspendUntilReady;
    }
}
