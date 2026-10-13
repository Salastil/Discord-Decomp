package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeCacheModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeCacheModule";

    public NativeCacheModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void clear();

    @ReactMethod
    @a
    public abstract void getItem(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void refresh(ReadableArray readableArray, Promise promise);

    @ReactMethod
    @a
    public abstract void removeItem(String str);

    @ReactMethod
    @a
    public abstract void setItem(String str, String str2);
}
