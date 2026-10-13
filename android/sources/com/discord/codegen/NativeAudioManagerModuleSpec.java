package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeAudioManagerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeAudioManagerModule";

    public NativeAudioManagerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void addListener(String str);

    @ReactMethod
    @a
    public abstract void getActiveAudioDevice(Promise promise);

    @ReactMethod
    @a
    public abstract void getAudioDevices(Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void removeListeners(double d6);

    @ReactMethod
    @a
    public abstract void setActiveAudioDevice(ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void setCommunicationModeOn(boolean z5);

    @ReactMethod
    @a
    public abstract void setSCORetryCount(double d6);
}
