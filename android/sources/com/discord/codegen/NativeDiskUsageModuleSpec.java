package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeDiskUsageModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeDiskUsageModule";

    public NativeDiskUsageModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void calculateSize(Promise promise);

    @ReactMethod
    @a
    public abstract void clearCaches();

    @ReactMethod
    @a
    public abstract void collectStorageDiagnostics(Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }
}
