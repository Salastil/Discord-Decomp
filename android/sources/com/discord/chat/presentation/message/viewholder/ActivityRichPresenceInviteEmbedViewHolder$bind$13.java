package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ActivityRichPresenceInviteEmbedViewHolder$bind$13 extends FunctionReferenceImpl implements Function1<InlineCodeContentNode, Unit> {
    public ActivityRichPresenceInviteEmbedViewHolder$bind$13(Object obj) {
        super(1, obj, ChatEventHandler.class, "onTapInlineCode", "onTapInlineCode(Lcom/discord/chat/bridge/contentnode/InlineCodeContentNode;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        invoke((InlineCodeContentNode) obj);
        return Unit.a;
    }

    public final void invoke(InlineCodeContentNode p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).onTapInlineCode(p02);
    }
}
