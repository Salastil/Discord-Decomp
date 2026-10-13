package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import k0.d;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeFastConnectModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeFastConnectModule";

    public NativeFastConnectModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule
    @a
    public final Map<String, Object> getConstants() {
        Map<String, Object> typedExportedConstants = getTypedExportedConstants();
        if (ReactBuildConfig.DEBUG || ReactBuildConfig.IS_INTERNAL_BUILD) {
            HashSet hashSet = new HashSet();
            HashSet hashSet2 = new HashSet(Arrays.asList("analyticsInstallation", "clientState", "token", "useAltGateway", "useChannelObfuscation", "userId"));
            HashSet hashSet3 = new HashSet(typedExportedConstants.keySet());
            if (!d.t(hashSet3, hashSet, hashSet2)) {
                throw new IllegalStateException(String.format("Native Module Flow doesn't declare constants: %s", hashSet3));
            }
            if (!d.u(typedExportedConstants, hashSet)) {
                throw new IllegalStateException(String.format("Native Module doesn't fill in constants: %s", hashSet));
            }
        }
        return typedExportedConstants;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract String getDerivedQosData(String str);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    public abstract Map<String, Object> getTypedExportedConstants();

    @ReactMethod
    @a
    public abstract void prepareIdentify(String str, String str2, double d6, String str3);

    @ReactMethod
    @a
    public abstract void setClientState(String str, String str2);

    @ReactMethod
    @a
    public abstract void setDerivedQosData(String str, String str2);

    @ReactMethod
    @a
    public abstract void setUseAltGateway(boolean z5);

    @ReactMethod
    @a
    public abstract void setUseChannelObfuscation(boolean z5);
}
