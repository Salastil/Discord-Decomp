package com.discord.chat.presentation.message;

import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$25 extends FunctionReferenceImpl implements Function1<GameMentionContentNode, Unit> {
    public MessageAccessoriesAdapter$onBindViewHolder$25(Object obj) {
        super(1, obj, ChatEventHandler.class, "onTapGameMention", "onTapGameMention(Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        invoke((GameMentionContentNode) obj);
        return Unit.a;
    }

    public final void invoke(GameMentionContentNode p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).onTapGameMention(p02);
    }
}
