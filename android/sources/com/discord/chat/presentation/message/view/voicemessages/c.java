package com.discord.chat.presentation.message.view.voicemessages;

import com.discord.media_player.MediaPlayer;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4053d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AudioPlayerView f4054e;

    public /* synthetic */ c(AudioPlayerView audioPlayerView, int i5) {
        this.f4053d = i5;
        this.f4054e = audioPlayerView;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit prepareAudio$lambda$13;
        Unit attachStateChangeListener$lambda$0;
        switch (this.f4053d) {
            case 0:
                prepareAudio$lambda$13 = AudioPlayerView.prepareAudio$lambda$13(this.f4054e, (MediaPlayer.Event) obj);
                return prepareAudio$lambda$13;
            default:
                attachStateChangeListener$lambda$0 = AudioPlayerView.attachStateChangeListener$lambda$0(this.f4054e, ((Boolean) obj).booleanValue());
                return attachStateChangeListener$lambda$0;
        }
    }
}
