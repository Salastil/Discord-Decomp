package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$11 extends FunctionReferenceImpl implements Function1<String, Unit> {
    public GuildEventInviteViewHolder$bind$locationMarkdownEventHandlers$11(Object obj) {
        super(1, obj, ChatEventHandler.class, "onTapTimestamp", "onTapTimestamp(Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        invoke((String) obj);
        return Unit.a;
    }

    public final void invoke(String p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).onTapTimestamp(p02);
    }
}
