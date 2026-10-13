package com.discord.billing;

import a5.k;
import android.app.Activity;
import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.discord.billing.BillingManager;
import com.discord.billing.BillingManagerException;
import com.discord.billing.types.BillingFlowParams;
import com.discord.billing.types.ProductType;
import com.discord.billing.types.QueryProductDetailsParams;
import com.discord.crash_reporting.CrashReporting;
import java.util.List;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.x;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.BillingManager$purchase$1", f = "BillingManager.kt", l = {513}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$purchase$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Activity $activity;
    final /* synthetic */ String $offerId;
    final /* synthetic */ String $oldProductId;
    final /* synthetic */ Function1<BillingManagerException, Unit> $onError;
    final /* synthetic */ Function0<Unit> $onSuccess;
    final /* synthetic */ String $productId;
    final /* synthetic */ ProductType $productType;
    final /* synthetic */ String $purchaseToken;
    final /* synthetic */ String $userId;
    int label;
    final /* synthetic */ BillingManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BillingManager$purchase$1(BillingManager billingManager, Function1<? super BillingManagerException, Unit> function1, ProductType productType, String str, String str2, String str3, String str4, String str5, Activity activity, Function0<Unit> function0, Continuation continuation) {
        super(2, continuation);
        this.this$0 = billingManager;
        this.$onError = function1;
        this.$productType = productType;
        this.$productId = str;
        this.$oldProductId = str2;
        this.$purchaseToken = str3;
        this.$userId = str4;
        this.$offerId = str5;
        this.$activity = activity;
        this.$onSuccess = function0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void invokeSuspend$lambda$1(BillingManager billingManager, Function1 function1, String str, String str2, String str3, String str4, String str5, Activity activity, Function0 function0, Ref.BooleanRef booleanRef, BillingResult billingResult, QueryProductDetailsResult queryProductDetailsResult) {
        boolean isNotOk;
        BillingClient billingClient;
        synchronized (billingManager) {
            if (booleanRef.element) {
                return;
            }
            booleanRef.element = true;
            Unit unit = Unit.a;
            Intrinsics.checkNotNull(billingResult);
            isNotOk = billingManager.isNotOk(billingResult);
            if (isNotOk) {
                function1.invoke(BillingManagerException.INSTANCE.fromBillingResult(billingResult.a));
                return;
            }
            try {
                BillingFlowParams billingFlowParams = BillingFlowParams.INSTANCE;
                List<ProductDetails> list = queryProductDetailsResult.a;
                Intrinsics.checkNotNullExpressionValue(list, "getProductDetailsList(...)");
                com.android.billingclient.api.BillingFlowParams createWithProductDetails = billingFlowParams.createWithProductDetails(list, str, str2, str3, str4, str5);
                if (createWithProductDetails == null) {
                    function1.invoke(new BillingManagerException.BillingException("purchase failed to create BillingFlowParams"));
                    return;
                }
                if (!activity.isFinishing() && !activity.isDestroyed()) {
                    billingClient = billingManager.billingClient;
                    if (billingClient == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("billingClient");
                        billingClient = null;
                    }
                    billingClient.e(activity, createWithProductDetails);
                    function0.invoke();
                    return;
                }
                function1.invoke(new BillingManagerException.BillingException("Activity is no longer valid"));
            } catch (AssertionError e9) {
                String message = e9.getMessage();
                Intrinsics.checkNotNull(message);
                function1.invoke(new BillingManagerException.BillingException("purchase AssertionError: " + message));
            }
        }
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BillingManager$purchase$1(this.this$0, this.$onError, this.$productType, this.$productId, this.$oldProductId, this.$purchaseToken, this.$userId, this.$offerId, this.$activity, this.$onSuccess, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object suspendUntilReady$default;
        BillingManager.ClientReadyState clientReadyState;
        BillingClient billingClient;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
            if (i5 == 0) {
                ki.b.R(obj);
                BillingManager billingManager = this.this$0;
                this.label = 1;
                suspendUntilReady$default = BillingManager.suspendUntilReady$default(billingManager, 0L, this, 1, null);
                if (suspendUntilReady$default == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                suspendUntilReady$default = obj;
            }
            clientReadyState = (BillingManager.ClientReadyState) suspendUntilReady$default;
            this.this$0.trackBillingMetric("operation", c0.g("method:purchase", "client_ready:" + clientReadyState.getMetricValue()));
        } catch (CancellationException e9) {
            throw e9;
        } catch (Exception e10) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, e10, false, 2, null);
            this.$onError.invoke(BillingManagerException.INSTANCE.wrap(e10, "purchase"));
        }
        if (clientReadyState == BillingManager.ClientReadyState.TIMEOUT) {
            this.$onError.invoke(new BillingManagerException.BillingClientNotReadyException());
            return Unit.a;
        }
        final Ref.BooleanRef booleanRef = new Ref.BooleanRef();
        billingClient = this.this$0.billingClient;
        if (billingClient == null) {
            Intrinsics.throwUninitializedPropertyAccessException("billingClient");
            billingClient = null;
        }
        QueryProductDetailsParams queryProductDetailsParams = QueryProductDetailsParams.INSTANCE;
        ProductType productType = this.$productType;
        String[] elements = {this.$productId, this.$oldProductId};
        Intrinsics.checkNotNullParameter(elements, "elements");
        com.android.billingclient.api.QueryProductDetailsParams create = queryProductDetailsParams.create(productType, x.r(elements));
        final BillingManager billingManager2 = this.this$0;
        final Function1<BillingManagerException, Unit> function1 = this.$onError;
        final String str = this.$productId;
        final String str2 = this.$oldProductId;
        final String str3 = this.$purchaseToken;
        final String str4 = this.$userId;
        final String str5 = this.$offerId;
        final Activity activity = this.$activity;
        final Function0<Unit> function0 = this.$onSuccess;
        billingClient.f(create, new k() { // from class: com.discord.billing.c
            @Override // a5.k
            public final void a(BillingResult billingResult, QueryProductDetailsResult queryProductDetailsResult) {
                BillingManager$purchase$1.invokeSuspend$lambda$1(BillingManager.this, function1, str, str2, str3, str4, str5, activity, function0, booleanRef, billingResult, queryProductDetailsResult);
            }
        });
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BillingManager$purchase$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
