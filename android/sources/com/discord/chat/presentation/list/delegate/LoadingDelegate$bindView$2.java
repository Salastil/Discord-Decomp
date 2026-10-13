package com.discord.chat.presentation.list.delegate;

import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.FunctionReferenceImpl;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LoadingDelegate$bindView$2 extends FunctionReferenceImpl implements Function0<Unit> {
    public LoadingDelegate$bindView$2(Object obj) {
        super(0, obj, ChatEventHandler.class, "onTapLoadMessagesAfter", "onTapLoadMessagesAfter()V", 0);
    }

    @Override // kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Object invoke() {
        m543invoke();
        return Unit.a;
    }

    /* renamed from: invoke, reason: collision with other method in class */
    public final void m543invoke() {
        ((ChatEventHandler) this.receiver).onTapLoadMessagesAfter();
    }
}
