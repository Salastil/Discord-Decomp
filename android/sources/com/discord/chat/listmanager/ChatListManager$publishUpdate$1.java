package com.discord.chat.listmanager;

import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.MutableSharedFlow;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.chat.listmanager.ChatListManager$publishUpdate$1", f = "ChatListManager.kt", l = {237}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatListManager$publishUpdate$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ ChatListUpdate $update;
    int label;
    final /* synthetic */ ChatListManager this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatListManager$publishUpdate$1(ChatListManager chatListManager, ChatListUpdate chatListUpdate, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatListManager;
        this.$update = chatListUpdate;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatListManager$publishUpdate$1(this.this$0, this.$update, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        MutableSharedFlow mutableSharedFlow;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            mutableSharedFlow = this.this$0.updatesFlow;
            ChatListUpdate chatListUpdate = this.$update;
            this.label = 1;
            if (mutableSharedFlow.emit(chatListUpdate, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChatListManager$publishUpdate$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
