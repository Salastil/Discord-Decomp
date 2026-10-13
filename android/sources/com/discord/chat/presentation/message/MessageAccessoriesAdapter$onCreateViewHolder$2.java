package com.discord.chat.presentation.message;

import com.discord.chat.bridge.sticker.Sticker;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onCreateViewHolder$2 extends FunctionReferenceImpl implements Function2<Sticker, MessageId, Unit> {
    public MessageAccessoriesAdapter$onCreateViewHolder$2(Object obj) {
        super(2, obj, ChatEventHandler.class, "onWelcomeReplyClicked", "onWelcomeReplyClicked-Ayv7vGE(Lcom/discord/chat/bridge/sticker/Sticker;Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function2
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2) {
        m577invokeAyv7vGE((Sticker) obj, ((MessageId) obj2).m1198unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-Ayv7vGE, reason: not valid java name */
    public final void m577invokeAyv7vGE(Sticker p02, String p12) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((ChatEventHandler) this.receiver).mo531onWelcomeReplyClickedAyv7vGE(p02, p12);
    }
}
