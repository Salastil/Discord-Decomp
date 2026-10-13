package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$64 extends FunctionReferenceImpl implements Function3 {
    public MessageAccessoriesAdapter$onBindViewHolder$64(Object obj) {
        super(3, obj, ChatEventHandler.class, "onTapChannelPromptButton", "onTapChannelPromptButton-Eqy5D80(Ljava/lang/String;JLjava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m567invokeEqy5D80(((MessageId) obj).m1198unboximpl(), ((ChannelId) obj2).m1172unboximpl(), (String) obj3);
        return Unit.a;
    }

    /* renamed from: invoke-Eqy5D80, reason: not valid java name */
    public final void m567invokeEqy5D80(String p02, long j, String p22) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p22, "p2");
        ((ChatEventHandler) this.receiver).mo494onTapChannelPromptButtonEqy5D80(p02, j, p22);
    }
}
