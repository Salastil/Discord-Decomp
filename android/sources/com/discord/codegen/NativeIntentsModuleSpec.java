package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeIntentsModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeIntentsModule";

    public NativeIntentsModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean canOpenUrlScheme(String str);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean canSendMail();

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean canSendSMS();

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract String getCurrentDiscordVariant();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean isDiscordVariantInstalled(String str);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean launchDiscordVariant(String str);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean sendMail(String str, String str2, ReadableArray readableArray);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean sendSMS(String str, ReadableArray readableArray);
}
