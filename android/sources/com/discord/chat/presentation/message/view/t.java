package com.discord.chat.presentation.message.view;

import android.view.View;
import android.widget.FrameLayout;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerViewState;
import com.discord.media_player.MediaSource;

/* loaded from: classes.dex */
public final /* synthetic */ class t implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4041d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f4042e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ FrameLayout f4043i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4044v;

    public /* synthetic */ t(MediaView mediaView, boolean z5, MediaSource mediaSource) {
        this.f4043i = mediaView;
        this.f4042e = z5;
        this.f4044v = mediaSource;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4041d) {
            case 0:
                MediaView.setMediaData$lambda$10((MediaView) this.f4043i, this.f4042e, (MediaSource) this.f4044v, view);
                break;
            default:
                AudioPlayerView.configurePlayButton$lambda$12((AudioPlayerView) this.f4043i, (AudioPlayerViewState) this.f4044v, this.f4042e, view);
                break;
        }
    }

    public /* synthetic */ t(AudioPlayerView audioPlayerView, AudioPlayerViewState audioPlayerViewState, boolean z5) {
        this.f4043i = audioPlayerView;
        this.f4044v = audioPlayerViewState;
        this.f4042e = z5;
    }
}
