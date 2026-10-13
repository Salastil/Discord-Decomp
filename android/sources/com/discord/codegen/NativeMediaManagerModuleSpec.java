package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import k0.d;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeMediaManagerModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeMediaManagerModule";

    public NativeMediaManagerModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void calculateImageQualityMetrics(String str, String str2, Promise promise);

    @ReactMethod
    @a
    public abstract void cancelResolveToMediaFilePath(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void compressVideo(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void convertBase64ToGIF(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void convertBase64ToJPEG(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void convertToGIFFilePath(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void convertToJPEG(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void downloadMediaAsset(String str, double d6, Promise promise);

    @ReactMethod
    @a
    public abstract void downloadMediaAssetWithContentType(String str, double d6, String str2, Promise promise);

    public final void emitOnCompressionProgress(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onCompressionProgress", readableMap);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule
    @a
    public final Map<String, Object> getConstants() {
        Map<String, Object> typedExportedConstants = getTypedExportedConstants();
        if (ReactBuildConfig.DEBUG || ReactBuildConfig.IS_INTERNAL_BUILD) {
            HashSet hashSet = new HashSet(Arrays.asList("supportedExtensions"));
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

    @ReactMethod
    @a
    public abstract void getDeviceStateInfo(Promise promise);

    @ReactMethod
    @a
    public abstract void getImageContentType(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void getLosslessImageData(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void getMediaOrigin(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract WritableMap getSupportedImageTypes();

    public abstract Map<String, Object> getTypedExportedConstants();

    @ReactMethod
    @a
    public abstract void getVideoMetadata(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void imageHasTransparency(String str, Promise promise);

    @ReactMethod
    @a
    public abstract void isVideoEncodingSupported(ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void resolveToMediaFilePath(String str, ReadableMap readableMap, Promise promise);
}
