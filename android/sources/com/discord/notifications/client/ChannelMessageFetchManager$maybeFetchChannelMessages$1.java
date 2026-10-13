package com.discord.notifications.client;

import android.content.Context;
import com.discord.logging.Log;
import com.discord.media.engine.MediaEngine;
import com.discord.notifications.api.KvMessageEntry;
import com.discord.notifications.api.NotificationData;
import com.discord.primitives.ChannelId;
import com.discord.primitives.GuildId;
import com.discord.primitives.MessageId;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;
import lo.d;
import lo.h;
import nr.x;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.client.ChannelMessageFetchManager$maybeFetchChannelMessages$1", f = "ChannelMessageFetchManager.kt", l = {MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nChannelMessageFetchManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChannelMessageFetchManager.kt\ncom/discord/notifications/client/ChannelMessageFetchManager$maybeFetchChannelMessages$1\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 SerialFormat.kt\nkotlinx/serialization/SerialFormatKt\n*L\n1#1,172:1\n1563#2:173\n1634#2,3:174\n1563#2:177\n1634#2,3:178\n113#3:181\n*S KotlinDebug\n*F\n+ 1 ChannelMessageFetchManager.kt\ncom/discord/notifications/client/ChannelMessageFetchManager$maybeFetchChannelMessages$1\n*L\n130#1:173\n130#1:174,3\n137#1:177\n137#1:178,3\n158#1:181\n*E\n"})
/* loaded from: classes.dex */
public final class ChannelMessageFetchManager$maybeFetchChannelMessages$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $cacheUserId;
    final /* synthetic */ long $channelId;
    final /* synthetic */ Context $context;
    final /* synthetic */ long $debounceMs;
    final /* synthetic */ NotificationData $notificationData;
    final /* synthetic */ Request $request;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChannelMessageFetchManager$maybeFetchChannelMessages$1(long j, Request request, long j5, NotificationData notificationData, String str, Context context, Continuation continuation) {
        super(2, continuation);
        this.$debounceMs = j;
        this.$request = request;
        this.$channelId = j5;
        this.$notificationData = notificationData;
        this.$cacheUserId = str;
        this.$context = context;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChannelMessageFetchManager$maybeFetchChannelMessages$1(this.$debounceMs, this.$request, this.$channelId, this.$notificationData, this.$cacheUserId, this.$context, continuation);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v0, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r7v1, types: [java.lang.Iterable] */
    /* JADX WARN: Type inference failed for: r7v4, types: [java.util.ArrayList] */
    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        OkHttpClient okHttpClient;
        Response e9;
        long j;
        NotificationData notificationData;
        String str;
        Context context;
        String string;
        String a;
        JsonElement jsonElement;
        ?? r7;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            long j5 = this.$debounceMs;
            if (j5 > 0) {
                this.label = 1;
                if (x.j(j5, this) == aVar) {
                    return aVar;
                }
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        try {
            okHttpClient = ChannelMessageFetchManager.sharedHttpClient;
            e9 = okHttpClient.a(this.$request).e();
            j = this.$channelId;
            notificationData = this.$notificationData;
            str = this.$cacheUserId;
            context = this.$context;
            try {
            } finally {
            }
        } catch (Exception e10) {
            Log.INSTANCE.e("ChannelMessageFetchManager", "Failed to fetch channel messages", e10);
        }
        if (!e9.g()) {
            Unit unit = Unit.a;
            e9.close();
            return unit;
        }
        ResponseBody responseBody = e9.f16091y;
        if (responseBody != null && (string = responseBody.string()) != null) {
            Iterator it = cs.h.i(Json.f13606d.d(string)).f13611d.iterator();
            while (it.hasNext()) {
                JsonObject j7 = cs.h.j((JsonElement) it.next());
                Object obj2 = j7.get(StackTraceHelper.ID_KEY);
                JsonPrimitive jsonPrimitive = obj2 instanceof JsonPrimitive ? (JsonPrimitive) obj2 : null;
                if (jsonPrimitive != null && (a = jsonPrimitive.a()) != null && (jsonElement = (JsonElement) j7.get("author")) != null) {
                    JsonObject j10 = cs.h.j(jsonElement);
                    JsonElement jsonElement2 = (JsonElement) j7.get("mentions");
                    if (jsonElement2 != null) {
                        kotlinx.serialization.json.a i6 = cs.h.i(jsonElement2);
                        r7 = new ArrayList(d0.l(i6, 10));
                        Iterator it2 = i6.f13611d.iterator();
                        while (it2.hasNext()) {
                            r7.add(cs.h.j((JsonElement) it2.next()));
                        }
                    } else {
                        r7 = m0.f13512d;
                    }
                    m0 m0Var = m0.f13512d;
                    ArrayList V = CollectionsKt.V(b0.c(j10), r7);
                    ArrayList arrayList = new ArrayList(d0.l(V, 10));
                    Iterator it3 = V.iterator();
                    while (it3.hasNext()) {
                        LinkedHashMap o6 = v0.o((JsonObject) it3.next());
                        o6.put("incomplete", cs.h.a(Boolean.TRUE));
                        arrayList.add(new JsonObject(o6));
                    }
                    KvMessageEntry kvMessageEntry = new KvMessageEntry(m0Var, arrayList, j7, MessageId.m1190constructorimpl(a), j, null);
                    GuildId m1124getGuildIdqOKuAAo = notificationData.m1124getGuildIdqOKuAAo();
                    String m1183toStringimpl = m1124getGuildIdqOKuAAo != null ? GuildId.m1183toStringimpl(m1124getGuildIdqOKuAAo.m1185unboximpl()) : null;
                    KvMessageCache kvMessageCache = KvMessageCache.INSTANCE;
                    String m1170toStringimpl = ChannelId.m1170toStringimpl(j);
                    cs.b bVar = Json.f13606d;
                    bVar.getClass();
                    kvMessageCache.putMessage(context, "@account." + str, m1183toStringimpl, m1170toStringimpl, a, bVar.c(KvMessageEntry.INSTANCE.serializer(), kvMessageEntry));
                }
            }
            Unit unit2 = Unit.a;
            e9.close();
            return Unit.a;
        }
        Unit unit3 = Unit.a;
        e9.close();
        return unit3;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChannelMessageFetchManager$maybeFetchChannelMessages$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
