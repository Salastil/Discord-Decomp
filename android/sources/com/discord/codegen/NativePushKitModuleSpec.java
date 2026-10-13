package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativePushKitModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativePushKitModule";

    public NativePushKitModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    public final void emitOnNotificationReceived(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onNotificationReceived", readableMap);
    }

    public final void emitOnTokenUpdated(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onTokenUpdated", readableMap);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void initializeManager();
}
