package com.discord.media_player;

import a3.e;
import android.content.Context;
import android.net.Uri;
import android.webkit.MimeTypeMap;
import com.discord.jank_stats.JankRecordStore;
import com.discord.logging.Log;
import com.discord.media_player.MediaPlayerView;
import com.discord.media_player.reactevents.MediaPlayFinishedAnalytics;
import com.discord.resource_usage.DeviceResourceUsageRecorder;
import com.google.android.exoplayer2.DeviceInfo;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.PlaybackException;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.analytics.AnalyticsListener$Events;
import com.google.android.exoplayer2.analytics.PlaybackStats;
import com.google.android.exoplayer2.audio.AudioAttributes;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import com.google.android.exoplayer2.decoder.DecoderReuseEvaluation;
import com.google.android.exoplayer2.h;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo;
import com.google.android.exoplayer2.trackselection.TrackSelectionParameters;
import com.google.android.exoplayer2.upstream.DataSource;
import com.google.android.exoplayer2.video.VideoSize;
import com.reactnativecommunity.webview.RNCWebViewManager;
import fi.e0;
import ge.g;
import ge.r;
import hc.j;
import hc.m;
import hc.n;
import hc.n0;
import hc.p0;
import hc.t1;
import ic.a0;
import ic.u;
import ie.q;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import ke.d0;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.x;
import nd.a1;
import nd.j0;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0092\u0001\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0019\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\u0018\u0000 b2\u00020\u0001:\u0006]^_`abB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0004\b\b\u0010\tJF\u00103\u001a\u00020\r2\u0006\u0010\u001a\u001a\u00020\u001b2\b\b\u0002\u00104\u001a\u00020!2\b\b\u0002\u00105\u001a\u00020!2\b\b\u0002\u00106\u001a\u0002072\n\b\u0002\u00108\u001a\u0004\u0018\u0001092\n\b\u0002\u0010:\u001a\u0004\u0018\u00010;H\u0007J\b\u0010<\u001a\u00020\rH\u0007J\b\u0010=\u001a\u00020\rH\u0007J\u0006\u0010>\u001a\u00020\rJ\b\u0010?\u001a\u00020\rH\u0007J\u0010\u0010@\u001a\u00020\r2\u0006\u0010A\u001a\u00020\u0013H\u0007J\b\u0010B\u001a\u00020\rH\u0007J\u000e\u0010C\u001a\u00020\r2\u0006\u0010D\u001a\u000207J\u0006\u0010E\u001a\u000207J\u0006\u0010F\u001a\u000207J\u0006\u0010G\u001a\u000207J\b\u0010H\u001a\u00020\u0013H\u0007J\b\u0010I\u001a\u00020\u0013H\u0007J\u0006\u0010J\u001a\u00020!J\u0006\u0010K\u001a\u00020!J\u0006\u0010L\u001a\u00020!J\u0006\u0010M\u001a\u00020!J\u0006\u0010N\u001a\u00020!J\u0006\u0010O\u001a\u00020!J\u0010\u0010P\u001a\u00020\r2\u0006\u0010Q\u001a\u00020\fH\u0002J\b\u0010R\u001a\u00020\rH\u0002J\u0010\u0010S\u001a\u00020\r2\u0006\u0010T\u001a\u00020UH\u0002J \u0010V\u001a\u00020!2\u0006\u0010T\u001a\u00020U2\u0006\u0010W\u001a\u00020X2\u0006\u0010Y\u001a\u00020,H\u0002J\u000e\u0010Z\u001a\u00020!2\u0006\u0010[\u001a\u00020\u0007J\u0010\u0010\\\u001a\u00020\r2\u0006\u00108\u001a\u000209H\u0007R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R&\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\r0\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000e\u0010\u000f\"\u0004\b\u0010\u0010\u0011R&\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u0013\u0012\u0004\u0012\u00020\r0\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u000f\"\u0004\b\u0015\u0010\u0011R&\u0010\u0016\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\r0\u000bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u000f\"\u0004\b\u0019\u0010\u0011R\u001c\u0010\u001a\u001a\u0004\u0018\u00010\u001bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001c\u0010\u001d\"\u0004\b\u001e\u0010\u001fR\u000e\u0010 \u001a\u00020!X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020!X\u0082\u000e¢\u0006\u0002\n\u0000R(\u0010%\u001a\u00020$2\u0006\u0010#\u001a\u00020$8\u0000@BX\u0081\u000e¢\u0006\u0010\n\u0002\u0010*\u0012\u0004\b&\u0010'\u001a\u0004\b(\u0010)R\u0012\u0010+\u001a\u0004\u0018\u00010,X\u0082\u000e¢\u0006\u0004\n\u0002\u0010-R\u0010\u0010.\u001a\u0004\u0018\u00010/X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00100\u001a\u00020!X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u00101\u001a\u000202X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006c"}, d2 = {"Lcom/discord/media_player/MediaPlayer;", "", "exoPlayer", "Lcom/google/android/exoplayer2/SimpleExoPlayer;", "dataSourceFactory", "Lcom/google/android/exoplayer2/upstream/DataSource$Factory;", "currentSettings", "Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "<init>", "(Lcom/google/android/exoplayer2/SimpleExoPlayer;Lcom/google/android/exoplayer2/upstream/DataSource$Factory;Lcom/discord/media_player/MediaPlayer$PlayerSettings;)V", "eventListener", "Lkotlin/Function1;", "Lcom/discord/media_player/MediaPlayer$Event;", "", "getEventListener", "()Lkotlin/jvm/functions/Function1;", "setEventListener", "(Lkotlin/jvm/functions/Function1;)V", "volumeListener", "", "getVolumeListener", "setVolumeListener", "analyticsListener", "Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "getAnalyticsListener", "setAnalyticsListener", "mediaSource", "Lcom/discord/media_player/MediaSource;", "getMediaSource", "()Lcom/discord/media_player/MediaSource;", "setMediaSource", "(Lcom/discord/media_player/MediaSource;)V", "hasVideoTrack", "", "videoFrameRendered", "value", "Lcom/discord/media_player/MediaPlayer$LatchedDurationMs;", "currentItemDuration", "getCurrentItemDuration-nHNvnlg$media_player_release$annotations", "()V", "getCurrentItemDuration-nHNvnlg$media_player_release", "()J", "J", "lastErrorCode", "", "Ljava/lang/Integer;", "lastErrorMessage", "", "errorReportedForItem", "reportingSession", "Lcom/discord/media_player/MediaPlayer$ReportingSession;", "preparePlayer", "autoPlayWhenReady", "loopMedia", "initialSeekPositionMs", "", "mediaPlayerView", "Lcom/discord/media_player/MediaPlayerView;", "playerControlView", "Lcom/discord/media_player/MediaPlayerView$ControlView;", "release", "play", "playOrReset", "pause", "setVolume", "volume", "reset", "seekTo", "positionMs", "durationMs", "currentPositionMs", "bufferedPositionMs", "currentPositionPercentage", "bufferedPercentage", "shouldPlay", "isPlaying", "isBuffering", "hasError", "isMuted", "hasEnded", "setEvent", "event", "configureMultiAudioTrackSelection", "configureDefaultAudioTrackOverride", "trackSelector", "Lcom/google/android/exoplayer2/trackselection/DefaultTrackSelector;", "findAndConfigureAudioRenderer", "mappedTrackInfo", "Lcom/google/android/exoplayer2/trackselection/MappingTrackSelector$MappedTrackInfo;", "rendererIndex", "hasDifferentSettings", "newSettings", "reattachSurface", "ReportingSession", "WindowDurationMs", "LatchedDurationMs", "Event", "PlayerSettings", "Factory", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaPlayer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaPlayer.kt\ncom/discord/media_player/MediaPlayer\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,799:1\n1#2:800\n*E\n"})
/* loaded from: classes.dex */
public final class MediaPlayer {
    private static final int FIRST_AUDIO_GROUP = 0;
    private static final int FIRST_TRACK_IN_GROUP = 0;
    private static final int MEDIA_ERR_DECODE = 3;
    private static final int MEDIA_ERR_NETWORK = 2;
    private static final int MEDIA_ERR_SRC_NOT_SUPPORTED = 4;
    private static final long MIN_DECODE_CHECK_WALL_TIME_MS = 1000;

    @NotNull
    private static final String UNDECODABLE_MESSAGE = "No valid video frames detected - codec may be unsupported";

    @NotNull
    private Function1<? super MediaPlayFinishedAnalytics, Unit> analyticsListener;
    private long currentItemDuration;

    @NotNull
    private final PlayerSettings currentSettings;

    @NotNull
    private final DataSource.Factory dataSourceFactory;
    private boolean errorReportedForItem;

    @NotNull
    private Function1<? super Event, Unit> eventListener;

    @NotNull
    private final SimpleExoPlayer exoPlayer;
    private boolean hasVideoTrack;
    private Integer lastErrorCode;
    private String lastErrorMessage;
    private MediaSource mediaSource;

    @NotNull
    private ReportingSession reportingSession;
    private boolean videoFrameRendered;

    @NotNull
    private Function1<? super Float, Unit> volumeListener;

    /* renamed from: Factory, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final PlayerSettings defaultSettings = new PlayerSettings(20000, 20000, 1000, 1000, false, true, HttpEngine.DEFAULT);

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u00002\u00020\u0001:\u0006\u0004\u0005\u0006\u0007\b\tB\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0006\n\u000b\f\r\u000e\u000f¨\u0006\u0010"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event;", "", "<init>", "()V", "BufferStart", "BufferEnd", "Paused", "StartedPlaying", "PlaybackEnded", "PlaybackError", "Lcom/discord/media_player/MediaPlayer$Event$BufferEnd;", "Lcom/discord/media_player/MediaPlayer$Event$BufferStart;", "Lcom/discord/media_player/MediaPlayer$Event$Paused;", "Lcom/discord/media_player/MediaPlayer$Event$PlaybackEnded;", "Lcom/discord/media_player/MediaPlayer$Event$PlaybackError;", "Lcom/discord/media_player/MediaPlayer$Event$StartedPlaying;", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static abstract class Event {

        @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\n\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÖ\u0003J\t\u0010\b\u001a\u00020\tHÖ\u0001J\t\u0010\n\u001a\u00020\u000bHÖ\u0001¨\u0006\f"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event$BufferEnd;", "Lcom/discord/media_player/MediaPlayer$Event;", "<init>", "()V", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class BufferEnd extends Event {

            @NotNull
            public static final BufferEnd INSTANCE = new BufferEnd();

            private BufferEnd() {
                super(null);
            }

            public boolean equals(Object other) {
                return this == other || (other instanceof BufferEnd);
            }

            public int hashCode() {
                return 1704075707;
            }

            @NotNull
            public String toString() {
                return "BufferEnd";
            }
        }

        @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\n\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÖ\u0003J\t\u0010\b\u001a\u00020\tHÖ\u0001J\t\u0010\n\u001a\u00020\u000bHÖ\u0001¨\u0006\f"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event$BufferStart;", "Lcom/discord/media_player/MediaPlayer$Event;", "<init>", "()V", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class BufferStart extends Event {

            @NotNull
            public static final BufferStart INSTANCE = new BufferStart();

            private BufferStart() {
                super(null);
            }

            public boolean equals(Object other) {
                return this == other || (other instanceof BufferStart);
            }

            public int hashCode() {
                return 1247323458;
            }

            @NotNull
            public String toString() {
                return "BufferStart";
            }
        }

        @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\n\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÖ\u0003J\t\u0010\b\u001a\u00020\tHÖ\u0001J\t\u0010\n\u001a\u00020\u000bHÖ\u0001¨\u0006\f"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event$Paused;", "Lcom/discord/media_player/MediaPlayer$Event;", "<init>", "()V", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class Paused extends Event {

            @NotNull
            public static final Paused INSTANCE = new Paused();

            private Paused() {
                super(null);
            }

            public boolean equals(Object other) {
                return this == other || (other instanceof Paused);
            }

            public int hashCode() {
                return -1136552978;
            }

            @NotNull
            public String toString() {
                return "Paused";
            }
        }

        @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\n\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÖ\u0003J\t\u0010\b\u001a\u00020\tHÖ\u0001J\t\u0010\n\u001a\u00020\u000bHÖ\u0001¨\u0006\f"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event$PlaybackEnded;", "Lcom/discord/media_player/MediaPlayer$Event;", "<init>", "()V", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class PlaybackEnded extends Event {

            @NotNull
            public static final PlaybackEnded INSTANCE = new PlaybackEnded();

            private PlaybackEnded() {
                super(null);
            }

            public boolean equals(Object other) {
                return this == other || (other instanceof PlaybackEnded);
            }

            public int hashCode() {
                return -1335489889;
            }

            @NotNull
            public String toString() {
                return "PlaybackEnded";
            }
        }

        @Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u0013\u0012\n\u0010\u0002\u001a\u00060\u0003j\u0002`\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\r\u0010\t\u001a\u00060\u0003j\u0002`\u0004HÆ\u0003J\u0017\u0010\n\u001a\u00020\u00002\f\b\u0002\u0010\u0002\u001a\u00060\u0003j\u0002`\u0004HÆ\u0001J\u0013\u0010\u000b\u001a\u00020\f2\b\u0010\r\u001a\u0004\u0018\u00010\u000eHÖ\u0003J\t\u0010\u000f\u001a\u00020\u0010HÖ\u0001J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001R\u0015\u0010\u0002\u001a\u00060\u0003j\u0002`\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u0006\u0013"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event$PlaybackError;", "Lcom/discord/media_player/MediaPlayer$Event;", "exception", "Ljava/lang/Exception;", "Lkotlin/Exception;", "<init>", "(Ljava/lang/Exception;)V", "getException", "()Ljava/lang/Exception;", "component1", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class PlaybackError extends Event {

            @NotNull
            private final Exception exception;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public PlaybackError(@NotNull Exception exception) {
                super(null);
                Intrinsics.checkNotNullParameter(exception, "exception");
                this.exception = exception;
            }

            public static /* synthetic */ PlaybackError copy$default(PlaybackError playbackError, Exception exc, int i5, Object obj) {
                if ((i5 & 1) != 0) {
                    exc = playbackError.exception;
                }
                return playbackError.copy(exc);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final Exception getException() {
                return this.exception;
            }

            @NotNull
            public final PlaybackError copy(@NotNull Exception exception) {
                Intrinsics.checkNotNullParameter(exception, "exception");
                return new PlaybackError(exception);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                return (other instanceof PlaybackError) && Intrinsics.areEqual(this.exception, ((PlaybackError) other).exception);
            }

            @NotNull
            public final Exception getException() {
                return this.exception;
            }

            public int hashCode() {
                return this.exception.hashCode();
            }

            @NotNull
            public String toString() {
                return "PlaybackError(exception=" + this.exception + ")";
            }
        }

        @Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\bÆ\n\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0013\u0010\u0004\u001a\u00020\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007HÖ\u0003J\t\u0010\b\u001a\u00020\tHÖ\u0001J\t\u0010\n\u001a\u00020\u000bHÖ\u0001¨\u0006\f"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Event$StartedPlaying;", "Lcom/discord/media_player/MediaPlayer$Event;", "<init>", "()V", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class StartedPlaying extends Event {

            @NotNull
            public static final StartedPlaying INSTANCE = new StartedPlaying();

            private StartedPlaying() {
                super(null);
            }

            public boolean equals(Object other) {
                return this == other || (other instanceof StartedPlaying);
            }

            public int hashCode() {
                return -142606547;
            }

            @NotNull
            public String toString() {
                return "StartedPlaying";
            }
        }

        public /* synthetic */ Event(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Event() {
        }
    }

    @Metadata(d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0015\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u000f\u001a\u00020\u0005H\u0001¢\u0006\u0002\b\u0010J\u0017\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u000bH\u0001¢\u0006\u0002\b\u0014J\u0019\u0010\u0015\u001a\u0004\u0018\u00010\u000b2\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0001¢\u0006\u0002\b\u0018J!\u0010\u0019\u001a\u0004\u0018\u00010\u000b2\b\u0010\u001a\u001a\u0004\u0018\u00010\u00172\u0006\u0010\u001b\u001a\u00020\u001cH\u0001¢\u0006\u0002\b\u001dJ\u001f\u0010\u001e\u001a\u00020\r2\u0006\u0010\u001f\u001a\u00020 2\u0006\u0010!\u001a\u00020\"H\u0001¢\u0006\u0004\b#\u0010$J\u0019\u0010%\u001a\u0004\u0018\u00010\u000b2\b\u0010&\u001a\u0004\u0018\u00010\u000bH\u0001¢\u0006\u0002\b'J\u0014\u0010(\u001a\u0004\u0018\u00010\u000b2\b\u0010)\u001a\u0004\u0018\u00010\u000bH\u0002J\u001f\u0010*\u001a\u0004\u0018\u00010+2\u0006\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020\u0005H\u0001¢\u0006\u0002\b/J%\u00100\u001a\u00020\u00122\u0006\u00101\u001a\u00020\u00122\u0006\u00102\u001a\u00020\u00122\u0006\u00103\u001a\u00020\rH\u0001¢\u0006\u0002\b4J\u001d\u00105\u001a\u00020\u00122\u0006\u00103\u001a\u00020\r2\u0006\u00106\u001a\u00020\u0012H\u0001¢\u0006\u0002\b7J!\u00108\u001a\u00020\u00122\b\u00109\u001a\u0004\u0018\u00010\u00052\u0006\u0010:\u001a\u00020\u0012H\u0001¢\u0006\u0004\b;\u0010<J\u0015\u0010=\u001a\u00020\u00122\u0006\u0010>\u001a\u00020\u0012H\u0001¢\u0006\u0002\b?J\u001a\u0010D\u001a\u00020E2\u0006\u0010F\u001a\u00020G2\n\b\u0002\u0010H\u001a\u0004\u0018\u00010AR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082T¢\u0006\u0002\n\u0000R\u0011\u0010@\u001a\u00020A¢\u0006\b\n\u0000\u001a\u0004\bB\u0010C¨\u0006I"}, d2 = {"Lcom/discord/media_player/MediaPlayer$Factory;", "", "<init>", "()V", "FIRST_AUDIO_GROUP", "", "FIRST_TRACK_IN_GROUP", "MEDIA_ERR_NETWORK", "MEDIA_ERR_DECODE", "MEDIA_ERR_SRC_NOT_SUPPORTED", "UNDECODABLE_MESSAGE", "", "MIN_DECODE_CHECK_WALL_TIME_MS", "", "mediaErrorCodeFor", "exoErrorCode", "mediaErrorCodeFor$media_player_release", "shouldRetainRendererError", "", "rendererSampleMimeType", "shouldRetainRendererError$media_player_release", "mediaSourceOf", "uri", "Landroid/net/Uri;", "mediaSourceOf$media_player_release", "reportedMediaSource", "windowUri", "session", "Lcom/discord/media_player/MediaPlayer$ReportingSession;", "reportedMediaSource$media_player_release", "reportedDurationMs", "windowDurationMs", "Lcom/discord/media_player/MediaPlayer$WindowDurationMs;", "latchedDurationMs", "Lcom/discord/media_player/MediaPlayer$LatchedDurationMs;", "reportedDurationMs-GeKNARQ$media_player_release", "(JJ)J", "extensionOf", "url", "extensionOf$media_player_release", "mimeTypeFromExtension", "extension", "windowOrNull", "Lcom/google/android/exoplayer2/Timeline$Window;", "timeline", "Lcom/google/android/exoplayer2/Timeline;", "windowIndex", "windowOrNull$media_player_release", "isUndecodableVideo", "hasVideoTrack", "videoFrameRendered", "totalPlayTimeMs", "isUndecodableVideo$media_player_release", "shouldReportPlayFinished", "hasNoReportedError", "shouldReportPlayFinished$media_player_release", "shouldSuppressRepeatErrorRow", "errorCode", "errorAlreadyReportedForItem", "shouldSuppressRepeatErrorRow$media_player_release", "(Ljava/lang/Integer;Z)Z", "shouldReportMediaType", "isGifv", "shouldReportMediaType$media_player_release", "defaultSettings", "Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "getDefaultSettings", "()Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "create", "Lcom/discord/media_player/MediaPlayer;", "context", "Landroid/content/Context;", "playerSettings", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nMediaPlayer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaPlayer.kt\ncom/discord/media_player/MediaPlayer$Factory\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,799:1\n1#2:800\n*E\n"})
    /* renamed from: com.discord.media_player.MediaPlayer$Factory, reason: from kotlin metadata */
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public static /* synthetic */ MediaPlayer create$default(Companion companion, Context context, PlayerSettings playerSettings, int i5, Object obj) {
            if ((i5 & 2) != 0) {
                playerSettings = null;
            }
            return companion.create(context, playerSettings);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final String mimeTypeFromExtension(String extension) {
            if (extension != null) {
                return MimeTypeMap.getSingleton().getMimeTypeFromExtension(extension);
            }
            return null;
        }

        @NotNull
        public final MediaPlayer create(@NotNull Context context, PlayerSettings playerSettings) {
            Intrinsics.checkNotNullParameter(context, "context");
            if (playerSettings == null) {
                playerSettings = getDefaultSettings();
            }
            int minBufferMs = playerSettings.getMinBufferMs();
            int maxBufferMs = playerSettings.getMaxBufferMs();
            int bufferForPlaybackMs = playerSettings.getBufferForPlaybackMs();
            int bufferForPlaybackAfterRebufferMs = playerSettings.getBufferForPlaybackAfterRebufferMs();
            j.a(bufferForPlaybackMs, 0, "bufferForPlaybackMs", "0");
            j.a(bufferForPlaybackAfterRebufferMs, 0, "bufferForPlaybackAfterRebufferMs", "0");
            j.a(minBufferMs, bufferForPlaybackMs, "minBufferMs", "bufferForPlaybackMs");
            j.a(minBufferMs, bufferForPlaybackAfterRebufferMs, "minBufferMs", "bufferForPlaybackAfterRebufferMs");
            j.a(maxBufferMs, minBufferMs, "maxBufferMs", "minBufferMs");
            j jVar = new j(new q(), minBufferMs, maxBufferMs, bufferForPlaybackMs, bufferForPlaybackAfterRebufferMs, false);
            Intrinsics.checkNotNullExpressionValue(jVar, "build(...)");
            hc.b bVar = new hc.b(context);
            bVar.f9624b = playerSettings.getEnableDecoderFallback();
            Intrinsics.checkNotNullExpressionValue(bVar, "setEnableDecoderFallback(...)");
            if (playerSettings.getEnableAsyncBufferQueueing()) {
                ((p9.d) bVar.f9625c).f16329e = 1;
            }
            n nVar = new n(context, bVar);
            ke.b.k(!nVar.f9810s);
            nVar.f9799f = new app.rive.runtime.kotlin.core.a(27, jVar);
            DefaultTrackSelector defaultTrackSelector = new DefaultTrackSelector(context);
            ke.b.k(!nVar.f9810s);
            nVar.f9798e = new app.rive.runtime.kotlin.core.a(28, defaultTrackSelector);
            ke.b.k(!nVar.f9810s);
            nVar.f9810s = true;
            SimpleExoPlayer simpleExoPlayer = new SimpleExoPlayer(nVar);
            Intrinsics.checkNotNullExpressionValue(simpleExoPlayer, "build(...)");
            return new MediaPlayer(simpleExoPlayer, CacheDataSourceFactory.INSTANCE.getInstance(playerSettings.getHttpEngine()), playerSettings);
        }

        public final String extensionOf$media_player_release(String url) {
            if (url != null && url.length() != 0) {
                String X = StringsKt.X(StringsKt.X(url, '#'), '?');
                String W = StringsKt.W('/', X, X);
                if (StringsKt.E(W, '.')) {
                    String W2 = StringsKt.W('.', W, W);
                    if (W2.length() == 0) {
                        W2 = null;
                    }
                    if (W2 != null) {
                        Locale locale = Locale.ROOT;
                        return e.o(locale, "ROOT", W2, locale, "toLowerCase(...)");
                    }
                }
            }
            return null;
        }

        @NotNull
        public final PlayerSettings getDefaultSettings() {
            return MediaPlayer.defaultSettings;
        }

        public final boolean isUndecodableVideo$media_player_release(boolean hasVideoTrack, boolean videoFrameRendered, long totalPlayTimeMs) {
            return hasVideoTrack && !videoFrameRendered && totalPlayTimeMs >= 1000;
        }

        public final int mediaErrorCodeFor$media_player_release(int exoErrorCode) {
            if (exoErrorCode == 4001 || exoErrorCode == 4002 || exoErrorCode == 4004 || exoErrorCode == 4005) {
                return 4;
            }
            switch (exoErrorCode) {
                default:
                    switch (exoErrorCode / 1000) {
                        case 2:
                            break;
                        case 3:
                        case 6:
                            return 4;
                        case 4:
                        case 5:
                        case 7:
                        default:
                            return 3;
                    }
                case RNCWebViewManager.COMMAND_CLEAR_CACHE /* 1001 */:
                case RNCWebViewManager.COMMAND_CLEAR_HISTORY /* 1002 */:
                case 1003:
                    return 2;
            }
        }

        public final String mediaSourceOf$media_player_release(Uri uri) {
            if (uri != null) {
                return uri.toString();
            }
            return null;
        }

        /* renamed from: reportedDurationMs-GeKNARQ$media_player_release, reason: not valid java name */
        public final long m1028reportedDurationMsGeKNARQ$media_player_release(long windowDurationMs, long latchedDurationMs) {
            Long valueOf = Long.valueOf(windowDurationMs);
            if (valueOf.longValue() < 0) {
                valueOf = null;
            }
            if (valueOf != null) {
                return valueOf.longValue();
            }
            Long valueOf2 = Long.valueOf(latchedDurationMs);
            Long l6 = valueOf2.longValue() >= 0 ? valueOf2 : null;
            if (l6 != null) {
                return l6.longValue();
            }
            return 0L;
        }

        public final String reportedMediaSource$media_player_release(Uri windowUri, @NotNull ReportingSession session) {
            Intrinsics.checkNotNullParameter(session, "session");
            String mediaSourceOf$media_player_release = mediaSourceOf$media_player_release(windowUri);
            return mediaSourceOf$media_player_release == null ? session.getSourceUrl() : mediaSourceOf$media_player_release;
        }

        public final boolean shouldReportMediaType$media_player_release(boolean isGifv) {
            return !isGifv;
        }

        public final boolean shouldReportPlayFinished$media_player_release(long totalPlayTimeMs, boolean hasNoReportedError) {
            return totalPlayTimeMs > 0 || !hasNoReportedError;
        }

        public final boolean shouldRetainRendererError$media_player_release(String rendererSampleMimeType) {
            return rendererSampleMimeType == null || x.o(rendererSampleMimeType, "video/", false);
        }

        public final boolean shouldSuppressRepeatErrorRow$media_player_release(Integer errorCode, boolean errorAlreadyReportedForItem) {
            return errorCode != null && errorAlreadyReportedForItem;
        }

        public final Timeline.Window windowOrNull$media_player_release(@NotNull Timeline timeline, int windowIndex) {
            Intrinsics.checkNotNullParameter(timeline, "timeline");
            if (windowIndex < 0 || windowIndex >= timeline.o()) {
                return null;
            }
            Timeline.Window window = new Timeline.Window();
            timeline.n(windowIndex, window);
            return window;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0081@\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u000eHÖ\u0001¢\u0006\u0004\b\u000f\u0010\u0010J\u0010\u0010\u0011\u001a\u00020\u0012HÖ\u0001¢\u0006\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0016"}, d2 = {"Lcom/discord/media_player/MediaPlayer$LatchedDurationMs;", "", "value", "", "constructor-impl", "(J)J", "getValue", "()J", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(JLjava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(J)I", "toString", "", "toString-impl", "(J)Ljava/lang/String;", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class LatchedDurationMs {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);
        private static final long UNSET = m1030constructorimpl(-9223372036854775807L);
        private final long value;

        @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010\b\u001a\u0004\b\u0006\u0010\u0007¨\u0006\t"}, d2 = {"Lcom/discord/media_player/MediaPlayer$LatchedDurationMs$Companion;", "", "<init>", "()V", "UNSET", "Lcom/discord/media_player/MediaPlayer$LatchedDurationMs;", "getUNSET-nHNvnlg", "()J", "J", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            /* renamed from: getUNSET-nHNvnlg, reason: not valid java name */
            public final long m1036getUNSETnHNvnlg() {
                return LatchedDurationMs.UNSET;
            }

            private Companion() {
            }
        }

        private /* synthetic */ LatchedDurationMs(long j) {
            this.value = j;
        }

        /* renamed from: box-impl, reason: not valid java name */
        public static final /* synthetic */ LatchedDurationMs m1029boximpl(long j) {
            return new LatchedDurationMs(j);
        }

        /* renamed from: constructor-impl, reason: not valid java name */
        public static long m1030constructorimpl(long j) {
            return j;
        }

        /* renamed from: equals-impl, reason: not valid java name */
        public static boolean m1031equalsimpl(long j, Object obj) {
            return (obj instanceof LatchedDurationMs) && j == ((LatchedDurationMs) obj).m1035unboximpl();
        }

        /* renamed from: equals-impl0, reason: not valid java name */
        public static final boolean m1032equalsimpl0(long j, long j5) {
            return j == j5;
        }

        /* renamed from: hashCode-impl, reason: not valid java name */
        public static int m1033hashCodeimpl(long j) {
            return Long.hashCode(j);
        }

        /* renamed from: toString-impl, reason: not valid java name */
        public static String m1034toStringimpl(long j) {
            return e.g(j, "LatchedDurationMs(value=", ")");
        }

        public boolean equals(Object obj) {
            return m1031equalsimpl(this.value, obj);
        }

        public final long getValue() {
            return this.value;
        }

        public int hashCode() {
            return m1033hashCodeimpl(this.value);
        }

        public String toString() {
            return m1034toStringimpl(this.value);
        }

        /* renamed from: unbox-impl, reason: not valid java name */
        public final /* synthetic */ long m1035unboximpl() {
            return this.value;
        }
    }

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0010\b\n\u0002\b\u0002\b\u0081\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u000b\u0010\f\u001a\u0004\u0018\u00010\u0005HÆ\u0003J\u001f\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u00032\b\u0010\u000f\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0010\u001a\u00020\u0011HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\bR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u0013"}, d2 = {"Lcom/discord/media_player/MediaPlayer$ReportingSession;", "", "isGifv", "", "sourceUrl", "", "<init>", "(ZLjava/lang/String;)V", "()Z", "getSourceUrl", "()Ljava/lang/String;", "component1", "component2", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class ReportingSession {
        private final boolean isGifv;
        private final String sourceUrl;

        public ReportingSession(boolean z5, String str) {
            this.isGifv = z5;
            this.sourceUrl = str;
        }

        public static /* synthetic */ ReportingSession copy$default(ReportingSession reportingSession, boolean z5, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                z5 = reportingSession.isGifv;
            }
            if ((i5 & 2) != 0) {
                str = reportingSession.sourceUrl;
            }
            return reportingSession.copy(z5, str);
        }

        /* renamed from: component1, reason: from getter */
        public final boolean getIsGifv() {
            return this.isGifv;
        }

        /* renamed from: component2, reason: from getter */
        public final String getSourceUrl() {
            return this.sourceUrl;
        }

        @NotNull
        public final ReportingSession copy(boolean isGifv, String sourceUrl) {
            return new ReportingSession(isGifv, sourceUrl);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof ReportingSession)) {
                return false;
            }
            ReportingSession reportingSession = (ReportingSession) other;
            return this.isGifv == reportingSession.isGifv && Intrinsics.areEqual(this.sourceUrl, reportingSession.sourceUrl);
        }

        public final String getSourceUrl() {
            return this.sourceUrl;
        }

        public int hashCode() {
            int hashCode = Boolean.hashCode(this.isGifv) * 31;
            String str = this.sourceUrl;
            return hashCode + (str == null ? 0 : str.hashCode());
        }

        public final boolean isGifv() {
            return this.isGifv;
        }

        @NotNull
        public String toString() {
            return "ReportingSession(isGifv=" + this.isGifv + ", sourceUrl=" + this.sourceUrl + ")";
        }
    }

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0004\b\u0081@\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u0001HÖ\u0003¢\u0006\u0004\b\u000b\u0010\fJ\u0010\u0010\r\u001a\u00020\u000eHÖ\u0001¢\u0006\u0004\b\u000f\u0010\u0010J\u0010\u0010\u0011\u001a\u00020\u0012HÖ\u0001¢\u0006\u0004\b\u0013\u0010\u0014R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0016"}, d2 = {"Lcom/discord/media_player/MediaPlayer$WindowDurationMs;", "", "value", "", "constructor-impl", "(J)J", "getValue", "()J", "equals", "", JankRecordStore.SCREEN_OTHER, "equals-impl", "(JLjava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(J)I", "toString", "", "toString-impl", "(J)Ljava/lang/String;", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class WindowDurationMs {

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE = new Companion(null);
        private static final long UNSET = m1038constructorimpl(-9223372036854775807L);
        private final long value;

        @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u0013\u0010\u0004\u001a\u00020\u0005¢\u0006\n\n\u0002\u0010\b\u001a\u0004\b\u0006\u0010\u0007¨\u0006\t"}, d2 = {"Lcom/discord/media_player/MediaPlayer$WindowDurationMs$Companion;", "", "<init>", "()V", "UNSET", "Lcom/discord/media_player/MediaPlayer$WindowDurationMs;", "getUNSET-QtZqSbs", "()J", "J", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            /* renamed from: getUNSET-QtZqSbs, reason: not valid java name */
            public final long m1044getUNSETQtZqSbs() {
                return WindowDurationMs.UNSET;
            }

            private Companion() {
            }
        }

        private /* synthetic */ WindowDurationMs(long j) {
            this.value = j;
        }

        /* renamed from: box-impl, reason: not valid java name */
        public static final /* synthetic */ WindowDurationMs m1037boximpl(long j) {
            return new WindowDurationMs(j);
        }

        /* renamed from: constructor-impl, reason: not valid java name */
        public static long m1038constructorimpl(long j) {
            return j;
        }

        /* renamed from: equals-impl, reason: not valid java name */
        public static boolean m1039equalsimpl(long j, Object obj) {
            return (obj instanceof WindowDurationMs) && j == ((WindowDurationMs) obj).m1043unboximpl();
        }

        /* renamed from: equals-impl0, reason: not valid java name */
        public static final boolean m1040equalsimpl0(long j, long j5) {
            return j == j5;
        }

        /* renamed from: hashCode-impl, reason: not valid java name */
        public static int m1041hashCodeimpl(long j) {
            return Long.hashCode(j);
        }

        /* renamed from: toString-impl, reason: not valid java name */
        public static String m1042toStringimpl(long j) {
            return e.g(j, "WindowDurationMs(value=", ")");
        }

        public boolean equals(Object obj) {
            return m1039equalsimpl(this.value, obj);
        }

        public final long getValue() {
            return this.value;
        }

        public int hashCode() {
            return m1041hashCodeimpl(this.value);
        }

        public String toString() {
            return m1042toStringimpl(this.value);
        }

        /* renamed from: unbox-impl, reason: not valid java name */
        public final /* synthetic */ long m1043unboximpl() {
            return this.value;
        }
    }

    public MediaPlayer(@NotNull SimpleExoPlayer exoPlayer, @NotNull DataSource.Factory dataSourceFactory, @NotNull PlayerSettings currentSettings) {
        Intrinsics.checkNotNullParameter(exoPlayer, "exoPlayer");
        Intrinsics.checkNotNullParameter(dataSourceFactory, "dataSourceFactory");
        Intrinsics.checkNotNullParameter(currentSettings, "currentSettings");
        this.exoPlayer = exoPlayer;
        this.dataSourceFactory = dataSourceFactory;
        this.currentSettings = currentSettings;
        this.eventListener = new com.discord.chat.presentation.textutils.c(24);
        this.volumeListener = new com.discord.chat.presentation.textutils.c(25);
        this.analyticsListener = new com.discord.chat.presentation.textutils.c(26);
        this.currentItemDuration = LatchedDurationMs.INSTANCE.m1036getUNSETnHNvnlg();
        this.reportingSession = new ReportingSession(false, null);
        exoPlayer.u(new h() { // from class: com.discord.media_player.MediaPlayer.1
            public /* bridge */ /* synthetic */ void onAudioAttributesChanged(AudioAttributes audioAttributes) {
            }

            public /* bridge */ /* synthetic */ void onAudioSessionIdChanged(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onAvailableCommandsChanged(Player.Commands commands) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onCues(CueGroup cueGroup) {
            }

            public /* bridge */ /* synthetic */ void onDeviceInfoChanged(DeviceInfo deviceInfo) {
            }

            public /* bridge */ /* synthetic */ void onDeviceVolumeChanged(int i5, boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onEvents(Player player, Player.Events events) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onIsLoadingChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onIsPlayingChanged(boolean isPlaying) {
                if (isPlaying) {
                    MediaPlayer.this.setEvent(Event.StartedPlaying.INSTANCE);
                } else {
                    if (MediaPlayer.this.exoPlayer.w() == 4 || MediaPlayer.this.exoPlayer.w() == 2) {
                        return;
                    }
                    MediaPlayer.this.setEvent(Event.Paused.INSTANCE);
                }
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onLoadingChanged(boolean z5) {
            }

            public /* bridge */ /* synthetic */ void onMaxSeekToPreviousPositionChanged(long j) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onMediaItemTransition(MediaItem mediaItem, int reason) {
                if (reason == 0) {
                    return;
                }
                MediaPlayer.this.hasVideoTrack = false;
                MediaPlayer.this.videoFrameRendered = false;
                MediaPlayer.this.currentItemDuration = LatchedDurationMs.INSTANCE.m1036getUNSETnHNvnlg();
                MediaPlayer.this.lastErrorCode = null;
                MediaPlayer.this.lastErrorMessage = null;
                MediaPlayer.this.errorReportedForItem = false;
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onMediaMetadataChanged(MediaMetadata mediaMetadata) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onMetadata(com.google.android.exoplayer2.metadata.Metadata metadata) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlayWhenReadyChanged(boolean z5, int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlaybackParametersChanged(PlaybackParameters playbackParameters) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onPlaybackStateChanged(int playbackState) {
                if (playbackState == 2) {
                    MediaPlayer.this.setEvent(Event.BufferStart.INSTANCE);
                    return;
                }
                if (playbackState != 3) {
                    if (playbackState != 4) {
                        return;
                    }
                    MediaPlayer.this.setEvent(Event.PlaybackEnded.INSTANCE);
                } else {
                    long duration = MediaPlayer.this.exoPlayer.getDuration();
                    if (duration >= 0) {
                        MediaPlayer.this.currentItemDuration = LatchedDurationMs.m1030constructorimpl(duration);
                    }
                    MediaPlayer.this.setEvent(Event.BufferEnd.INSTANCE);
                }
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlaybackSuppressionReasonChanged(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onPlayerError(PlaybackException error) {
                String str;
                Intrinsics.checkNotNullParameter(error, "error");
                MediaPlayer mediaPlayer = MediaPlayer.this;
                Companion companion = MediaPlayer.INSTANCE;
                mediaPlayer.lastErrorCode = Integer.valueOf(companion.mediaErrorCodeFor$media_player_release(error.f5272d));
                MediaPlayer mediaPlayer2 = MediaPlayer.this;
                int i5 = error.f5272d;
                if (i5 == 5001) {
                    str = "ERROR_CODE_AUDIO_TRACK_INIT_FAILED";
                } else if (i5 == 5002) {
                    str = "ERROR_CODE_AUDIO_TRACK_WRITE_FAILED";
                } else if (i5 == 7000) {
                    str = "ERROR_CODE_VIDEO_FRAME_PROCESSOR_INIT_FAILED";
                } else if (i5 != 7001) {
                    switch (i5) {
                        case 1000:
                            str = "ERROR_CODE_UNSPECIFIED";
                            break;
                        case RNCWebViewManager.COMMAND_CLEAR_CACHE /* 1001 */:
                            str = "ERROR_CODE_REMOTE_ERROR";
                            break;
                        case RNCWebViewManager.COMMAND_CLEAR_HISTORY /* 1002 */:
                            str = "ERROR_CODE_BEHIND_LIVE_WINDOW";
                            break;
                        case 1003:
                            str = "ERROR_CODE_TIMEOUT";
                            break;
                        case 1004:
                            str = "ERROR_CODE_FAILED_RUNTIME_CHECK";
                            break;
                        default:
                            switch (i5) {
                                case 2000:
                                    str = "ERROR_CODE_IO_UNSPECIFIED";
                                    break;
                                case 2001:
                                    str = "ERROR_CODE_IO_NETWORK_CONNECTION_FAILED";
                                    break;
                                case 2002:
                                    str = "ERROR_CODE_IO_NETWORK_CONNECTION_TIMEOUT";
                                    break;
                                case 2003:
                                    str = "ERROR_CODE_IO_INVALID_HTTP_CONTENT_TYPE";
                                    break;
                                case 2004:
                                    str = "ERROR_CODE_IO_BAD_HTTP_STATUS";
                                    break;
                                case 2005:
                                    str = "ERROR_CODE_IO_FILE_NOT_FOUND";
                                    break;
                                case 2006:
                                    str = "ERROR_CODE_IO_NO_PERMISSION";
                                    break;
                                case 2007:
                                    str = "ERROR_CODE_IO_CLEARTEXT_NOT_PERMITTED";
                                    break;
                                case 2008:
                                    str = "ERROR_CODE_IO_READ_POSITION_OUT_OF_RANGE";
                                    break;
                                default:
                                    switch (i5) {
                                        case 3001:
                                            str = "ERROR_CODE_PARSING_CONTAINER_MALFORMED";
                                            break;
                                        case 3002:
                                            str = "ERROR_CODE_PARSING_MANIFEST_MALFORMED";
                                            break;
                                        case 3003:
                                            str = "ERROR_CODE_PARSING_CONTAINER_UNSUPPORTED";
                                            break;
                                        case 3004:
                                            str = "ERROR_CODE_PARSING_MANIFEST_UNSUPPORTED";
                                            break;
                                        default:
                                            switch (i5) {
                                                case RNCWebViewManager.COMMAND_RELEASE /* 4001 */:
                                                    str = "ERROR_CODE_DECODER_INIT_FAILED";
                                                    break;
                                                case 4002:
                                                    str = "ERROR_CODE_DECODER_QUERY_FAILED";
                                                    break;
                                                case 4003:
                                                    str = "ERROR_CODE_DECODING_FAILED";
                                                    break;
                                                case 4004:
                                                    str = "ERROR_CODE_DECODING_FORMAT_EXCEEDS_CAPABILITIES";
                                                    break;
                                                case 4005:
                                                    str = "ERROR_CODE_DECODING_FORMAT_UNSUPPORTED";
                                                    break;
                                                default:
                                                    switch (i5) {
                                                        case 6000:
                                                            str = "ERROR_CODE_DRM_UNSPECIFIED";
                                                            break;
                                                        case 6001:
                                                            str = "ERROR_CODE_DRM_SCHEME_UNSUPPORTED";
                                                            break;
                                                        case 6002:
                                                            str = "ERROR_CODE_DRM_PROVISIONING_FAILED";
                                                            break;
                                                        case 6003:
                                                            str = "ERROR_CODE_DRM_CONTENT_ERROR";
                                                            break;
                                                        case 6004:
                                                            str = "ERROR_CODE_DRM_LICENSE_ACQUISITION_FAILED";
                                                            break;
                                                        case 6005:
                                                            str = "ERROR_CODE_DRM_DISALLOWED_OPERATION";
                                                            break;
                                                        case 6006:
                                                            str = "ERROR_CODE_DRM_SYSTEM_ERROR";
                                                            break;
                                                        case 6007:
                                                            str = "ERROR_CODE_DRM_DEVICE_REVOKED";
                                                            break;
                                                        case 6008:
                                                            str = "ERROR_CODE_DRM_LICENSE_EXPIRED";
                                                            break;
                                                        default:
                                                            if (i5 < 1000000) {
                                                                str = "invalid error code";
                                                                break;
                                                            } else {
                                                                str = "custom error code";
                                                                break;
                                                            }
                                                    }
                                            }
                                    }
                            }
                    }
                } else {
                    str = "ERROR_CODE_VIDEO_FRAME_PROCESSING_FAILED";
                }
                mediaPlayer2.lastErrorMessage = str + " (" + i5 + ")";
                MediaPlayer.this.setEvent(new Event.PlaybackError(error));
                Log log = Log.INSTANCE;
                Intrinsics.checkNotNullExpressionValue("", "getSimpleName(...)");
                MediaSource mediaSource = MediaPlayer.this.getMediaSource();
                log.e("", "Playback error for feature: " + (mediaSource != null ? mediaSource.getFeatureTag() : null), error);
                if (error instanceof com.google.android.exoplayer2.c) {
                    com.google.android.exoplayer2.c cVar = (com.google.android.exoplayer2.c) error;
                    int i6 = cVar.f5345w;
                    if (cVar.f5343i == 1) {
                        Intrinsics.checkNotNullExpressionValue("", "getSimpleName(...)");
                        MediaSource mediaSource2 = MediaPlayer.this.getMediaSource();
                        Log.e$default(log, "", "Disabling problematic renderer index " + i6 + ", retrying: " + (mediaSource2 != null ? mediaSource2.getFeatureTag() : null), (Throwable) null, 4, (Object) null);
                        SimpleExoPlayer simpleExoPlayer = MediaPlayer.this.exoPlayer;
                        simpleExoPlayer.c0();
                        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
                        dVar.x0();
                        r rVar = dVar.f5360h;
                        DefaultTrackSelector defaultTrackSelector = rVar instanceof DefaultTrackSelector ? (DefaultTrackSelector) rVar : null;
                        if (defaultTrackSelector == null) {
                            Intrinsics.checkNotNullExpressionValue("", "getSimpleName(...)");
                            Log.e$default(log, "", "TrackSelector is not of type DefaultTrackSelector.", (Throwable) null, 4, (Object) null);
                            return;
                        }
                        com.google.android.exoplayer2.trackselection.a c6 = defaultTrackSelector.c();
                        c6.getClass();
                        g gVar = new g(c6);
                        Intrinsics.checkNotNullExpressionValue(gVar, "buildUponParameters(...)");
                        gVar.d(i6, true);
                        defaultTrackSelector.h(new com.google.android.exoplayer2.trackselection.a(gVar));
                        Format format = cVar.f5346x;
                        if (!companion.shouldRetainRendererError$media_player_release(format != null ? format.I : null)) {
                            MediaPlayer.this.lastErrorCode = null;
                            MediaPlayer.this.lastErrorMessage = null;
                        }
                        MediaPlayer.this.exoPlayer.a();
                        MediaPlayer.this.exoPlayer.r(true);
                    }
                }
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlayerErrorChanged(PlaybackException playbackException) {
            }

            @Override // com.google.android.exoplayer2.h
            @fo.d
            public void onPlayerStateChanged(boolean playWhenReady, int playbackState) {
                if (playWhenReady && playbackState == 3) {
                    MediaPlayer.this.exoPlayer.r(true);
                }
            }

            public /* bridge */ /* synthetic */ void onPlaylistMetadataChanged(MediaMetadata mediaMetadata) {
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onPositionDiscontinuity(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onRenderedFirstFrame() {
                MediaPlayer.this.videoFrameRendered = true;
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onRepeatModeChanged(int i5) {
            }

            public /* bridge */ /* synthetic */ void onSeekBackIncrementChanged(long j) {
            }

            public /* bridge */ /* synthetic */ void onSeekForwardIncrementChanged(long j) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onShuffleModeEnabledChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onSkipSilenceEnabledChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onSurfaceSizeChanged(int i5, int i6) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onTimelineChanged(Timeline timeline, int i5) {
            }

            public /* bridge */ /* synthetic */ void onTrackSelectionParametersChanged(TrackSelectionParameters trackSelectionParameters) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onTracksChanged(Tracks tracks) {
                Intrinsics.checkNotNullParameter(tracks, "tracks");
                MediaPlayer mediaPlayer = MediaPlayer.this;
                e0 e0Var = tracks.f5300d;
                Intrinsics.checkNotNullExpressionValue(e0Var, "getGroups(...)");
                boolean z5 = false;
                if (e0Var == null || !e0Var.isEmpty()) {
                    Iterator<E> it = e0Var.iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        } else if (((t1) it.next()).f9888e.f15210i == 2) {
                            z5 = true;
                            break;
                        }
                    }
                }
                mediaPlayer.hasVideoTrack = z5;
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onVideoSizeChanged(VideoSize videoSize) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onVolumeChanged(float f2) {
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onCues(List list) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPositionDiscontinuity(Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
            }
        });
        a0 a0Var = new a0(new app.rive.runtime.kotlin.core.a(13, this));
        exoPlayer.c0();
        com.google.android.exoplayer2.d dVar = exoPlayer.f5286b;
        u uVar = (u) dVar.f5368q;
        uVar.getClass();
        uVar.f10548x.a(a0Var);
        ic.b bVar = new ic.b() { // from class: com.discord.media_player.MediaPlayer.3
            public /* bridge */ /* synthetic */ void onAudioAttributesChanged(AnalyticsListener$EventTime analyticsListener$EventTime, AudioAttributes audioAttributes) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioCodecError(AnalyticsListener$EventTime analyticsListener$EventTime, Exception exc) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onAudioDecoderInitialized(AnalyticsListener$EventTime analyticsListener$EventTime, String str, long j) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioDecoderReleased(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioDisabled(AnalyticsListener$EventTime analyticsListener$EventTime, DecoderCounters decoderCounters) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioEnabled(AnalyticsListener$EventTime analyticsListener$EventTime, DecoderCounters decoderCounters) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onAudioInputFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, Format format) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioPositionAdvancing(AnalyticsListener$EventTime analyticsListener$EventTime, long j) {
            }

            public /* bridge */ /* synthetic */ void onAudioSessionIdChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioSinkError(AnalyticsListener$EventTime analyticsListener$EventTime, Exception exc) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioUnderrun(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j, long j5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAvailableCommandsChanged(AnalyticsListener$EventTime analyticsListener$EventTime, Player.Commands commands) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onBandwidthEstimate(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j, long j5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onCues(AnalyticsListener$EventTime analyticsListener$EventTime, CueGroup cueGroup) {
            }

            public /* bridge */ /* synthetic */ void onDeviceInfoChanged(AnalyticsListener$EventTime analyticsListener$EventTime, DeviceInfo deviceInfo) {
            }

            public /* bridge */ /* synthetic */ void onDeviceVolumeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, boolean z5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDownstreamFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, MediaLoadData mediaLoadData) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDrmKeysLoaded(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            public /* bridge */ /* synthetic */ void onDrmKeysRemoved(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDrmKeysRestored(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onDrmSessionAcquired(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDrmSessionManagerError(AnalyticsListener$EventTime analyticsListener$EventTime, Exception exc) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDrmSessionReleased(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDroppedVideoFrames(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onEvents(Player player, AnalyticsListener$Events analyticsListener$Events) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onIsLoadingChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onIsPlayingChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5) {
            }

            @Override // ic.b
            public void onLoadCanceled(AnalyticsListener$EventTime eventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
                Intrinsics.checkNotNullParameter(eventTime, "eventTime");
                Intrinsics.checkNotNullParameter(loadEventInfo, "loadEventInfo");
                Intrinsics.checkNotNullParameter(mediaLoadData, "mediaLoadData");
                if (loadEventInfo.a.isEmpty()) {
                    return;
                }
                DeviceResourceUsageRecorder.Companion companion = DeviceResourceUsageRecorder.INSTANCE;
                companion.setMediaPlayerBytesReceived(companion.getMediaPlayerBytesReceived() + loadEventInfo.f5430b);
            }

            @Override // ic.b
            public void onLoadCompleted(AnalyticsListener$EventTime eventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
                Intrinsics.checkNotNullParameter(eventTime, "eventTime");
                Intrinsics.checkNotNullParameter(loadEventInfo, "loadEventInfo");
                Intrinsics.checkNotNullParameter(mediaLoadData, "mediaLoadData");
                if (loadEventInfo.a.isEmpty()) {
                    return;
                }
                DeviceResourceUsageRecorder.Companion companion = DeviceResourceUsageRecorder.INSTANCE;
                companion.setMediaPlayerBytesReceived(companion.getMediaPlayerBytesReceived() + loadEventInfo.f5430b);
            }

            @Override // ic.b
            public void onLoadError(AnalyticsListener$EventTime eventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException error, boolean wasCanceled) {
                Intrinsics.checkNotNullParameter(eventTime, "eventTime");
                Intrinsics.checkNotNullParameter(loadEventInfo, "loadEventInfo");
                Intrinsics.checkNotNullParameter(mediaLoadData, "mediaLoadData");
                Intrinsics.checkNotNullParameter(error, "error");
                if (loadEventInfo.a.isEmpty()) {
                    return;
                }
                DeviceResourceUsageRecorder.Companion companion = DeviceResourceUsageRecorder.INSTANCE;
                companion.setMediaPlayerBytesReceived(companion.getMediaPlayerBytesReceived() + loadEventInfo.f5430b);
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onLoadStarted(AnalyticsListener$EventTime analyticsListener$EventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onLoadingChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5) {
            }

            public /* bridge */ /* synthetic */ void onMaxSeekToPreviousPositionChanged(AnalyticsListener$EventTime analyticsListener$EventTime, long j) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onMediaItemTransition(AnalyticsListener$EventTime analyticsListener$EventTime, MediaItem mediaItem, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onMediaMetadataChanged(AnalyticsListener$EventTime analyticsListener$EventTime, MediaMetadata mediaMetadata) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onMetadata(AnalyticsListener$EventTime analyticsListener$EventTime, com.google.android.exoplayer2.metadata.Metadata metadata) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlayWhenReadyChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlaybackParametersChanged(AnalyticsListener$EventTime analyticsListener$EventTime, PlaybackParameters playbackParameters) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlaybackStateChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlaybackSuppressionReasonChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlayerError(AnalyticsListener$EventTime analyticsListener$EventTime, PlaybackException playbackException) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlayerErrorChanged(AnalyticsListener$EventTime analyticsListener$EventTime, PlaybackException playbackException) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPlayerReleased(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onPlayerStateChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5, int i5) {
            }

            public /* bridge */ /* synthetic */ void onPlaylistMetadataChanged(AnalyticsListener$EventTime analyticsListener$EventTime, MediaMetadata mediaMetadata) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onPositionDiscontinuity(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onRenderedFirstFrame(AnalyticsListener$EventTime analyticsListener$EventTime, Object obj, long j) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onRepeatModeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            public /* bridge */ /* synthetic */ void onSeekBackIncrementChanged(AnalyticsListener$EventTime analyticsListener$EventTime, long j) {
            }

            public /* bridge */ /* synthetic */ void onSeekForwardIncrementChanged(AnalyticsListener$EventTime analyticsListener$EventTime, long j) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onSeekStarted(AnalyticsListener$EventTime analyticsListener$EventTime) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onShuffleModeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onSkipSilenceEnabledChanged(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onSurfaceSizeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, int i6) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onTimelineChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            public /* bridge */ /* synthetic */ void onTrackSelectionParametersChanged(AnalyticsListener$EventTime analyticsListener$EventTime, TrackSelectionParameters trackSelectionParameters) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onTracksChanged(AnalyticsListener$EventTime analyticsListener$EventTime, Tracks tracks) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onUpstreamDiscarded(AnalyticsListener$EventTime analyticsListener$EventTime, MediaLoadData mediaLoadData) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoCodecError(AnalyticsListener$EventTime analyticsListener$EventTime, Exception exc) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onVideoDecoderInitialized(AnalyticsListener$EventTime analyticsListener$EventTime, String str, long j) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoDecoderReleased(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoDisabled(AnalyticsListener$EventTime analyticsListener$EventTime, DecoderCounters decoderCounters) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoEnabled(AnalyticsListener$EventTime analyticsListener$EventTime, DecoderCounters decoderCounters) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoFrameProcessingOffset(AnalyticsListener$EventTime analyticsListener$EventTime, long j, int i5) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onVideoInputFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, Format format) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onVideoSizeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, int i6, int i10, float f2) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVolumeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, float f2) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioDecoderInitialized(AnalyticsListener$EventTime analyticsListener$EventTime, String str, long j, long j5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onAudioInputFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, Format format, DecoderReuseEvaluation decoderReuseEvaluation) {
            }

            @Override // ic.b
            @Deprecated
            public /* bridge */ /* synthetic */ void onCues(AnalyticsListener$EventTime analyticsListener$EventTime, List list) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onDrmSessionAcquired(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onPositionDiscontinuity(AnalyticsListener$EventTime analyticsListener$EventTime, Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoDecoderInitialized(AnalyticsListener$EventTime analyticsListener$EventTime, String str, long j, long j5) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoInputFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, Format format, DecoderReuseEvaluation decoderReuseEvaluation) {
            }

            @Override // ic.b
            public /* bridge */ /* synthetic */ void onVideoSizeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, VideoSize videoSize) {
            }
        };
        exoPlayer.c0();
        u uVar2 = (u) dVar.f5368q;
        uVar2.getClass();
        uVar2.f10548x.a(bVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00b2 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00b3  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void _init_$lambda$3(MediaPlayer mediaPlayer, AnalyticsListener$EventTime eventTime, PlaybackStats playbackStats) {
        String str;
        String str2;
        String mimeTypeFromExtension;
        MediaItem mediaItem;
        p0 p0Var;
        MediaItem mediaItem2;
        p0 p0Var2;
        Intrinsics.checkNotNullParameter(eventTime, "eventTime");
        Intrinsics.checkNotNullParameter(playbackStats, "playbackStats");
        Companion companion = INSTANCE;
        boolean z5 = false;
        if (!companion.shouldReportMediaType$media_player_release(mediaPlayer.reportingSession.isGifv())) {
            mediaPlayer.lastErrorCode = null;
            mediaPlayer.lastErrorMessage = null;
            mediaPlayer.hasVideoTrack = false;
            mediaPlayer.videoFrameRendered = false;
            mediaPlayer.currentItemDuration = LatchedDurationMs.INSTANCE.m1036getUNSETnHNvnlg();
            mediaPlayer.errorReportedForItem = false;
            return;
        }
        int i5 = mediaPlayer.lastErrorCode;
        String str3 = mediaPlayer.lastErrorMessage;
        if (i5 == null && str3 == null) {
            z5 = true;
        }
        long[] jArr = playbackStats.N;
        long[] jArr2 = playbackStats.N;
        if (!companion.shouldReportPlayFinished$media_player_release(jArr[3], z5)) {
            mediaPlayer.lastErrorCode = null;
            mediaPlayer.lastErrorMessage = null;
            return;
        }
        boolean z6 = mediaPlayer.hasVideoTrack;
        boolean z7 = mediaPlayer.videoFrameRendered;
        long j = mediaPlayer.currentItemDuration;
        mediaPlayer.lastErrorCode = null;
        mediaPlayer.lastErrorMessage = null;
        Timeline timeline = eventTime.f5304b;
        Intrinsics.checkNotNullExpressionValue(timeline, "timeline");
        Timeline.Window windowOrNull$media_player_release = companion.windowOrNull$media_player_release(timeline, eventTime.f5305c);
        long m1028reportedDurationMsGeKNARQ$media_player_release = companion.m1028reportedDurationMsGeKNARQ$media_player_release(windowOrNull$media_player_release != null ? WindowDurationMs.m1038constructorimpl(d0.U(windowOrNull$media_player_release.K)) : WindowDurationMs.INSTANCE.m1044getUNSETQtZqSbs(), j);
        String reportedMediaSource$media_player_release = companion.reportedMediaSource$media_player_release((windowOrNull$media_player_release == null || (mediaItem2 = windowOrNull$media_player_release.f5294i) == null || (p0Var2 = mediaItem2.f5236i) == null) ? null : p0Var2.f9833d, mediaPlayer.reportingSession);
        if (z5) {
            str = str3;
            if (companion.isUndecodableVideo$media_player_release(z6, z7, jArr2[3])) {
                i5 = 4;
                str2 = UNDECODABLE_MESSAGE;
                if (companion.shouldSuppressRepeatErrorRow$media_player_release(i5, mediaPlayer.errorReportedForItem)) {
                    if (i5 != null) {
                        mediaPlayer.errorReportedForItem = true;
                    }
                    Function1<? super MediaPlayFinishedAnalytics, Unit> function1 = mediaPlayer.analyticsListener;
                    long j5 = jArr2[3];
                    long j7 = jArr2[6];
                    int i6 = playbackStats.f5323n;
                    int i10 = playbackStats.f5322m;
                    long f2 = yo.j.f(playbackStats.f5320i, 0L, 600000L);
                    float f10 = m1028reportedDurationMsGeKNARQ$media_player_release / 1000.0f;
                    if (windowOrNull$media_player_release == null || (mediaItem = windowOrNull$media_player_release.f5294i) == null || (p0Var = mediaItem.f5236i) == null || (mimeTypeFromExtension = p0Var.f9834e) == null) {
                        mimeTypeFromExtension = companion.mimeTypeFromExtension(companion.extensionOf$media_player_release(reportedMediaSource$media_player_release));
                    }
                    function1.invoke(new MediaPlayFinishedAnalytics(j5, j7, i6, i10, f2, reportedMediaSource$media_player_release, f10, mimeTypeFromExtension, playbackStats.J, playbackStats.K, playbackStats.G, playbackStats.F, i5, str2));
                    return;
                }
                return;
            }
        } else {
            str = str3;
        }
        str2 = str;
        if (companion.shouldSuppressRepeatErrorRow$media_player_release(i5, mediaPlayer.errorReportedForItem)) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit analyticsListener$lambda$2(MediaPlayFinishedAnalytics it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void configureDefaultAudioTrackOverride(DefaultTrackSelector trackSelector) {
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo = trackSelector.f9202c;
        if (mappingTrackSelector$MappedTrackInfo == null) {
            return;
        }
        int i5 = mappingTrackSelector$MappedTrackInfo.a;
        for (int i6 = 0; i6 < i5 && !findAndConfigureAudioRenderer(trackSelector, mappingTrackSelector$MappedTrackInfo, i6); i6++) {
        }
    }

    private final void configureMultiAudioTrackSelection() {
        SimpleExoPlayer simpleExoPlayer = this.exoPlayer;
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
        dVar.x0();
        r rVar = dVar.f5360h;
        final DefaultTrackSelector defaultTrackSelector = rVar instanceof DefaultTrackSelector ? (DefaultTrackSelector) rVar : null;
        if (defaultTrackSelector == null) {
            return;
        }
        this.exoPlayer.u(new h() { // from class: com.discord.media_player.MediaPlayer$configureMultiAudioTrackSelection$listener$1
            public /* bridge */ /* synthetic */ void onAudioAttributesChanged(AudioAttributes audioAttributes) {
            }

            public /* bridge */ /* synthetic */ void onAudioSessionIdChanged(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onAvailableCommandsChanged(Player.Commands commands) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onCues(CueGroup cueGroup) {
            }

            public /* bridge */ /* synthetic */ void onDeviceInfoChanged(DeviceInfo deviceInfo) {
            }

            public /* bridge */ /* synthetic */ void onDeviceVolumeChanged(int i5, boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onEvents(Player player, Player.Events events) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onIsLoadingChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onIsPlayingChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onLoadingChanged(boolean z5) {
            }

            public /* bridge */ /* synthetic */ void onMaxSeekToPreviousPositionChanged(long j) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onMediaItemTransition(MediaItem mediaItem, int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onMediaMetadataChanged(MediaMetadata mediaMetadata) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onMetadata(com.google.android.exoplayer2.metadata.Metadata metadata) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlayWhenReadyChanged(boolean z5, int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlaybackParametersChanged(PlaybackParameters playbackParameters) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlaybackStateChanged(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlaybackSuppressionReasonChanged(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlayerError(PlaybackException playbackException) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPlayerErrorChanged(PlaybackException playbackException) {
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onPlayerStateChanged(boolean z5, int i5) {
            }

            public /* bridge */ /* synthetic */ void onPlaylistMetadataChanged(MediaMetadata mediaMetadata) {
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onPositionDiscontinuity(int i5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onRenderedFirstFrame() {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onRepeatModeChanged(int i5) {
            }

            public /* bridge */ /* synthetic */ void onSeekBackIncrementChanged(long j) {
            }

            public /* bridge */ /* synthetic */ void onSeekForwardIncrementChanged(long j) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onShuffleModeEnabledChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onSkipSilenceEnabledChanged(boolean z5) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onSurfaceSizeChanged(int i5, int i6) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onTimelineChanged(Timeline timeline, int i5) {
            }

            public /* bridge */ /* synthetic */ void onTrackSelectionParametersChanged(TrackSelectionParameters trackSelectionParameters) {
            }

            @Override // com.google.android.exoplayer2.h
            public void onTracksChanged(Tracks tracks) {
                Intrinsics.checkNotNullParameter(tracks, "tracks");
                e0 e0Var = tracks.f5300d;
                Intrinsics.checkNotNullExpressionValue(e0Var, "getGroups(...)");
                ArrayList arrayList = new ArrayList();
                for (Object obj : e0Var) {
                    if (((t1) obj).f9888e.f15210i == 1) {
                        arrayList.add(obj);
                    }
                }
                Iterator it = arrayList.iterator();
                int i5 = 0;
                while (it.hasNext()) {
                    i5 += ((t1) it.next()).f9887d;
                }
                if (i5 <= 1) {
                    MediaPlayer.this.exoPlayer.m(this);
                    return;
                }
                try {
                    MediaPlayer.this.configureDefaultAudioTrackOverride(defaultTrackSelector);
                } catch (Exception e9) {
                    Log log = Log.INSTANCE;
                    MediaSource mediaSource = MediaPlayer.this.getMediaSource();
                    log.e("MediaPlayer", "Failed to configure multi-audio track selection for feature: " + (mediaSource != null ? mediaSource.getFeatureTag() : null), e9);
                }
                MediaPlayer.this.exoPlayer.m(this);
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onVideoSizeChanged(VideoSize videoSize) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onVolumeChanged(float f2) {
            }

            @Override // com.google.android.exoplayer2.h
            @Deprecated
            public /* bridge */ /* synthetic */ void onCues(List list) {
            }

            @Override // com.google.android.exoplayer2.h
            public /* bridge */ /* synthetic */ void onPositionDiscontinuity(Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit eventListener$lambda$0(Event it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    private final boolean findAndConfigureAudioRenderer(DefaultTrackSelector trackSelector, MappingTrackSelector$MappedTrackInfo mappedTrackInfo, int rendererIndex) {
        if (mappedTrackInfo.f5463b[rendererIndex] != 1) {
            return false;
        }
        a1 a1Var = mappedTrackInfo.f5464c[rendererIndex];
        Intrinsics.checkNotNullExpressionValue(a1Var, "getTrackGroups(...)");
        int i5 = a1Var.f15065d;
        if (i5 > 1 && i5 != 0 && a1Var.a(0).f15208d != 0) {
            com.google.android.exoplayer2.trackselection.a c6 = trackSelector.c();
            c6.getClass();
            g gVar = new g(c6);
            Intrinsics.checkNotNullExpressionValue(gVar, "buildUponParameters(...)");
            gVar.f9227x = false;
            gVar.e(rendererIndex, a1Var, new ge.h(0, 0, new int[]{0}));
            trackSelector.h(new com.google.android.exoplayer2.trackselection.a(gVar));
        }
        return true;
    }

    /* renamed from: getCurrentItemDuration-nHNvnlg$media_player_release$annotations, reason: not valid java name */
    public static /* synthetic */ void m1026getCurrentItemDurationnHNvnlg$media_player_release$annotations() {
    }

    public static /* synthetic */ void preparePlayer$default(MediaPlayer mediaPlayer, MediaSource mediaSource, boolean z5, boolean z6, long j, MediaPlayerView mediaPlayerView, MediaPlayerView.ControlView controlView, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            z5 = false;
        }
        if ((i5 & 4) != 0) {
            z6 = false;
        }
        if ((i5 & 8) != 0) {
            j = 0;
        }
        if ((i5 & 16) != 0) {
            mediaPlayerView = null;
        }
        if ((i5 & 32) != 0) {
            controlView = null;
        }
        mediaPlayer.preparePlayer(mediaSource, z5, z6, j, mediaPlayerView, controlView);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final synchronized void setEvent(Event event) {
        MediaPlayerManager.INSTANCE.mediaPlayerEventHandler$media_player_release(event, this);
        this.eventListener.invoke(event);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit volumeListener$lambda$1(float f2) {
        return Unit.a;
    }

    public final float bufferedPercentage() {
        return this.exoPlayer.U() / 100.0f;
    }

    public final long bufferedPositionMs() {
        return this.exoPlayer.v();
    }

    public final long currentPositionMs() {
        return this.exoPlayer.S();
    }

    public final float currentPositionPercentage() {
        return currentPositionMs() / durationMs();
    }

    public final long durationMs() {
        return this.exoPlayer.getDuration();
    }

    @NotNull
    public final Function1<MediaPlayFinishedAnalytics, Unit> getAnalyticsListener() {
        return this.analyticsListener;
    }

    /* renamed from: getCurrentItemDuration-nHNvnlg$media_player_release, reason: not valid java name and from getter */
    public final long getCurrentItemDuration() {
        return this.currentItemDuration;
    }

    @NotNull
    public final Function1<Event, Unit> getEventListener() {
        return this.eventListener;
    }

    public final MediaSource getMediaSource() {
        return this.mediaSource;
    }

    @NotNull
    public final Function1<Float, Unit> getVolumeListener() {
        return this.volumeListener;
    }

    public final boolean hasDifferentSettings(@NotNull PlayerSettings newSettings) {
        Intrinsics.checkNotNullParameter(newSettings, "newSettings");
        return !Intrinsics.areEqual(this.currentSettings, newSettings);
    }

    public final boolean hasEnded() {
        return this.exoPlayer.w() == 4;
    }

    public final boolean hasError() {
        SimpleExoPlayer simpleExoPlayer = this.exoPlayer;
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
        dVar.x0();
        return dVar.f5359g0.f9736f != null;
    }

    public final boolean isBuffering() {
        return this.exoPlayer.w() == 2;
    }

    public final boolean isMuted() {
        SimpleExoPlayer simpleExoPlayer = this.exoPlayer;
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
        dVar.x0();
        return dVar.Z == 0.0f;
    }

    public final boolean isPlaying() {
        return this.exoPlayer.y();
    }

    public final void pause() {
        this.exoPlayer.r(false);
    }

    public final void play() {
        this.exoPlayer.r(true);
    }

    public final void playOrReset() {
        if (Math.abs(currentPositionMs() - durationMs()) < 0.1d) {
            seekTo(0L);
        }
        play();
    }

    public final void preparePlayer(@NotNull MediaSource mediaSource, boolean autoPlayWhenReady, boolean loopMedia, long initialSeekPositionMs, MediaPlayerView mediaPlayerView, MediaPlayerView.ControlView playerControlView) {
        nc.r rVar;
        Intrinsics.checkNotNullParameter(mediaSource, "mediaSource");
        this.mediaSource = mediaSource;
        if (mediaSource.getSourceUrl() == null) {
            return;
        }
        SimpleExoPlayer simpleExoPlayer = this.exoPlayer;
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
        dVar.x0();
        r rVar2 = dVar.f5360h;
        DefaultTrackSelector defaultTrackSelector = rVar2 instanceof DefaultTrackSelector ? (DefaultTrackSelector) rVar2 : null;
        if (defaultTrackSelector != null) {
            defaultTrackSelector.h(com.google.android.exoplayer2.trackselection.a.f5476o0);
        }
        SimpleExoPlayer simpleExoPlayer2 = this.exoPlayer;
        simpleExoPlayer2.c0();
        com.google.android.exoplayer2.d dVar2 = simpleExoPlayer2.f5286b;
        dVar2.x0();
        dVar2.V = 1;
        dVar2.o0(2, 4, 1);
        DataSource.Factory factory = this.dataSourceFactory;
        m mVar = new m(29, new qc.h());
        Object obj = new Object();
        p9.d dVar3 = new p9.d(-1, 4);
        MediaItem a = MediaItem.a(mediaSource.getSourceUrl());
        a.f5235e.getClass();
        a.f5235e.getClass();
        n0 n0Var = a.f5235e.f9835i;
        if (n0Var == null || d0.a < 18) {
            rVar = nc.r.a;
        } else {
            synchronized (obj) {
                try {
                    rVar = n0Var.equals(null) ? null : nc.g.a(n0Var);
                    rVar.getClass();
                } finally {
                }
            }
        }
        j0 j0Var = new j0(a, factory, mVar, rVar, dVar3);
        Intrinsics.checkNotNullExpressionValue(j0Var, "createMediaSource(...)");
        SimpleExoPlayer simpleExoPlayer3 = this.exoPlayer;
        simpleExoPlayer3.c0();
        com.google.android.exoplayer2.d dVar4 = simpleExoPlayer3.f5286b;
        dVar4.x0();
        List singletonList = Collections.singletonList(j0Var);
        dVar4.x0();
        dVar4.p0(singletonList, true);
        this.reportingSession = new ReportingSession(mediaSource.getIsGifv(), mediaSource.getSourceUrl());
        SimpleExoPlayer simpleExoPlayer4 = this.exoPlayer;
        if (initialSeekPositionMs >= 0) {
            simpleExoPlayer4.b0(5, initialSeekPositionMs);
        }
        simpleExoPlayer4.F(loopMedia ? 1 : 0);
        simpleExoPlayer4.a();
        configureMultiAudioTrackSelection();
        if (mediaPlayerView != null) {
            mediaPlayerView.assignViewToPlayer(this.exoPlayer);
        }
        if (mediaPlayerView != null) {
            mediaPlayerView.setPlayer$media_player_release(this.exoPlayer);
        }
        if (playerControlView != null) {
            playerControlView.setPlayer$media_player_release(this.exoPlayer);
        }
        if (autoPlayWhenReady) {
            play();
        }
    }

    public final void reattachSurface(@NotNull MediaPlayerView mediaPlayerView) {
        Intrinsics.checkNotNullParameter(mediaPlayerView, "mediaPlayerView");
        mediaPlayerView.assignViewToPlayer(this.exoPlayer);
    }

    public final void release() {
        this.exoPlayer.d0();
    }

    public final void reset() {
        String sourceUrl;
        nc.r rVar;
        SimpleExoPlayer simpleExoPlayer = this.exoPlayer;
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
        dVar.x0();
        r rVar2 = dVar.f5360h;
        DefaultTrackSelector defaultTrackSelector = rVar2 instanceof DefaultTrackSelector ? (DefaultTrackSelector) rVar2 : null;
        if (defaultTrackSelector != null) {
            defaultTrackSelector.h(com.google.android.exoplayer2.trackselection.a.f5476o0);
        }
        MediaSource mediaSource = this.mediaSource;
        if (mediaSource != null && (sourceUrl = mediaSource.getSourceUrl()) != null) {
            DataSource.Factory factory = this.dataSourceFactory;
            m mVar = new m(29, new qc.h());
            Object obj = new Object();
            p9.d dVar2 = new p9.d(-1, 4);
            MediaItem a = MediaItem.a(sourceUrl);
            a.f5235e.getClass();
            a.f5235e.getClass();
            n0 n0Var = a.f5235e.f9835i;
            if (n0Var == null || d0.a < 18) {
                rVar = nc.r.a;
            } else {
                synchronized (obj) {
                    try {
                        rVar = n0Var.equals(null) ? null : nc.g.a(n0Var);
                        rVar.getClass();
                    } finally {
                    }
                }
            }
            j0 j0Var = new j0(a, factory, mVar, rVar, dVar2);
            Intrinsics.checkNotNullExpressionValue(j0Var, "createMediaSource(...)");
            SimpleExoPlayer simpleExoPlayer2 = this.exoPlayer;
            simpleExoPlayer2.c0();
            com.google.android.exoplayer2.d dVar3 = simpleExoPlayer2.f5286b;
            dVar3.x0();
            List singletonList = Collections.singletonList(j0Var);
            dVar3.x0();
            dVar3.p0(singletonList, true);
            this.reportingSession = new ReportingSession(mediaSource.getIsGifv(), sourceUrl);
        }
        seekTo(0L);
        this.exoPlayer.r(false);
    }

    public final void seekTo(long positionMs) {
        try {
            this.exoPlayer.b0(5, positionMs);
        } catch (IllegalArgumentException e9) {
            Log log = Log.INSTANCE;
            Intrinsics.checkNotNullExpressionValue("MediaPlayer", "getSimpleName(...)");
            log.e("MediaPlayer", "Invalid seek position: " + positionMs, e9);
        }
    }

    public final void setAnalyticsListener(@NotNull Function1<? super MediaPlayFinishedAnalytics, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "<set-?>");
        this.analyticsListener = function1;
    }

    public final void setEventListener(@NotNull Function1<? super Event, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "<set-?>");
        this.eventListener = function1;
    }

    public final void setMediaSource(MediaSource mediaSource) {
        this.mediaSource = mediaSource;
    }

    public final void setVolume(float volume) {
        this.exoPlayer.f0(volume);
        this.volumeListener.invoke(Float.valueOf(volume));
    }

    public final void setVolumeListener(@NotNull Function1<? super Float, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "<set-?>");
        this.volumeListener = function1;
    }

    public final boolean shouldPlay() {
        return this.exoPlayer.g();
    }

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0018\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001BA\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\b\u0012\b\b\u0002\u0010\n\u001a\u00020\u000b¢\u0006\u0004\b\f\u0010\rJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001b\u001a\u00020\u0003HÆ\u0003J\t\u0010\u001c\u001a\u00020\bHÆ\u0003J\t\u0010\u001d\u001a\u00020\bHÆ\u0003J\t\u0010\u001e\u001a\u00020\u000bHÆ\u0003JO\u0010\u001f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u00032\b\b\u0002\u0010\u0006\u001a\u00020\u00032\b\b\u0002\u0010\u0007\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\b2\b\b\u0002\u0010\n\u001a\u00020\u000bHÆ\u0001J\u0013\u0010 \u001a\u00020\b2\b\u0010!\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\"\u001a\u00020\u0003HÖ\u0001J\t\u0010#\u001a\u00020$HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u000fR\u0011\u0010\u0005\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u000fR\u0011\u0010\u0006\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u000fR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0013\u0010\u0014R\u0011\u0010\t\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0014R\u0011\u0010\n\u001a\u00020\u000b¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0017¨\u0006%"}, d2 = {"Lcom/discord/media_player/MediaPlayer$PlayerSettings;", "", "minBufferMs", "", "maxBufferMs", "bufferForPlaybackMs", "bufferForPlaybackAfterRebufferMs", "enableDecoderFallback", "", "enableAsyncBufferQueueing", "httpEngine", "Lcom/discord/media_player/HttpEngine;", "<init>", "(IIIIZZLcom/discord/media_player/HttpEngine;)V", "getMinBufferMs", "()I", "getMaxBufferMs", "getBufferForPlaybackMs", "getBufferForPlaybackAfterRebufferMs", "getEnableDecoderFallback", "()Z", "getEnableAsyncBufferQueueing", "getHttpEngine", "()Lcom/discord/media_player/HttpEngine;", "component1", "component2", "component3", "component4", "component5", "component6", "component7", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final /* data */ class PlayerSettings {
        private final int bufferForPlaybackAfterRebufferMs;
        private final int bufferForPlaybackMs;
        private final boolean enableAsyncBufferQueueing;
        private final boolean enableDecoderFallback;

        @NotNull
        private final HttpEngine httpEngine;
        private final int maxBufferMs;
        private final int minBufferMs;

        public PlayerSettings(int i5, int i6, int i10, int i11, boolean z5, boolean z6, @NotNull HttpEngine httpEngine) {
            Intrinsics.checkNotNullParameter(httpEngine, "httpEngine");
            this.minBufferMs = i5;
            this.maxBufferMs = i6;
            this.bufferForPlaybackMs = i10;
            this.bufferForPlaybackAfterRebufferMs = i11;
            this.enableDecoderFallback = z5;
            this.enableAsyncBufferQueueing = z6;
            this.httpEngine = httpEngine;
        }

        public static /* synthetic */ PlayerSettings copy$default(PlayerSettings playerSettings, int i5, int i6, int i10, int i11, boolean z5, boolean z6, HttpEngine httpEngine, int i12, Object obj) {
            if ((i12 & 1) != 0) {
                i5 = playerSettings.minBufferMs;
            }
            if ((i12 & 2) != 0) {
                i6 = playerSettings.maxBufferMs;
            }
            if ((i12 & 4) != 0) {
                i10 = playerSettings.bufferForPlaybackMs;
            }
            if ((i12 & 8) != 0) {
                i11 = playerSettings.bufferForPlaybackAfterRebufferMs;
            }
            if ((i12 & 16) != 0) {
                z5 = playerSettings.enableDecoderFallback;
            }
            if ((i12 & 32) != 0) {
                z6 = playerSettings.enableAsyncBufferQueueing;
            }
            if ((i12 & 64) != 0) {
                httpEngine = playerSettings.httpEngine;
            }
            boolean z7 = z6;
            HttpEngine httpEngine2 = httpEngine;
            boolean z8 = z5;
            int i13 = i10;
            return playerSettings.copy(i5, i6, i13, i11, z8, z7, httpEngine2);
        }

        /* renamed from: component1, reason: from getter */
        public final int getMinBufferMs() {
            return this.minBufferMs;
        }

        /* renamed from: component2, reason: from getter */
        public final int getMaxBufferMs() {
            return this.maxBufferMs;
        }

        /* renamed from: component3, reason: from getter */
        public final int getBufferForPlaybackMs() {
            return this.bufferForPlaybackMs;
        }

        /* renamed from: component4, reason: from getter */
        public final int getBufferForPlaybackAfterRebufferMs() {
            return this.bufferForPlaybackAfterRebufferMs;
        }

        /* renamed from: component5, reason: from getter */
        public final boolean getEnableDecoderFallback() {
            return this.enableDecoderFallback;
        }

        /* renamed from: component6, reason: from getter */
        public final boolean getEnableAsyncBufferQueueing() {
            return this.enableAsyncBufferQueueing;
        }

        @NotNull
        /* renamed from: component7, reason: from getter */
        public final HttpEngine getHttpEngine() {
            return this.httpEngine;
        }

        @NotNull
        public final PlayerSettings copy(int minBufferMs, int maxBufferMs, int bufferForPlaybackMs, int bufferForPlaybackAfterRebufferMs, boolean enableDecoderFallback, boolean enableAsyncBufferQueueing, @NotNull HttpEngine httpEngine) {
            Intrinsics.checkNotNullParameter(httpEngine, "httpEngine");
            return new PlayerSettings(minBufferMs, maxBufferMs, bufferForPlaybackMs, bufferForPlaybackAfterRebufferMs, enableDecoderFallback, enableAsyncBufferQueueing, httpEngine);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof PlayerSettings)) {
                return false;
            }
            PlayerSettings playerSettings = (PlayerSettings) other;
            return this.minBufferMs == playerSettings.minBufferMs && this.maxBufferMs == playerSettings.maxBufferMs && this.bufferForPlaybackMs == playerSettings.bufferForPlaybackMs && this.bufferForPlaybackAfterRebufferMs == playerSettings.bufferForPlaybackAfterRebufferMs && this.enableDecoderFallback == playerSettings.enableDecoderFallback && this.enableAsyncBufferQueueing == playerSettings.enableAsyncBufferQueueing && this.httpEngine == playerSettings.httpEngine;
        }

        public final int getBufferForPlaybackAfterRebufferMs() {
            return this.bufferForPlaybackAfterRebufferMs;
        }

        public final int getBufferForPlaybackMs() {
            return this.bufferForPlaybackMs;
        }

        public final boolean getEnableAsyncBufferQueueing() {
            return this.enableAsyncBufferQueueing;
        }

        public final boolean getEnableDecoderFallback() {
            return this.enableDecoderFallback;
        }

        @NotNull
        public final HttpEngine getHttpEngine() {
            return this.httpEngine;
        }

        public final int getMaxBufferMs() {
            return this.maxBufferMs;
        }

        public final int getMinBufferMs() {
            return this.minBufferMs;
        }

        public int hashCode() {
            return this.httpEngine.hashCode() + k0.d.d(k0.d.d(com.discord.chat.bridge.botuikit.a.u(this.bufferForPlaybackAfterRebufferMs, com.discord.chat.bridge.botuikit.a.u(this.bufferForPlaybackMs, com.discord.chat.bridge.botuikit.a.u(this.maxBufferMs, Integer.hashCode(this.minBufferMs) * 31, 31), 31), 31), 31, this.enableDecoderFallback), 31, this.enableAsyncBufferQueueing);
        }

        @NotNull
        public String toString() {
            int i5 = this.minBufferMs;
            int i6 = this.maxBufferMs;
            int i10 = this.bufferForPlaybackMs;
            int i11 = this.bufferForPlaybackAfterRebufferMs;
            boolean z5 = this.enableDecoderFallback;
            boolean z6 = this.enableAsyncBufferQueueing;
            HttpEngine httpEngine = this.httpEngine;
            StringBuilder q5 = e.q(i5, "PlayerSettings(minBufferMs=", i6, ", maxBufferMs=", ", bufferForPlaybackMs=");
            e.y(q5, i10, ", bufferForPlaybackAfterRebufferMs=", i11, ", enableDecoderFallback=");
            com.discord.chat.bridge.botuikit.a.s(q5, z5, ", enableAsyncBufferQueueing=", z6, ", httpEngine=");
            q5.append(httpEngine);
            q5.append(")");
            return q5.toString();
        }

        public /* synthetic */ PlayerSettings(int i5, int i6, int i10, int i11, boolean z5, boolean z6, HttpEngine httpEngine, int i12, DefaultConstructorMarker defaultConstructorMarker) {
            this(i5, i6, i10, i11, z5, z6, (i12 & 64) != 0 ? HttpEngine.DEFAULT : httpEngine);
        }
    }
}
