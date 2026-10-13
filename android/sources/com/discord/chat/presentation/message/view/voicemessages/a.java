package com.discord.chat.presentation.message.view.voicemessages;

import android.media.AudioManager;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements AudioManager.OnAudioFocusChangeListener {
    @Override // android.media.AudioManager.OnAudioFocusChangeListener
    public final void onAudioFocusChange(int i5) {
        AudioPlayerManager.focusListener$lambda$0(i5);
    }
}
