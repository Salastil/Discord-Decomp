package com.brentvatne.exoplayer;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Pair;
import com.discord.jank_stats.JankStatsAggregatorKt;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.common.MapBuilder;
import com.facebook.react.internal.featureflags.ReactNativeFeatureFlags;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.uimanager.annotations.ReactProp;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.d;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.trackselection.a;
import e5.b;
import e5.e;
import e5.i;
import e5.j;
import hc.h;
import hc.i1;
import hc.m1;
import hc.s1;
import ie.p0;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.UUID;
import ke.a0;
import ke.d0;
import ke.z;
import nd.t0;
import tn.g;

/* loaded from: classes.dex */
public class ReactExoplayerViewManager extends ViewGroupManager<i> {
    private static final String PROP_BUFFER_CONFIG = "bufferConfig";
    private static final String PROP_BUFFER_CONFIG_BUFFER_FOR_PLAYBACK_AFTER_REBUFFER_MS = "bufferForPlaybackAfterRebufferMs";
    private static final String PROP_BUFFER_CONFIG_BUFFER_FOR_PLAYBACK_MS = "bufferForPlaybackMs";
    private static final String PROP_BUFFER_CONFIG_MAX_BUFFER_MS = "maxBufferMs";
    private static final String PROP_BUFFER_CONFIG_MIN_BUFFER_MS = "minBufferMs";
    private static final String PROP_CONTROLS = "controls";
    private static final String PROP_DISABLE_FOCUS = "disableFocus";
    private static final String PROP_DRM = "drm";
    private static final String PROP_DRM_HEADERS = "headers";
    private static final String PROP_DRM_LICENSESERVER = "licenseServer";
    private static final String PROP_DRM_TYPE = "type";
    private static final String PROP_FULLSCREEN = "fullscreen";
    private static final String PROP_HIDE_SHUTTER_VIEW = "hideShutterView";
    private static final String PROP_HTTP_ENGINE = "httpEngine";
    private static final String PROP_MAXIMUM_BIT_RATE = "maxBitRate";
    private static final String PROP_MIN_LOAD_RETRY_COUNT = "minLoadRetryCount";
    private static final String PROP_MUTED = "muted";
    private static final String PROP_PAUSED = "paused";
    private static final String PROP_PLAY_IN_BACKGROUND = "playInBackground";
    private static final String PROP_PREVENTS_DISPLAY_SLEEP_DURING_VIDEO_PLAYBACK = "preventsDisplaySleepDuringVideoPlayback";
    private static final String PROP_PROGRESS_UPDATE_INTERVAL = "progressUpdateInterval";
    private static final String PROP_RATE = "rate";
    private static final String PROP_REPEAT = "repeat";
    private static final String PROP_REPORT_BANDWIDTH = "reportBandwidth";
    private static final String PROP_RESIZE_MODE = "resizeMode";
    private static final String PROP_SEEK = "seek";
    private static final String PROP_SELECTED_AUDIO_TRACK = "selectedAudioTrack";
    private static final String PROP_SELECTED_AUDIO_TRACK_TYPE = "type";
    private static final String PROP_SELECTED_AUDIO_TRACK_VALUE = "value";
    private static final String PROP_SELECTED_TEXT_TRACK = "selectedTextTrack";
    private static final String PROP_SELECTED_TEXT_TRACK_TYPE = "type";
    private static final String PROP_SELECTED_TEXT_TRACK_VALUE = "value";
    private static final String PROP_SELECTED_VIDEO_TRACK = "selectedVideoTrack";
    private static final String PROP_SELECTED_VIDEO_TRACK_TYPE = "type";
    private static final String PROP_SELECTED_VIDEO_TRACK_VALUE = "value";
    private static final String PROP_SRC = "src";
    private static final String PROP_SRC_HEADERS = "requestHeaders";
    private static final String PROP_SRC_TYPE = "type";
    private static final String PROP_SRC_URI = "uri";
    private static final String PROP_TEXT_TRACKS = "textTracks";
    private static final String PROP_USE_TEXTURE_VIEW = "useTextureView";
    private static final String PROP_VOLUME = "volume";
    private static final String REACT_CLASS = "RNVVideo";
    private e config;
    private float lastSeekPosition = Float.NaN;

    public ReactExoplayerViewManager(e eVar) {
        this.config = eVar;
    }

    private int convertToIntDef(String str) {
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        int parseInt = Integer.parseInt(str);
        int i5 = 1;
        if (parseInt != 1) {
            i5 = 2;
            if (parseInt != 2) {
                i5 = 3;
                if (parseInt != 3) {
                    i5 = 4;
                    if (parseInt != 4) {
                        return 0;
                    }
                }
            }
        }
        return i5;
    }

