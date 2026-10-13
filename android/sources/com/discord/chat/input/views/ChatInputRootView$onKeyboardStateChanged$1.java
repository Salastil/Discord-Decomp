package com.discord.chat.input.views;

import android.content.Context;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.k0;
import androidx.core.view.s0;
import com.discord.chat.input.views.ChatInputRootView;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.h;
import nr.g0;
import nr.x;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.input.views.ChatInputRootView$onKeyboardStateChanged$1", f = "ChatInputRootView.kt", l = {451}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class ChatInputRootView$onKeyboardStateChanged$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ ChatInputRootView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.chat.input.views.ChatInputRootView$onKeyboardStateChanged$1$1", f = "ChatInputRootView.kt", l = {452}, m = "invokeSuspend")
    /* renamed from: com.discord.chat.input.views.ChatInputRootView$onKeyboardStateChanged$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        int label;

        public AnonymousClass1(Continuation continuation) {
            super(2, continuation);
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                ki.b.R(obj);
                this.label = 1;
                if (x.j(100L, this) == aVar) {
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
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ChatInputRootView$onKeyboardStateChanged$1(ChatInputRootView chatInputRootView, Continuation continuation) {
        super(2, continuation);
        this.this$0 = chatInputRootView;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ChatInputRootView$onKeyboardStateChanged$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        boolean z5;
        DCDChatInput dCDChatInput;
        DCDChatInput dCDChatInput2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            ur.e eVar = g0.a;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(null);
            this.label = 1;
            if (x.A(eVar, anonymousClass1, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        ChatInputRootView chatInputRootView = this.this$0;
        WeakHashMap weakHashMap = s0.a;
        WindowInsetsCompat a = k0.a(chatInputRootView);
        if (a == null || !a.a.p(8)) {
            z5 = this.this$0.isActionModeActive;
            if (!z5) {
                Context context = this.this$0.getContext();
                Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                if (!ChatInputRootViewKt.isScreenReaderOn(context)) {
                    dCDChatInput = this.this$0.editText;
                    dCDChatInput.clearFocus();
                    ChatInputRootView.ChatInputListener listener = this.this$0.getListener();
                    if (listener != null) {
                        dCDChatInput2 = this.this$0.editText;
                        listener.onEndBlur(String.valueOf(dCDChatInput2.getText()));
                    }
                }
                return Unit.a;
            }
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ChatInputRootView$onKeyboardStateChanged$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
