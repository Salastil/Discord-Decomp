package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.MessageId;
import com.discord.primitives.UserId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$13 extends FunctionReferenceImpl implements Function3 {
    public MessageAccessoriesAdapter$onBindViewHolder$13(Object obj) {
        super(3, obj, ChatEventHandler.class, "onTapGiftIntentSecondaryCta", "onTapGiftIntentSecondaryCta-gzHKzLY(Ljava/lang/String;JI)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m556invokegzHKzLY(((MessageId) obj).m1198unboximpl(), ((UserId) obj2).m1250unboximpl(), ((Number) obj3).intValue());
        return Unit.a;
    }

    /* renamed from: invoke-gzHKzLY, reason: not valid java name */
    public final void m556invokegzHKzLY(String p02, long j, int i5) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).mo504onTapGiftIntentSecondaryCtagzHKzLY(p02, j, i5);
    }
}
