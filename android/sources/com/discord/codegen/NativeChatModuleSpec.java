package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeChatModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeChatModule";

    public NativeChatModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void clearRows(double d6, double d7);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void updateRows(double d6, String str, boolean z5, String str2, double d7, boolean z6, boolean z7, boolean z8);
}
