package com.discord.chat.presentation.message.viewholder;

import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.primitives.MessageId;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class EmbedViewHolder$bind$1 extends FunctionReferenceImpl implements Function3 {
    public EmbedViewHolder$bind$1(Object obj) {
        super(3, obj, ChatEventHandler.class, "onLinkClicked", "onLinkClicked-u7_MRrM(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        m783invokeu7_MRrM(((MessageId) obj).m1198unboximpl(), (String) obj2, (String) obj3);
        return Unit.a;
    }

    /* renamed from: invoke-u7_MRrM, reason: not valid java name */
    public final void m783invokeu7_MRrM(String p02, String p12, String str) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((ChatEventHandler) this.receiver).mo481onLinkClickedu7_MRrM(p02, p12, str);
    }
}
