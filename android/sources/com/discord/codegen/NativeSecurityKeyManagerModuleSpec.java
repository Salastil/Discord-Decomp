package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeSecurityKeyManagerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeSecurityKeyManagerModule";

    public NativeSecurityKeyManagerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void authenticate(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void authenticatePasskey(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void authenticateSecurityKey(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void register(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void registerPasskey(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void registerSecurityKey(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void signalAllAcceptedCredentials(String str, String str2, ReadableArray readableArray, Promise promise);

    @ReactMethod
    @a
    public abstract void signalCurrentUserDetails(String str, String str2, String str3, String str4, Promise promise);

    @ReactMethod
    @a
    public abstract void signalUnknownCredential(String str, String str2, Promise promise);
}
