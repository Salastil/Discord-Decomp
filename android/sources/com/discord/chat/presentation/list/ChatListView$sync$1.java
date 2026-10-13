package com.discord.chat.presentation.list;

import com.discord.chat.listmanager.ChatListUpdate;
import com.discord.chat.presentation.list.ChatListView;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.list.ChatListView$sync$1", f = "ChatListView.kt", l = {277}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatListView$sync$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ ChatListView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatListView$sync$1(ChatListView chatListView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatListView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatListView$sync$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ChatListView.DataSource dataSource;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            final Ref.BooleanRef booleanRef = new Ref.BooleanRef();
            booleanRef.element = true;
            dataSource = this.this$0.dataSource;
            if (dataSource == null) {
                Intrinsics.throwUninitializedPropertyAccessException("dataSource");
                dataSource = null;
            }
            Flow updatesFlow = dataSource.getUpdatesFlow();
            final ChatListView chatListView = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.chat.presentation.list.ChatListView$sync$1.1
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(ChatListUpdate chatListUpdate, Continuation continuation) {
                    if (Ref.BooleanRef.this.element) {
                        chatListView.onChatListUpdate(ChatListUpdate.copy$default(chatListUpdate, null, null, null, 0, null, 27, null));
                        Ref.BooleanRef.this.element = false;
                    } else {
                        chatListView.onChatListUpdate(chatListUpdate);
                    }
                    return Unit.a;
                }
            };
            this.label = 1;
            if (updatesFlow.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChatListView$sync$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
