package com.discord.media_player;

import com.discord.media_player.MediaPlayer;
import com.discord.media_player.MediaPlayerManager;
import fo.n;
import java.lang.ref.WeakReference;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.MutableStateFlow;
import lo.h;
import nr.g0;
import nr.x;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.media_player.MediaPlayerManager$mediaPlayerEventHandler$1", f = "MediaPlayerManager.kt", l = {64}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nMediaPlayerManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaPlayerManager.kt\ncom/discord/media_player/MediaPlayerManager$mediaPlayerEventHandler$1\n+ 2 StateFlow.kt\nkotlinx/coroutines/flow/StateFlowKt\n*L\n1#1,165:1\n230#2,5:166\n230#2,5:171\n230#2,5:176\n*S KotlinDebug\n*F\n+ 1 MediaPlayerManager.kt\ncom/discord/media_player/MediaPlayerManager$mediaPlayerEventHandler$1\n*L\n52#1:166,5\n70#1:171,5\n83#1:176,5\n*E\n"})
/* loaded from: classes.dex */
public final class MediaPlayerManager$mediaPlayerEventHandler$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ MediaPlayer.Event $event;
    final /* synthetic */ MediaPlayer $mediaPlayer;
    Object L$0;
    Object L$1;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManager$mediaPlayerEventHandler$1(MediaPlayer mediaPlayer, MediaPlayer.Event event, Continuation continuation) {
        super(2, continuation);
        this.$mediaPlayer = mediaPlayer;
        this.$event = event;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaPlayerManager$mediaPlayerEventHandler$1(this.$mediaPlayer, this.$event, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:39:0x0083, code lost:
    
        r1 = com.discord.media_player.MediaPlayerManager.activePlayerRef;
     */
    /* JADX WARN: Removed duplicated region for block: B:12:0x00e1  */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        MediaSource mediaSource;
        Object value;
        MediaPlayerManager.PlaybackProgress playbackProgress;
        Job job;
        WeakReference weakReference;
        MediaPlayer mediaPlayer;
        MediaSource mediaSource2;
        Object value2;
        MediaSource mediaSource3;
        MutableStateFlow playbackRateFlow$media_player_release;
        Object value3;
        Job job2;
        Job startProgressMonitor;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            mediaSource = this.$mediaPlayer.getMediaSource();
            MediaPlayerManager mediaPlayerManager = MediaPlayerManager.INSTANCE;
            boolean areEqual = Intrinsics.areEqual((MediaSource) ((Pair) mediaPlayerManager.getPlaybackRateFlow$media_player_release().getValue()).f13474d, mediaSource);
            MediaPlayer.Event event = this.$event;
            if (Intrinsics.areEqual(event, MediaPlayer.Event.Paused.INSTANCE)) {
                if (!areEqual) {
                    return Unit.a;
                }
                MutableStateFlow playbackRateFlow$media_player_release2 = mediaPlayerManager.getPlaybackRateFlow$media_player_release();
                do {
                    value2 = playbackRateFlow$media_player_release2.getValue();
                } while (!playbackRateFlow$media_player_release2.a(value2, new Pair(mediaSource, new Double(0.0d))));
            } else if (Intrinsics.areEqual(event, MediaPlayer.Event.StartedPlaying.INSTANCE)) {
                if ((mediaSource != null ? mediaSource.getType() : null) == MediaType.GIFV) {
                    return Unit.a;
                }
                if (!areEqual && weakReference != null && (mediaPlayer = (MediaPlayer) weakReference.get()) != null && !Intrinsics.areEqual(mediaPlayer, this.$mediaPlayer)) {
                    e eVar = g0.a;
                    or.d dVar = q.a;
                    MediaPlayerManager$mediaPlayerEventHandler$1$2$1 mediaPlayerManager$mediaPlayerEventHandler$1$2$1 = new MediaPlayerManager$mediaPlayerEventHandler$1$2$1(mediaPlayer, null);
                    this.L$0 = mediaSource;
                    this.L$1 = mediaPlayer;
                    this.label = 1;
                    if (x.A(dVar, mediaPlayerManager$mediaPlayerEventHandler$1$2$1, this) == aVar) {
                        return aVar;
                    }
                    mediaSource2 = mediaSource;
                }
                mediaSource3 = mediaSource;
                playbackRateFlow$media_player_release = MediaPlayerManager.INSTANCE.getPlaybackRateFlow$media_player_release();
                do {
                    value3 = playbackRateFlow$media_player_release.getValue();
                } while (!playbackRateFlow$media_player_release.a(value3, new Pair(mediaSource3, new Double(1.0d))));
                WeakReference weakReference2 = new WeakReference(this.$mediaPlayer);
                MediaPlayerManager.activePlayerRef = weakReference2;
                job2 = MediaPlayerManager.activeMonitoringJob;
                if (job2 != null) {
                    CancellationException cancellationException = new CancellationException("New progress monitor override");
                    cancellationException.initCause(null);
                    job2.f(cancellationException);
                }
                startProgressMonitor = MediaPlayerManager.INSTANCE.startProgressMonitor(weakReference2);
                MediaPlayerManager.activeMonitoringJob = startProgressMonitor;
            } else if (Intrinsics.areEqual(event, MediaPlayer.Event.PlaybackEnded.INSTANCE)) {
                if (!areEqual) {
                    return Unit.a;
                }
                mediaPlayerManager.getPlaybackRateFlow$media_player_release().setValue(new Pair(mediaSource, new Double(0.0d)));
                MutableStateFlow playbackProgressFlow$media_player_release = mediaPlayerManager.getPlaybackProgressFlow$media_player_release();
                do {
                    value = playbackProgressFlow$media_player_release.getValue();
                    playbackProgress = (MediaPlayerManager.PlaybackProgress) value;
                } while (!playbackProgressFlow$media_player_release.a(value, MediaPlayerManager.PlaybackProgress.copy$default(playbackProgress, null, playbackProgress.getDurationMs(), 0L, 5, null)));
                job = MediaPlayerManager.activeMonitoringJob;
                if (job != null) {
                    CancellationException cancellationException2 = new CancellationException("playback ended");
                    cancellationException2.initCause(null);
                    job.f(cancellationException2);
                }
                MediaPlayerManager.activeMonitoringJob = null;
            } else if (!Intrinsics.areEqual(event, MediaPlayer.Event.BufferEnd.INSTANCE) && !Intrinsics.areEqual(event, MediaPlayer.Event.BufferStart.INSTANCE) && !(event instanceof MediaPlayer.Event.PlaybackError)) {
                throw new n();
            }
            return Unit.a;
        }
        if (i5 != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        mediaSource2 = (MediaSource) this.L$0;
        ki.b.R(obj);
        mediaSource = mediaSource2;
        mediaSource3 = mediaSource;
        playbackRateFlow$media_player_release = MediaPlayerManager.INSTANCE.getPlaybackRateFlow$media_player_release();
        do {
            value3 = playbackRateFlow$media_player_release.getValue();
        } while (!playbackRateFlow$media_player_release.a(value3, new Pair(mediaSource3, new Double(1.0d))));
        WeakReference weakReference22 = new WeakReference(this.$mediaPlayer);
        MediaPlayerManager.activePlayerRef = weakReference22;
        job2 = MediaPlayerManager.activeMonitoringJob;
        if (job2 != null) {
        }
        startProgressMonitor = MediaPlayerManager.INSTANCE.startProgressMonitor(weakReference22);
        MediaPlayerManager.activeMonitoringJob = startProgressMonitor;
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaPlayerManager$mediaPlayerEventHandler$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
