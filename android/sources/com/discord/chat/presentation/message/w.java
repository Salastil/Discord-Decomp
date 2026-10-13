package com.discord.chat.presentation.message;

import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.viewholder.MessageComponentsViewHolder;
import com.discord.primitives.UserId;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class w implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4105d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ChatEventHandler f4106e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f4107i;

    public /* synthetic */ w(ChatEventHandler chatEventHandler, String str, int i5) {
        this.f4105d = i5;
        this.f4106e = chatEventHandler;
        this.f4107i = str;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit configureExecutedCommand_dB0_bEw$lambda$14;
        Unit bind$lambda$1;
        Unit bind$lambda$2;
        Unit bind$lambda$3;
        Unit bind$lambda$4;
        Unit bind$lambda$6;
        switch (this.f4105d) {
            case 0:
                configureExecutedCommand_dB0_bEw$lambda$14 = MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$14(this.f4106e, this.f4107i, (LinkContentNode) obj);
                return configureExecutedCommand_dB0_bEw$lambda$14;
            case 1:
                bind$lambda$1 = MessageComponentsViewHolder.bind$lambda$1(this.f4106e, this.f4107i, (LinkContentNode) obj);
                return bind$lambda$1;
            case 2:
                bind$lambda$2 = MessageComponentsViewHolder.bind$lambda$2(this.f4106e, this.f4107i, (String) obj);
                return bind$lambda$2;
            case 3:
                bind$lambda$3 = MessageComponentsViewHolder.bind$lambda$3(this.f4106e, this.f4107i, (String) obj);
                return bind$lambda$3;
            case 4:
                bind$lambda$4 = MessageComponentsViewHolder.bind$lambda$4(this.f4106e, this.f4107i, (String) obj);
                return bind$lambda$4;
            default:
                bind$lambda$6 = MessageComponentsViewHolder.bind$lambda$6(this.f4106e, this.f4107i, (UserId) obj);
                return bind$lambda$6;
        }
    }
}
