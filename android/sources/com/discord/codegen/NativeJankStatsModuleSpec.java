package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeJankStatsModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeJankStatsModule";

    public NativeJankStatsModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void beginScreenTransition();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void nameCurrentScreen(String str, String str2);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract WritableMap requestReport();

    @ReactMethod
    @a
    public abstract void setJankHeuristicMultiplier(double d6);

    @ReactMethod
    @a
    public abstract void setScreenContext(String str, String str2);

    @ReactMethod
    @a
    public abstract void settleCurrentScreen();

    @ReactMethod
    @a
    public abstract void startTracking();

    @ReactMethod
    @a
    public abstract void stopTracking();
}
