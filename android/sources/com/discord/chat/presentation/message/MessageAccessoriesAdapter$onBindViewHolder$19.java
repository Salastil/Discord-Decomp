package com.discord.chat.presentation.message;

import com.discord.chat.presentation.events.ChatEventHandler;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function4;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageAccessoriesAdapter$onBindViewHolder$19 extends FunctionReferenceImpl implements Function4 {
    public MessageAccessoriesAdapter$onBindViewHolder$19(Object obj) {
        super(4, obj, ChatEventHandler.class, "onLongPressChannel", "onLongPressChannel(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function4
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3, Object obj4) {
        invoke((String) obj, (String) obj2, (String) obj3, (String) obj4);
        return Unit.a;
    }

    public final void invoke(String p02, String str, String str2, String str3) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((ChatEventHandler) this.receiver).onLongPressChannel(p02, str, str2, str3);
    }
}
