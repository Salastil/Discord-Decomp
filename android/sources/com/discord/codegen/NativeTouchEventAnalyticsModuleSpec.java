package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeTouchEventAnalyticsModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeTouchEventAnalyticsModule";

    public NativeTouchEventAnalyticsModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void disableTouchLogging();

    @ReactMethod
    @a
    public abstract void enableTouchLogging();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }
}
