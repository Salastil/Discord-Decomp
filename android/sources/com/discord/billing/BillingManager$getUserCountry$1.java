package com.discord.billing;

import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingConfig;
import com.android.billingclient.api.BillingResult;
import com.discord.billing.BillingManager;
import com.discord.billing.BillingManagerException;
import com.discord.crash_reporting.CrashReporting;
import com.discord.misc.utilities.backoff.ExponentialBackoff;
import com.discord.misc.utilities.backoff.MaxAttemptsExceededException;
import ha.k;
import java.util.Locale;
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
@lo.d(c = "com.discord.billing.BillingManager$getUserCountry$1", f = "BillingManager.kt", l = {692, 705}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class BillingManager$getUserCountry$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ ExponentialBackoff $getUserCountryBackoff;
    final /* synthetic */ Function1<BillingManagerException, Unit> $onError;
    final /* synthetic */ Function1<String, Unit> $onSuccess;
    int label;
    final /* synthetic */ BillingManager this$0;

    @Metadata(d1 = {"\u0000\u0006\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001H\n"}, d2 = {"<anonymous>", "Lcom/discord/billing/BillingManager$BillingConfigResponse;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.billing.BillingManager$getUserCountry$1$1", f = "BillingManager.kt", l = {728}, m = "invokeSuspend")
    /* renamed from: com.discord.billing.BillingManager$getUserCountry$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function1<Continuation, Object> {
        int label;
        final /* synthetic */ BillingManager this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(BillingManager billingManager, Continuation continuation) {
            super(1, continuation);
            this.this$0 = billingManager;
        }

        @Override // lo.a
        public final Continuation create(Continuation continuation) {
            return new AnonymousClass1(this.this$0, continuation);
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r3v2, types: [com.discord.billing.BillingManager$getUserCountry$1$1$1] */
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
            final o a = x.a();
            Intrinsics.checkNotNullExpressionValue(new k(1), "build(...)");
            billingClient = this.this$0.billingClient;
            BillingClient billingClient2 = billingClient;
            if (billingClient == null) {
                Intrinsics.throwUninitializedPropertyAccessException("billingClient");
                billingClient2 = 0;
            }
            billingClient2.c(new a5.d() { // from class: com.discord.billing.BillingManager.getUserCountry.1.1.1
                @Override // a5.d
                public void onBillingConfigResponse(BillingResult billingResult, BillingConfig billingConfig) {
                    Intrinsics.checkNotNullParameter(billingResult, "billingResult");
                    CompletableDeferred.this.V(new BillingManager.BillingConfigResponse(billingResult, billingConfig));
                }
            });
            this.label = 1;
            Object w5 = a.w(this);
            return w5 == aVar ? aVar : w5;
        }

        @Override // kotlin.jvm.functions.Function1
        public final Object invoke(Continuation continuation) {
            return ((AnonymousClass1) create(continuation)).invokeSuspend(Unit.a);
        }
    }

    @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "response", "Lcom/discord/billing/BillingManager$BillingConfigResponse;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.billing.BillingManager$getUserCountry$1$2", f = "BillingManager.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.billing.BillingManager$getUserCountry$1$2, reason: invalid class name */
    public static final class AnonymousClass2 extends h implements Function2<BillingManager.BillingConfigResponse, Continuation, Object> {
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
        public final Object invoke(BillingManager.BillingConfigResponse billingConfigResponse, Continuation continuation) {
            return ((AnonymousClass2) create(billingConfigResponse, continuation)).invokeSuspend(Unit.a);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            boolean isRetryableError;
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            isRetryableError = this.this$0.isRetryableError(((BillingManager.BillingConfigResponse) this.L$0).getBillingResult());
            return Boolean.valueOf(isRetryableError);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public BillingManager$getUserCountry$1(BillingManager billingManager, Function1<? super BillingManagerException, Unit> function1, ExponentialBackoff exponentialBackoff, Function1<? super String, Unit> function12, Continuation continuation) {
        super(2, continuation);
        this.this$0 = billingManager;
        this.$onError = function1;
        this.$getUserCountryBackoff = exponentialBackoff;
        this.$onSuccess = function12;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new BillingManager$getUserCountry$1(this.this$0, this.$onError, this.$getUserCountryBackoff, this.$onSuccess, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x009a, code lost:
    
        if (r13 == r1) goto L36;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Exception exc;
        BillingManager$getUserCountry$1 billingManager$getUserCountry$1;
        MaxAttemptsExceededException maxAttemptsExceededException;
        boolean isNotOk;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 != 0) {
            try {
            } catch (MaxAttemptsExceededException e9) {
                maxAttemptsExceededException = e9;
                billingManager$getUserCountry$1 = this;
                billingManager$getUserCountry$1.$onError.invoke(new BillingManagerException.BillingException(a3.e.k("getUserCountry max attempts exceeded: ", maxAttemptsExceededException.getMessage())));
                return Unit.a;
            } catch (CancellationException e10) {
                throw e10;
            } catch (Exception e11) {
                exc = e11;
                billingManager$getUserCountry$1 = this;
                CrashReporting.captureException$default(CrashReporting.INSTANCE, exc, false, 2, null);
                billingManager$getUserCountry$1.$onError.invoke(BillingManagerException.INSTANCE.wrap(exc, "getUserCountry"));
                return Unit.a;
            }
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                billingManager$getUserCountry$1 = this;
                BillingManager.BillingConfigResponse billingConfigResponse = (BillingManager.BillingConfigResponse) obj;
                BillingResult billingResult = billingConfigResponse.getBillingResult();
                BillingConfig billingConfig = billingConfigResponse.getBillingConfig();
                if (billingConfig == null) {
                    billingManager$getUserCountry$1.$onError.invoke(new BillingManagerException.BillingException("getUserCountry returned null billingConfig"));
                } else {
                    isNotOk = billingManager$getUserCountry$1.this$0.isNotOk(billingResult);
                    if (isNotOk) {
                        billingManager$getUserCountry$1.$onError.invoke(BillingManagerException.INSTANCE.fromBillingResult(billingResult.a));
                    } else {
                        Function1<String, Unit> function1 = billingManager$getUserCountry$1.$onSuccess;
                        String str = billingConfig.a;
                        Intrinsics.checkNotNullExpressionValue(str, "getCountryCode(...)");
                        String upperCase = str.toUpperCase(Locale.ROOT);
                        Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
                        function1.invoke(upperCase);
                    }
                }
                return Unit.a;
            }
            ki.b.R(obj);
            billingManager$getUserCountry$1 = this;
        } else {
            ki.b.R(obj);
            try {
                BillingManager billingManager = this.this$0;
                this.label = 1;
                billingManager$getUserCountry$1 = this;
                try {
                    obj = BillingManager.suspendUntilReady$default(billingManager, 0L, billingManager$getUserCountry$1, 1, null);
                    if (obj == aVar) {
                        return aVar;
                    }
                } catch (MaxAttemptsExceededException e12) {
                    e = e12;
                    maxAttemptsExceededException = e;
                    billingManager$getUserCountry$1.$onError.invoke(new BillingManagerException.BillingException(a3.e.k("getUserCountry max attempts exceeded: ", maxAttemptsExceededException.getMessage())));
                    return Unit.a;
                } catch (CancellationException e13) {
                    e = e13;
                    throw e;
                } catch (Exception e14) {
                    e = e14;
                    exc = e;
                    CrashReporting.captureException$default(CrashReporting.INSTANCE, exc, false, 2, null);
                    billingManager$getUserCountry$1.$onError.invoke(BillingManagerException.INSTANCE.wrap(exc, "getUserCountry"));
                    return Unit.a;
                }
            } catch (MaxAttemptsExceededException e15) {
                e = e15;
                billingManager$getUserCountry$1 = this;
            } catch (CancellationException e16) {
                e = e16;
            } catch (Exception e17) {
                e = e17;
                billingManager$getUserCountry$1 = this;
            }
        }
        BillingManager.ClientReadyState clientReadyState = (BillingManager.ClientReadyState) obj;
        billingManager$getUserCountry$1.this$0.trackBillingMetric("operation", c0.g("method:get_user_country", "client_ready:" + clientReadyState.getMetricValue()));
        if (clientReadyState == BillingManager.ClientReadyState.TIMEOUT) {
            billingManager$getUserCountry$1.$onError.invoke(new BillingManagerException.BillingClientNotReadyException());
            return Unit.a;
        }
        ExponentialBackoff exponentialBackoff = billingManager$getUserCountry$1.$getUserCountryBackoff;
        AnonymousClass1 anonymousClass1 = new AnonymousClass1(billingManager$getUserCountry$1.this$0, null);
        AnonymousClass2 anonymousClass2 = new AnonymousClass2(billingManager$getUserCountry$1.this$0, null);
        billingManager$getUserCountry$1.label = 2;
        obj = exponentialBackoff.performBackoff(anonymousClass1, anonymousClass2, this);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((BillingManager$getUserCountry$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
