package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativePlayIntegrityModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativePlayIntegrityModule";

    public NativePlayIntegrityModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void prepareIntegrityToken(double d6, Promise promise);

    @ReactMethod
    @a
    public abstract void requestIntegrityToken(String str, double d6, Promise promise);
}
