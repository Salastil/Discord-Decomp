package com.discord.chat;

import com.discord.chat.ChatModule;
import com.discord.chat.bridge.ErrorMessage;
import com.discord.chat.bridge.Message;
import com.discord.chat.bridge.row.MessageRow;
import com.discord.chat.bridge.row.Row;
import com.discord.chat.bridge.scroll.ChatScrollData;
import com.discord.chat.listmanager.ChatListManager;
import com.discord.chatreplay.logger.RowLogger;
import com.discord.client_info.ClientInfo;
import com.discord.crash_reporting.CrashReporting;
import com.discord.logging.PIIKt;
import com.discord.serialization.SerializerUtils;
import com.discord.tti_manager.TTIMetrics;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.json.Json;
import lo.d;
import lo.h;
import org.json.JSONArray;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "manager", "Lcom/discord/chat/listmanager/ChatListManager;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.chat.ChatModule$updateRows$1", f = "ChatModule.kt", l = {}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nChatModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ChatModule.kt\ncom/discord/chat/ChatModule$updateRows$1\n+ 2 Json.kt\nkotlinx/serialization/json/Json\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,194:1\n147#2:195\n147#2:196\n1878#3,2:197\n1869#3,2:199\n1880#3:201\n*S KotlinDebug\n*F\n+ 1 ChatModule.kt\ncom/discord/chat/ChatModule$updateRows$1\n*L\n60#1:195\n62#1:196\n71#1:197,2\n83#1:199,2\n71#1:201\n*E\n"})
/* loaded from: classes.dex */
public final class ChatModule$updateRows$1 extends h implements Function2<ChatListManager, Continuation, Object> {
    final /* synthetic */ int $changesetUpdateId;
    final /* synthetic */ boolean $forceReload;
    final /* synthetic */ String $rowsJSON;
    final /* synthetic */ String $scrollDataJSON;
    final /* synthetic */ int $tag;
    /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ ChatModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatModule$updateRows$1(ChatModule chatModule, int i5, String str, String str2, int i6, boolean z5, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatModule;
        this.$tag = i5;
        this.$rowsJSON = str;
        this.$scrollDataJSON = str2;
        this.$changesetUpdateId = i6;
        this.$forceReload = z5;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        ChatModule$updateRows$1 chatModule$updateRows$1 = new ChatModule$updateRows$1(this.this$0, this.$tag, this.$rowsJSON, this.$scrollDataJSON, this.$changesetUpdateId, this.$forceReload, continuation);
        chatModule$updateRows$1.L$0 = obj;
        return chatModule$updateRows$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ChatListManager chatListManager, Continuation continuation) {
        return ((ChatModule$updateRows$1) create(chatListManager, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ReactApplicationContext reactApplicationContext;
        RowLogger rowUpdateLoggerFor;
        int i5;
        int i6;
        Json json;
        ChatScrollData chatScrollData;
        Json json2;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        ChatListManager chatListManager = (ChatListManager) this.L$0;
        ChatModule.Companion companion = ChatModule.INSTANCE;
        reactApplicationContext = this.this$0.reactContext;
        rowUpdateLoggerFor = companion.rowUpdateLoggerFor(reactApplicationContext, this.$tag);
        rowUpdateLoggerFor.logRowsUpdate(this.$rowsJSON);
        try {
            json = ChatModule.json;
            String str = this.$rowsJSON;
            json.getClass();
            List<? extends Row> list = (List) json.b(new bs.d(Row.INSTANCE.serializer(), 0), str);
            if (this.$scrollDataJSON != null) {
                json2 = ChatModule.json;
                String str2 = this.$scrollDataJSON;
                json2.getClass();
                chatScrollData = (ChatScrollData) json2.b(ChatScrollData.INSTANCE.serializer(), str2);
            } else {
                chatScrollData = null;
            }
            chatListManager.updateRows(list, chatScrollData, this.$changesetUpdateId, this.$forceReload);
            if (!ClientInfo.INSTANCE.isProdBuild()) {
                String str3 = this.$rowsJSON;
                int i10 = 0;
                for (Object obj2 : list) {
                    int i11 = i10 + 1;
                    if (i10 < 0) {
                        c0.k();
                        throw null;
                    }
                    Row row = (Row) obj2;
                    MessageRow messageRow = row instanceof MessageRow ? (MessageRow) row : null;
                    if ((messageRow != null ? messageRow.getMessage() : null) instanceof ErrorMessage) {
                        JSONObject jSONObject = new JSONArray(str3).getJSONObject(i10);
                        SerializerUtils serializerUtils = SerializerUtils.INSTANCE;
                        String jSONObject2 = jSONObject.toString();
                        Intrinsics.checkNotNullExpressionValue(jSONObject2, "toString(...)");
                        SerializerUtils.SerializerError findErroringFields = serializerUtils.findErroringFields(jSONObject2, Reflection.getOrCreateKotlinClass(Message.class));
                        List<String> pIIFieldNames = PIIKt.getPIIFieldNames(Reflection.getOrCreateKotlinClass(Message.class));
                        LinkedHashMap linkedHashMap = new LinkedHashMap();
                        if (findErroringFields instanceof SerializerUtils.SerializerError.Data) {
                            Iterator<T> it = ((SerializerUtils.SerializerError.Data) findErroringFields).getData().entrySet().iterator();
                            while (it.hasNext()) {
                                Map.Entry entry = (Map.Entry) it.next();
                                if (pIIFieldNames.contains(entry.getKey())) {
                                    linkedHashMap.put(entry.getKey(), "<REDACTED>");
                                } else {
                                    linkedHashMap.put(entry.getKey(), entry.getValue());
                                }
                            }
                            CrashReporting crashReporting = CrashReporting.INSTANCE;
                            CrashReporting.addBreadcrumb$default(crashReporting, "Message Deserialization Error", linkedHashMap, null, null, false, 28, null);
                            CrashReporting.captureException$default(crashReporting, new Exception("Could not deserialize message. Bad Fields: " + CollectionsKt.O(((SerializerUtils.SerializerError.Data) findErroringFields).getData().keySet(), ",", null, null, null, 62)), false, 2, null);
                        }
                    }
                    i10 = i11;
                }
            }
        } catch (Exception e9) {
            CrashReporting crashReporting2 = CrashReporting.INSTANCE;
            Pair pair = new Pair("tag", String.valueOf(this.$tag));
            Pair pair2 = new Pair("tagRowSize", String.valueOf(chatListManager.getRowCount()));
            i5 = ChatModule.previousRowUpdateTag;
            Pair pair3 = new Pair("previousTag", String.valueOf(i5));
            ChatModule.Companion companion2 = ChatModule.INSTANCE;
            i6 = ChatModule.previousRowUpdateTag;
            CrashReporting.addBreadcrumb$default(crashReporting2, "Bad row update", v0.g(pair, pair2, pair3, new Pair("previousTagRowSize", String.valueOf(companion2.getChatListManager(i6).getRowCount()))), null, null, false, 28, null);
            CrashReporting.captureException$default(crashReporting2, new Exception("Failed to update rows", e9), false, 2, null);
            String str4 = this.$rowsJSON;
            String message = e9.getMessage();
            Intrinsics.checkNotNull(message);
            chatListManager.handleError(str4, message, this.$changesetUpdateId);
        }
        TTIMetrics.record$default(TTIMetrics.INSTANCE, "ChatModule.updateRows() Finish", 0L, null, false, 14, null);
        ChatModule.Companion companion3 = ChatModule.INSTANCE;
        ChatModule.previousRowUpdateTag = this.$tag;
        return Unit.a;
    }
}
