package com.discord.chat.input.views;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import lo.h;

@Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "it", ""}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.input.views.ChatInputRootView$onAttachedToWindow$2", f = "ChatInputRootView.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatInputRootView$onAttachedToWindow$2 extends h implements Function2<Integer, Continuation, Object> {
    int label;
    final /* synthetic */ ChatInputRootView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatInputRootView$onAttachedToWindow$2(ChatInputRootView chatInputRootView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatInputRootView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatInputRootView$onAttachedToWindow$2(this.this$0, continuation);
    }

    public final Object invoke(int i5, Continuation continuation) {
        return ((ChatInputRootView$onAttachedToWindow$2) create(Integer.valueOf(i5), continuation)).invokeSuspend(Unit.a);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ChatInputRootViewMeasurer chatInputRootViewMeasurer;
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        chatInputRootViewMeasurer = this.this$0.lineHeightMeasurer;
        chatInputRootViewMeasurer.measure(true);
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        return invoke(((Number) obj).intValue(), (Continuation) obj2);
    }
}
