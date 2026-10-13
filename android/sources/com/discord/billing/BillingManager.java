package com.discord.billing;

import a5.d0;
import android.app.Activity;
import android.content.ComponentCallbacks2;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.c1;
import androidx.lifecycle.q;
import com.android.billingclient.api.BillingClient;
import com.android.billingclient.api.BillingConfig;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.Purchase;
import com.discord.billing.BillingManager;
import com.discord.billing.BillingManagerException;
import com.discord.billing.react.events.serialization.SerializeMockProductDetailsKt;
import com.discord.billing.types.ProductType;
import com.discord.jank_stats.JankRecordStore;
import com.discord.metric_monitor.MetricEvent;
import com.discord.metric_monitor.MonitoringAgent;
import com.discord.misc.utilities.backoff.ExponentialBackoff;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import io.sentry.hints.j;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.collections.x;
import kotlin.coroutines.Continuation;
import kotlin.enums.EnumEntries;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function5;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.o;
import nr.p1;
import nr.r0;
import nr.s1;
import org.jetbrains.annotations.NotNull;
import org.json.JSONArray;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000Ã\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u001b\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\"\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\b*\u0001o\b\u0000\u0018\u00002\u00020\u0001:\u0004vwxyBq\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\u0012\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006\u0012\u0018\u0010\u000b\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\b0\n\u0012*\u0010\u000e\u001a&\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\b0\f¢\u0006\u0004\b\u000f\u0010\u0010J\r\u0010\u0011\u001a\u00020\b¢\u0006\u0004\b\u0011\u0010\u0012J\r\u0010\u0013\u001a\u00020\b¢\u0006\u0004\b\u0013\u0010\u0012J?\u0010\u001c\u001a\u00020\b2\f\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\r0\u00142\u0006\u0010\u0017\u001a\u00020\u00162\u0006\u0010\u0019\u001a\u00020\u00182\u0012\u0010\u001b\u001a\u000e\u0012\u0004\u0012\u00020\u001a\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0004\b\u001c\u0010\u001dJu\u0010'\u001a\u00020\b2\b\u0010\u001f\u001a\u0004\u0018\u00010\u001e2\u0006\u0010 \u001a\u00020\r2\u0006\u0010\u0017\u001a\u00020\u00162\u0006\u0010!\u001a\u00020\r2\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010#\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010$\u001a\u0004\u0018\u00010\r2\f\u0010&\u001a\b\u0012\u0004\u0012\u00020\b0%2\u0012\u0010\u001b\u001a\u000e\u0012\u0004\u0012\u00020\u001a\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0004\b'\u0010(J7\u0010)\u001a\u00020\b2\u0006\u0010#\u001a\u00020\r2\f\u0010&\u001a\b\u0012\u0004\u0012\u00020\b0%2\u0012\u0010\u001b\u001a\u000e\u0012\u0004\u0012\u00020\u001a\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0004\b)\u0010*J7\u0010-\u001a\u00020\b2\u000e\b\u0002\u0010&\u001a\b\u0012\u0004\u0012\u00020\b0%2\u0018\b\u0002\u0010\u001b\u001a\u0012\u0012\b\u0012\u00060+j\u0002`,\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0004\b-\u0010.J5\u0010/\u001a\u00020\b2\u0012\u0010&\u001a\u000e\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\b0\u00062\u0012\u0010\u001b\u001a\u000e\u0012\u0004\u0012\u00020\u001a\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0004\b/\u00100J\u0017\u00103\u001a\u0002022\u0006\u00101\u001a\u00020\u0002H\u0002¢\u0006\u0004\b3\u00104J'\u00107\u001a\u00020\b2\u0006\u00105\u001a\u00020\r2\u000e\b\u0002\u00106\u001a\b\u0012\u0004\u0012\u00020\r0\u0014H\u0002¢\u0006\u0004\b7\u00108J\u0017\u0010;\u001a\u00020\b2\u0006\u0010:\u001a\u000209H\u0002¢\u0006\u0004\b;\u0010<J\u001a\u0010@\u001a\u00020?2\b\b\u0002\u0010>\u001a\u00020=H\u0082@¢\u0006\u0004\b@\u0010AJ\u0017\u0010D\u001a\u00020\u00042\u0006\u0010C\u001a\u00020BH\u0002¢\u0006\u0004\bD\u0010EJ1\u0010I\u001a\u00020\b2\u0006\u0010C\u001a\u00020B2\u000e\u0010G\u001a\n\u0012\u0004\u0012\u00020F\u0018\u00010\u00142\b\b\u0002\u0010H\u001a\u00020\u0004H\u0002¢\u0006\u0004\bI\u0010JJ\u000f\u0010K\u001a\u00020\bH\u0002¢\u0006\u0004\bK\u0010\u0012J\u000f\u0010L\u001a\u00020\u0004H\u0002¢\u0006\u0004\bL\u0010MJ\u001f\u0010N\u001a\u00020\b2\u0006\u0010'\u001a\u00020F2\u0006\u0010H\u001a\u00020\u0004H\u0002¢\u0006\u0004\bN\u0010OJ\u0013\u0010P\u001a\u00020\u0004*\u00020BH\u0002¢\u0006\u0004\bP\u0010EJ,\u0010R\u001a\u00020\b*\u0012\u0012\b\u0012\u00060+j\u0002`,\u0012\u0004\u0012\u00020\b0\u00062\u0006\u0010Q\u001a\u00020\rH\u0082\u0002¢\u0006\u0004\bR\u0010SR\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010TR\u0014\u0010\u0005\u001a\u00020\u00048\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0005\u0010UR#\u0010\t\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u00068\u0006¢\u0006\f\n\u0004\b\t\u0010V\u001a\u0004\bW\u0010XR)\u0010\u000b\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\b0\n8\u0006¢\u0006\f\n\u0004\b\u000b\u0010Y\u001a\u0004\bZ\u0010[R;\u0010\u000e\u001a&\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\u0004\u0012\u0004\u0012\u00020\b0\f8\u0006¢\u0006\f\n\u0004\b\u000e\u0010\\\u001a\u0004\b]\u0010^R\u0016\u0010_\u001a\u0002098\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b_\u0010`R\u0016\u0010a\u001a\u00020\u00048\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\ba\u0010UR \u0010d\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00040c0b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bd\u0010eR\u0014\u0010f\u001a\u00020\r8\u0002X\u0082D¢\u0006\u0006\n\u0004\bf\u0010gR\u0014\u0010h\u001a\u00020\r8\u0002X\u0082D¢\u0006\u0006\n\u0004\bh\u0010gR\u001a\u0010j\u001a\b\u0012\u0004\u0012\u00020\r0i8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bj\u0010kR\u0016\u0010m\u001a\u00020l8\u0002@\u0002X\u0082.¢\u0006\u0006\n\u0004\bm\u0010nR\u0014\u0010p\u001a\u00020o8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\bp\u0010qR\u001a\u0010s\u001a\u00020r8\u0002X\u0082\u0004¢\u0006\f\n\u0004\bs\u0010t\u0012\u0004\bu\u0010\u0012¨\u0006z"}, d2 = {"Lcom/discord/billing/BillingManager;", "", "Lcom/facebook/react/bridge/ReactApplicationContext;", "reactContext", "", "isProdBuild", "Lkotlin/Function1;", "", "", "onConnectionUpdated", "Lkotlin/Function2;", "onPurchaseStateUpdated", "Lkotlin/Function5;", "", "onPurchaseUpdated", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;ZLkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function5;)V", "open", "()V", "close", "", "productIds", "Lcom/discord/billing/types/ProductType;", "productType", "Lcom/facebook/react/bridge/Promise;", "reactPromise", "Lcom/discord/billing/BillingManagerException;", "onError", "getProducts", "(Ljava/util/List;Lcom/discord/billing/types/ProductType;Lcom/facebook/react/bridge/Promise;Lkotlin/jvm/functions/Function1;)V", "Landroid/app/Activity;", "activity", "productId", "userId", "oldProductId", "purchaseToken", "offerId", "Lkotlin/Function0;", "onSuccess", "purchase", "(Landroid/app/Activity;Ljava/lang/String;Lcom/discord/billing/types/ProductType;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;)V", "consumePurchase", "(Ljava/lang/String;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;)V", "Ljava/lang/Exception;", "Lkotlin/Exception;", "loadPurchases", "(Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;)V", "getUserCountry", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;)V", "context", "Lkotlinx/coroutines/CoroutineScope;", "getCoroutineScope", "(Lcom/facebook/react/bridge/ReactApplicationContext;)Lkotlinx/coroutines/CoroutineScope;", "metricName", "tags", "trackBillingMetric", "(Ljava/lang/String;Ljava/util/List;)V", "Lcom/discord/billing/BillingManager$ConnectionState;", "state", "updateConnectionState", "(Lcom/discord/billing/BillingManager$ConnectionState;)V", "", "timeoutMs", "Lcom/discord/billing/BillingManager$ClientReadyState;", "suspendUntilReady", "(JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "Lcom/android/billingclient/api/BillingResult;", "billingResult", "isRetryableError", "(Lcom/android/billingclient/api/BillingResult;)Z", "Lcom/android/billingclient/api/Purchase;", "purchases", "isActivePurchase", "handlePurchases", "(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;Z)V", "reconnect", "isBillingClientReady", "()Z", "verifyPurchase", "(Lcom/android/billingclient/api/Purchase;Z)V", "isNotOk", "errorMessage", "invoke", "(Lkotlin/jvm/functions/Function1;Ljava/lang/String;)V", "Lcom/facebook/react/bridge/ReactApplicationContext;", "Z", "Lkotlin/jvm/functions/Function1;", "getOnConnectionUpdated", "()Lkotlin/jvm/functions/Function1;", "Lkotlin/jvm/functions/Function2;", "getOnPurchaseStateUpdated", "()Lkotlin/jvm/functions/Function2;", "Lkotlin/jvm/functions/Function5;", "getOnPurchaseUpdated", "()Lkotlin/jvm/functions/Function5;", "currentConnectionState", "Lcom/discord/billing/BillingManager$ConnectionState;", "mockBillingMode", "", "Lkotlinx/coroutines/CompletableDeferred;", "connectionReadyListeners", "Ljava/util/List;", "prodPackageName", "Ljava/lang/String;", "devPackageName", "", "allowedPackageNames", "Ljava/util/Set;", "Lcom/android/billingclient/api/BillingClient;", "billingClient", "Lcom/android/billingclient/api/BillingClient;", "com/discord/billing/BillingManager$billingClientStateListener$1", "billingClientStateListener", "Lcom/discord/billing/BillingManager$billingClientStateListener$1;", "Lcom/discord/misc/utilities/backoff/ExponentialBackoff;", "connectionBackoff", "Lcom/discord/misc/utilities/backoff/ExponentialBackoff;", "getConnectionBackoff$annotations", "ConnectionState", "ClientReadyState", "ProductDetailsResponse", "BillingConfigResponse", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBillingManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BillingManager.kt\ncom/discord/billing/BillingManager\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,787:1\n1869#2,2:788\n1869#2,2:790\n1869#2,2:793\n1869#2,2:795\n1#3:792\n*S KotlinDebug\n*F\n+ 1 BillingManager.kt\ncom/discord/billing/BillingManager\n*L\n264#1:788,2\n269#1:790,2\n325#1:793,2\n769#1:795,2\n*E\n"})
/* loaded from: classes.dex */
public final class BillingManager {

