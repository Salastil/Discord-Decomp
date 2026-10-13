package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.bridge.Message;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.system.CallSystemMessageView;
import com.discord.chat.presentation.message.view.FlaggedMessageEmbedView;

/* loaded from: classes.dex */
public final /* synthetic */ class o implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3946d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Message f3947e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ ChatEventHandler f3948i;

    public /* synthetic */ o(int i5, Message message, ChatEventHandler chatEventHandler) {
        this.f3946d = i5;
        this.f3947e = message;
        this.f3948i = chatEventHandler;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3946d) {
            case 0:
                MessageView.configureAuthor$lambda$48$lambda$46(this.f3947e, this.f3948i, view);
                break;
            case 1:
                MessageView.configureAuthorClickListeners$lambda$16(this.f3947e, this.f3948i, view);
                break;
            case 2:
                CallSystemMessageView.setMessage$lambda$4(this.f3948i, this.f3947e, view);
                break;
            case 3:
                FlaggedMessageEmbedView.configureAuthor$lambda$22$lambda$20(this.f3947e, this.f3948i, view);
                break;
            default:
                FlaggedMessageEmbedView.configureAuthor$lambda$24$lambda$23(this.f3947e, this.f3948i, view);
                break;
        }
    }

    public /* synthetic */ o(ChatEventHandler chatEventHandler, Message message) {
        this.f3946d = 2;
        this.f3948i = chatEventHandler;
        this.f3947e = message;
    }
}
