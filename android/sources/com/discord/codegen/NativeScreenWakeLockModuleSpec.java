package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeScreenWakeLockModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeScreenWakeLockModule";

    public NativeScreenWakeLockModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void releaseLock(String str);

    @ReactMethod
    @a
    public abstract void requestLock(String str);
}
