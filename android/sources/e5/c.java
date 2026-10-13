package e5;

import com.google.android.exoplayer2.PlaybackException;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.video.VideoSize;
import ge.p;
import java.util.List;

/* loaded from: classes.dex */
public final class c implements com.google.android.exoplayer2.h {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ d f8006d;

    public c(d dVar) {
        this.f8006d = dVar;
    }

    @Override // com.google.android.exoplayer2.h
    public final void onCues(CueGroup cueGroup) {
        this.f8006d.f8009i.setCues(cueGroup.f5455d);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPositionDiscontinuity(int i5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onRenderedFirstFrame() {
        this.f8006d.f8008e.setVisibility(4);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTracksChanged(Tracks tracks) {
        d dVar = this.f8006d;
        SimpleExoPlayer simpleExoPlayer = dVar.f8012x;
        if (simpleExoPlayer == null) {
            return;
        }
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar2 = simpleExoPlayer.f5286b;
        dVar2.x0();
        p[] pVarArr = dVar2.f5359g0.f9739i.f9231c;
        int length = pVarArr.length;
        for (int i5 = 0; i5 < length; i5++) {
            SimpleExoPlayer simpleExoPlayer2 = dVar.f8012x;
            simpleExoPlayer2.c0();
            com.google.android.exoplayer2.d dVar3 = simpleExoPlayer2.f5286b;
            dVar3.x0();
            if (dVar3.f5358g[i5].f9659e == 2 && pVarArr[i5] != null) {
                return;
            }
        }
        dVar.f8008e.setVisibility(0);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onVideoSizeChanged(VideoSize videoSize) {
        d dVar = this.f8006d;
        a aVar = dVar.f8010v;
        int i5 = videoSize.f5576d;
        int i6 = videoSize.f5577e;
        if (i5 == 0 && i6 == 0) {
            return;
        }
        boolean z5 = aVar.getAspectRatio() == 0.0f;
        aVar.setAspectRatio(i6 == 0 ? 1.0f : (videoSize.f5576d * videoSize.f5579v) / i6);
        if (z5) {
            dVar.post(dVar.G);
        }
    }

    @Override // com.google.android.exoplayer2.h
    public final void onCues(List list) {
        this.f8006d.f8009i.setCues(list);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPositionDiscontinuity(Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onLoadingChanged(boolean z5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlaybackParametersChanged(PlaybackParameters playbackParameters) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerError(PlaybackException playbackException) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onRepeatModeChanged(int i5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onShuffleModeEnabledChanged(boolean z5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerStateChanged(boolean z5, int i5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTimelineChanged(Timeline timeline, int i5) {
    }
}
