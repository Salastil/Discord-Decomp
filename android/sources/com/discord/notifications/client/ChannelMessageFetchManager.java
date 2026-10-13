package com.discord.notifications.client;

import android.content.Context;
import com.discord.cache.Cache;
import com.discord.notifications.api.NotificationData;
import com.discord.primitives.ChannelId;
import com.discord.primitives.UserId;
import com.facebook.react.uimanager.ViewProps;
import cs.h;
import ds.f0;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;
import nr.g0;
import nr.x;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u0000 \u00142\u00020\u0001:\u0001\u0014B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\r0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/notifications/client/ChannelMessageFetchManager;", "", "cache", "Lcom/discord/notifications/client/NotificationCache;", "<init>", "(Lcom/discord/notifications/client/NotificationCache;)V", "getCache", "()Lcom/discord/notifications/client/NotificationCache;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "pendingFetches", "Ljava/util/concurrent/ConcurrentHashMap;", "", "Lkotlinx/coroutines/Job;", "maybeFetchChannelMessages", "", "context", "Landroid/content/Context;", "notificationData", "Lcom/discord/notifications/api/NotificationData;", "Companion", "notification_client_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ChannelMessageFetchManager {

    @NotNull
    private static final OkHttpClient sharedHttpClient = new OkHttpClient();

    @NotNull
    private final NotificationCache cache;

    @NotNull
    private final ConcurrentHashMap<String, Job> pendingFetches;

    @NotNull
    private final CoroutineScope scope;

    public ChannelMessageFetchManager(@NotNull NotificationCache cache) {
        Intrinsics.checkNotNullParameter(cache, "cache");
        this.cache = cache;
        e eVar = g0.a;
        this.scope = x.b(d.f19093i);
        this.pendingFetches = new ConcurrentHashMap<>();
    }

    @NotNull
    public final NotificationCache getCache() {
        return this.cache;
    }

    public final void maybeFetchChannelMessages(@NotNull Context context, @NotNull NotificationData notificationData) {
        String token$default;
        String item;
        UserId m1127getReceivingUserIdwUX8bhU;
        String f2;
        ChannelId m1123getChannelIdqMVnFVQ;
        Long m5;
        String f10;
        String f11;
        Long m6;
        String f12;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(notificationData, "notificationData");
        Cache.Companion companion = Cache.INSTANCE;
        String item2 = companion.get().getItem("notificationNetworkRequest");
        if (item2 == null || (token$default = Cache.getToken$default(companion.get(), false, 1, null)) == null || (item = companion.get().getItem("_userIdKey")) == null || (m1127getReceivingUserIdwUX8bhU = notificationData.m1127getReceivingUserIdwUX8bhU()) == null || !Intrinsics.areEqual(item, UserId.m1248toStringimpl(m1127getReceivingUserIdwUX8bhU.m1250unboximpl()))) {
            return;
        }
        try {
            JsonObject j = h.j(Json.f13606d.d(item2));
            Object obj = j.get(ViewProps.ENABLED);
            JsonPrimitive jsonPrimitive = obj instanceof JsonPrimitive ? (JsonPrimitive) obj : null;
            if (jsonPrimitive != null) {
                Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
                String a = jsonPrimitive.a();
                String[] strArr = f0.a;
                Intrinsics.checkNotNullParameter(a, "<this>");
                Boolean bool = kotlin.text.x.i(a, "true", true) ? Boolean.TRUE : kotlin.text.x.i(a, "false", true) ? Boolean.FALSE : null;
                if (bool == null || !bool.booleanValue()) {
                    return;
                }
                Object obj2 = j.get("userId");
                JsonPrimitive jsonPrimitive2 = obj2 instanceof JsonPrimitive ? (JsonPrimitive) obj2 : null;
                if (jsonPrimitive2 == null || (f2 = h.f(jsonPrimitive2)) == null || !Intrinsics.areEqual(f2, item) || (m1123getChannelIdqMVnFVQ = notificationData.m1123getChannelIdqMVnFVQ()) == null) {
                    return;
                }
                long m1172unboximpl = m1123getChannelIdqMVnFVQ.m1172unboximpl();
                Object obj3 = j.get("cooldownMs");
                JsonPrimitive jsonPrimitive3 = obj3 instanceof JsonPrimitive ? (JsonPrimitive) obj3 : null;
                if (jsonPrimitive3 == null || (m5 = h.m(jsonPrimitive3)) == null) {
                    return;
                }
                long longValue = m5.longValue();
                long j5 = 0;
                if (longValue > 0) {
                    long currentTimeMillis = System.currentTimeMillis();
                    long m1137getChannelMessagesFetchRanmJqaSGE = this.cache.m1137getChannelMessagesFetchRanmJqaSGE(context, m1172unboximpl);
                    if (currentTimeMillis < m1137getChannelMessagesFetchRanmJqaSGE) {
                        this.cache.m1138setChannelMessagesFetchRanmJqaSGE(context, m1172unboximpl);
                        return;
                    } else if (currentTimeMillis < m1137getChannelMessagesFetchRanmJqaSGE + longValue) {
                        return;
                    } else {
                        this.cache.m1138setChannelMessagesFetchRanmJqaSGE(context, m1172unboximpl);
                    }
                }
                Object obj4 = j.get("apiBaseUrl");
                JsonPrimitive jsonPrimitive4 = obj4 instanceof JsonPrimitive ? (JsonPrimitive) obj4 : null;
                if (jsonPrimitive4 == null || (f10 = h.f(jsonPrimitive4)) == null) {
                    return;
                }
                Object obj5 = j.get("urlQueryParams");
                JsonPrimitive jsonPrimitive5 = obj5 instanceof JsonPrimitive ? (JsonPrimitive) obj5 : null;
                if (jsonPrimitive5 == null || (f11 = h.f(jsonPrimitive5)) == null) {
                    return;
                }
                Request.Builder builder = new Request.Builder();
                builder.i(f10 + "/channels/" + ChannelId.m1170toStringimpl(m1172unboximpl) + "/messages" + f11);
                builder.f("GET", null);
                builder.a("Authorization", token$default);
                Object obj6 = j.get("headers");
                JsonObject jsonObject = obj6 instanceof JsonObject ? (JsonObject) obj6 : null;
                if (jsonObject == null) {
                    return;
                }
                for (Map.Entry entry : jsonObject.f13610d.entrySet()) {
                    String str = (String) entry.getKey();
                    JsonElement jsonElement = (JsonElement) entry.getValue();
                    JsonPrimitive jsonPrimitive6 = jsonElement instanceof JsonPrimitive ? (JsonPrimitive) jsonElement : null;
                    if (jsonPrimitive6 != null && (f12 = h.f(jsonPrimitive6)) != null) {
                        builder.a(str, f12);
                    }
                }
                Object obj7 = j.get("debounceMs");
                JsonPrimitive jsonPrimitive7 = obj7 instanceof JsonPrimitive ? (JsonPrimitive) obj7 : null;
                if (jsonPrimitive7 != null && (m6 = h.m(jsonPrimitive7)) != null) {
                    j5 = m6.longValue();
                }
                long j7 = j5;
                String m1170toStringimpl = ChannelId.m1170toStringimpl(m1172unboximpl);
                Request b10 = builder.b();
                Job remove = this.pendingFetches.remove(m1170toStringimpl);
                if (remove != null) {
                    remove.f(null);
                }
                this.pendingFetches.put(m1170toStringimpl, x.t(this.scope, null, new ChannelMessageFetchManager$maybeFetchChannelMessages$1(j7, b10, m1172unboximpl, notificationData, item, context, null), 3));
            }
        } catch (Exception unused) {
        }
    }
}
