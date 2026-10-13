package com.discord.media.engine;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.media.projection.MediaProjectionManager;
import com.discord.codegen.NativeMediaEngineModuleSpec;
import com.discord.media.engine.types.Debug;
import com.discord.media.engine.video.events.ActiveSinksChangeEvent;
import com.discord.media.engine.video.events.AudioInputInitializedEvent;
import com.discord.media.engine.video.events.DeviceChangedEvent;
import com.discord.media.engine.video.events.FirstFrameCallbackEvent;
import com.discord.media.engine.video.events.MlsFailureCallbackEvent;
import com.discord.media.engine.video.events.NoInputCallbackEvent;
import com.discord.media.engine.video.events.OnBroadcastRequestedEvent;
import com.discord.media.engine.video.events.OnBroadcastThumbnailEvent;
import com.discord.media.engine.video.events.OnVideoCallbackEvent;
import com.discord.media.engine.video.events.OnVoiceEvent;
import com.discord.media.engine.video.events.PingCallbackEvent;
import com.discord.media.engine.video.events.PingTimeoutCallbackEvent;
import com.discord.media.engine.video.events.SecureFramesStateUpdateCallbackEvent;
import com.discord.media.engine.video.events.SpeakingWhileMutedCallbackEvent;
import com.discord.media.engine.video.events.UserSpeakingEvent;
import com.discord.media.engine.video.events.VoiceProcessingErrorCallbackEvent;
import com.discord.media.engine.video.texture_view.StreamManager;
import com.discord.misc.utilities.activity.ActivityUtilities;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.ActivityEventListener;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.modules.appstate.AppStateModule;
import com.facebook.react.uimanager.ViewProps;
import java.util.Map;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CompletableDeferred;
import kotlinx.coroutines.CoroutineScope;
import nr.q0;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0092\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\u0010$\n\u0002\bP\u0018\u0000 «\u00012\u00020\u0001:\u0002«\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u000e\u0010\u0011\u001a\u00020\u0010H\u0082@¢\u0006\u0002\u0010\u0012J\b\u0010!\u001a\u00020\"H\u0016J\b\u0010#\u001a\u00020\"H\u0016J\u0016\u0010$\u001a\u0010\u0012\u0004\u0012\u00020&\u0012\u0006\u0012\u0004\u0018\u00010'0%H\u0014J\b\u0010(\u001a\u00020\"H\u0016J \u0010)\u001a\u00020\"2\u0006\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020+2\u0006\u0010-\u001a\u00020+H\u0016J\b\u0010.\u001a\u00020\"H\u0016J\u0018\u0010/\u001a\u00020\"2\u0006\u00100\u001a\u00020+2\u0006\u00101\u001a\u00020&H\u0016J\u0010\u00102\u001a\u00020\"2\u0006\u00103\u001a\u000204H\u0016J\u0010\u00105\u001a\u00020\"2\u0006\u00106\u001a\u00020+H\u0016J\u0010\u00107\u001a\u00020\"2\u0006\u00106\u001a\u00020+H\u0016J\u0010\u00108\u001a\u00020\"2\u0006\u00109\u001a\u00020:H\u0016J\u0010\u0010;\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010>\u001a\u00020\"2\u0006\u0010?\u001a\u00020+H\u0016J\u0010\u0010@\u001a\u00020\"2\u0006\u0010A\u001a\u00020&H\u0016J\u0010\u0010B\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010C\u001a\u00020\"2\u0006\u0010?\u001a\u00020+H\u0016J\u0010\u0010D\u001a\u00020\"2\u0006\u0010A\u001a\u00020&H\u0016J\u0010\u0010E\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010F\u001a\u00020\"2\u0006\u0010?\u001a\u00020+H\u0016J\u0010\u0010G\u001a\u00020\"2\u0006\u0010A\u001a\u00020&H\u0016J\u0010\u0010H\u001a\u00020\"2\u0006\u0010I\u001a\u00020+H\u0016J\u0010\u0010J\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010K\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010L\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0018\u0010M\u001a\u00020\"2\u0006\u0010N\u001a\u00020O2\u0006\u0010<\u001a\u00020=H\u0016J\u0018\u0010P\u001a\u00020\"2\u0006\u00103\u001a\u0002042\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010Q\u001a\u00020\"2\u0006\u0010<\u001a\u00020=H\u0016J\u0010\u0010R\u001a\u00020\"2\u0006\u0010S\u001a\u00020:H\u0016J\u0010\u0010T\u001a\u00020\"2\u0006\u0010U\u001a\u00020\u0019H\u0002J(\u0010V\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010W\u001a\u00020&2\u0006\u0010X\u001a\u0002042\u0006\u0010<\u001a\u00020=H\u0016J(\u0010Y\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010W\u001a\u00020&2\u0006\u0010X\u001a\u0002042\u0006\u0010<\u001a\u00020=H\u0016JF\u0010Z\u001a\u00020\"2\u0006\u0010U\u001a\u00020\u00192\u0006\u0010W\u001a\u00020&2\u0006\u0010X\u001a\u0002042$\u0010<\u001a \u0012\u0004\u0012\u00020&\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020&\u0012\u0004\u0012\u00020'0\\\u0012\u0004\u0012\u00020\"0[H\u0002J\u0018\u0010]\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010^\u001a\u00020:H\u0016J(\u0010_\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010`\u001a\u00020+2\u0006\u0010a\u001a\u00020+2\u0006\u0010b\u001a\u00020+H\u0016J\u0018\u0010c\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010<\u001a\u00020=H\u0016J\u0018\u0010d\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u00103\u001a\u000204H\u0016J\u0018\u0010e\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010f\u001a\u00020OH\u0016J\u0018\u0010g\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010W\u001a\u00020&H\u0016J\u0018\u0010h\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010i\u001a\u00020:H\u0016J(\u0010j\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010W\u001a\u00020&2\u0006\u0010k\u001a\u00020+2\u0006\u0010l\u001a\u00020+H\u0016J \u0010m\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010W\u001a\u00020&2\u0006\u00106\u001a\u00020+H\u0016J \u0010n\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010W\u001a\u00020&2\u0006\u0010o\u001a\u00020:H\u0016J\u0010\u0010p\u001a\u00020\"2\u0006\u0010U\u001a\u00020+H\u0016J\u0018\u0010q\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010r\u001a\u00020:H\u0016J\u0018\u0010s\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010t\u001a\u00020:H\u0016J\u0018\u0010u\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010v\u001a\u00020+H\u0016J\u0018\u0010w\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010I\u001a\u00020+H\u0016J\u0010\u0010x\u001a\u00020\"2\u0006\u0010U\u001a\u00020+H\u0016J(\u0010y\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010z\u001a\u00020:2\u0006\u0010{\u001a\u00020:2\u0006\u0010|\u001a\u00020:H\u0016J\u0018\u0010}\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010<\u001a\u00020=H\u0016J\u0018\u0010~\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010\u007f\u001a\u00020+H\u0016J\"\u0010\u0080\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0081\u0001\u001a\u00020+2\u0006\u0010<\u001a\u00020=H\u0016J+\u0010\u0082\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0083\u0001\u001a\u00020+2\u0007\u0010\u0084\u0001\u001a\u00020+2\u0006\u0010<\u001a\u00020=H\u0016J\u001a\u0010\u0085\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0083\u0001\u001a\u00020+H\u0016J,\u0010\u0086\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0087\u0001\u001a\u00020&2\u0007\u0010\u0083\u0001\u001a\u00020+2\u0007\u0010\u0088\u0001\u001a\u00020&H\u0016J\u0019\u0010\u0089\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0006\u0010<\u001a\u00020=H\u0016J\u001a\u0010\u008a\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u008b\u0001\u001a\u00020&H\u0016J\"\u0010\u008c\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u008d\u0001\u001a\u00020&2\u0006\u0010<\u001a\u00020=H\u0016J+\u0010\u008e\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0083\u0001\u001a\u00020+2\u0007\u0010\u008f\u0001\u001a\u00020&2\u0006\u0010<\u001a\u00020=H\u0016J+\u0010\u0090\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0083\u0001\u001a\u00020+2\u0007\u0010\u0091\u0001\u001a\u00020&2\u0006\u0010<\u001a\u00020=H\u0016J*\u0010\u0092\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u0093\u0001\u001a\u00020+2\u0006\u0010W\u001a\u00020&2\u0006\u0010<\u001a\u00020=H\u0016J#\u0010\u0094\u0001\u001a\u00020\"2\u0007\u0010\u0095\u0001\u001a\u00020&2\u0007\u0010\u0096\u0001\u001a\u00020+2\u0006\u0010<\u001a\u00020=H\u0016J\u0011\u0010\u0097\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+H\u0016J\u0011\u0010\u0098\u0001\u001a\u00020\"2\u0006\u0010S\u001a\u00020:H\u0016J\u001b\u0010\u0099\u0001\u001a\u00020\"2\u0007\u0010\u009a\u0001\u001a\u00020&2\u0007\u0010\u009b\u0001\u001a\u00020&H\u0016J,\u0010\u009c\u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+2\u0007\u0010\u009d\u0001\u001a\u00020&2\u0007\u0010\u009e\u0001\u001a\u00020:2\u0007\u0010\u009f\u0001\u001a\u00020&H\u0016J\u0011\u0010 \u0001\u001a\u00020\"2\u0006\u0010U\u001a\u00020+H\u0016J\u0012\u0010¡\u0001\u001a\u00020\"2\u0007\u0010¢\u0001\u001a\u00020&H\u0016J\u0012\u0010£\u0001\u001a\u00020\"2\u0007\u0010¤\u0001\u001a\u00020OH\u0016J\u0012\u0010¥\u0001\u001a\u00020\"2\u0007\u0010\u009f\u0001\u001a\u00020&H\u0016J\u0012\u0010¦\u0001\u001a\u00020\"2\u0007\u0010§\u0001\u001a\u00020+H\u0016J\u0012\u0010¨\u0001\u001a\u00020\"2\u0007\u0010©\u0001\u001a\u00020:H\u0016J\u0011\u0010ª\u0001\u001a\u00020\"2\u0006\u0010S\u001a\u00020:H\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0014\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\b\n\u0000\u0012\u0004\b\n\u0010\u000bR\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00100\u000fX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0013\u001a\u00020\u0010X\u0086.¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R\u0012\u0010\u0018\u001a\u0004\u0018\u00010\u0019X\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u001aR\u0010\u0010\u001b\u001a\u0004\u0018\u00010\u001cX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u001eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020 X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006¬\u0001"}, d2 = {"Lcom/discord/media/engine/MediaEngineModule;", "Lcom/discord/codegen/NativeMediaEngineModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getReactContext", "()Lcom/facebook/react/bridge/ReactApplicationContext;", "appScope", "Lkotlinx/coroutines/CoroutineScope;", "getAppScope$annotations", "()V", "startNs", "", "mediaEngineDeferred", "Lkotlinx/coroutines/CompletableDeferred;", "Lcom/discord/media/engine/MediaEngine;", "awaitMediaEngine", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "mediaEngine", "getMediaEngine", "()Lcom/discord/media/engine/MediaEngine;", "setMediaEngine", "(Lcom/discord/media/engine/MediaEngine;)V", "streamConnectionId", "", "Ljava/lang/Integer;", "streamPermissions", "Landroid/content/Intent;", "reactEvents", "Lcom/discord/reactevents/ReactEvents;", "activityEventListener", "Lcom/facebook/react/bridge/ActivityEventListener;", "initializeEngine", "", "invalidate", "getTypedExportedConstants", "", "", "", "startBroadcast", "setBroadcastThumbnailParams", "width", "", "height", "intervalSeconds", "stopBroadcast", "stopBroadcastWithError", "errorCode", "errorMessage", "setTransportOptions", "options", "Lcom/facebook/react/bridge/ReadableMap;", "setInputVolume", "volume", "setOutputVolume", "setEmitVADLevel2", "enable", "", "getInputDevices", "callback", "Lcom/facebook/react/bridge/Callback;", "setInputDevice", "deviceIndex", "setInputDeviceById", "deviceName", "getOutputDevices", "setOutputDevice", "setOutputDeviceById", "getVideoInputDevices", "setVideoInputDevice", "setVideoInputDeviceById", "setNoInputThreshold", "threshold", "getAudioSubsystem", "getCodecCapabilities", "getCodecSurvey", "rankRtcRegions", "regionsWithIps", "Lcom/facebook/react/bridge/ReadableArray;", "startLocalAudioRecording", "stopLocalAudioRecording", "setAudioInputEnabled", ViewProps.ENABLED, "addConnectionCallbacks", "connectionId", "createVoiceConnectionWithOptions", "userId", "connectionOptions", "createOwnStreamConnectionWithOptions", "createConnection", "Lkotlin/Function2;", "", "connectionInstanceDestroy", "willReconnect", "connectionInstanceConfigureConnectionRetries", "baseDelayMs", "maxDelayMs", "maxAttempts", "connectionInstanceGetEncryptionModes", "connectionInstanceSetTransportOptions", "connectionInstanceMergeUsers", "users", "connectionInstanceDestroyUser", "connectionInstanceSetVideoBroadcast", "broadcasting", "connectionInstanceSetLocalPan", ViewProps.LEFT, ViewProps.RIGHT, "connectionInstanceSetLocalVolume", "connectionInstanceSetLocalMute", "mute", "connectionInstanceFastUdpReconnect", "connectionInstanceSetSelfMute", "muted", "connectionInstanceSetSelfDeafen", "deafened", "connectionInstanceSetMinimumOutputDelay", "delay", "connectionInstanceSetNoInputThreshold", "connectionInstanceTriggerOnVideoCallback", "connectionInstanceSetPTTActive", AppStateModule.APP_STATE_ACTIVE, "priority", "muteOverride", "connectionInstanceGetStats", "connectionInstanceSetPingInterval", "pingInterval", "connectionInstanceGetFilteredStats", ViewProps.FILTER, "connectionInstancePrepareSecureFramesTransition", "transitionId", "protocolVersion", "connectionInstanceExecuteSecureFramesTransition", "connectionInstancePrepareSecureFramesEpoch", "epoch", "groupId", "connectionInstanceGetMLSKeyPackageB64", "connectionInstanceUpdateMLSExternalSenderB64", "externalSenderB64", "connectionInstanceProcessMLSProposalsB64", "proposals", "connectionInstancePrepareMLSCommitTransitionB64", "commit", "connectionInstanceProcessMLSWelcomeB64", "welcome", "connectionInstanceGetMLSPairwiseFingerprintB64", "version", "getMLSSigningKeyB64", "sessionId", "signatureVersion", "connectionInstanceTriggerOnSpeakingCallback", "setSidechainCompression", "updateFieldTrial", "key", "value", "connectionInstanceSetDesktopSource", "stringId", "useVideoHook", "type", "connectionInstanceWasRemoteDisconnected", "setAVAudioSessionMode", "mode", "setNcModels", "models", "addListener", "removeListeners", "count", "setHasFullbandPerformance", "hasFullbandPerformance", "setOffloadAdmControls", "Companion", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaEngineModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaEngineModule.kt\ncom/discord/media/engine/MediaEngineModule\n+ 2 Debug.kt\ncom/discord/media/engine/types/Debug\n+ 3 SharedPreferences.kt\nandroidx/core/content/SharedPreferencesKt\n*L\n1#1,890:1\n65#2,7:891\n40#3,13:898\n*S KotlinDebug\n*F\n+ 1 MediaEngineModule.kt\ncom/discord/media/engine/MediaEngineModule\n*L\n74#1:891,7\n876#1:898,13\n*E\n"})
/* loaded from: classes.dex */
public final class MediaEngineModule extends NativeMediaEngineModuleSpec {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private static final int START_SCREENSHARE_REQUEST_CODE = 420;

    @NotNull
    private static final String TAG = "MediaEngineModule";

    @NotNull
    private final ActivityEventListener activityEventListener;

    @NotNull
    private final CoroutineScope appScope;
    public MediaEngine mediaEngine;

    @NotNull
    private final CompletableDeferred mediaEngineDeferred;

    @NotNull
    private final ReactApplicationContext reactContext;

    @NotNull
    private final ReactEvents reactEvents;
    private final long startNs;
    private Integer streamConnectionId;
    private Intent streamPermissions;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @lo.d(c = "com.discord.media.engine.MediaEngineModule$1", f = "MediaEngineModule.kt", l = {}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nMediaEngineModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaEngineModule.kt\ncom/discord/media/engine/MediaEngineModule$1\n+ 2 Debug.kt\ncom/discord/media/engine/types/Debug\n*L\n1#1,890:1\n65#2,7:891\n*S KotlinDebug\n*F\n+ 1 MediaEngineModule.kt\ncom/discord/media/engine/MediaEngineModule$1\n*L\n67#1:891,7\n*E\n"})
    /* renamed from: com.discord.media.engine.MediaEngineModule$1, reason: invalid class name */
    public static final class AnonymousClass1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
        int label;

        public AnonymousClass1(Continuation continuation) {
            super(2, continuation);
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return MediaEngineModule.this.new AnonymousClass1(continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            MediaEngine mediaEngine = new MediaEngine(MediaEngineModule.this.getReactContext(), null, 2, null);
            MediaEngineModule.this.setMediaEngine(mediaEngine);
            Debug debug = Debug.INSTANCE;
            System.nanoTime();
            MediaEngineModule.this.mediaEngineDeferred.V(mediaEngine);
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    @Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\b\u001a\u00020\t*\u00020\nH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/discord/media/engine/MediaEngineModule$Companion;", "", "<init>", "()V", "TAG", "", "START_SCREENSHARE_REQUEST_CODE", "", "createScreenCaptureIntent", "Landroid/content/Intent;", "Landroid/content/Context;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final Intent createScreenCaptureIntent(Context context) {
            Object systemService = context.getSystemService("media_projection");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.media.projection.MediaProjectionManager");
            Intent createScreenCaptureIntent = ((MediaProjectionManager) systemService).createScreenCaptureIntent();
            Intrinsics.checkNotNullExpressionValue(createScreenCaptureIntent, "createScreenCaptureIntent(...)");
            return createScreenCaptureIntent;
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaEngineModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
        sr.d b10 = x.b(new q0(Executors.unconfigurableExecutorService(Executors.newScheduledThreadPool(1, new com.discord.crash_reporting.c(new AtomicInteger())))));
        this.appScope = b10;
        this.startNs = System.nanoTime();
        this.mediaEngineDeferred = x.a();
        StreamManager.INSTANCE.ensureInstalled();
        x.t(b10, null, new AnonymousClass1(null), 3);
        Debug.INSTANCE.logDebugLoggingConfig();
        this.reactEvents = new ReactEvents(new Pair("no-input-callback", Reflection.getOrCreateKotlinClass(NoInputCallbackEvent.class)), new Pair("on-voice", Reflection.getOrCreateKotlinClass(OnVoiceEvent.class)), new Pair("device-changed", Reflection.getOrCreateKotlinClass(DeviceChangedEvent.class)), new Pair("audio-input-initialized", Reflection.getOrCreateKotlinClass(AudioInputInitializedEvent.class)), new Pair("on-broadcast-requested", Reflection.getOrCreateKotlinClass(OnBroadcastRequestedEvent.class)), new Pair("on-broadcast-thumbnail", Reflection.getOrCreateKotlinClass(OnBroadcastThumbnailEvent.class)), new Pair("user-speaking", Reflection.getOrCreateKotlinClass(UserSpeakingEvent.class)), new Pair("ping-callback", Reflection.getOrCreateKotlinClass(PingCallbackEvent.class)), new Pair("ping-timeout-callback", Reflection.getOrCreateKotlinClass(PingTimeoutCallbackEvent.class)), new Pair("speaking-while-muted", Reflection.getOrCreateKotlinClass(SpeakingWhileMutedCallbackEvent.class)), new Pair("on-video-callback", Reflection.getOrCreateKotlinClass(OnVideoCallbackEvent.class)), new Pair("active-sinks-change", Reflection.getOrCreateKotlinClass(ActiveSinksChangeEvent.class)), new Pair("on-first-frame-callback", Reflection.getOrCreateKotlinClass(FirstFrameCallbackEvent.class)), new Pair("mls-failure-callback", Reflection.getOrCreateKotlinClass(MlsFailureCallbackEvent.class)), new Pair("secure-frames-state-update-callback", Reflection.getOrCreateKotlinClass(SecureFramesStateUpdateCallbackEvent.class)), new Pair("voice-processing-error-callback", Reflection.getOrCreateKotlinClass(VoiceProcessingErrorCallbackEvent.class)));
        this.activityEventListener = new ActivityEventListener() { // from class: com.discord.media.engine.MediaEngineModule$activityEventListener$1
            @Override // com.facebook.react.bridge.ActivityEventListener
            public void onActivityResult(Activity activity, int requestCode, int resultCode, Intent data) {
                ReactEvents reactEvents;
                Intrinsics.checkNotNullParameter(activity, "activity");
                if (resultCode == -1 && requestCode == 420 && data != null) {
                    MediaEngineModule.this.streamPermissions = data;
                    reactEvents = MediaEngineModule.this.reactEvents;
                    reactEvents.emitModuleEvent(MediaEngineModule.this.getReactContext(), new OnBroadcastRequestedEvent());
                }
            }

            @Override // com.facebook.react.bridge.ActivityEventListener
            public void onNewIntent(Intent intent) {
                Intrinsics.checkNotNullParameter(intent, "intent");
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void addConnectionCallbacks(int connectionId) {
        x.t(this.appScope, null, new MediaEngineModule$addConnectionCallbacks$1(this, connectionId, null), 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object awaitMediaEngine(Continuation continuation) {
        return this.mediaEngineDeferred.A(continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void createConnection(int connectionId, String userId, ReadableMap connectionOptions, Function2<? super String, ? super Map<String, ? extends Object>, Unit> callback) {
        x.t(this.appScope, null, new MediaEngineModule$createConnection$1(this, connectionId, userId, connectionOptions, callback, null), 3);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createVoiceConnectionWithOptions$lambda$1(Callback callback, String errorMessage, Map connectionInfo) {
        Intrinsics.checkNotNullParameter(errorMessage, "errorMessage");
        Intrinsics.checkNotNullParameter(connectionInfo, "connectionInfo");
        callback.invoke(errorMessage, NativeMapExtensionsKt.toNativeMap(connectionInfo));
        return Unit.a;
    }

    private static /* synthetic */ void getAppScope$annotations() {
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void addListener(@NotNull String type) {
        Intrinsics.checkNotNullParameter(type, "type");
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceConfigureConnectionRetries(double connectionId, double baseDelayMs, double maxDelayMs, double maxAttempts) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceConfigureConnectionRetries$1(this, connectionId, baseDelayMs, maxDelayMs, maxAttempts, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceDestroy(double connectionId, boolean willReconnect) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceDestroy$1(this, connectionId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceDestroyUser(double connectionId, @NotNull String userId) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceDestroyUser$1(this, connectionId, userId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceExecuteSecureFramesTransition(double connectionId, double transitionId) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceExecuteSecureFramesTransition$1(this, connectionId, transitionId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceFastUdpReconnect(double connectionId) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceFastUdpReconnect$1(this, connectionId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceGetEncryptionModes(double connectionId, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceGetEncryptionModes$1(this, connectionId, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceGetFilteredStats(double connectionId, double filter, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceGetFilteredStats$1(this, connectionId, filter, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceGetMLSKeyPackageB64(double connectionId, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceGetMLSKeyPackageB64$1(this, connectionId, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceGetMLSPairwiseFingerprintB64(double connectionId, double version, @NotNull String userId, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceGetMLSPairwiseFingerprintB64$1(this, connectionId, version, userId, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceGetStats(double connectionId, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceGetStats$1(this, connectionId, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceMergeUsers(double connectionId, @NotNull ReadableArray users) {
        Intrinsics.checkNotNullParameter(users, "users");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceMergeUsers$1(this, connectionId, users, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstancePrepareMLSCommitTransitionB64(double connectionId, double transitionId, @NotNull String commit, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(commit, "commit");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1(this, connectionId, transitionId, commit, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstancePrepareSecureFramesEpoch(double connectionId, @NotNull String epoch, double transitionId, @NotNull String groupId) {
        Intrinsics.checkNotNullParameter(epoch, "epoch");
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstancePrepareSecureFramesEpoch$1(this, connectionId, epoch, transitionId, groupId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstancePrepareSecureFramesTransition(double connectionId, double transitionId, double protocolVersion, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstancePrepareSecureFramesTransition$1(this, connectionId, transitionId, protocolVersion, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceProcessMLSProposalsB64(double connectionId, @NotNull String proposals, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(proposals, "proposals");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceProcessMLSProposalsB64$1(this, connectionId, proposals, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceProcessMLSWelcomeB64(double connectionId, double transitionId, @NotNull String welcome, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(welcome, "welcome");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceProcessMLSWelcomeB64$1(this, connectionId, transitionId, welcome, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetDesktopSource(double connectionId, @NotNull String stringId, boolean useVideoHook, @NotNull String type) {
        Intrinsics.checkNotNullParameter(stringId, "stringId");
        Intrinsics.checkNotNullParameter(type, "type");
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetLocalMute(double connectionId, @NotNull String userId, boolean mute) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetLocalMute$1(this, connectionId, userId, mute, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetLocalPan(double connectionId, @NotNull String userId, double left, double right) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetLocalPan$1(this, connectionId, userId, left, right, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetLocalVolume(double connectionId, @NotNull String userId, double volume) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetLocalVolume$1(this, connectionId, userId, volume, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetMinimumOutputDelay(double connectionId, double delay) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetMinimumOutputDelay$1(this, connectionId, delay, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetNoInputThreshold(double connectionId, double threshold) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetNoInputThreshold$1(this, connectionId, threshold, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetPTTActive(double connectionId, boolean active, boolean priority, boolean muteOverride) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetPTTActive$1(this, connectionId, active, priority, muteOverride, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetPingInterval(double connectionId, double pingInterval) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetPingInterval$1(this, connectionId, pingInterval, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetSelfDeafen(double connectionId, boolean deafened) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetSelfDeafen$1(this, connectionId, deafened, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetSelfMute(double connectionId, boolean muted) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetSelfMute$1(this, connectionId, muted, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetTransportOptions(double connectionId, @NotNull ReadableMap options) {
        Intrinsics.checkNotNullParameter(options, "options");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetTransportOptions$1(this, connectionId, options, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceSetVideoBroadcast(double connectionId, boolean broadcasting) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceSetVideoBroadcast$1(this, connectionId, broadcasting, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceTriggerOnSpeakingCallback(double connectionId) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceTriggerOnSpeakingCallback$1(this, connectionId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceTriggerOnVideoCallback(double connectionId) {
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceTriggerOnVideoCallback$1(this, connectionId, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceUpdateMLSExternalSenderB64(double connectionId, @NotNull String externalSenderB64) {
        Intrinsics.checkNotNullParameter(externalSenderB64, "externalSenderB64");
        x.t(this.appScope, null, new MediaEngineModule$connectionInstanceUpdateMLSExternalSenderB64$1(this, connectionId, externalSenderB64, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void connectionInstanceWasRemoteDisconnected(double connectionId) {
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void createOwnStreamConnectionWithOptions(double connectionId, @NotNull String userId, @NotNull ReadableMap connectionOptions, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(connectionOptions, "connectionOptions");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$createOwnStreamConnectionWithOptions$1(this, connectionId, userId, connectionOptions, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void createVoiceConnectionWithOptions(double connectionId, @NotNull String userId, @NotNull ReadableMap connectionOptions, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(connectionOptions, "connectionOptions");
        Intrinsics.checkNotNullParameter(callback, "callback");
        int i5 = (int) connectionId;
        createConnection(i5, userId, connectionOptions, new s(3, callback));
        addConnectionCallbacks(i5);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getAudioSubsystem(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getAudioSubsystem$1(this, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getCodecCapabilities(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getCodecCapabilities$1(this, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getCodecSurvey(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getCodecSurvey$1(this, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getInputDevices(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getInputDevices$1(this, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getMLSSigningKeyB64(@NotNull String sessionId, double signatureVersion, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(sessionId, "sessionId");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getMLSSigningKeyB64$1(this, sessionId, signatureVersion, callback, null), 3);
    }

    @NotNull
    public final MediaEngine getMediaEngine() {
        MediaEngine mediaEngine = this.mediaEngine;
        if (mediaEngine != null) {
            return mediaEngine;
        }
        Intrinsics.throwUninitializedPropertyAccessException("mediaEngine");
        return null;
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getOutputDevices(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getOutputDevices$1(this, callback, null), 3);
    }

    @NotNull
    public final ReactApplicationContext getReactContext() {
        return this.reactContext;
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    @NotNull
    public Map<String, Object> getTypedExportedConstants() {
        return v0.h(new Pair("DegradationPreference", v0.g(new Pair("MAINTAIN_RESOLUTION", 0), new Pair("MAINTAIN_FRAMERATE", 1), new Pair("BALANCED", 2))), new Pair("AVAudioSessionMode", v0.g(new Pair("VOICE", "AVAudioSessionModeVoiceChat"), new Pair("VIDEO", "AVAudioSessionModeVideoChat"), new Pair("LISTEN", "AVAudioSessionModeSpokenAudio"), new Pair("DEFAULT", "AVAudioSessionModeDefault"))), new Pair("SupportedSecureFramesProtocolVersion", Integer.valueOf(MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION)), new Pair("supportedFeatures", c0.g("voice_sound_stop_loop", "voice_relative_sounds", "voice_legacy_subsystem", "voice_experimental_subsystem", "elevated_hook", "soundshare", "soundshare_loopback", "set_audio_device_by_id", "set_video_device_by_id", "loopback", "wumpus_video", "hybrid_video", "experimental_encoders", "experiment_config", "remote_locus_network_control", "screen_previews", "window_previews", "audio_debug_state", "connection_replay", "simulcast_bugfix", "RTC_REGION_RANKING", "video_effects", "direct_video", "electron_video", "mediapipe", "fixed_keyframe_interval", "clips", "first_frame_callback", "remote_user_multi_stream", "mls_pairwise_fingerprints", "offload_adm_controls", "krisp_native_error")));
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void getVideoInputDevices(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$getVideoInputDevices$1(this, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void initializeEngine() {
        x.t(this.appScope, null, new MediaEngineModule$initializeEngine$1(this, null), 3);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        this.reactContext.removeActivityEventListener(this.activityEventListener);
        x.t(this.appScope, null, new MediaEngineModule$invalidate$1(this, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void rankRtcRegions(@NotNull ReadableArray regionsWithIps, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(regionsWithIps, "regionsWithIps");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$rankRtcRegions$1(this, regionsWithIps, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void removeListeners(double count) {
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setAVAudioSessionMode(@NotNull String mode) {
        Intrinsics.checkNotNullParameter(mode, "mode");
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setAudioInputEnabled(boolean enabled) {
        x.t(this.appScope, null, new MediaEngineModule$setAudioInputEnabled$1(this, enabled, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setBroadcastThumbnailParams(double width, double height, double intervalSeconds) {
        x.t(this.appScope, null, new MediaEngineModule$setBroadcastThumbnailParams$1(this, width, height, intervalSeconds, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setEmitVADLevel2(boolean enable) {
        x.t(this.appScope, null, new MediaEngineModule$setEmitVADLevel2$1(this, enable, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setHasFullbandPerformance(boolean hasFullbandPerformance) {
        x.t(this.appScope, null, new MediaEngineModule$setHasFullbandPerformance$1(this, hasFullbandPerformance, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setInputDevice(double deviceIndex) {
        x.t(this.appScope, null, new MediaEngineModule$setInputDevice$1(this, deviceIndex, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setInputDeviceById(@NotNull String deviceName) {
        Intrinsics.checkNotNullParameter(deviceName, "deviceName");
        x.t(this.appScope, null, new MediaEngineModule$setInputDeviceById$1(this, deviceName, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setInputVolume(double volume) {
        x.t(this.appScope, null, new MediaEngineModule$setInputVolume$1(this, volume, null), 3);
    }

    public final void setMediaEngine(@NotNull MediaEngine mediaEngine) {
        Intrinsics.checkNotNullParameter(mediaEngine, "<set-?>");
        this.mediaEngine = mediaEngine;
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setNcModels(@NotNull ReadableArray models) {
        Intrinsics.checkNotNullParameter(models, "models");
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setNoInputThreshold(double threshold) {
        x.t(this.appScope, null, new MediaEngineModule$setNoInputThreshold$1(this, threshold, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setOffloadAdmControls(boolean enabled) {
        SharedPreferences sharedPreferences = this.reactContext.getSharedPreferences("MediaEngine", 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        SharedPreferences.Editor edit = sharedPreferences.edit();
        edit.putBoolean("offloadAdmControls", enabled);
        edit.apply();
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setOutputDevice(double deviceIndex) {
        x.t(this.appScope, null, new MediaEngineModule$setOutputDevice$1(this, deviceIndex, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setOutputDeviceById(@NotNull String deviceName) {
        Intrinsics.checkNotNullParameter(deviceName, "deviceName");
        x.t(this.appScope, null, new MediaEngineModule$setOutputDeviceById$1(this, deviceName, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setOutputVolume(double volume) {
        x.t(this.appScope, null, new MediaEngineModule$setOutputVolume$1(this, volume, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setSidechainCompression(boolean enabled) {
        x.t(this.appScope, null, new MediaEngineModule$setSidechainCompression$1(this, enabled, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setTransportOptions(@NotNull ReadableMap options) {
        Intrinsics.checkNotNullParameter(options, "options");
        x.t(this.appScope, null, new MediaEngineModule$setTransportOptions$1(this, options, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setVideoInputDevice(double deviceIndex) {
        x.t(this.appScope, null, new MediaEngineModule$setVideoInputDevice$1(this, deviceIndex, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void setVideoInputDeviceById(@NotNull String deviceName) {
        Intrinsics.checkNotNullParameter(deviceName, "deviceName");
        x.t(this.appScope, null, new MediaEngineModule$setVideoInputDeviceById$1(this, deviceName, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void startBroadcast() {
        Activity currentActivity = this.reactContext.getCurrentActivity();
        if (currentActivity != null) {
            ActivityUtilities.startActivityForResultAsync$default(ActivityUtilities.INSTANCE, currentActivity, INSTANCE.createScreenCaptureIntent(currentActivity), START_SCREENSHARE_REQUEST_CODE, null, 8, null);
        }
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void startLocalAudioRecording(@NotNull ReadableMap options, @NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$startLocalAudioRecording$1(this, options, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void stopBroadcast() {
        x.t(this.appScope, null, new MediaEngineModule$stopBroadcast$1(this, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void stopBroadcastWithError(double errorCode, @NotNull String errorMessage) {
        Intrinsics.checkNotNullParameter(errorMessage, "errorMessage");
        x.t(this.appScope, null, new MediaEngineModule$stopBroadcastWithError$1(this, errorCode, errorMessage, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void stopLocalAudioRecording(@NotNull Callback callback) {
        Intrinsics.checkNotNullParameter(callback, "callback");
        x.t(this.appScope, null, new MediaEngineModule$stopLocalAudioRecording$1(this, callback, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaEngineModuleSpec
    public void updateFieldTrial(@NotNull String key, @NotNull String value) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        x.t(this.appScope, null, new MediaEngineModule$updateFieldTrial$1(this, key, value, null), 3);
    }
}
