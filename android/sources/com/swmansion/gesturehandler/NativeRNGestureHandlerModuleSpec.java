package com.swmansion.gesturehandler;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeRNGestureHandlerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "RNGestureHandlerModule";

    public NativeRNGestureHandlerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void attachGestureHandler(double d6, double d7, double d8);

    @ReactMethod
    @a
    public abstract void configureRelations(double d6, ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void createGestureHandler(String str, double d6, ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void dropGestureHandler(double d6);

    @ReactMethod
    @a
    public abstract void flushOperations();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "RNGestureHandlerModule";
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean installUIRuntimeBindings();

    @ReactMethod
    @a
    public abstract void setGestureHandlerConfig(double d6, ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void updateGestureHandlerConfig(double d6, ReadableMap readableMap);
}
