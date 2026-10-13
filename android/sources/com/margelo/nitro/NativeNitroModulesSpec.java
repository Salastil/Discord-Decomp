package com.margelo.nitro;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeNitroModulesSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NitroModules";

    public NativeNitroModulesSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "NitroModules";
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract String install();
}
