package com.discord.chat.presentation.message.view.voicemessages;

import com.discord.keyboard.KeyboardModule;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4051d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f4052e;

    public /* synthetic */ b(boolean z5, int i5) {
        this.f4051d = i5;
        this.f4052e = z5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4051d) {
            case 0:
                AudioPlayerModule.pauseCurrentPlayer$lambda$0(this.f4052e);
                break;
            default:
                KeyboardModule.onKeyboardChanged$lambda$0(this.f4052e);
                break;
        }
    }
}