    private boolean startsWithValidScheme(String str) {
        return str.startsWith("http://") || str.startsWith("https://") || str.startsWith("content://") || str.startsWith("file://") || str.startsWith("asset://");
    }

    public static Map<String, String> toStringMap(ReadableMap readableMap) {
        if (readableMap == null) {
            return null;
        }
        ReadableMapKeySetIterator keySetIterator = readableMap.keySetIterator();
        if (!keySetIterator.hasNextKey()) {
            return null;
        }
        HashMap hashMap = new HashMap();
        while (keySetIterator.hasNextKey()) {
            String nextKey = keySetIterator.nextKey();
            hashMap.put(nextKey, readableMap.getString(nextKey));
        }
        return hashMap;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        MapBuilder.Builder builder = MapBuilder.builder();
        for (int i5 = 0; i5 < 20; i5++) {
            String str = j.f8050c[i5];
            builder.put(ReactNativeFeatureFlags.enableFabricRenderer() ? ViewProps.TOP + str.replaceFirst("^on", "") : str, MapBuilder.of("registrationName", str));
        }
        return builder.build();
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public Map<String, Object> getExportedViewConstants() {
        return MapBuilder.of("ScaleNone", Integer.toString(0), "ScaleAspectFit", Integer.toString(0), "ScaleToFill", Integer.toString(3), "ScaleAspectFill", Integer.toString(4));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    public String getName() {
        return REACT_CLASS;
    }

    @ReactProp(name = PROP_MIN_LOAD_RETRY_COUNT)
    public void minLoadRetryCount(i iVar, int i5) {
        iVar.S = i5;
        iVar.k();
        iVar.i();
    }

    @ReactProp(name = PROP_BUFFER_CONFIG)
    public void setBufferConfig(i iVar, ReadableMap readableMap) {
        if (readableMap != null) {
            int i5 = readableMap.hasKey(PROP_BUFFER_CONFIG_MIN_BUFFER_MS) ? readableMap.getInt(PROP_BUFFER_CONFIG_MIN_BUFFER_MS) : 50000;
            int i6 = readableMap.hasKey(PROP_BUFFER_CONFIG_MAX_BUFFER_MS) ? readableMap.getInt(PROP_BUFFER_CONFIG_MAX_BUFFER_MS) : 50000;
            int i10 = readableMap.hasKey(PROP_BUFFER_CONFIG_BUFFER_FOR_PLAYBACK_MS) ? readableMap.getInt(PROP_BUFFER_CONFIG_BUFFER_FOR_PLAYBACK_MS) : 2500;
            int i11 = readableMap.hasKey(PROP_BUFFER_CONFIG_BUFFER_FOR_PLAYBACK_AFTER_REBUFFER_MS) ? readableMap.getInt(PROP_BUFFER_CONFIG_BUFFER_FOR_PLAYBACK_AFTER_REBUFFER_MS) : 5000;
            iVar.U = i5;
            iVar.V = i6;
            iVar.W = i10;
            iVar.a0 = i11;
            iVar.k();
            iVar.i();
        }
    }

    @ReactProp(defaultBoolean = false, name = PROP_CONTROLS)
    public void setControls(i iVar, boolean z5) {
        iVar.m(z5);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0097, code lost:
    
        if (r1.equals("clearkey") == false) goto L44;
     */
    @ReactProp(name = PROP_DRM)
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setDRM(i iVar, ReadableMap readableMap) {
        boolean z5;
        UUID uuid;
        if (readableMap == null || !readableMap.hasKey("type")) {
            return;
        }
        UUID uuid2 = null;
        String string = readableMap.hasKey("type") ? readableMap.getString("type") : null;
        String string2 = readableMap.hasKey(PROP_DRM_LICENSESERVER) ? readableMap.getString(PROP_DRM_LICENSESERVER) : null;
        ReadableMap map = readableMap.hasKey(PROP_DRM_HEADERS) ? readableMap.getMap(PROP_DRM_HEADERS) : null;
        if (string == null || string2 == null) {
            return;
        }
        int i5 = d0.a;
        String x5 = g.x(string);
        x5.getClass();
        char c6 = 2;
        switch (x5.hashCode()) {
            case -1860423953:
                if (x5.equals("playready")) {
                    z5 = false;
                    break;
                }
                z5 = -1;
                break;
            case -1400551171:
                if (x5.equals("widevine")) {
                    z5 = true;
                    break;
                }
                z5 = -1;
                break;
            case 790309106:
                if (x5.equals("clearkey")) {
                    z5 = 2;
                    break;
                }
                z5 = -1;
                break;
            default:
                z5 = -1;
                break;
        }
        switch (z5) {
            case false:
                uuid = h.f9712e;
                break;
            case true:
                uuid = h.f9711d;
                break;
            case true:
                uuid = h.f9710c;
                break;
            default:
                try {
                    uuid = UUID.fromString(string);
                    break;
                } catch (RuntimeException unused) {
                    uuid = null;
                    break;
                }
        }
        if (uuid != null) {
            String x10 = g.x(string);
            x10.getClass();
            switch (x10.hashCode()) {
                case -1860423953:
                    if (x10.equals("playready")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -1400551171:
                    if (x10.equals("widevine")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 790309106:
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            switch (c6) {
                case 0:
                    uuid2 = h.f9712e;
                    break;
                case 1:
                    uuid2 = h.f9711d;
                    break;
                case 2:
                    uuid2 = h.f9710c;
                    break;
                default:
                    try {
                        uuid2 = UUID.fromString(string);
                        break;
                    } catch (RuntimeException unused2) {
                        break;
                    }
            }
            iVar.f8040t0 = uuid2;
            if (map != null) {
                ArrayList arrayList = new ArrayList();
                ReadableMapKeySetIterator keySetIterator = map.keySetIterator();
                while (keySetIterator.hasNextKey()) {
                    String nextKey = keySetIterator.nextKey();
                    arrayList.add(nextKey);
                    arrayList.add(map.getString(nextKey));
                }
            }
            iVar.f8048y.setUseTextureView(false);
        }
    }

    @ReactProp(defaultBoolean = false, name = PROP_DISABLE_FOCUS)
    public void setDisableFocus(i iVar, boolean z5) {
        iVar.f8033m0 = z5;
    }

    @ReactProp(defaultBoolean = false, name = PROP_FULLSCREEN)
    public void setFullscreen(i iVar, boolean z5) {
        iVar.n(z5);
    }

    @ReactProp(defaultBoolean = false, name = PROP_HIDE_SHUTTER_VIEW)
    public void setHideShutterView(i iVar, boolean z5) {
        iVar.f8048y.setHideShutterView(z5);
    }

    @ReactProp(name = PROP_HTTP_ENGINE)
    public void setHttpEngine(i iVar, String str) {
        boolean equals = Objects.equals(iVar.f8038r0, str);
        iVar.f8038r0 = str;
        if (equals || iVar.f8021c0 == null) {
            return;
        }
        iVar.E = b.a(iVar.f8043v0, iVar.f8028i, iVar.f8037q0, str);
        iVar.H = true;
        iVar.i();
    }

    @ReactProp(name = PROP_MAXIMUM_BIT_RATE)
    public void setMaxBitRate(i iVar, int i5) {
        iVar.T = i5;
        if (iVar.F != null) {
            DefaultTrackSelector defaultTrackSelector = iVar.G;
            a c6 = defaultTrackSelector.c();
            c6.getClass();
            ge.g gVar = new ge.g(c6);
            int i6 = iVar.T;
            if (i6 == 0) {
                i6 = Integer.MAX_VALUE;
            }
            gVar.f9209d = i6;
            defaultTrackSelector.i(new a(gVar));
        }
    }

    @ReactProp(defaultBoolean = false, name = PROP_MUTED)
    public void setMuted(i iVar, boolean z5) {
        iVar.o(z5);
    }

    @ReactProp(defaultBoolean = false, name = PROP_PAUSED)
    public void setPaused(i iVar, boolean z5) {
        iVar.p(z5);
    }

    @ReactProp(defaultBoolean = false, name = PROP_PLAY_IN_BACKGROUND)
    public void setPlayInBackground(i iVar, boolean z5) {
        iVar.f8036p0 = z5;
    }

    @ReactProp(defaultBoolean = false, name = PROP_PREVENTS_DISPLAY_SLEEP_DURING_VIDEO_PLAYBACK)
    public void setPreventsDisplaySleepDuringVideoPlayback(i iVar, boolean z5) {
        iVar.f8034n0 = z5;
    }

    @ReactProp(defaultFloat = 250.0f, name = PROP_PROGRESS_UPDATE_INTERVAL)
    public void setProgressUpdateInterval(i iVar, float f2) {
        iVar.f8035o0 = f2;
    }

    @ReactProp(name = PROP_TEXT_TRACKS)
    public void setPropTextTracks(i iVar, ReadableArray readableArray) {
        iVar.f8032l0 = readableArray;
        iVar.H = true;
        iVar.i();
    }

    @ReactProp(name = PROP_RATE)
    public void setRate(i iVar, float f2) {
        iVar.Q = f2;
        if (iVar.F != null) {
            iVar.F.e0(new PlaybackParameters(iVar.Q, 1.0f));
        }
    }

    @ReactProp(defaultBoolean = false, name = PROP_REPEAT)
    public void setRepeat(i iVar, boolean z5) {
        SimpleExoPlayer simpleExoPlayer = iVar.F;
        if (simpleExoPlayer != null) {
            if (z5) {
                simpleExoPlayer.F(1);
            } else {
                simpleExoPlayer.F(0);
            }
        }
        iVar.f8025e0 = z5;
    }

    @ReactProp(defaultBoolean = false, name = PROP_REPORT_BANDWIDTH)
    public void setReportBandwidth(i iVar, boolean z5) {
        iVar.f8039s0 = z5;
    }

    @ReactProp(name = "resizeMode")
    public void setResizeMode(i iVar, String str) {
        iVar.f8048y.setResizeMode(convertToIntDef(str));
    }

    @ReactProp(name = PROP_SEEK)
    public void setSeek(i iVar, float f2) {
        if (f2 != this.lastSeekPosition) {
            this.lastSeekPosition = f2;
            long round = Math.round(f2 * 1000.0f);
            SimpleExoPlayer simpleExoPlayer = iVar.F;
            if (simpleExoPlayer != null) {
                simpleExoPlayer.b0(5, round);
            }
        }
    }

    @ReactProp(name = PROP_SELECTED_AUDIO_TRACK)
    public void setSelectedAudioTrack(i iVar, ReadableMap readableMap) {
        Dynamic dynamic;
        String str = null;
        if (readableMap != null) {
            String string = readableMap.hasKey("type") ? readableMap.getString("type") : null;
            dynamic = readableMap.hasKey("value") ? readableMap.getDynamic("value") : null;
            str = string;
        } else {
            dynamic = null;
        }
        iVar.f8026f0 = str;
        iVar.f8027g0 = dynamic;
        iVar.t(1, str, dynamic);
    }

    @ReactProp(name = PROP_SELECTED_TEXT_TRACK)
    public void setSelectedTextTrack(i iVar, ReadableMap readableMap) {
        Dynamic dynamic;
        String str = null;
        if (readableMap != null) {
            String string = readableMap.hasKey("type") ? readableMap.getString("type") : null;
            dynamic = readableMap.hasKey("value") ? readableMap.getDynamic("value") : null;
            str = string;
        } else {
            dynamic = null;
        }
        iVar.f8030j0 = str;
        iVar.f8031k0 = dynamic;
        iVar.t(3, str, dynamic);
    }

    @ReactProp(name = PROP_SELECTED_VIDEO_TRACK)
    public void setSelectedVideoTrack(i iVar, ReadableMap readableMap) {
        Dynamic dynamic;
        String str = null;
        if (readableMap != null) {
            String string = readableMap.hasKey("type") ? readableMap.getString("type") : null;
            dynamic = readableMap.hasKey("value") ? readableMap.getDynamic("value") : null;
            str = string;
        } else {
            dynamic = null;
        }
        iVar.h0 = str;
        iVar.f8029i0 = dynamic;
        iVar.t(2, str, dynamic);
    }

    @ReactProp(name = PROP_SRC)
    public void setSrc(i iVar, ReadableMap readableMap) {
        Uri buildRawResourceUri;
        long j;
        m1 m1Var;
        Pair k02;
        Context applicationContext = iVar.getContext().getApplicationContext();
        String string = readableMap.hasKey(PROP_SRC_URI) ? readableMap.getString(PROP_SRC_URI) : null;
        String string2 = readableMap.hasKey("type") ? readableMap.getString("type") : null;
        Map<String, String> stringMap = readableMap.hasKey(PROP_SRC_HEADERS) ? toStringMap(readableMap.getMap(PROP_SRC_HEADERS)) : null;
        if (!TextUtils.isEmpty(string)) {
            if (startsWithValidScheme(string)) {
                Uri parse = Uri.parse(string);
                if (parse != null) {
                    boolean equals = parse.equals(iVar.f8021c0);
                    iVar.f8021c0 = parse;
                    iVar.f8023d0 = string2;
                    iVar.f8037q0 = stringMap;
                    iVar.E = b.a(iVar.f8043v0, iVar.f8028i, stringMap, iVar.f8038r0);
                    if (equals) {
                        return;
                    }
                    iVar.H = true;
                    iVar.i();
                    return;
                }
                return;
            }
            int identifier = applicationContext.getResources().getIdentifier(string, "drawable", applicationContext.getPackageName());
            if (identifier == 0) {
                identifier = applicationContext.getResources().getIdentifier(string, "raw", applicationContext.getPackageName());
            }
            if (identifier <= 0 || (buildRawResourceUri = p0.buildRawResourceUri(identifier)) == null) {
                return;
            }
            boolean equals2 = buildRawResourceUri.equals(iVar.f8021c0);
            iVar.f8021c0 = buildRawResourceUri;
            iVar.f8023d0 = string2;
            iVar.E = iVar.b(true);
            if (equals2) {
                return;
            }
            iVar.H = true;
            iVar.i();
            return;
        }
        if (iVar.f8021c0 != null) {
            iVar.F.g0();
            SimpleExoPlayer simpleExoPlayer = iVar.F;
            simpleExoPlayer.c0();
            d dVar = simpleExoPlayer.f5286b;
            ArrayList arrayList = dVar.f5366o;
            dVar.x0();
            int size = arrayList.size();
            int min = Math.min(Integer.MAX_VALUE, size);
            if (size <= 0 || min == 0) {
                j = -9223372036854775807L;
            } else {
                i1 i1Var = dVar.f5359g0;
                int h0 = dVar.h0(i1Var);
                long f02 = dVar.f0(i1Var);
                Timeline timeline = i1Var.a;
                int size2 = arrayList.size();
                dVar.F++;
                dVar.m0(min);
                m1 m1Var2 = new m1(arrayList, dVar.K);
                s1 s1Var = dVar.f5365n;
                if (timeline.p() || m1Var2.p()) {
                    m1Var = m1Var2;
                    boolean z5 = !timeline.p() && m1Var.p();
                    k02 = dVar.k0(m1Var, z5 ? -1 : h0, z5 ? -9223372036854775807L : f02);
                } else {
                    k02 = timeline.i(dVar.a, dVar.f5365n, h0, d0.I(f02));
                    Object obj = k02.first;
                    if (m1Var2.b(obj) != -1) {
                        m1Var = m1Var2;
                    } else {
                        Object F = com.google.android.exoplayer2.e.F(dVar.a, dVar.f5365n, dVar.D, dVar.E, obj, timeline, m1Var2);
                        m1Var = m1Var2;
                        if (F != null) {
                            m1Var.g(F, s1Var);
                            int i5 = s1Var.f9871i;
                            Timeline.Window window = dVar.a;
                            m1Var.m(i5, window, 0L);
                            k02 = dVar.k0(m1Var, i5, d0.U(window.J));
                        } else {
                            k02 = dVar.k0(m1Var, -1, -9223372036854775807L);
                        }
                    }
                }
                i1 j02 = dVar.j0(i1Var, m1Var, k02);
                int i6 = j02.f9735e;
                if (i6 != 1 && i6 != 4 && min > 0 && min == size2 && h0 >= j02.a.o()) {
                    j02 = j02.g(4);
                }
                com.google.android.exoplayer2.e eVar = dVar.k;
                t0 t0Var = dVar.K;
                a0 a0Var = eVar.E;
                a0Var.getClass();
                z b10 = a0.b();
                b10.a = a0Var.a.obtainMessage(20, 0, min, t0Var);
                b10.b();
                j = -9223372036854775807L;
                dVar.v0(j02, 0, 1, !j02.f9732b.a.equals(dVar.f5359g0.f9732b.a), 4, dVar.g0(j02), -1, false);
            }
            iVar.f8021c0 = null;
            iVar.f8023d0 = null;
            iVar.f8037q0 = null;
            iVar.E = null;
            iVar.I = -1;
            iVar.J = j;
        }
    }

    @ReactProp(defaultBoolean = true, name = PROP_USE_TEXTURE_VIEW)
    public void setUseTextureView(i iVar, boolean z5) {
        iVar.f8048y.setUseTextureView(z5 && iVar.f8040t0 == null);
    }

    @ReactProp(defaultFloat = JankStatsAggregatorKt.DEFAULT_JANK_MULTIPLIER, name = PROP_VOLUME)
    public void setVolume(i iVar, float f2) {
        iVar.R = f2;
        SimpleExoPlayer simpleExoPlayer = iVar.F;
        if (simpleExoPlayer != null) {
            simpleExoPlayer.f0(f2);
        }
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public i createViewInstance(ThemedReactContext themedReactContext) {
        return new i(themedReactContext, this.config);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(i iVar) {
        if (iVar.L) {
            iVar.n(false);
        }
        iVar.f8045w0.abandonAudioFocus(iVar);
        iVar.k();
    }
}
