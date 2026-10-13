package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeTelemetryRingModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeTelemetryRingModule";

    public NativeTelemetryRingModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void append(String str, double d6, String str2, ReadableMap readableMap, ReadableArray readableArray);

    @ReactMethod
    @a
    public abstract void clear();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void snapshot(ReadableArray readableArray, double d6, ReadableMap readableMap, Double d7, Promise promise);
}
