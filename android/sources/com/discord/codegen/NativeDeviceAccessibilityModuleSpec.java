package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeDeviceAccessibilityModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeDeviceAccessibilityModule";

    public NativeDeviceAccessibilityModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void disableFocusLock();

    public final void emitOnAccessibilityServiceEnabledChanged(boolean z5) {
        this.mEventEmitterCallback.invoke("onAccessibilityServiceEnabledChanged", Boolean.valueOf(z5));
    }

    @ReactMethod
    @a
    public abstract void enableFocusLock(ReadableArray readableArray, boolean z5);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void handleSetPrefersReducedMotion(String str);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract boolean isAccessibilityServiceEnabled();

    @ReactMethod
    @a
    public abstract void markCurrentFocus();

    @ReactMethod
    @a
    public abstract void restorePreviousFocus();
}
