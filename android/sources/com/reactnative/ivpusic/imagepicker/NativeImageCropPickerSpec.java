package com.reactnative.ivpusic.imagepicker;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeImageCropPickerSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "RNCImageCropPicker";

    public NativeImageCropPickerSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void clean(Promise promise);

    @ReactMethod
    @a
    public abstract void cleanSingle(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void openCamera(ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void openCropper(ReadableMap readableMap, Promise promise);

    @ReactMethod
    @a
    public abstract void openPicker(ReadableMap readableMap, Promise promise);
}
