package com.discord.media_player;

import android.app.Activity;
import android.view.View;
import com.discord.logging.Log;
import com.discord.media_player.reactevents.MediaPlayerDownloadProgress;
import com.discord.media_player.reactevents.MediaPlayerMuteStateChanged;
import com.discord.media_player.reactevents.MediaPlayerPause;
import com.discord.media_player.reactevents.MediaPlayerPlaybackProgressUpdated;
import com.discord.media_player.reactevents.MediaPlayerPlaybackRateChanged;
import com.discord.media_player.reactevents.MediaPlayerPlaybackSource;
import com.discord.media_player.reactevents.MediaPlayerPlaybackSourceChanged;
import com.discord.media_player.reactevents.MediaPlayerProgress;
import com.discord.media_player.reactevents.MediaPlayerViewDidDisappear;
import com.discord.media_player.reactevents.MediaPlayerViewWillAppear;
import com.discord.portals.from_native.PortalFromNativeContextManager;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.module.annotations.ReactModule;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.ui.PlayerView;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.coroutines.e;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.time.Duration;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.MutableStateFlow;
import nr.g0;
import nr.m1;
import nr.q0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import qr.c0;
import qr.y;
import sr.q;
import yo.j;

@ReactModule(name = MediaPlayerManagerModule.NAME)
@Metadata(d1 = {"\u0000\u0086\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0010\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\b\b\n\u0002\u0010\b\n\u0002\b\u0003\b\u0007\u0018\u0000 G2\u00020\u0001:\u0001GB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0013\u001a\u00020\u000eH\u0016J\b\u0010\u0016\u001a\u00020\u0017H\u0007J\u0018\u0010\u0018\u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0006\u0010\u001a\u001a\u00020\u001bH\u0007J\u0018\u0010\u001c\u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0006\u0010\u001d\u001a\u00020\bH\u0007J\u0018\u0010\u001e\u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0006\u0010\u001f\u001a\u00020\u001bH\u0007J\u0018\u0010 \u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0006\u0010!\u001a\u00020\u001bH\u0007J\b\u0010\"\u001a\u00020\u0017H\u0007J\b\u0010#\u001a\u00020\u0017H\u0007J\b\u0010$\u001a\u00020\u0017H\u0007J\u0016\u0010%\u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0006\u0010&\u001a\u00020\u001bJ$\u0010'\u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0012\u0010(\u001a\u000e\u0012\u0004\u0012\u00020*\u0012\u0004\u0012\u00020\u00170)H\u0002J\u0016\u0010+\u001a\u00020\u00172\u0006\u0010,\u001a\u00020-2\u0006\u0010.\u001a\u00020/J\u000e\u00100\u001a\u00020\u00172\u0006\u0010,\u001a\u00020-J\"\u00101\u001a\u00020\u00172\b\u0010,\u001a\u0004\u0018\u00010-2\u0006\u00102\u001a\u0002032\u0006\u00104\u001a\u000203H\u0002J \u00105\u001a\u00020\u00172\u0006\u0010\u0019\u001a\u00020\b2\u0006\u00106\u001a\u0002032\u0006\u00107\u001a\u000203H\u0002J)\u00108\u001a\u00020\t2\u0006\u00109\u001a\u00020:2\u0012\u0010;\u001a\n\u0012\u0006\b\u0001\u0012\u00020-0<\"\u00020-¢\u0006\u0004\b=\u0010>J)\u0010?\u001a\u00020\t2\u0006\u00109\u001a\u00020:2\u0012\u0010;\u001a\n\u0012\u0006\b\u0001\u0012\u00020-0<\"\u00020-¢\u0006\u0004\b@\u0010>J\u0010\u0010A\u001a\u00020\u00172\u0006\u0010B\u001a\u00020\u000eH\u0007J\u0010\u0010C\u001a\u00020\u00172\u0006\u0010D\u001a\u00020EH\u0007J\b\u0010F\u001a\u00020\u0017H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\f\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u000e0\rX\u0082\u000e¢\u0006\u0002\n\u0000R\u0019\u0010\u000f\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u000e0\u0010¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006H"}, d2 = {"Lcom/discord/media_player/MediaPlayerManagerModule;", "Lcom/facebook/react/bridge/ReactContextBaseJavaModule;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "mediaPlayerProgressMap", "", "", "Lkotlinx/coroutines/Job;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "_pausePlayerFlow", "Lkotlinx/coroutines/flow/MutableStateFlow;", "", "pausePlayerFlow", "Lkotlinx/coroutines/flow/Flow;", "getPausePlayerFlow", "()Lkotlinx/coroutines/flow/Flow;", "getName", "reactEvents", "Lcom/discord/reactevents/ReactEvents;", "pauseAllMediaPlayers", "", "toggle", "portal", "play", "", "changeProgress", "seekToSec", "setMuted", "muted", "setLoopPlayback", "loop", "pauseCurrentPlayer", "playCurrentPlayer", "subscribeToPlaybackEvents", "onMuteToggle", "isMuted", "withPlayer", "callback", "Lkotlin/Function1;", "Lcom/google/android/exoplayer2/SimpleExoPlayer;", "startPlayerProgressInterval", "mediaSource", "Lcom/discord/media_player/MediaSource;", "mediaPlayer", "Lcom/discord/media_player/MediaPlayer;", "stopPlayerProgressInterval", "onMediaPlayerPlaybackProgress", "timeMs", "", "durationMs", "onMediaPlayerDownloadProgress", "bufferedPosition", "duration", "onMediaPlayerViewWillAppear", "channelId", "Lcom/discord/primitives/ChannelId;", "mediaSources", "", "onMediaPlayerViewWillAppear-LJLSWy8", "(J[Lcom/discord/media_player/MediaSource;)Lkotlinx/coroutines/Job;", "onMediaPlayerViewDetached", "onMediaPlayerViewDetached-LJLSWy8", "addListener", "type", "removeListeners", "count", "", "invalidate", "Companion", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaPlayerManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaPlayerManagerModule.kt\ncom/discord/media_player/MediaPlayerManagerModule\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 CastUtils.kt\ncom/discord/misc/utilities/kotlin/CastUtilsKt\n*L\n1#1,353:1\n1#2:354\n8#3:355\n8#3:356\n*S KotlinDebug\n*F\n+ 1 MediaPlayerManagerModule.kt\ncom/discord/media_player/MediaPlayerManagerModule\n*L\n224#1:355\n226#1:356\n*E\n"})
/* loaded from: classes.dex */
public final class MediaPlayerManagerModule extends ReactContextBaseJavaModule {

    @NotNull
    public static final String NAME = "MediaPlayerManager";

    @NotNull
    private MutableStateFlow _pausePlayerFlow;

    @NotNull
    private final Map<Double, Job> mediaPlayerProgressMap;

    @NotNull
    private final Flow pausePlayerFlow;

    @NotNull
    private final ReactApplicationContext reactContext;

    @NotNull
    private final ReactEvents reactEvents;

    @NotNull
    private final CoroutineScope scope;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaPlayerManagerModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
        this.mediaPlayerProgressMap = new LinkedHashMap();
        m1 m1Var = new m1();
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor();
        Intrinsics.checkNotNullExpressionValue(newSingleThreadExecutor, "newSingleThreadExecutor(...)");
        this.scope = x.b(e.c(m1Var, new q0(newSingleThreadExecutor)));
        c0 b10 = y.b(null);
        this._pausePlayerFlow = b10;
        this.pausePlayerFlow = b10;
        this.reactEvents = new ReactEvents(new Pair("MediaPlayerPlaybackProgressUpdated", Reflection.getOrCreateKotlinClass(MediaPlayerPlaybackProgressUpdated.class)), new Pair("MediaPlayerPlaybackRateChanged", Reflection.getOrCreateKotlinClass(MediaPlayerPlaybackRateChanged.class)), new Pair("MediaPlayerPlaybackSourceChanged", Reflection.getOrCreateKotlinClass(MediaPlayerPlaybackSourceChanged.class)), new Pair("MediaPlayerPause", Reflection.getOrCreateKotlinClass(MediaPlayerPause.class)), new Pair("MediaPlayerProgress", Reflection.getOrCreateKotlinClass(MediaPlayerProgress.class)), new Pair("MediaPlayerDownloadProgress", Reflection.getOrCreateKotlinClass(MediaPlayerDownloadProgress.class)), new Pair("MediaPlayerMuteStateChanged", Reflection.getOrCreateKotlinClass(MediaPlayerMuteStateChanged.class)), new Pair("MediaPlayerViewWillAppear", Reflection.getOrCreateKotlinClass(MediaPlayerViewWillAppear.class)), new Pair("MediaPlayerViewDidDisappear", Reflection.getOrCreateKotlinClass(MediaPlayerViewDidDisappear.class)));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit changeProgress$lambda$1(double d6, SimpleExoPlayer player) {
        Intrinsics.checkNotNullParameter(player, "player");
        lr.a aVar = Duration.f13595e;
        long d7 = Duration.d(lr.c.f(d6, lr.d.f14212v));
        long duration = player.getDuration();
        if (duration <= 0 || d7 < 0 || d7 > duration) {
            Log log = Log.INSTANCE;
            StringBuilder n6 = k0.d.n(d7, "Invalid seek attempt: position=", ", duration=");
            n6.append(duration);
            Log.w$default(log, NAME, n6.toString(), (Throwable) null, 4, (Object) null);
        } else {
            try {
                player.b0(5, d7);
            } catch (IllegalArgumentException e9) {
                Log log2 = Log.INSTANCE;
                StringBuilder n10 = k0.d.n(d7, "Invalid seek position: ", ", duration: ");
                n10.append(duration);
                log2.e(NAME, n10.toString(), e9);
            }
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void onMediaPlayerDownloadProgress(double portal, long bufferedPosition, long duration) {
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        long seconds = timeUnit.toSeconds(duration);
        this.reactEvents.emitModuleEvent(this.reactContext, new MediaPlayerDownloadProgress(portal, timeUnit.toSeconds(bufferedPosition), j.b(bufferedPosition / duration, 0.0d, 1.0d), seconds));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void onMediaPlayerPlaybackProgress(MediaSource mediaSource, long timeMs, long durationMs) {
        Double portal;
        this.reactEvents.emitModuleEvent(this.reactContext, new MediaPlayerPlaybackProgressUpdated(mediaSource != null ? MediaPlayerPlaybackSource.INSTANCE.fromMediaSource(mediaSource) : null, timeMs, durationMs));
        if (mediaSource == null || (portal = mediaSource.getPortal()) == null) {
            return;
        }
        double doubleValue = portal.doubleValue();
        ReactEvents reactEvents = this.reactEvents;
        ReactApplicationContext reactApplicationContext = this.reactContext;
        lr.a aVar = Duration.f13595e;
        lr.d dVar = lr.d.f14211i;
        long h6 = lr.c.h(timeMs, dVar);
        lr.d dVar2 = lr.d.f14212v;
        reactEvents.emitModuleEvent(reactApplicationContext, new MediaPlayerProgress(doubleValue, Duration.j(h6, dVar2), Duration.j(lr.c.h(durationMs, dVar), dVar2)));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setLoopPlayback$lambda$3(boolean z5, SimpleExoPlayer player) {
        Intrinsics.checkNotNullParameter(player, "player");
        if (z5) {
            player.F(1);
        } else {
            player.F(0);
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setMuted$lambda$2(boolean z5, SimpleExoPlayer player) {
        Intrinsics.checkNotNullParameter(player, "player");
        player.f0(z5 ? 0.0f : 1.0f);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit toggle$lambda$0(boolean z5, MediaPlayerManagerModule mediaPlayerManagerModule, double d6, SimpleExoPlayer player) {
        Intrinsics.checkNotNullParameter(player, "player");
        if (z5 && player.w() == 11) {
            try {
                player.b0(5, 0L);
            } catch (IllegalArgumentException e9) {
                Log.INSTANCE.e(NAME, "Failed to seek to beginning", e9);
            }
        }
        if (player.y() == z5) {
            return Unit.a;
        }
        player.r(z5);
        mediaPlayerManagerModule.reactEvents.emitModuleEvent(mediaPlayerManagerModule.reactContext, new MediaPlayerPause(d6, !z5));
        return Unit.a;
    }

    private final void withPlayer(final double portal, final Function1<? super SimpleExoPlayer, Unit> callback) {
        Activity currentActivity = this.reactContext.getCurrentActivity();
        if (currentActivity != null) {
            currentActivity.runOnUiThread(new Runnable() { // from class: com.discord.media_player.b
                @Override // java.lang.Runnable
                public final void run() {
                    MediaPlayerManagerModule.withPlayer$lambda$6(portal, callback);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void withPlayer$lambda$6(double d6, Function1 function1) {
        Player player;
        View view = PortalFromNativeContextManager.INSTANCE.getView(d6);
        if (view != null) {
            if (!(view instanceof PlayerView)) {
                view = null;
            }
            PlayerView playerView = (PlayerView) view;
            if (playerView == null || (player = playerView.getPlayer()) == null) {
                return;
            }
            SimpleExoPlayer simpleExoPlayer = (SimpleExoPlayer) (player instanceof SimpleExoPlayer ? player : null);
            if (simpleExoPlayer != null) {
                function1.invoke(simpleExoPlayer);
            }
        }
    }

    @ReactMethod
    public final void addListener(@NotNull String type) {
        Intrinsics.checkNotNullParameter(type, "type");
    }

    @ReactMethod
    public final void changeProgress(double portal, final double seekToSec) {
        withPlayer(portal, new Function1() { // from class: com.discord.media_player.d
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit changeProgress$lambda$1;
                changeProgress$lambda$1 = MediaPlayerManagerModule.changeProgress$lambda$1(seekToSec, (SimpleExoPlayer) obj);
                return changeProgress$lambda$1;
            }
        });
    }

    @Override // com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return NAME;
    }

    @NotNull
    public final Flow getPausePlayerFlow() {
        return this.pausePlayerFlow;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        x.f(this.scope, null);
        super.invalidate();
    }

    @NotNull
    /* renamed from: onMediaPlayerViewDetached-LJLSWy8, reason: not valid java name */
    public final Job m1045onMediaPlayerViewDetachedLJLSWy8(long channelId, @NotNull MediaSource... mediaSources) {
        Intrinsics.checkNotNullParameter(mediaSources, "mediaSources");
        CoroutineScope coroutineScope = this.scope;
        ur.e eVar = g0.a;
        return x.t(coroutineScope, q.a, new MediaPlayerManagerModule$onMediaPlayerViewDetached$1(this, channelId, mediaSources, null), 2);
    }

    @NotNull
    /* renamed from: onMediaPlayerViewWillAppear-LJLSWy8, reason: not valid java name */
    public final Job m1046onMediaPlayerViewWillAppearLJLSWy8(long channelId, @NotNull MediaSource... mediaSources) {
        Intrinsics.checkNotNullParameter(mediaSources, "mediaSources");
        CoroutineScope coroutineScope = this.scope;
        ur.e eVar = g0.a;
        return x.t(coroutineScope, q.a, new MediaPlayerManagerModule$onMediaPlayerViewWillAppear$1(this, channelId, mediaSources, null), 2);
    }

    public final void onMuteToggle(double portal, boolean isMuted) {
        this.reactEvents.emitModuleEvent(this.reactContext, new MediaPlayerMuteStateChanged(portal, isMuted));
    }

    @ReactMethod
    public final void pauseAllMediaPlayers() {
        this._pausePlayerFlow.setValue(UUID.randomUUID().toString());
    }

    @ReactMethod
    public final void pauseCurrentPlayer() {
        MediaPlayerManager.INSTANCE.pauseActivePlayer();
    }

    @ReactMethod
    public final void playCurrentPlayer() {
        MediaPlayerManager.INSTANCE.playActivePlayer();
    }

    @ReactMethod
    public final void removeListeners(int count) {
    }

    @ReactMethod
    public final void setLoopPlayback(double portal, boolean loop) {
        withPlayer(portal, new c(loop, 1));
    }

    @ReactMethod
    public final void setMuted(double portal, boolean muted) {
        withPlayer(portal, new c(muted, 0));
    }

    public final void startPlayerProgressInterval(@NotNull MediaSource mediaSource, @NotNull MediaPlayer mediaPlayer) {
        Intrinsics.checkNotNullParameter(mediaSource, "mediaSource");
        Intrinsics.checkNotNullParameter(mediaPlayer, "mediaPlayer");
        stopPlayerProgressInterval(mediaSource);
        onMediaPlayerPlaybackProgress(mediaSource, mediaPlayer.currentPositionMs(), mediaPlayer.durationMs());
        Map<Double, Job> map = this.mediaPlayerProgressMap;
        Double portal = mediaSource.getPortal();
        Intrinsics.checkNotNull(portal);
        map.put(portal, x.t(this.scope, null, new MediaPlayerManagerModule$startPlayerProgressInterval$1(mediaPlayer, this, mediaSource, null), 3));
    }

    public final void stopPlayerProgressInterval(@NotNull MediaSource mediaSource) {
        Job remove;
        Intrinsics.checkNotNullParameter(mediaSource, "mediaSource");
        if (mediaSource.getPortal() == null || (remove = this.mediaPlayerProgressMap.remove(mediaSource.getPortal())) == null) {
            return;
        }
        remove.f(null);
    }

    @ReactMethod
    public final void subscribeToPlaybackEvents() {
        x.t(this.scope, null, new MediaPlayerManagerModule$subscribeToPlaybackEvents$1(this, null), 3);
        x.t(this.scope, null, new MediaPlayerManagerModule$subscribeToPlaybackEvents$2(this, null), 3);
        x.t(this.scope, null, new MediaPlayerManagerModule$subscribeToPlaybackEvents$3(this, null), 3);
        x.t(this.scope, null, new MediaPlayerManagerModule$subscribeToPlaybackEvents$4(this, null), 3);
    }

    @ReactMethod
    public final void toggle(final double portal, final boolean play) {
        withPlayer(portal, new Function1() { // from class: com.discord.media_player.a
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit unit;
                unit = MediaPlayerManagerModule.toggle$lambda$0(play, this, portal, (SimpleExoPlayer) obj);
                return unit;
            }
        });
    }
}
