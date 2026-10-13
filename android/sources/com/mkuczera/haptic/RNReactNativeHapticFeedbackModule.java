package com.mkuczera.haptic;

import android.app.Activity;
import android.media.AudioManager;
import android.os.Vibrator;
import androidx.annotation.NonNull;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.bridge.WritableMap;
import java.util.HashMap;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public class RNReactNativeHapticFeedbackModule extends NativeHapticFeedbackSpec {
    ReactApplicationContext reactContext;

    public RNReactNativeHapticFeedbackModule(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
        this.reactContext = reactApplicationContext;
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec, com.facebook.react.bridge.NativeModule
    @NonNull
    public String getName() {
        return NativeHapticFeedbackSpec.NAME;
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec
    public void getSystemHapticStatus(Promise promise) {
        String str;
        ReactApplicationContext reactApplicationContext = this.reactContext;
        HashMap hashMap = b.a;
        try {
            AudioManager audioManager = (AudioManager) reactApplicationContext.getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
            Vibrator vibrator = (Vibrator) reactApplicationContext.getSystemService("vibrator");
            boolean z5 = false;
            boolean z6 = vibrator != null && vibrator.hasVibrator();
            int ringerMode = audioManager.getRingerMode();
            if (ringerMode != 0) {
                str = ringerMode != 1 ? "normal" : "vibrate";
                z5 = z6;
            } else {
                str = "silent";
            }
            WritableMap createMap = Arguments.createMap();
            createMap.putBoolean("vibrationEnabled", z5);
            createMap.putString("ringerMode", str);
            promise.resolve(createMap);
        } catch (Exception e9) {
            promise.reject("getSystemHapticStatus", e9.getMessage());
        }
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec
    public boolean isSupported() {
        ReactApplicationContext reactApplicationContext = this.reactContext;
        HashMap hashMap = b.a;
        Vibrator vibrator = (Vibrator) reactApplicationContext.getSystemService("vibrator");
        return vibrator != null && vibrator.hasVibrator();
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec
    public void playAHAP(String str, Promise promise) {
        promise.resolve(null);
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec
    public void stop() {
        ReactApplicationContext reactApplicationContext = this.reactContext;
        HashMap hashMap = b.a;
        Vibrator vibrator = (Vibrator) reactApplicationContext.getSystemService("vibrator");
        if (vibrator != null) {
            vibrator.cancel();
        }
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec
    public void trigger(String str, ReadableMap readableMap) {
        Activity currentActivity;
        ReactApplicationContext reactApplicationContext = this.reactContext;
        HashMap hashMap = b.a;
        boolean z5 = readableMap.getBoolean("ignoreAndroidSystemSettings");
        if (z5 || b.a(reactApplicationContext)) {
            Integer num = (Integer) b.a.get(str);
            if (!z5 && num != null && (currentActivity = reactApplicationContext.getCurrentActivity()) != null) {
                UiThreadUtil.runOnUiThread(new a(0, currentActivity.getWindow().getDecorView(), num));
                return;
            }
            Vibrator vibrator = (Vibrator) reactApplicationContext.getSystemService("vibrator");
            dl.a aVar = (dl.a) dl.b.a.get(str);
            if (vibrator == null || aVar == null) {
                return;
            }
            aVar.a(vibrator);
        }
    }

    @Override // com.mkuczera.haptic.NativeHapticFeedbackSpec
    public void triggerPattern(ReadableArray readableArray, ReadableMap readableMap) {
        boolean z5;
        Vibrator vibrator;
        ReactApplicationContext reactApplicationContext = this.reactContext;
        if (readableMap != null) {
            HashMap hashMap = b.a;
            if (readableMap.hasKey("ignoreAndroidSystemSettings") && readableMap.getBoolean("ignoreAndroidSystemSettings")) {
                z5 = true;
                boolean a = b.a(reactApplicationContext);
                if ((!z5 || a) && (vibrator = (Vibrator) reactApplicationContext.getSystemService("vibrator")) != null && vibrator.hasVibrator()) {
                    dl.b.a(vibrator, readableArray);
                }
                return;
            }
        }
        z5 = false;
        boolean a10 = b.a(reactApplicationContext);
        if (z5) {
        }
        dl.b.a(vibrator, readableArray);
    }
}
