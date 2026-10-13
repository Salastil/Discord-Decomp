package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$56 extends FunctionReferenceImpl implements Function2<MessageId, ChannelId, Unit> {
    public MessageAccessoriesAdapter$onBindViewHolder$56(Object obj) {
        super(2, obj, ChatEventHandler.class, "onTapAutoModerationFeedback", "onTapAutoModerationFeedback-pfaIj0E(Ljava/lang/String;J)V", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        m562invokepfaIj0E(((MessageId) obj).m1198unboximpl(), ((ChannelId) obj2).m1172unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-pfaIj0E, reason: not valid java name */
    public final void m562invokepfaIj0E(String p02, long j) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).mo490onTapAutoModerationFeedbackpfaIj0E(p02, j);
    }
}
