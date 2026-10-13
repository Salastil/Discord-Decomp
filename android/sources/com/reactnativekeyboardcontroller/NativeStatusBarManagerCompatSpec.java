package com.reactnativekeyboardcontroller;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeStatusBarManagerCompatSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "StatusBarManagerCompat";

    public NativeStatusBarManagerCompatSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void setColor(double d6, boolean z5);

    @ReactMethod
    @a
    public abstract void setHidden(boolean z5);

    @ReactMethod
    @a
    public abstract void setStyle(String str);

    @ReactMethod
    @a
    public abstract void setTranslucent(boolean z5);
}
