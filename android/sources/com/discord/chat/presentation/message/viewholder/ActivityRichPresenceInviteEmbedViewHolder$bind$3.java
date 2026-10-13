package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ActivityRichPresenceInviteEmbedViewHolder$bind$3 extends FunctionReferenceImpl implements Function1<LinkContentNode, Unit> {
    public ActivityRichPresenceInviteEmbedViewHolder$bind$3(Object obj) {
        super(1, obj, ChatEventHandler.class, "onLinkLongClicked", "onLinkLongClicked(Lcom/discord/chat/bridge/contentnode/LinkContentNode;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        invoke((LinkContentNode) obj);
        return Unit.a;
    }

    public final void invoke(LinkContentNode p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).onLinkLongClicked(p02);
    }
}
