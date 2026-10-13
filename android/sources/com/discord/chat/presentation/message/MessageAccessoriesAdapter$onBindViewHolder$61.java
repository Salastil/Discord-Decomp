package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.ChannelId;
import com.discord.primitives.GuildId;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function4;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$61 extends FunctionReferenceImpl implements Function4 {
    public MessageAccessoriesAdapter$onBindViewHolder$61(Object obj) {
        super(4, obj, ChatEventHandler.class, "onTapPostPreviewEmbed", "onTapPostPreviewEmbed-kUTrp-s(JJJLjava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function4
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3, Object obj4) {
        m566invokekUTrps(((GuildId) obj).m1185unboximpl(), ((ChannelId) obj2).m1172unboximpl(), ((ChannelId) obj3).m1172unboximpl(), ((MessageId) obj4).m1198unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-kUTrp-s, reason: not valid java name */
    public final void m566invokekUTrps(long j, long j5, long j7, String p3) {
        Intrinsics.checkNotNullParameter(p3, "p3");
        ((ChatEventHandler) this.receiver).mo518onTapPostPreviewEmbedkUTrps(j, j5, j7, p3);
    }
}
