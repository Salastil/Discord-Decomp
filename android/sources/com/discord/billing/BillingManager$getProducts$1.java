package com.discord.billing;

import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.discord.billing.BillingManager;
import com.discord.billing.BillingManagerException;
import com.discord.billing.react.events.serialization.SerializeProductDetailsKt;
import com.discord.billing.types.ProductType;
import com.discord.billing.types.QueryProductDetailsParams;
import com.discord.crash_reporting.CrashReporting;
import com.discord.misc.utilities.backoff.ExponentialBackoff;
import com.discord.misc.utilities.backoff.MaxAttemptsExceededException;
import com.discord.react.utilities.NativeArrayExtensionsKt;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReadableNativeArray;
import java.util.List;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.o;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.billing.BillingManager$getProducts$1", f = "BillingManager.kt", l = {411, 424}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$getProducts$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ ExponentialBackoff $getProductsBackoff;
    final /* synthetic */ Function1<BillingManagerException, Unit> $onError;
    final /* synthetic */ List<String> $productIds;
    final /* synthetic */ ProductType $productType;
    final /* synthetic */ Promise $reactPromise;
    int label;
    final /* synthetic */ BillingManager this$0;

    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", "Lcom/discord/billing/BillingManager$ProductDetailsResponse;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.billing.BillingManager$getProducts$1$1", f = "BillingManager.kt", l = {448}, m = "invokeSuspend")
    /* renamed from: com.discord.billing.BillingManager$getProducts$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function1<Continuation, Object> {
        final /* synthetic */ List<String> $productIds;
        final /* synthetic */ ProductType $productType;
        int label;
        final /* synthetic */ BillingManager this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(BillingManager billingManager, ProductType productType, List<String> list, Continuation continuation) {
            super(1, continuation);
            this.this$0 = billingManager;
            this.$productType = productType;
            this.$productIds = list;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void invokeSuspend$lambda$0(CompletableDeferred completableDeferred, BillingResult billingResult, QueryProductDetailsResult queryProductDetailsResult) {
            Intrinsics.checkNotNull(billingResult);
            completableDeferred.V(new BillingManager.ProductDetailsResponse(billingResult, queryProductDetailsResult.a));
        }

        @Override // lo.a
        public final Continuation create(Continuation continuation) {
            return new AnonymousClass1(this.this$0, this.$productType, this.$productIds, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            BillingClient billingClient;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 != 0) {
                if (i5 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return obj;
            }
            ki.b.R(obj);
            o a = x.a();
            b bVar = new b(3, a);
            billingClient = this.this$0.billingClient;
            if (billingClient == null) {
                Intrinsics.throwUninitializedPropertyAccessException("billingClient");
                billingClient = null;
            }
            billingClient.f(QueryProductDetailsParams.INSTANCE.create(ProductType.valueOf(this.$productType.name()), this.$productIds), bVar);
            this.label = 1;
            Object w5 = a.w(this);
            return w5 == aVar ? aVar : w5;
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation continuation) {
            return ((AnonymousClass1) create(continuation)).invokeSuspend(Unit.a);
        }
    }

    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "productDetailsResponse", "Lcom/discord/billing/BillingManager$ProductDetailsResponse;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.billing.BillingManager$getProducts$1$2", f = "BillingManager.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.billing.BillingManager$getProducts$1$2, reason: invalid class name */
    public static final class AnonymousClass2 extends h implements Function2<BillingManager.ProductDetailsResponse, Continuation, Object> {
        /* synthetic */ Object L$0;
        int label;
        final /* synthetic */ BillingManager this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass2(BillingManager billingManager, Continuation continuation) {
            super(2, continuation);
            this.this$0 = billingManager;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            AnonymousClass2 anonymousClass2 = new AnonymousClass2(this.this$0, continuation);
            anonymousClass2.L$0 = obj;
            return anonymousClass2;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(BillingManager.ProductDetailsResponse productDetailsResponse, Continuation continuation) {
            return ((AnonymousClass2) create(productDetailsResponse, continuation)).invokeSuspend(Unit.a);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            boolean isRetryableError;
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            isRetryableError = this.this$0.isRetryableError(((BillingManager.ProductDetailsResponse) this.L$0).getBillingResult());
            return Boolean.valueOf(isRetryableError);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BillingManager$getProducts$1(BillingManager billingManager, Function1<? super BillingManagerException, Unit> function1, ExponentialBackoff exponentialBackoff, Promise promise, ProductType productType, List<String> list, Continuation continuation) {
        super(2, continuation);
        this.this$0 = billingManager;
        this.$onError = function1;
        this.$getProductsBackoff = exponentialBackoff;
        this.$reactPromise = promise;
        this.$productType = productType;
        this.$productIds = list;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BillingManager$getProducts$1(this.this$0, this.$onError, this.$getProductsBackoff, this.$reactPromise, this.$productType, this.$productIds, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x0091, code lost:
    
        if (r0 == r8) goto L28;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object suspendUntilReady$default;
        Object performBackoff;
        boolean isNotOk;
        boolean z5;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
        } catch (MaxAttemptsExceededException e9) {
            this.$onError.invoke(new BillingManagerException.BillingException(a3.e.k("getProducts max attempts exceeded: ", e9.getMessage())));
        } catch (CancellationException e10) {
            throw e10;
        } catch (Exception e11) {
            CrashReporting.captureException$default(CrashReporting.INSTANCE, e11, false, 2, null);
            this.$onError.invoke(BillingManagerException.INSTANCE.wrap(e11, "getProducts"));
        }
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
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                performBackoff = obj;
                BillingManager.ProductDetailsResponse productDetailsResponse = (BillingManager.ProductDetailsResponse) performBackoff;
                BillingResult billingResult = productDetailsResponse.getBillingResult();
                List<ProductDetails> component2 = productDetailsResponse.component2();
                if (component2 == null) {
                    this.$onError.invoke(new BillingManagerException.BillingException("getProducts returned null productDetails"));
                } else {
                    isNotOk = this.this$0.isNotOk(billingResult);
                    if (isNotOk) {
                        this.$onError.invoke(BillingManagerException.INSTANCE.fromBillingResult(billingResult.a));
                    } else {
                        try {
                            ReadableNativeArray serializeProductDetails = SerializeProductDetailsKt.serializeProductDetails(component2);
                            z5 = this.this$0.isProdBuild;
                            if (!z5) {
                                CrashReporting.addBreadcrumb$default(CrashReporting.INSTANCE, "resolving getProductsBackoff with " + NativeArrayExtensionsKt.toJsonString(serializeProductDetails), null, null, null, false, 30, null);
                            }
                            this.$reactPromise.resolve(serializeProductDetails);
                        } catch (AssertionError e12) {
                            this.$reactPromise.reject(e12);
                        }
                    }
                }
                return Unit.a;
            }
            ki.b.R(obj);
            suspendUntilReady$default = obj;
        }
        BillingManager.ClientReadyState clientReadyState = (BillingManager.ClientReadyState) suspendUntilReady$default;
        this.this$0.trackBillingMetric("operation", c0.g("method:get_products", "client_ready:" + clientReadyState.getMetricValue()));
        if (clientReadyState == BillingManager.ClientReadyState.TIMEOUT) {
            this.$onError.invoke(new BillingManagerException.BillingClientNotReadyException());
            return Unit.a;
        }
        ExponentialBackoff exponentialBackoff = this.$getProductsBackoff;
        AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, this.$productType, this.$productIds, null);
        AnonymousClass2 anonymousClass2 = new AnonymousClass2(this.this$0, null);
        this.label = 2;
        performBackoff = exponentialBackoff.performBackoff(anonymousClass1, anonymousClass2, this);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BillingManager$getProducts$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
