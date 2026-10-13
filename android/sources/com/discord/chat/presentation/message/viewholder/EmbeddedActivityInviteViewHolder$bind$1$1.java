package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class EmbeddedActivityInviteViewHolder$bind$1$1 extends FunctionReferenceImpl implements Function2<MessageId, LinkContentNode, Unit> {
    public EmbeddedActivityInviteViewHolder$bind$1$1(Object obj) {
        super(2, obj, ChatEventHandler.class, "onLinkClicked", "onLinkClicked-ntcYbpo(Ljava/lang/String;Lcom/discord/chat/bridge/contentnode/LinkContentNode;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        m786invokentcYbpo(((MessageId) obj).m1198unboximpl(), (LinkContentNode) obj2);
        return Unit.a;
    }

    /* renamed from: invoke-ntcYbpo, reason: not valid java name */
    public final void m786invokentcYbpo(String p02, LinkContentNode p12) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((ChatEventHandler) this.receiver).mo480onLinkClickedntcYbpo(p02, p12);
    }
}
