package com.discord.chat.presentation.message.system;

import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3962d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ChatEventHandler f3963e;

    public /* synthetic */ a(ChatEventHandler chatEventHandler, int i5) {
        this.f3962d = i5;
        this.f3963e = chatEventHandler;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        ChatEventHandler message$lambda$0;
        ChatEventHandler message$lambda$02;
        switch (this.f3962d) {
            case 0:
                message$lambda$0 = AutomodSystemMessageWrapperView.setMessage$lambda$0(this.f3963e);
                return message$lambda$0;
            default:
                message$lambda$02 = SystemMessageWrapperView.setMessage$lambda$0(this.f3963e);
                return message$lambda$02;
        }
    }
}
