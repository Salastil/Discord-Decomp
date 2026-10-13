package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.bridge.Message;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.system.SystemMessageView;
import com.discord.chat.presentation.message.view.FlaggedMessageEmbedView;

/* loaded from: classes.dex */
public final /* synthetic */ class p implements View.OnLongClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3949d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Message f3950e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ChatEventHandler f3951i;

    public /* synthetic */ p(int i5, Message message, ChatEventHandler chatEventHandler) {
        this.f3949d = i5;
        this.f3950e = message;
        this.f3951i = chatEventHandler;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        boolean configureAuthor$lambda$48$lambda$47;
        boolean configureAuthorClickListeners$lambda$17;
        boolean message$lambda$0;
        boolean configureAuthor$lambda$22$lambda$21;
        switch (this.f3949d) {
            case 0:
                configureAuthor$lambda$48$lambda$47 = MessageView.configureAuthor$lambda$48$lambda$47(this.f3950e, this.f3951i, view);
                return configureAuthor$lambda$48$lambda$47;
            case 1:
                configureAuthorClickListeners$lambda$17 = MessageView.configureAuthorClickListeners$lambda$17(this.f3950e, this.f3951i, view);
                return configureAuthorClickListeners$lambda$17;
            case 2:
                message$lambda$0 = SystemMessageView.setMessage$lambda$0(this.f3950e, this.f3951i, view);
                return message$lambda$0;
            default:
                configureAuthor$lambda$22$lambda$21 = FlaggedMessageEmbedView.configureAuthor$lambda$22$lambda$21(this.f3950e, this.f3951i, view);
                return configureAuthor$lambda$22$lambda$21;
        }
    }
}
