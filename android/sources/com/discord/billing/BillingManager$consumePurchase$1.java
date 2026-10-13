package com.discord.billing;

import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingResult;
import com.discord.billing.BillingManager;
import com.discord.billing.BillingManagerException;
import com.discord.crash_reporting.CrashReporting;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.BillingManager$consumePurchase$1", f = "BillingManager.kt", l = {597}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$consumePurchase$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Function1<BillingManagerException, Unit> $onError;
    final /* synthetic */ Function0<Unit> $onSuccess;
    final /* synthetic */ String $purchaseToken;
    int label;
    final /* synthetic */ BillingManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BillingManager$consumePurchase$1(BillingManager billingManager, Function1<? super BillingManagerException, Unit> function1, String str, Function0<Unit> function0, Continuation continuation) {
        super(2, continuation);
        this.this$0 = billingManager;
        this.$onError = function1;
        this.$purchaseToken = str;
        this.$onSuccess = function0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void invokeSuspend$lambda$0(BillingManager billingManager, Function1 function1, Function0 function0, BillingResult billingResult, String str) {
        boolean isNotOk;
        Intrinsics.checkNotNull(billingResult);
        isNotOk = billingManager.isNotOk(billingResult);
        if (isNotOk) {
            function1.invoke(BillingManagerException.INSTANCE.fromBillingResult(billingResult.a));
        } else {
            function0.invoke();
        }
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BillingManager$consumePurchase$1(this.this$0, this.$onError, this.$purchaseToken, this.$onSuccess, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        BillingManager$consumePurchase$1 billingManager$consumePurchase$1;
        Exception exc;
        BillingClient billingClient;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            try {
                BillingManager billingManager = this.this$0;
                this.label = 1;
                billingManager$consumePurchase$1 = this;
                try {
                    obj = BillingManager.suspendUntilReady$default(billingManager, 0L, billingManager$consumePurchase$1, 1, null);
                    if (obj == aVar) {
                        return aVar;
                    }
                } catch (CancellationException e9) {
                    e = e9;
                    throw e;
                } catch (Exception e10) {
                    e = e10;
                    exc = e;
                    CrashReporting.captureException$default(CrashReporting.INSTANCE, exc, false, 2, null);
                    billingManager$consumePurchase$1.$onError.invoke(BillingManagerException.INSTANCE.wrap(exc, "consumePurchase"));
                    return Unit.a;
                }
            } catch (CancellationException e11) {
                e = e11;
            } catch (Exception e12) {
                e = e12;
                billingManager$consumePurchase$1 = this;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            try {
                ki.b.R(obj);
                billingManager$consumePurchase$1 = this;
            } catch (CancellationException e13) {
                throw e13;
            } catch (Exception e14) {
                exc = e14;
                billingManager$consumePurchase$1 = this;
                CrashReporting.captureException$default(CrashReporting.INSTANCE, exc, false, 2, null);
                billingManager$consumePurchase$1.$onError.invoke(BillingManagerException.INSTANCE.wrap(exc, "consumePurchase"));
                return Unit.a;
            }
        }
        BillingManager.ClientReadyState clientReadyState = (BillingManager.ClientReadyState) obj;
        billingManager$consumePurchase$1.this$0.trackBillingMetric("operation", c0.g("method:consume_purchase", "client_ready:" + clientReadyState.getMetricValue()));
        if (clientReadyState == BillingManager.ClientReadyState.TIMEOUT) {
            billingManager$consumePurchase$1.$onError.invoke(new BillingManagerException.BillingClientNotReadyException());
            return Unit.a;
        }
        String str = billingManager$consumePurchase$1.$purchaseToken;
        if (str == null) {
            throw new IllegalArgumentException("Purchase token must be set");
        }
        a5.h hVar = new a5.h();
        hVar.f173b = str;
        Intrinsics.checkNotNullExpressionValue(hVar, "build(...)");
        billingClient = billingManager$consumePurchase$1.this$0.billingClient;
        if (billingClient == null) {
            Intrinsics.throwUninitializedPropertyAccessException("billingClient");
            billingClient = null;
        }
        billingClient.a(hVar, new a(billingManager$consumePurchase$1.this$0, billingManager$consumePurchase$1.$onError, billingManager$consumePurchase$1.$onSuccess));
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BillingManager$consumePurchase$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
