package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$14 extends FunctionReferenceImpl implements Function1<SoundmojiContentNode, Unit> {
    public GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$14(Object obj) {
        super(1, obj, ChatEventHandler.class, "onTapSoundmoji", "onTapSoundmoji(Lcom/discord/chat/bridge/contentnode/SoundmojiContentNode;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        invoke((SoundmojiContentNode) obj);
        return Unit.a;
    }

    public final void invoke(SoundmojiContentNode p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).onTapSoundmoji(p02);
    }
}
