package com.discord.chat;

import com.discord.chat.ChatModule;
import com.discord.chat.listmanager.ChatListManager;
import com.discord.chatreplay.logger.RowLogger;
import com.facebook.react.bridge.ReactApplicationContext;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "manager", "Lcom/discord/chat/listmanager/ChatListManager;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.chat.ChatModule$clearRows$1", f = "ChatModule.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatModule$clearRows$1 extends h implements Function2<ChatListManager, Continuation, Object> {
    final /* synthetic */ int $changesetUpdateId;
    final /* synthetic */ int $tag;
    /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ ChatModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatModule$clearRows$1(ChatModule chatModule, int i5, int i6, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatModule;
        this.$tag = i5;
        this.$changesetUpdateId = i6;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        ChatModule$clearRows$1 chatModule$clearRows$1 = new ChatModule$clearRows$1(this.this$0, this.$tag, this.$changesetUpdateId, continuation);
        chatModule$clearRows$1.L$0 = obj;
        return chatModule$clearRows$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ChatListManager chatListManager, Continuation continuation) {
        return ((ChatModule$clearRows$1) create(chatListManager, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ReactApplicationContext reactApplicationContext;
        RowLogger rowUpdateLoggerFor;
        a aVar = a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        b.R(obj);
        ChatListManager chatListManager = (ChatListManager) this.L$0;
        ChatModule.Companion companion = ChatModule.INSTANCE;
        reactApplicationContext = this.this$0.reactContext;
        rowUpdateLoggerFor = companion.rowUpdateLoggerFor(reactApplicationContext, this.$tag);
        rowUpdateLoggerFor.logRowsClear();
        chatListManager.clearRows(this.$changesetUpdateId);
        return Unit.a;
    }
}
