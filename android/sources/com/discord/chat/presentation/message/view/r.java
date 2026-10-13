package com.discord.chat.presentation.message.view;

import android.view.View;
import com.discord.media_player.MediaPlayer;
import com.discord.media_player.reactevents.MediaPlayFinishedAnalytics;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class r implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4034d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ MediaView f4035e;

    public /* synthetic */ r(MediaView mediaView, int i5) {
        this.f4034d = i5;
        this.f4035e = mediaView;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit attachStateChangeListener$lambda$2;
        Unit attachStateChangeListener$lambda$3;
        Unit registerForPortal$lambda$22;
        Unit prepareMediaPlayer$lambda$21$lambda$18;
        Unit prepareMediaPlayer$lambda$21$lambda$19;
        Unit prepareMediaPlayer$lambda$21$lambda$20;
        switch (this.f4034d) {
            case 0:
                attachStateChangeListener$lambda$2 = MediaView.attachStateChangeListener$lambda$2(this.f4035e, ((Boolean) obj).booleanValue());
                return attachStateChangeListener$lambda$2;
            case 1:
                attachStateChangeListener$lambda$3 = MediaView.attachStateChangeListener$lambda$3(this.f4035e, ((Boolean) obj).booleanValue());
                return attachStateChangeListener$lambda$3;
            case 2:
                registerForPortal$lambda$22 = MediaView.registerForPortal$lambda$22(this.f4035e, (View) obj);
                return registerForPortal$lambda$22;
            case 3:
                prepareMediaPlayer$lambda$21$lambda$18 = MediaView.prepareMediaPlayer$lambda$21$lambda$18(this.f4035e, (MediaPlayer.Event) obj);
                return prepareMediaPlayer$lambda$21$lambda$18;
            case 4:
                prepareMediaPlayer$lambda$21$lambda$19 = MediaView.prepareMediaPlayer$lambda$21$lambda$19(this.f4035e, ((Float) obj).floatValue());
                return prepareMediaPlayer$lambda$21$lambda$19;
            default:
                prepareMediaPlayer$lambda$21$lambda$20 = MediaView.prepareMediaPlayer$lambda$21$lambda$20(this.f4035e, (MediaPlayFinishedAnalytics) obj);
                return prepareMediaPlayer$lambda$21$lambda$20;
        }
    }
}
