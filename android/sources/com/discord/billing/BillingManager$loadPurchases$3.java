package com.discord.billing;

import a5.m;
import a5.n;
import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingResult;
import com.discord.billing.BillingManager;
import com.discord.billing.BillingManagerException;
import com.discord.crash_reporting.CrashReporting;
import java.util.List;
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
@lo.d(c = "com.discord.billing.BillingManager$loadPurchases$3", f = "BillingManager.kt", l = {639}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$loadPurchases$3 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Function1<Exception, Unit> $onError;
    final /* synthetic */ Function0<Unit> $onSuccess;
    int label;
    final /* synthetic */ BillingManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BillingManager$loadPurchases$3(BillingManager billingManager, Function1<? super Exception, Unit> function1, Function0<Unit> function0, Continuation continuation) {
        super(2, continuation);
        this.this$0 = billingManager;
        this.$onError = function1;
        this.$onSuccess = function0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void invokeSuspend$lambda$0(BillingManager billingManager, BillingResult billingResult, List list) {
        Intrinsics.checkNotNull(billingResult);
        billingManager.handlePurchases(billingResult, list, false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void invokeSuspend$lambda$1(BillingManager billingManager, BillingResult billingResult, List list) {
        Intrinsics.checkNotNull(billingResult);
        billingManager.handlePurchases(billingResult, list, false);
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BillingManager$loadPurchases$3(this.this$0, this.$onError, this.$onSuccess, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        BillingManager$loadPurchases$3 billingManager$loadPurchases$3;
        Exception exc;
        BillingClient billingClient;
        BillingClient billingClient2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            try {
                BillingManager billingManager = this.this$0;
                this.label = 1;
                billingManager$loadPurchases$3 = this;
                try {
                    obj = BillingManager.suspendUntilReady$default(billingManager, 0L, billingManager$loadPurchases$3, 1, null);
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
                    billingManager$loadPurchases$3.$onError.invoke(exc);
                    return Unit.a;
                }
            } catch (CancellationException e11) {
                e = e11;
            } catch (Exception e12) {
                e = e12;
                billingManager$loadPurchases$3 = this;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            try {
                ki.b.R(obj);
                billingManager$loadPurchases$3 = this;
            } catch (CancellationException e13) {
                throw e13;
            } catch (Exception e14) {
                exc = e14;
                billingManager$loadPurchases$3 = this;
                CrashReporting.captureException$default(CrashReporting.INSTANCE, exc, false, 2, null);
                billingManager$loadPurchases$3.$onError.invoke(exc);
                return Unit.a;
            }
        }
        BillingManager.ClientReadyState clientReadyState = (BillingManager.ClientReadyState) obj;
        billingManager$loadPurchases$3.this$0.trackBillingMetric("operation", c0.g("method:load_purchases", "client_ready:" + clientReadyState.getMetricValue()));
        if (clientReadyState == BillingManager.ClientReadyState.TIMEOUT) {
            billingManager$loadPurchases$3.$onError.invoke(new BillingManagerException.BillingClientNotReadyException());
            return Unit.a;
        }
        billingClient = billingManager$loadPurchases$3.this$0.billingClient;
        if (billingClient == null) {
            Intrinsics.throwUninitializedPropertyAccessException("billingClient");
            billingClient = null;
        }
        m mVar = new m();
        mVar.f193d = "subs";
        billingClient.g(new n(mVar), new b(0, billingManager$loadPurchases$3.this$0));
        billingClient2 = billingManager$loadPurchases$3.this$0.billingClient;
        if (billingClient2 == null) {
            Intrinsics.throwUninitializedPropertyAccessException("billingClient");
            billingClient2 = null;
        }
        m mVar2 = new m();
        mVar2.f193d = "inapp";
        billingClient2.g(new n(mVar2), new b(1, billingManager$loadPurchases$3.this$0));
        billingManager$loadPurchases$3.$onSuccess.invoke();
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BillingManager$loadPurchases$3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
