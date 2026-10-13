package com.facebook.fbreact.specs;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeExceptionsManagerSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "ExceptionsManager";

    public NativeExceptionsManagerSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public void dismissRedbox() {
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "ExceptionsManager";
    }

    @ReactMethod
    @a
    public void reportException(ReadableMap readableMap) {
    }

    @ReactMethod
    @a
    public abstract void reportFatalException(String str, ReadableArray readableArray, double d6);

    @ReactMethod
    @a
    public abstract void reportSoftException(String str, ReadableArray readableArray, double d6);
}
