package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.bridge.forwarding.ForwardInfo;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.view.CtaButtonView;
import com.discord.chat.presentation.message.view.ForwardBreadcrumbView;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class m implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3939d = 2;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f3940e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f3941i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3942v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3943w;

    public /* synthetic */ m(long j, String str, ForwardInfo forwardInfo, Function3 function3) {
        this.f3943w = function3;
        this.f3942v = forwardInfo;
        this.f3940e = j;
        this.f3941i = str;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3939d) {
            case 0:
                MessageTagView.configureTagView_Ul7AT2Q$lambda$0((ChatEventHandler) this.f3943w, this.f3941i, this.f3940e, (String) this.f3942v, view);
                break;
            case 1:
                CtaButtonView.configureButton_CMNjcK4$lambda$0((Function3) this.f3943w, this.f3940e, this.f3941i, (String) this.f3942v, view);
                break;
            default:
                ForwardBreadcrumbView.configure_JjTCmh4$lambda$0((Function3) this.f3943w, (ForwardInfo) this.f3942v, this.f3940e, this.f3941i, view);
                break;
        }
    }

    public /* synthetic */ m(ChatEventHandler chatEventHandler, String str, long j, String str2) {
        this.f3943w = chatEventHandler;
        this.f3941i = str;
        this.f3940e = j;
        this.f3942v = str2;
    }

    public /* synthetic */ m(Function3 function3, long j, String str, String str2) {
        this.f3943w = function3;
        this.f3940e = j;
        this.f3941i = str;
        this.f3942v = str2;
    }
}
