package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeJSWatchdogModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeJSWatchdogModule";

    public NativeJSWatchdogModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract WritableMap checkForStallReport();

    @ReactMethod
    @a
    public abstract void disable();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void ping(double d6, String str, Boolean bool, Boolean bool2, Promise promise);
}
