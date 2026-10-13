package com.discord.codegen;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeShareManagerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeShareManagerModule";

    public NativeShareManagerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void addListener(String str);

    @ReactMethod
    @a
    public abstract void cancelPendingShare();

    @ReactMethod
    @a
    public abstract void close();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void launchApp();

    @ReactMethod
    @a
    public abstract void removeListeners(double d6);

    @ReactMethod
    @a
    public abstract void setAuthenticationToken(String str, String str2);

    @ReactMethod
    @a
    public abstract void setSelectedChannel(String str, String str2);

    @ReactMethod
    @a
    public abstract void share(String str, String str2, String str3, String str4, ReadableMap readableMap, Callback callback, Promise promise);

    @ReactMethod
    @a
    public abstract void sharedAttachments(String str, ReadableArray readableArray, Promise promise);
}
