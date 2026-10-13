package com.facebook.fbreact.specs;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeAccessibilityInfoSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "AccessibilityInfo";

    public NativeAccessibilityInfoSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void announceForAccessibility(String str);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "AccessibilityInfo";
    }

    @ReactMethod
    @a
    public void getRecommendedTimeoutMillis(double d6, Callback callback) {
    }

    @ReactMethod
    @a
    public void isAccessibilityServiceEnabled(Callback callback) {
    }

    @ReactMethod
    @a
    public void isGrayscaleEnabled(Callback callback) {
    }

    @ReactMethod
    @a
    public void isHighTextContrastEnabled(Callback callback) {
    }

    @ReactMethod
    @a
    public void isInvertColorsEnabled(Callback callback) {
    }

    @ReactMethod
    @a
    public abstract void isReduceMotionEnabled(Callback callback);

    @ReactMethod
    @a
    public abstract void isTouchExplorationEnabled(Callback callback);

    @ReactMethod
    @a
    public abstract void setAccessibilityFocus(double d6);
}
