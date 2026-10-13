package com.discord.billing;

import com.discord.apirequestconfig.DiscordApiRequestConfig;
import com.discord.logging.Log;
import com.discord.metric_monitor.MetricEvent;
import com.discord.metric_monitor.MonitoringAgent;
import com.facebook.react.modules.network.OkHttpClientProvider;
import cs.h;
import java.util.Map;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.json.JsonObject;
import nr.g0;
import nr.r0;
import nr.x;
import okhttp3.MediaType;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0005\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0016\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u0005J\u0018\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\f\u001a\u00020\u00052\u0006\u0010\r\u001a\u00020\u0005H\u0002J!\u0010\u0010\u001a\u00020\u000b2\b\u0010\u0011\u001a\u0004\u0018\u00010\u000f2\b\u0010\u0012\u001a\u0004\u0018\u00010\u0005H\u0002¢\u0006\u0002\u0010\u0013R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lcom/discord/billing/ExternalPurchaseIdReporter;", "", "<init>", "()V", "TAG", "", "httpClient", "Lokhttp3/OkHttpClient;", "jsonMediaType", "Lokhttp3/MediaType;", "report", "", "externalPurchaseId", "externalProductId", "postExternalPurchaseId", "", "trackResult", "statusCode", "exceptionName", "(Ljava/lang/Integer;Ljava/lang/String;)V", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nExternalPurchaseIdReporter.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ExternalPurchaseIdReporter.kt\ncom/discord/billing/ExternalPurchaseIdReporter\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Maps.kt\nkotlin/collections/MapsKt___MapsKt\n*L\n1#1,80:1\n1#2:81\n216#3,2:82\n*S KotlinDebug\n*F\n+ 1 ExternalPurchaseIdReporter.kt\ncom/discord/billing/ExternalPurchaseIdReporter\n*L\n55#1:82,2\n*E\n"})
/* loaded from: classes.dex */
public final class ExternalPurchaseIdReporter {

    @NotNull
    private static final String TAG = "ExternalPurchaseIdReporter";

    @NotNull
    private static final MediaType jsonMediaType;

    @NotNull
    public static final ExternalPurchaseIdReporter INSTANCE = new ExternalPurchaseIdReporter();

    @NotNull
    private static final OkHttpClient httpClient = OkHttpClientProvider.getOkHttpClient();

    static {
        Pattern pattern = MediaType.f16040d;
        jsonMediaType = e4.f.s("application/json");
    }

    private ExternalPurchaseIdReporter() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final int postExternalPurchaseId(String externalPurchaseId, String externalProductId) {
        DiscordApiRequestConfig discordApiRequestConfig = DiscordApiRequestConfig.INSTANCE.get();
        if (discordApiRequestConfig == null) {
            throw new IllegalArgumentException("no api config");
        }
        JsonObject jsonObject = new JsonObject(v0.g(new Pair("external_purchase_id", h.c(externalPurchaseId)), new Pair("external_product_id", h.c(externalProductId))));
        Request.Builder builder = new Request.Builder();
        builder.i(discordApiRequestConfig.getApiBaseUrl() + "/billing/orders/external-purchase-id");
        RequestBody.Companion companion = RequestBody.Companion;
        String jsonObject2 = jsonObject.toString();
        MediaType mediaType = jsonMediaType;
        companion.getClass();
        okhttp3.d body = RequestBody.Companion.a(jsonObject2, mediaType);
        Intrinsics.checkNotNullParameter(body, "body");
        builder.f("POST", body);
        builder.a("Authorization", discordApiRequestConfig.getToken());
        for (Map.Entry<String, String> entry : discordApiRequestConfig.getHeaders().entrySet()) {
            builder.a(entry.getKey(), entry.getValue());
        }
        Response e9 = httpClient.a(builder.b()).e();
        try {
            boolean g6 = e9.g();
            int i5 = e9.f16088v;
            if (!g6) {
                Log.w$default(Log.INSTANCE, TAG, "external purchase id post failed status=" + i5 + " product=" + externalProductId, (Throwable) null, 4, (Object) null);
            }
            e9.close();
            return i5;
        } finally {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void trackResult(Integer statusCode, String exceptionName) {
        try {
            MonitoringAgent monitoringAgent = MonitoringAgent.INSTANCE;
            Object obj = statusCode;
            if (statusCode == null) {
                obj = "none";
            }
            String str = "status:" + obj;
            if (exceptionName == null) {
                exceptionName = "none";
            }
            monitoringAgent.increment(new MetricEvent("billing_manager.external_purchase_id_report", c0.g(str, "exception:".concat(exceptionName))));
        } catch (Exception unused) {
        }
    }

    public final void report(@NotNull String externalPurchaseId, @NotNull String externalProductId) {
        Intrinsics.checkNotNullParameter(externalPurchaseId, "externalPurchaseId");
        Intrinsics.checkNotNullParameter(externalProductId, "externalProductId");
        ur.e eVar = g0.a;
        x.t(r0.f15654d, ur.d.f19093i, new ExternalPurchaseIdReporter$report$1(externalProductId, externalPurchaseId, null), 2);
    }
}
