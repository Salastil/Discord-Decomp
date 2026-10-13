package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeOnDemandResourceModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeOnDemandResourceModule";

    public NativeOnDemandResourceModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void fetchOnDemandResource(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean hasOnDemandResource(String str);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean isOnDemandResourcingAvailable();
}
