package com.reactnativekeyboardcontroller;

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

/* loaded from: classes3.dex */
public abstract class NativeKeyboardControllerSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "KeyboardController";

    public NativeKeyboardControllerSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void addListener(String str);

    @ReactMethod
    @a
    public abstract void dismiss(boolean z5, boolean z6);

    @Override // com.facebook.react.bridge.BaseJavaModule
    @a
    public final Map<String, Object> getConstants() {
        Map<String, Object> typedExportedConstants = getTypedExportedConstants();
        if (ReactBuildConfig.DEBUG || ReactBuildConfig.IS_INTERNAL_BUILD) {
            HashSet hashSet = new HashSet(Arrays.asList("keyboardBorderRadius"));
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
    public abstract void preload();

    @ReactMethod
    @a
    public abstract void removeListeners(double d6);

    @ReactMethod
    @a
    public abstract void setDefaultMode();

    @ReactMethod
    @a
    public abstract void setFocusTo(String str);

    @ReactMethod
    @a
    public abstract void setInputMode(double d6);

    @ReactMethod
    @a
    public abstract void viewPositionInWindow(double d6, Promise promise);
}
