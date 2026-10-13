package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GuildEventInviteViewHolder$bind$1$1$13 extends FunctionReferenceImpl implements Function1<MessageId, Unit> {
    public GuildEventInviteViewHolder$bind$1$1$13(Object obj) {
        super(1, obj, ChatEventHandler.class, "onTapSeeMore", "onTapSeeMore-1xi1bu0(Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        m790invoke1xi1bu0(((MessageId) obj).m1198unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-1xi1bu0, reason: not valid java name */
    public final void m790invoke1xi1bu0(String p02) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).mo522onTapSeeMore1xi1bu0(p02);
    }
}
