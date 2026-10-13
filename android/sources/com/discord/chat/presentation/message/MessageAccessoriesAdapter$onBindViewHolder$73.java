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
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$73 extends FunctionReferenceImpl implements Function3 {
    public MessageAccessoriesAdapter$onBindViewHolder$73(Object obj) {
        super(3, obj, ChatEventHandler.class, "onTapForwardFooter", "onTapForwardFooter-SHRpUJI(IJLjava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m575invokeSHRpUJI(((Number) obj).intValue(), ((ChannelId) obj2).m1172unboximpl(), ((MessageId) obj3).m1198unboximpl());
        return Unit.a;
    }

    /* renamed from: invoke-SHRpUJI, reason: not valid java name */
    public final void m575invokeSHRpUJI(int i5, long j, String p22) {
        Intrinsics.checkNotNullParameter(p22, "p2");
        ((ChatEventHandler) this.receiver).mo501onTapForwardFooterSHRpUJI(i5, j, p22);
    }
}
