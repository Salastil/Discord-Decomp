package com.discord.codegen;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Promise;
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
public abstract class NativeBrowserManagerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeBrowserManagerModule";

    public NativeBrowserManagerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    public final void emitOnTrackedCustomTabClosed() {
        this.mEventEmitterCallback.invoke("onTrackedCustomTabClosed");
    }

    @Override // com.facebook.react.bridge.BaseJavaModule
    @a
    public final Map<String, Object> getConstants() {
        Map<String, Object> typedExportedConstants = getTypedExportedConstants();
        if (ReactBuildConfig.DEBUG || ReactBuildConfig.IS_INTERNAL_BUILD) {
            HashSet hashSet = new HashSet(Arrays.asList("isChromeInstalled", "selectedBrowser", "supportsInAppBrowser"));
            HashSet hashSet2 = new HashSet();
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

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    public abstract Map<String, Object> getTypedExportedConstants();

    @ReactMethod
    @a
    public abstract void openInAppURL(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void openInChromeURL(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void openPlayStoreInline(String str, Double d6, Callback callback, Promise promise);

    @ReactMethod
    @a
    public abstract void openTrackedCustomTab(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void resumeTrackedCustomTab(Promise promise);

    @ReactMethod
    @a
    public abstract void selectBrowser(double d6);
}
