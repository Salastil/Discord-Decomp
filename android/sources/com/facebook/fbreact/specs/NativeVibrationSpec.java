package com.facebook.fbreact.specs;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeVibrationSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "Vibration";

    public NativeVibrationSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void cancel();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "Vibration";
    }

    @ReactMethod
    @a
    public abstract void vibrate(double d6);

    @ReactMethod
    @a
    public abstract void vibrateByPattern(ReadableArray readableArray, double d6);
}
