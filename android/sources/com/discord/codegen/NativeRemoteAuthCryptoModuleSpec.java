package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeRemoteAuthCryptoModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeRemoteAuthCryptoModule";

    public NativeRemoteAuthCryptoModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void decrypt(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void generateKeyPair(Promise promise);

    @ReactMethod
    @a
    public abstract void getEncodedPublicKey(Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void getPublicKeyFingerprint(Promise promise);

    @ReactMethod
    @a
    public abstract void releaseKeyPair();
}
