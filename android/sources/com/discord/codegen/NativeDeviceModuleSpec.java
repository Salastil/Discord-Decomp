package com.discord.codegen;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import k0.d;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeDeviceModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeDeviceModule";

    public NativeDeviceModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule
    @a
    public final Map<String, Object> getConstants() {
        Map<String, Object> typedExportedConstants = getTypedExportedConstants();
        if (ReactBuildConfig.DEBUG || ReactBuildConfig.IS_INTERNAL_BUILD) {
            HashSet hashSet = new HashSet(Arrays.asList("device", "deviceBrand", "deviceManufacturer", "deviceModel", "deviceProduct", "isGestureNavigationEnabled", "isOrientationLockSupported", "isRunningOnSimulator", "maxCpuFreq", "ramSize", "smallestScreenWidth", "socName", "systemVersion", "timeZone"));
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

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract double getMediaPerformanceClass();

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract WritableMap getScreenSize(String str);

    public abstract Map<String, Object> getTypedExportedConstants();

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract WritableMap getWindowSize(String str);
}
