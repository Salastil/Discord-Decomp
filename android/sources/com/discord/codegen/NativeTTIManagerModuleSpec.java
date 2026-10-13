package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeTTIManagerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeTTIManagerModule";

    public NativeTTIManagerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void freezeNavigationTTIDebuggerAfterNextFrame();

    @ReactMethod
    @a
    public abstract void getAllNativeTimestamps(Promise promise);

    @ReactMethod
    @a
    public abstract void getAppFirstVisibleTimestamp(Promise promise);

    @ReactMethod
    @a
    public abstract void getAppStartType(Promise promise);

    @ReactMethod
    @a
    public abstract void getAppStartedTimestamp(Promise promise);

    @ReactMethod
    @a
    public abstract void getJSBundleTimestamps(Promise promise);

    @ReactMethod
    @a
    public abstract void getLaunchScenario(Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void logToDevice(String str);

    @ReactMethod
    @a
    public abstract void logToDeviceEnabled(Promise promise);

    @ReactMethod
    @a
    public abstract void reportFullyDrawn();

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean runningTTIAutomation();

    @ReactMethod
    @a
    public abstract void trackTTILogged();
}
