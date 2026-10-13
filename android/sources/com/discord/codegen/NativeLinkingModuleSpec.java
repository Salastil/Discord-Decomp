package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeLinkingModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeLinkingModule";

    public NativeLinkingModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void tryOpenScheme(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void tryOpenUrlAsUniversalLink(String str, Promise promise);
}
