package com.discord.chat.presentation.list.delegate;

import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.FunctionReferenceImpl;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LoadingDelegate$bindView$1 extends FunctionReferenceImpl implements Function0<Unit> {
    public LoadingDelegate$bindView$1(Object obj) {
        super(0, obj, ChatEventHandler.class, "onTapLoadMessagesBefore", "onTapLoadMessagesBefore()V", 0);
    }

    @Override // kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Object invoke() {
        m542invoke();
        return Unit.a;
    }

    /* renamed from: invoke, reason: collision with other method in class */
    public final void m542invoke() {
        ((ChatEventHandler) this.receiver).onTapLoadMessagesBefore();
    }
}
