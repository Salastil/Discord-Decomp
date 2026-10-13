package com.facebook.fbreact.specs;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeTimingSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "Timing";

    public NativeTimingSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void createTimer(double d6, double d7, double d8, boolean z5);

    @ReactMethod
    @a
    public abstract void deleteTimer(double d6);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "Timing";
    }

    @ReactMethod
    @a
    public abstract void setSendIdleEvents(boolean z5);
}
