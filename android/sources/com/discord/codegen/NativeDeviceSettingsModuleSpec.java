package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeDeviceSettingsModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeDeviceSettingsModule";

    public NativeDeviceSettingsModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void openAccessibilitySettings();

    @ReactMethod
    @a
    public abstract void openNotificationSettings();

    @ReactMethod
    @a
    public abstract void openPrivacySettings();

    @ReactMethod
    @a
    public abstract void setSystemGestureExclusionRects(ReadableArray readableArray);
}
