package ic;

import android.os.Looper;
import android.os.SystemClock;
import android.util.SparseArray;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.PlaybackException;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.video.VideoSize;
import com.reactnativecommunity.webview.RNCWebViewManager;
import fi.e0;
import fi.r0;
import fi.w0;
import hc.s1;
import java.io.IOException;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class u implements a {
    public ke.a0 E;
    public boolean F;

    /* renamed from: d, reason: collision with root package name */
    public final ke.y f10543d;

    /* renamed from: e, reason: collision with root package name */
    public final s1 f10544e;

    /* renamed from: i, reason: collision with root package name */
    public final Timeline.Window f10545i;

    /* renamed from: v, reason: collision with root package name */
    public final androidx.appcompat.widget.w f10546v;

    /* renamed from: w, reason: collision with root package name */
    public final SparseArray f10547w;

    /* renamed from: x, reason: collision with root package name */
    public ke.m f10548x;

    /* renamed from: y, reason: collision with root package name */
    public Player f10549y;

    public u(ke.y yVar) {
        yVar.getClass();
        this.f10543d = yVar;
        int i5 = d0.a;
        Looper myLooper = Looper.myLooper();
        this.f10548x = new ke.m(myLooper == null ? Looper.getMainLooper() : myLooper, yVar, new i7.a(1));
        s1 s1Var = new s1();
        this.f10544e = s1Var;
        this.f10545i = new Timeline.Window();
        androidx.appcompat.widget.w wVar = new androidx.appcompat.widget.w();
        wVar.f1141d = s1Var;
        fi.c0 c0Var = e0.f8656e;
        wVar.f1142e = r0.f8704w;
        wVar.f1143i = w0.f8728y;
        this.f10546v = wVar;
        this.f10547w = new SparseArray();
    }

    @Override // nc.o
    public final void A(int i5, nd.s sVar, int i6) {
        AnalyticsListener$EventTime i10 = i(i5, sVar);
        k(i10, 1022, new o(i10, i6, 4));
    }

    @Override // nc.o
    public final void C(int i5, nd.s sVar) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1023, new i(i6, 3));
    }

    @Override // ie.f
    public final void a(int i5, long j, long j5) {
        androidx.appcompat.widget.w wVar = this.f10546v;
        AnalyticsListener$EventTime g6 = g(((e0) wVar.f1142e).isEmpty() ? null : (nd.s) fi.p.i((e0) wVar.f1142e));
        k(g6, 1006, new f(g6, i5, j, j5, 1));
    }

    @Override // nd.x
    public final void b(int i5, nd.s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1000, new g(i6, loadEventInfo, mediaLoadData, 1));
    }

    public final AnalyticsListener$EventTime c() {
        return g((nd.s) this.f10546v.f1144v);
    }

    @Override // nc.o
    public final void d(int i5, nd.s sVar, Exception exc) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, new r(i6, exc, 1));
    }

    public final AnalyticsListener$EventTime e(Timeline timeline, int i5, nd.s sVar) {
        nd.s sVar2 = timeline.p() ? null : sVar;
        this.f10543d.getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime();
        boolean z5 = timeline.equals(this.f10549y.J()) && i5 == this.f10549y.D();
        long j = 0;
        if (sVar2 == null || !sVar2.a()) {
            if (z5) {
                j = this.f10549y.t();
            } else if (!timeline.p()) {
                j = d0.U(timeline.m(i5, this.f10545i, 0L).J);
            }
        } else if (z5 && this.f10549y.C() == sVar2.f15167b && this.f10549y.o() == sVar2.f15168c) {
            j = this.f10549y.S();
        }
        return new AnalyticsListener$EventTime(elapsedRealtime, timeline, i5, sVar2, j, this.f10549y.J(), this.f10549y.D(), (nd.s) this.f10546v.f1144v, this.f10549y.S(), this.f10549y.d());
    }

    @Override // nd.x
    public final void f(int i5, nd.s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, RNCWebViewManager.COMMAND_CLEAR_HISTORY, new g(i6, loadEventInfo, mediaLoadData, 2));
    }

    public final AnalyticsListener$EventTime g(nd.s sVar) {
        this.f10549y.getClass();
        Timeline timeline = sVar == null ? null : (Timeline) ((w0) this.f10546v.f1143i).get(sVar);
        if (sVar != null && timeline != null) {
            return e(timeline, timeline.g(sVar.a, this.f10544e).f9871i, sVar);
        }
        int D = this.f10549y.D();
        Timeline J = this.f10549y.J();
        if (D >= J.o()) {
            J = Timeline.f5288d;
        }
        return e(J, D, null);
    }

    @Override // nd.x
    public final void h(int i5, nd.s sVar, MediaLoadData mediaLoadData) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1004, new j(i6, mediaLoadData, 0));
    }

    public final AnalyticsListener$EventTime i(int i5, nd.s sVar) {
        this.f10549y.getClass();
        if (sVar != null) {
            return ((Timeline) ((w0) this.f10546v.f1143i).get(sVar)) != null ? g(sVar) : e(Timeline.f5288d, i5, sVar);
        }
        Timeline J = this.f10549y.J();
        if (i5 >= J.o()) {
            J = Timeline.f5288d;
        }
        return e(J, i5, null);
    }

    public final AnalyticsListener$EventTime j() {
        return g((nd.s) this.f10546v.f1146x);
    }

    public final void k(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, ke.j jVar) {
        this.f10547w.put(i5, analyticsListener$EventTime);
        this.f10548x.e(i5, jVar);
    }

    public final void l(com.google.android.exoplayer2.b bVar, Looper looper) {
        ke.b.k(this.f10549y == null || ((e0) this.f10546v.f1142e).isEmpty());
        bVar.getClass();
        this.f10549y = bVar;
        this.E = this.f10543d.a(looper, null);
        ke.m mVar = this.f10548x;
        this.f10548x = new ke.m(mVar.f13319d, looper, mVar.a, new cc.i(18, this, bVar), mVar.f13324i);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onAvailableCommandsChanged(Player.Commands commands) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 13, new cc.i(20, c6, commands));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onCues(List list) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 27, new cc.i(21, c6, list));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onIsLoadingChanged(boolean z5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 3, new d(c6, z5, 2));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onIsPlayingChanged(boolean z5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 7, new d(c6, z5, 3));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onMediaItemTransition(MediaItem mediaItem, int i5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 1, new cc.f(c6, mediaItem, i5, 3));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onMediaMetadataChanged(MediaMetadata mediaMetadata) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 14, new cc.i(16, c6, mediaMetadata));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onMetadata(Metadata metadata) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 28, new cc.i(23, c6, metadata));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayWhenReadyChanged(boolean z5, int i5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 5, new h(c6, z5, i5, 1));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlaybackParametersChanged(PlaybackParameters playbackParameters) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 12, new cc.i(17, c6, playbackParameters));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlaybackStateChanged(int i5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 4, new o(c6, i5, 0));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlaybackSuppressionReasonChanged(int i5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 6, new o(c6, i5, 2));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerError(PlaybackException playbackException) {
        nd.r rVar;
        AnalyticsListener$EventTime c6 = (!(playbackException instanceof com.google.android.exoplayer2.c) || (rVar = ((com.google.android.exoplayer2.c) playbackException).E) == null) ? c() : g(new nd.s(rVar));
        k(c6, 10, new m(c6, playbackException, 0));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerErrorChanged(PlaybackException playbackException) {
        nd.r rVar;
        AnalyticsListener$EventTime c6 = (!(playbackException instanceof com.google.android.exoplayer2.c) || (rVar = ((com.google.android.exoplayer2.c) playbackException).E) == null) ? c() : g(new nd.s(rVar));
        k(c6, 10, new m(c6, playbackException, 1));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerStateChanged(boolean z5, int i5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, -1, new h(c6, z5, i5, 0));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPositionDiscontinuity(int i5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onRepeatModeChanged(int i5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 8, new o(c6, i5, 1));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onShuffleModeEnabledChanged(boolean z5) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 9, new d(c6, z5, 0));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onSkipSilenceEnabledChanged(boolean z5) {
        AnalyticsListener$EventTime j = j();
        k(j, 23, new d(j, z5, 1));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onSurfaceSizeChanged(final int i5, final int i6) {
        final AnalyticsListener$EventTime j = j();
        k(j, 24, new ke.j() { // from class: ic.k
            @Override // ke.j
            public final void invoke(Object obj) {
                ((b) obj).onSurfaceSizeChanged(AnalyticsListener$EventTime.this, i5, i6);
            }
        });
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTimelineChanged(Timeline timeline, int i5) {
        Player player = this.f10549y;
        player.getClass();
        androidx.appcompat.widget.w wVar = this.f10546v;
        wVar.f1144v = androidx.appcompat.widget.w.v(player, (e0) wVar.f1142e, (nd.s) wVar.f1145w, (s1) wVar.f1141d);
        wVar.P(player.J());
        AnalyticsListener$EventTime c6 = c();
        k(c6, 0, new o(c6, i5, 3));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTracksChanged(Tracks tracks) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 2, new cc.i(22, c6, tracks));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onVideoSizeChanged(VideoSize videoSize) {
        AnalyticsListener$EventTime j = j();
        k(j, 25, new cc.i(24, j, videoSize));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onVolumeChanged(final float f2) {
        final AnalyticsListener$EventTime j = j();
        k(j, 22, new ke.j() { // from class: ic.t
            @Override // ke.j
            public final void invoke(Object obj) {
                ((b) obj).onVolumeChanged(AnalyticsListener$EventTime.this, f2);
            }
        });
    }

    @Override // nc.o
    public final void r(int i5, nd.s sVar) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1025, new i(i6, 4));
    }

    @Override // nc.o
    public final void s(int i5, nd.s sVar) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1027, new i(i6, 1));
    }

    @Override // nd.x
    public final void v(int i5, nd.s sVar, final LoadEventInfo loadEventInfo, final MediaLoadData mediaLoadData, final IOException iOException, final boolean z5) {
        final AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1003, new ke.j() { // from class: ic.l
            @Override // ke.j
            public final void invoke(Object obj) {
                ((b) obj).onLoadError(AnalyticsListener$EventTime.this, loadEventInfo, mediaLoadData, iOException, z5);
            }
        });
    }

    @Override // nd.x
    public final void y(int i5, nd.s sVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, RNCWebViewManager.COMMAND_CLEAR_CACHE, new g(i6, loadEventInfo, mediaLoadData, 0));
    }

    @Override // nd.x
    public final void z(int i5, nd.s sVar, MediaLoadData mediaLoadData) {
        AnalyticsListener$EventTime i6 = i(i5, sVar);
        k(i6, 1005, new j(i6, mediaLoadData, 1));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPositionDiscontinuity(final Player.PositionInfo positionInfo, final Player.PositionInfo positionInfo2, final int i5) {
        if (i5 == 1) {
            this.F = false;
        }
        Player player = this.f10549y;
        player.getClass();
        androidx.appcompat.widget.w wVar = this.f10546v;
        wVar.f1144v = androidx.appcompat.widget.w.v(player, (e0) wVar.f1142e, (nd.s) wVar.f1145w, (s1) wVar.f1141d);
        final AnalyticsListener$EventTime c6 = c();
        k(c6, 11, new ke.j() { // from class: ic.s
            @Override // ke.j
            public final void invoke(Object obj) {
                b bVar = (b) obj;
                AnalyticsListener$EventTime analyticsListener$EventTime = AnalyticsListener$EventTime.this;
                int i6 = i5;
                bVar.onPositionDiscontinuity(analyticsListener$EventTime, i6);
                bVar.onPositionDiscontinuity(analyticsListener$EventTime, positionInfo, positionInfo2, i6);
            }
        });
    }

    @Override // com.google.android.exoplayer2.h
    public final void onCues(CueGroup cueGroup) {
        AnalyticsListener$EventTime c6 = c();
        k(c6, 27, new cc.i(19, c6, cueGroup));
    }

    @Override // com.google.android.exoplayer2.h
    public final void onRenderedFirstFrame() {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onLoadingChanged(boolean z5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onEvents(Player player, Player.Events events) {
    }
}
