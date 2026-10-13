package com.horcrux.svg;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;

/* loaded from: classes3.dex */
public abstract class NativeSvgRenderableModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "RNSVGRenderableModule";

    public NativeSvgRenderableModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap getBBox(Double d6, ReadableMap readableMap);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap getCTM(Double d6);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "RNSVGRenderableModule";
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap getPointAtLength(Double d6, ReadableMap readableMap);

    @ReactMethod
    @ya.a
    public abstract void getRawResource(String str, Promise promise);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap getScreenCTM(Double d6);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract double getTotalLength(Double d6);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract boolean isPointInFill(Double d6, ReadableMap readableMap);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract boolean isPointInStroke(Double d6, ReadableMap readableMap);
}
