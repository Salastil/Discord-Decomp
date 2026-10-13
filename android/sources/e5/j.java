package e5;

import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.events.RCTEventEmitter;

/* loaded from: classes.dex */
public final class j {

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f8050c = {"onVideoLoadStart", "onVideoLoad", "onVideoError", "onVideoProgress", "onVideoSeek", "onVideoEnd", "onVideoFullscreenPlayerWillPresent", "onVideoFullscreenPlayerDidPresent", "onVideoFullscreenPlayerWillDismiss", "onVideoFullscreenPlayerDidDismiss", "onPlaybackStalled", "onPlaybackResume", "onReadyForDisplay", "onVideoBuffer", "onVideoIdle", "onTimedMetadata", "onVideoAudioBecomingNoisy", "onAudioFocusChanged", "onPlaybackRateChange", "onVideoBandwidthUpdate"};
    public final RCTEventEmitter a;

    /* renamed from: b, reason: collision with root package name */
    public int f8051b = -1;

    public j(ThemedReactContext themedReactContext) {
        this.a = (RCTEventEmitter) themedReactContext.getJSModule(RCTEventEmitter.class);
    }

    public final void a(double d6, int i5, int i6, String str) {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("bitrate", d6);
        createMap.putInt("width", i6);
        createMap.putInt("height", i5);
        createMap.putString("trackId", str);
        c("onVideoBandwidthUpdate", createMap);
    }

    public final void b(String str, Exception exc) {
        WritableMap createMap = Arguments.createMap();
        createMap.putString("errorString", str);
        createMap.putString("errorException", exc.toString());
        WritableMap createMap2 = Arguments.createMap();
        createMap2.putMap("error", createMap);
        c("onVideoError", createMap2);
    }

    public final void c(String str, WritableMap writableMap) {
        int i5 = this.f8051b;
        if (writableMap == null) {
            writableMap = Arguments.createMap();
        }
        this.a.receiveEvent(i5, str, writableMap);
    }
}
