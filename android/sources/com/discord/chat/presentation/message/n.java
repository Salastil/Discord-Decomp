package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.presentation.events.ChatEventHandler;

/* loaded from: classes.dex */
public final /* synthetic */ class n implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3944d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ChatEventHandler f3945e;

    public /* synthetic */ n(ChatEventHandler chatEventHandler, int i5) {
        this.f3944d = i5;
        this.f3945e = chatEventHandler;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3944d) {
            case 0:
                MessageTagView.configureTagView_Ul7AT2Q$lambda$1(this.f3945e, view);
                break;
            case 1:
                this.f3945e.onTapSuppressNotificationsIcon();
                break;
            case 2:
                this.f3945e.onTapTimeoutIcon();
                break;
            default:
                this.f3945e.onTapTimeoutIcon();
                break;
        }
    }
}
