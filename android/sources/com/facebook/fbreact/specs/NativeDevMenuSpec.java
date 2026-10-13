package com.facebook.fbreact.specs;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeDevMenuSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "DevMenu";

    public NativeDevMenuSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "DevMenu";
    }

    @ReactMethod
    @a
    public abstract void reload();

    @ReactMethod
    @a
    public abstract void setHotLoadingEnabled(boolean z5);

    @ReactMethod
    @a
    public abstract void setProfilingEnabled(boolean z5);

    @ReactMethod
    @a
    public abstract void show();
}
