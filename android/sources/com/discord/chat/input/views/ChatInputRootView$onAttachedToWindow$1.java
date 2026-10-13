package com.discord.chat.input.views;

import com.discord.chat.input.views.ChatInputRootView;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import lo.h;

@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u00012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003H\n"}, d2 = {"<anonymous>", "", "text", "Lcom/discord/chat/input/views/ChatInputRootView$CurrentTextAndSelection;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.input.views.ChatInputRootView$onAttachedToWindow$1", f = "ChatInputRootView.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatInputRootView$onAttachedToWindow$1 extends h implements Function2<ChatInputRootView.CurrentTextAndSelection, Continuation, Object> {
    /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ ChatInputRootView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatInputRootView$onAttachedToWindow$1(ChatInputRootView chatInputRootView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatInputRootView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        ChatInputRootView$onAttachedToWindow$1 chatInputRootView$onAttachedToWindow$1 = new ChatInputRootView$onAttachedToWindow$1(this.this$0, continuation);
        chatInputRootView$onAttachedToWindow$1.L$0 = obj;
        return chatInputRootView$onAttachedToWindow$1;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ChatInputRootView.CurrentTextAndSelection currentTextAndSelection, Continuation continuation) {
        return ((ChatInputRootView$onAttachedToWindow$1) create(currentTextAndSelection, continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ChatInputRootView.ChatInputListener listener;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        ChatInputRootView.CurrentTextAndSelection currentTextAndSelection = (ChatInputRootView.CurrentTextAndSelection) this.L$0;
        if (currentTextAndSelection != null && (listener = this.this$0.getListener()) != null) {
            listener.onTextOrSelectionChanged(currentTextAndSelection.getSelectionStart(), currentTextAndSelection.getSelectionEnd(), currentTextAndSelection.getText(), currentTextAndSelection.getEditId());
        }
        return Unit.a;
    }
}
