package he;

import android.view.TextureView;
import android.view.View;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.ui.PlayerControlView;
import com.google.android.exoplayer2.ui.PlayerView;
import com.google.android.exoplayer2.ui.SubtitleView;
import com.google.android.exoplayer2.video.VideoSize;
import hc.s1;

/* loaded from: classes3.dex */
public final class j implements com.google.android.exoplayer2.h, View.OnLayoutChangeListener, View.OnClickListener, i {

    /* renamed from: d, reason: collision with root package name */
    public final s1 f9976d = new s1();

    /* renamed from: e, reason: collision with root package name */
    public Object f9977e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ PlayerView f9978i;

    public j(PlayerView playerView) {
        this.f9978i = playerView;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        int i5 = PlayerView.W;
        this.f9978i.f();
    }

    @Override // com.google.android.exoplayer2.h
    public final void onCues(CueGroup cueGroup) {
        SubtitleView subtitleView = this.f9978i.f5548y;
        if (subtitleView != null) {
            subtitleView.setCues(cueGroup.f5455d);
        }
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        PlayerView.a((TextureView) view, this.f9978i.V);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayWhenReadyChanged(boolean z5, int i5) {
        int i6 = PlayerView.W;
        PlayerView playerView = this.f9978i;
        playerView.h();
        if (!playerView.b() || !playerView.T) {
            playerView.c(false);
            return;
        }
        PlayerControlView playerControlView = playerView.G;
        if (playerControlView != null) {
            playerControlView.b();
        }
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlaybackStateChanged(int i5) {
        int i6 = PlayerView.W;
        PlayerView playerView = this.f9978i;
        playerView.h();
        playerView.j();
        if (!playerView.b() || !playerView.T) {
            playerView.c(false);
            return;
        }
        PlayerControlView playerControlView = playerView.G;
        if (playerControlView != null) {
            playerControlView.b();
        }
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPositionDiscontinuity(Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
        PlayerControlView playerControlView;
        int i6 = PlayerView.W;
        PlayerView playerView = this.f9978i;
        if (playerView.b() && playerView.T && (playerControlView = playerView.G) != null) {
            playerControlView.b();
        }
    }

    @Override // com.google.android.exoplayer2.h
    public final void onRenderedFirstFrame() {
        View view = this.f9978i.f5544i;
        if (view != null) {
            view.setVisibility(4);
        }
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTracksChanged(Tracks tracks) {
        PlayerView playerView = this.f9978i;
        Player player = playerView.J;
        player.getClass();
        Timeline J = player.J();
        if (J.p()) {
            this.f9977e = null;
        } else {
            boolean isEmpty = player.x().f5300d.isEmpty();
            s1 s1Var = this.f9976d;
            if (isEmpty) {
                Object obj = this.f9977e;
                if (obj != null) {
                    int b10 = J.b(obj);
                    if (b10 != -1) {
                        if (player.D() == J.f(b10, s1Var, false).f9871i) {
                            return;
                        }
                    }
                    this.f9977e = null;
                }
            } else {
                this.f9977e = J.f(player.j(), s1Var, true).f9870e;
            }
        }
        playerView.k(false);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onVideoSizeChanged(VideoSize videoSize) {
        int i5 = PlayerView.W;
        this.f9978i.g();
    }
}
