package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeInstallTimeModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeInstallTimeModule";

    public NativeInstallTimeModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract double getFirstInstallTimeMillis();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }
}
