package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$72 extends FunctionReferenceImpl implements Function3 {
    public MessageAccessoriesAdapter$onBindViewHolder$72(Object obj) {
        super(3, obj, ChatEventHandler.class, "onTapCtaButton", "onTapCtaButton-sekaTiM(JLjava/lang/String;Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m574invokesekaTiM(((ChannelId) obj).m1172unboximpl(), ((MessageId) obj2).m1198unboximpl(), (String) obj3);
        return Unit.a;
    }

    /* renamed from: invoke-sekaTiM, reason: not valid java name */
    public final void m574invokesekaTiM(long j, String p12, String p22) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        Intrinsics.checkNotNullParameter(p22, "p2");
        ((ChatEventHandler) this.receiver).mo498onTapCtaButtonsekaTiM(j, p12, p22);
    }
}