    @NotNull
    private final Set<String> allowedPackageNames;
    private BillingClient billingClient;

    @NotNull
    private final BillingManager$billingClientStateListener$1 billingClientStateListener;

    @NotNull
    private final ExponentialBackoff connectionBackoff;

    @NotNull
    private final List<CompletableDeferred> connectionReadyListeners;

    @NotNull
    private volatile ConnectionState currentConnectionState;

    @NotNull
    private final String devPackageName;
    private final boolean isProdBuild;
    private volatile boolean mockBillingMode;

    @NotNull
    private final Function1<Integer, Unit> onConnectionUpdated;

    @NotNull
    private final Function2<Integer, Boolean, Unit> onPurchaseStateUpdated;

    @NotNull
    private final Function5 onPurchaseUpdated;

    @NotNull
    private final String prodPackageName;

    @NotNull
    private final ReactApplicationContext reactContext;

    @Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\f\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\r\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\u000e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u000f\u001a\u00020\u00102\b\u0010\u0011\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001J\t\u0010\u0014\u001a\u00020\u0015HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006\u0016"}, d2 = {"Lcom/discord/billing/BillingManager$BillingConfigResponse;", "", "billingResult", "Lcom/android/billingclient/api/BillingResult;", "billingConfig", "Lcom/android/billingclient/api/BillingConfig;", "<init>", "(Lcom/android/billingclient/api/BillingResult;Lcom/android/billingclient/api/BillingConfig;)V", "getBillingResult", "()Lcom/android/billingclient/api/BillingResult;", "getBillingConfig", "()Lcom/android/billingclient/api/BillingConfig;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class BillingConfigResponse {
        private final BillingConfig billingConfig;

        @NotNull
        private final BillingResult billingResult;

        public BillingConfigResponse(@NotNull BillingResult billingResult, BillingConfig billingConfig) {
            Intrinsics.checkNotNullParameter(billingResult, "billingResult");
            this.billingResult = billingResult;
            this.billingConfig = billingConfig;
        }

        public static /* synthetic */ BillingConfigResponse copy$default(BillingConfigResponse billingConfigResponse, BillingResult billingResult, BillingConfig billingConfig, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                billingResult = billingConfigResponse.billingResult;
            }
            if ((i5 & 2) != 0) {
                billingConfig = billingConfigResponse.billingConfig;
            }
            return billingConfigResponse.copy(billingResult, billingConfig);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final BillingResult getBillingResult() {
            return this.billingResult;
        }

        /* renamed from: component2, reason: from getter */
        public final BillingConfig getBillingConfig() {
            return this.billingConfig;
        }

        @NotNull
        public final BillingConfigResponse copy(@NotNull BillingResult billingResult, BillingConfig billingConfig) {
            Intrinsics.checkNotNullParameter(billingResult, "billingResult");
            return new BillingConfigResponse(billingResult, billingConfig);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof BillingConfigResponse)) {
                return false;
            }
            BillingConfigResponse billingConfigResponse = (BillingConfigResponse) other;
            return Intrinsics.areEqual(this.billingResult, billingConfigResponse.billingResult) && Intrinsics.areEqual(this.billingConfig, billingConfigResponse.billingConfig);
        }

        public final BillingConfig getBillingConfig() {
            return this.billingConfig;
        }

        @NotNull
        public final BillingResult getBillingResult() {
            return this.billingResult;
        }

        public int hashCode() {
            int hashCode = this.billingResult.hashCode() * 31;
            BillingConfig billingConfig = this.billingConfig;
            return hashCode + (billingConfig == null ? 0 : billingConfig.hashCode());
        }

        @NotNull
        public String toString() {
            return "BillingConfigResponse(billingResult=" + this.billingResult + ", billingConfig=" + this.billingConfig + ")";
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\u000e\n\u0002\b\b\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\n¨\u0006\u000b"}, d2 = {"Lcom/discord/billing/BillingManager$ClientReadyState;", "", "metricValue", "", "<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "getMetricValue", "()Ljava/lang/String;", "IMMEDIATE", "AFTER_WAIT", "TIMEOUT", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ClientReadyState {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ ClientReadyState[] $VALUES;

        @NotNull
        private final String metricValue;
        public static final ClientReadyState IMMEDIATE = new ClientReadyState("IMMEDIATE", 0, "immediate");
        public static final ClientReadyState AFTER_WAIT = new ClientReadyState("AFTER_WAIT", 1, "after_wait");
        public static final ClientReadyState TIMEOUT = new ClientReadyState("TIMEOUT", 2, "timeout");

        private static final /* synthetic */ ClientReadyState[] $values() {
            return new ClientReadyState[]{IMMEDIATE, AFTER_WAIT, TIMEOUT};
        }

        static {
            ClientReadyState[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private ClientReadyState(String str, int i5, String str2) {
            this.metricValue = str2;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static ClientReadyState valueOf(String str) {
            return (ClientReadyState) Enum.valueOf(ClientReadyState.class, str);
        }

        public static ClientReadyState[] values() {
            return (ClientReadyState[]) $VALUES.clone();
        }

        @NotNull
        public final String getMetricValue() {
            return this.metricValue;
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\t\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u0011\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000b¨\u0006\f"}, d2 = {"Lcom/discord/billing/BillingManager$ConnectionState;", "", "value", "", "<init>", "(Ljava/lang/String;II)V", "getValue", "()I", "DISCONNECTED", "CONNECTING", "CONNECTED", "ERROR", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ConnectionState {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ ConnectionState[] $VALUES;
        private final int value;
        public static final ConnectionState DISCONNECTED = new ConnectionState("DISCONNECTED", 0, 0);
        public static final ConnectionState CONNECTING = new ConnectionState("CONNECTING", 1, 1);
        public static final ConnectionState CONNECTED = new ConnectionState("CONNECTED", 2, 2);
        public static final ConnectionState ERROR = new ConnectionState("ERROR", 3, 3);

        private static final /* synthetic */ ConnectionState[] $values() {
            return new ConnectionState[]{DISCONNECTED, CONNECTING, CONNECTED, ERROR};
        }

        static {
            ConnectionState[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
        }

        private ConnectionState(String str, int i5, int i6) {
            this.value = i6;
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static ConnectionState valueOf(String str) {
            return (ConnectionState) Enum.valueOf(ConnectionState.class, str);
        }

        public static ConnectionState[] values() {
            return (ConnectionState[]) $VALUES.clone();
        }

        public final int getValue() {
            return this.value;
        }
    }

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u000e\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0005¢\u0006\u0004\b\u0007\u0010\bJ\t\u0010\r\u001a\u00020\u0003HÆ\u0003J\u0011\u0010\u000e\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0005HÆ\u0003J%\u0010\u000f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u0010\b\u0002\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0013\u001a\u00020\u0014HÖ\u0001J\t\u0010\u0015\u001a\u00020\u0016HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0019\u0010\u0004\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u0017"}, d2 = {"Lcom/discord/billing/BillingManager$ProductDetailsResponse;", "", "billingResult", "Lcom/android/billingclient/api/BillingResult;", "productDetails", "", "Lcom/android/billingclient/api/ProductDetails;", "<init>", "(Lcom/android/billingclient/api/BillingResult;Ljava/util/List;)V", "getBillingResult", "()Lcom/android/billingclient/api/BillingResult;", "getProductDetails", "()Ljava/util/List;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class ProductDetailsResponse {

        @NotNull
        private final BillingResult billingResult;
        private final List<ProductDetails> productDetails;

        public ProductDetailsResponse(@NotNull BillingResult billingResult, List<ProductDetails> list) {
            Intrinsics.checkNotNullParameter(billingResult, "billingResult");
            this.billingResult = billingResult;
            this.productDetails = list;
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ ProductDetailsResponse copy$default(ProductDetailsResponse productDetailsResponse, BillingResult billingResult, List list, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                billingResult = productDetailsResponse.billingResult;
            }
            if ((i5 & 2) != 0) {
                list = productDetailsResponse.productDetails;
            }
            return productDetailsResponse.copy(billingResult, list);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final BillingResult getBillingResult() {
            return this.billingResult;
        }

        public final List<ProductDetails> component2() {
            return this.productDetails;
        }

        @NotNull
        public final ProductDetailsResponse copy(@NotNull BillingResult billingResult, List<ProductDetails> productDetails) {
            Intrinsics.checkNotNullParameter(billingResult, "billingResult");
            return new ProductDetailsResponse(billingResult, productDetails);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof ProductDetailsResponse)) {
                return false;
            }
            ProductDetailsResponse productDetailsResponse = (ProductDetailsResponse) other;
            return Intrinsics.areEqual(this.billingResult, productDetailsResponse.billingResult) && Intrinsics.areEqual(this.productDetails, productDetailsResponse.productDetails);
        }

        @NotNull
        public final BillingResult getBillingResult() {
            return this.billingResult;
        }

        public final List<ProductDetails> getProductDetails() {
            return this.productDetails;
        }

        public int hashCode() {
            int hashCode = this.billingResult.hashCode() * 31;
            List<ProductDetails> list = this.productDetails;
            return hashCode + (list == null ? 0 : list.hashCode());
        }

        @NotNull
        public String toString() {
            return "ProductDetailsResponse(billingResult=" + this.billingResult + ", productDetails=" + this.productDetails + ")";
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v6, types: [com.discord.billing.BillingManager$billingClientStateListener$1] */
    public BillingManager(@NotNull ReactApplicationContext reactContext, boolean z5, @NotNull Function1<? super Integer, Unit> onConnectionUpdated, @NotNull Function2<? super Integer, ? super Boolean, Unit> onPurchaseStateUpdated, @NotNull Function5 onPurchaseUpdated) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(onConnectionUpdated, "onConnectionUpdated");
        Intrinsics.checkNotNullParameter(onPurchaseStateUpdated, "onPurchaseStateUpdated");
        Intrinsics.checkNotNullParameter(onPurchaseUpdated, "onPurchaseUpdated");
        this.reactContext = reactContext;
        this.isProdBuild = z5;
        this.onConnectionUpdated = onConnectionUpdated;
        this.onPurchaseStateUpdated = onPurchaseStateUpdated;
        this.onPurchaseUpdated = onPurchaseUpdated;
        this.currentConnectionState = ConnectionState.DISCONNECTED;
        this.connectionReadyListeners = new ArrayList();
        this.prodPackageName = "com.discord";
        this.devPackageName = "com.discord.debug.billingtesting";
        String[] elements = {"com.discord", "com.discord.debug.billingtesting"};
        Intrinsics.checkNotNullParameter(elements, "elements");
        this.allowedPackageNames = x.J(elements);
        this.billingClientStateListener = new a5.c() { // from class: com.discord.billing.BillingManager$billingClientStateListener$1
            @Override // a5.c
            public void onBillingServiceDisconnected() {
                boolean z6;
                BillingClient billingClient;
                z6 = BillingManager.this.mockBillingMode;
                if (z6) {
                    BillingManager.this.updateConnectionState(BillingManager.ConnectionState.CONNECTED);
                    return;
                }
                BillingManager.this.updateConnectionState(BillingManager.ConnectionState.DISCONNECTED);
                billingClient = BillingManager.this.billingClient;
                if (billingClient == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("billingClient");
                    billingClient = null;
                }
                if (billingClient.d()) {
                    return;
                }
                BillingManager.this.reconnect();
            }

            @Override // a5.c
            public void onBillingSetupFinished(BillingResult billingResult) {
                boolean isNotOk;
                ExponentialBackoff exponentialBackoff;
                Set set;
                ReactApplicationContext reactApplicationContext;
                boolean isRetryableError;
                Intrinsics.checkNotNullParameter(billingResult, "billingResult");
                isNotOk = BillingManager.this.isNotOk(billingResult);
                if (!isNotOk) {
                    BillingManager.this.mockBillingMode = false;
                    exponentialBackoff = BillingManager.this.connectionBackoff;
                    exponentialBackoff.succeed();
                    BillingManager.this.updateConnectionState(BillingManager.ConnectionState.CONNECTED);
                    BillingManager.loadPurchases$default(BillingManager.this, null, null, 3, null);
                    return;
                }
                set = BillingManager.this.allowedPackageNames;
                reactApplicationContext = BillingManager.this.reactContext;
                if (!set.contains(reactApplicationContext.getPackageName())) {
                    isRetryableError = BillingManager.this.isRetryableError(billingResult);
                    if (!isRetryableError) {
                        BillingManager.this.mockBillingMode = true;
                        BillingManager.this.updateConnectionState(BillingManager.ConnectionState.CONNECTED);
                        return;
                    }
                }
                BillingManager.this.reconnect();
            }
        };
        this.connectionBackoff = new ExponentialBackoff(r0.f15654d, 1000L, LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES, 10);
    }

    private static /* synthetic */ void getConnectionBackoff$annotations() {
    }

    private final CoroutineScope getCoroutineScope(ReactApplicationContext context) {
        ComponentCallbacks2 currentActivity = context.getCurrentActivity();
        LifecycleOwner lifecycleOwner = currentActivity instanceof LifecycleOwner ? (LifecycleOwner) currentActivity : null;
        q c6 = lifecycleOwner != null ? c1.c(lifecycleOwner) : null;
        return c6 != null ? c6 : r0.f15654d;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void handlePurchases(BillingResult billingResult, List<? extends Purchase> purchases, boolean isActivePurchase) {
        this.onPurchaseStateUpdated.invoke(Integer.valueOf(billingResult.a), Boolean.valueOf(isActivePurchase));
        if (purchases == null || purchases.isEmpty()) {
            return;
        }
        Iterator<T> it = purchases.iterator();
        while (it.hasNext()) {
            verifyPurchase((Purchase) it.next(), isActivePurchase);
        }
    }

    public static /* synthetic */ void handlePurchases$default(BillingManager billingManager, BillingResult billingResult, List list, boolean z5, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            z5 = true;
        }
        billingManager.handlePurchases(billingResult, list, z5);
    }

    private final void invoke(Function1<? super Exception, Unit> function1, String str) {
        Intrinsics.checkNotNullParameter(function1, "<this>");
        function1.invoke(new IllegalStateException(str));
    }

    private final boolean isBillingClientReady() {
        BillingClient billingClient = this.billingClient;
        return billingClient != null && billingClient.d();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean isNotOk(BillingResult billingResult) {
        return billingResult.a != 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean isRetryableError(BillingResult billingResult) {
        if (!isNotOk(billingResult)) {
            return false;
        }
        Integer[] elements = {6, -1, 2, 12};
        Intrinsics.checkNotNullParameter(elements, "elements");
        return x.J(elements).contains(Integer.valueOf(billingResult.a));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ void loadPurchases$default(BillingManager billingManager, Function0 function0, Function1 function1, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            function0 = new a7.a(7);
        }
        if ((i5 & 2) != 0) {
            function1 = new ab.a(8);
        }
        billingManager.loadPurchases(function0, function1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit loadPurchases$lambda$8(Exception it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    public static /* synthetic */ void purchase$default(BillingManager billingManager, Activity activity, String str, ProductType productType, String str2, String str3, String str4, String str5, Function0 function0, Function1 function1, int i5, Object obj) {
        if ((i5 & 16) != 0) {
            str3 = null;
        }
        if ((i5 & 32) != 0) {
            str4 = null;
        }
        if ((i5 & 64) != 0) {
            str5 = null;
        }
        billingManager.purchase(activity, str, productType, str2, str3, str4, str5, function0, function1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void reconnect() {
        try {
            this.connectionBackoff.fail(new BillingManager$reconnect$1(this, null));
        } catch (Exception unused) {
            updateConnectionState(ConnectionState.ERROR);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:19:0x008c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0033  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object suspendUntilReady(long j, Continuation continuation) {
        BillingManager$suspendUntilReady$1 billingManager$suspendUntilReady$1;
        int i5;
        CompletableDeferred completableDeferred;
        if (continuation instanceof BillingManager$suspendUntilReady$1) {
            billingManager$suspendUntilReady$1 = (BillingManager$suspendUntilReady$1) continuation;
            int i6 = billingManager$suspendUntilReady$1.label;
            if ((i6 & Integer.MIN_VALUE) != 0) {
                billingManager$suspendUntilReady$1.label = i6 - Integer.MIN_VALUE;
                Object obj = billingManager$suspendUntilReady$1.result;
                ko.a aVar = ko.a.f13464d;
                i5 = billingManager$suspendUntilReady$1.label;
                if (i5 != 0) {
                    ki.b.R(obj);
                    if (isBillingClientReady()) {
                        return ClientReadyState.IMMEDIATE;
                    }
                    if (this.currentConnectionState == ConnectionState.DISCONNECTED || this.currentConnectionState == ConnectionState.ERROR) {
                        reconnect();
                    }
                    o a = nr.x.a();
                    synchronized (this.connectionReadyListeners) {
                        if (this.currentConnectionState == ConnectionState.CONNECTED) {
                            return ClientReadyState.IMMEDIATE;
                        }
                        if (this.currentConnectionState == ConnectionState.ERROR) {
                            return ClientReadyState.TIMEOUT;
                        }
                        this.connectionReadyListeners.add(a);
                        try {
                            BillingManager$suspendUntilReady$3 billingManager$suspendUntilReady$3 = new BillingManager$suspendUntilReady$3(a, null);
                            billingManager$suspendUntilReady$1.L$0 = a;
                            billingManager$suspendUntilReady$1.label = 1;
                            Object b10 = s1.b(j, billingManager$suspendUntilReady$3, billingManager$suspendUntilReady$1);
                            if (b10 == aVar) {
                                return aVar;
                            }
                            obj = b10;
                            completableDeferred = a;
                        } catch (p1 unused) {
                            completableDeferred = a;
                            synchronized (this.connectionReadyListeners) {
                            }
                        }
                    }
                } else {
                    if (i5 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    completableDeferred = (CompletableDeferred) billingManager$suspendUntilReady$1.L$0;
                    try {
                        ki.b.R(obj);
                    } catch (p1 unused2) {
                        synchronized (this.connectionReadyListeners) {
                            this.connectionReadyListeners.remove(completableDeferred);
                        }
                        return ClientReadyState.TIMEOUT;
                    }
                }
                return (ClientReadyState) obj;
            }
        }
        billingManager$suspendUntilReady$1 = new BillingManager$suspendUntilReady$1(this, continuation);
        Object obj2 = billingManager$suspendUntilReady$1.result;
        ko.a aVar2 = ko.a.f13464d;
        i5 = billingManager$suspendUntilReady$1.label;
        if (i5 != 0) {
        }
        return (ClientReadyState) obj2;
    }

    public static /* synthetic */ Object suspendUntilReady$default(BillingManager billingManager, long j, Continuation continuation, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            j = 5000;
        }
        return billingManager.suspendUntilReady(j, continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void trackBillingMetric(String metricName, List<String> tags) {
        try {
            MonitoringAgent.INSTANCE.increment(new MetricEvent("billing_manager." + metricName, tags));
        } catch (Exception unused) {
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void trackBillingMetric$default(BillingManager billingManager, String str, List list, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            list = m0.f13512d;
        }
        billingManager.trackBillingMetric(str, list);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void updateConnectionState(ConnectionState state) {
        this.currentConnectionState = state;
        this.onConnectionUpdated.invoke(Integer.valueOf(state.getValue()));
        if (state == ConnectionState.CONNECTED) {
            synchronized (this.connectionReadyListeners) {
                try {
                    Iterator<T> it = this.connectionReadyListeners.iterator();
                    while (it.hasNext()) {
                        ((CompletableDeferred) it.next()).V(Boolean.TRUE);
                    }
                    this.connectionReadyListeners.clear();
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            return;
        }
        if (state == ConnectionState.ERROR) {
            synchronized (this.connectionReadyListeners) {
                try {
                    Iterator<T> it2 = this.connectionReadyListeners.iterator();
                    while (it2.hasNext()) {
                        ((CompletableDeferred) it2.next()).V(Boolean.FALSE);
                    }
                    this.connectionReadyListeners.clear();
                    Unit unit2 = Unit.a;
                } catch (Throwable th3) {
                    throw th3;
                }
            }
        }
    }

    private final void verifyPurchase(Purchase purchase, boolean isActivePurchase) {
        JSONObject jSONObject = purchase.f3628c;
        JSONObject jSONObject2 = purchase.f3628c;
        boolean z5 = (jSONObject.optInt("purchaseState", 1) != 4 ? true : 2) && !jSONObject2.optBoolean("acknowledged", true);
        boolean z6 = jSONObject2.optInt("purchaseState", 1) == 4;
        if ((z5 || z6) && this.allowedPackageNames.contains(jSONObject2.optString("packageName"))) {
            ArrayList arrayList = new ArrayList();
            if (jSONObject2.has("productIds")) {
                JSONArray optJSONArray = jSONObject2.optJSONArray("productIds");
                if (optJSONArray != null) {
                    for (int i5 = 0; i5 < optJSONArray.length(); i5++) {
                        arrayList.add(optJSONArray.optString(i5));
                    }
                }
            } else if (jSONObject2.has("productId")) {
                arrayList.add(jSONObject2.optString("productId"));
            }
            Intrinsics.checkNotNullExpressionValue(arrayList, "getProducts(...)");
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                String str = (String) it.next();
                ExternalPurchaseIdReporter externalPurchaseIdReporter = ExternalPurchaseIdReporter.INSTANCE;
                String optString = jSONObject2.optString("token", jSONObject2.optString("purchaseToken"));
                Intrinsics.checkNotNullExpressionValue(optString, "getPurchaseToken(...)");
                Intrinsics.checkNotNull(str);
                externalPurchaseIdReporter.report(optString, str);
                Function5 function5 = this.onPurchaseUpdated;
                String optString2 = jSONObject2.optString("token", jSONObject2.optString("purchaseToken"));
                Intrinsics.checkNotNullExpressionValue(optString2, "getPurchaseToken(...)");
                String optString3 = jSONObject2.optString("packageName");
                Intrinsics.checkNotNullExpressionValue(optString3, "getPackageName(...)");
                function5.invoke(optString2, optString3, str, Integer.valueOf(jSONObject2.optInt("purchaseState", 1) != 4 ? 1 : 2), Boolean.valueOf(isActivePurchase));
            }
        }
    }

    public final void close() {
        BillingClient billingClient = this.billingClient;
        if (billingClient == null) {
            updateConnectionState(ConnectionState.ERROR);
            return;
        }
        billingClient.b();
        this.connectionBackoff.cancel();
        updateConnectionState(ConnectionState.DISCONNECTED);
    }

    public final void consumePurchase(@NotNull String purchaseToken, @NotNull Function0<Unit> onSuccess, @NotNull Function1<? super BillingManagerException, Unit> onError) {
        Intrinsics.checkNotNullParameter(purchaseToken, "purchaseToken");
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Intrinsics.checkNotNullParameter(onError, "onError");
        nr.x.t(getCoroutineScope(this.reactContext), g0.a, new BillingManager$consumePurchase$1(this, onError, purchaseToken, onSuccess, null), 2);
    }

    @NotNull
    public final Function1<Integer, Unit> getOnConnectionUpdated() {
        return this.onConnectionUpdated;
    }

    @NotNull
    public final Function2<Integer, Boolean, Unit> getOnPurchaseStateUpdated() {
        return this.onPurchaseStateUpdated;
    }

    @NotNull
    public final Function5 getOnPurchaseUpdated() {
        return this.onPurchaseUpdated;
    }

    public final void getProducts(@NotNull List<String> productIds, @NotNull ProductType productType, @NotNull Promise reactPromise, @NotNull Function1<? super BillingManagerException, Unit> onError) {
        Intrinsics.checkNotNullParameter(productIds, "productIds");
        Intrinsics.checkNotNullParameter(productType, "productType");
        Intrinsics.checkNotNullParameter(reactPromise, "reactPromise");
        Intrinsics.checkNotNullParameter(onError, "onError");
        if (this.mockBillingMode) {
            reactPromise.resolve(SerializeMockProductDetailsKt.serializeMockProductDetails(productIds, productType));
            return;
        }
        CoroutineScope coroutineScope = getCoroutineScope(this.reactContext);
        nr.x.t(coroutineScope, g0.a, new BillingManager$getProducts$1(this, onError, new ExponentialBackoff(coroutineScope, 1000L, 4000L, 3), reactPromise, productType, productIds, null), 2);
    }

    public final void getUserCountry(@NotNull Function1<? super String, Unit> onSuccess, @NotNull Function1<? super BillingManagerException, Unit> onError) {
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Intrinsics.checkNotNullParameter(onError, "onError");
        if (this.mockBillingMode) {
            onSuccess.invoke("US");
            return;
        }
        CoroutineScope coroutineScope = getCoroutineScope(this.reactContext);
        nr.x.t(coroutineScope, g0.a, new BillingManager$getUserCountry$1(this, onError, new ExponentialBackoff(coroutineScope, 1000L, 4000L, 3), onSuccess, null), 2);
    }

    public final void loadPurchases(@NotNull Function0<Unit> onSuccess, @NotNull Function1<? super Exception, Unit> onError) {
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Intrinsics.checkNotNullParameter(onError, "onError");
        nr.x.t(getCoroutineScope(this.reactContext), g0.a, new BillingManager$loadPurchases$3(this, onError, onSuccess, null), 2);
    }

    public final void open() {
        a5.b d0Var;
        ReactApplicationContext reactApplicationContext = this.reactContext;
        a5.a aVar = new a5.a(reactApplicationContext);
        aVar.f121b = new j(1);
        aVar.f122c = new b(2, this);
        if (reactApplicationContext == null) {
            throw new IllegalArgumentException("Please provide a valid Context.");
        }
        if (((b) aVar.f122c) == null) {
            throw new IllegalArgumentException("Please provide a valid listener for purchases updates.");
        }
        if (((j) aVar.f121b) == null) {
            throw new IllegalArgumentException("Pending purchases for one-time products must be supported.");
        }
        ((j) aVar.f121b).getClass();
        if (((b) aVar.f122c) != null) {
            j jVar = (j) aVar.f121b;
            b bVar = (b) aVar.f122c;
            d0Var = aVar.a() ? new d0(jVar, reactApplicationContext, bVar, aVar) : new a5.b(jVar, reactApplicationContext, bVar, aVar);
        } else {
            j jVar2 = (j) aVar.f121b;
            d0Var = aVar.a() ? new d0(jVar2, reactApplicationContext, aVar) : new a5.b(jVar2, reactApplicationContext, aVar);
        }
        this.billingClient = d0Var;
        if (d0Var.I()) {
            updateConnectionState(ConnectionState.CONNECTED);
            return;
        }
        try {
            BillingClient billingClient = this.billingClient;
            if (billingClient == null) {
                Intrinsics.throwUninitializedPropertyAccessException("billingClient");
                billingClient = null;
            }
            billingClient.h(this.billingClientStateListener);
            updateConnectionState(ConnectionState.CONNECTING);
        } catch (Exception unused) {
            updateConnectionState(ConnectionState.ERROR);
        }
    }

    public final void purchase(Activity activity, @NotNull String productId, @NotNull ProductType productType, @NotNull String userId, String oldProductId, String purchaseToken, String offerId, @NotNull Function0<Unit> onSuccess, @NotNull Function1<? super BillingManagerException, Unit> onError) {
        Intrinsics.checkNotNullParameter(productId, "productId");
        Intrinsics.checkNotNullParameter(productType, "productType");
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Intrinsics.checkNotNullParameter(onError, "onError");
        if (activity == null) {
            onError.invoke(new BillingManagerException.BillingException("Current React Activity not found"));
        } else {
            nr.x.t(getCoroutineScope(this.reactContext), g0.a, new BillingManager$purchase$1(this, onError, productType, productId, oldProductId, purchaseToken, userId, offerId, activity, onSuccess, null), 2);
        }
    }
}
