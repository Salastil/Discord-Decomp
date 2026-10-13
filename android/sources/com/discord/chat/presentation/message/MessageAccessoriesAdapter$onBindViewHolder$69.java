package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.reactevents.ViewResizeMode;
import com.discord.primitives.ChannelId;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function8;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$69 extends FunctionReferenceImpl implements Function8 {
    public MessageAccessoriesAdapter$onBindViewHolder$69(Object obj) {
        super(8, obj, ChatEventHandler.class, "onLongPressPollImage", "onLongPressPollImage-YVExdug(JLjava/lang/String;Ljava/lang/String;IIIILcom/discord/chat/reactevents/ViewResizeMode;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function8
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6, Object obj7, Object obj8) {
        m570invokeYVExdug(((ChannelId) obj).m1172unboximpl(), ((MessageId) obj2).m1198unboximpl(), (String) obj3, ((Number) obj4).intValue(), ((Number) obj5).intValue(), ((Number) obj6).intValue(), ((Number) obj7).intValue(), (ViewResizeMode) obj8);
        return Unit.a;
    }

    /* renamed from: invoke-YVExdug, reason: not valid java name */
    public final void m570invokeYVExdug(long j, String p12, String p22, int i5, int i6, int i10, int i11, ViewResizeMode p72) {
        Intrinsics.checkNotNullParameter(p12, "p1");
        Intrinsics.checkNotNullParameter(p22, "p2");
        Intrinsics.checkNotNullParameter(p72, "p7");
        ((ChatEventHandler) this.receiver).mo483onLongPressPollImageYVExdug(j, p12, p22, i5, i6, i10, i11, p72);
    }
}
