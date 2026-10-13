package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.bridge.Message;
import com.discord.chat.presentation.message.system.SystemMessageView;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class s implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3959d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f3960e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Message f3961i;

    public /* synthetic */ s(Function2 function2, Message message, int i5) {
        this.f3959d = i5;
        this.f3960e = function2;
        this.f3961i = message;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3959d) {
            case 0:
                MessageView.setMessage$lambda$11$lambda$10(this.f3960e, this.f3961i, view);
                break;
            case 1:
                MessageView.setMessage$lambda$15$lambda$14(this.f3960e, this.f3961i, view);
                break;
            default:
                SystemMessageView.setMessage$lambda$2$lambda$1(this.f3960e, this.f3961i, view);
                break;
        }
    }
}
