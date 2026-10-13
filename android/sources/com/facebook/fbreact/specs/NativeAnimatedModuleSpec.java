package com.facebook.fbreact.specs;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes3.dex */
public abstract class NativeAnimatedModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeAnimatedModule";

    public NativeAnimatedModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void addAnimatedEventToView(double d6, String str, ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void addListener(String str);

    @ReactMethod
    @a
    public void connectAnimatedNodeToShadowNodeFamily(double d6, ReadableMap readableMap) {
    }

    @ReactMethod
    @a
    public abstract void connectAnimatedNodeToView(double d6, double d7);

    @ReactMethod
    @a
    public abstract void connectAnimatedNodes(double d6, double d7);

    @ReactMethod
    @a
    public abstract void createAnimatedNode(double d6, ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void disconnectAnimatedNodeFromView(double d6, double d7);

    @ReactMethod
    @a
    public abstract void disconnectAnimatedNodes(double d6, double d7);

    @ReactMethod
    @a
    public abstract void dropAnimatedNode(double d6);

    @ReactMethod
    @a
    public abstract void extractAnimatedNodeOffset(double d6);

    @ReactMethod
    @a
    public abstract void finishOperationBatch();

    @ReactMethod
    @a
    public abstract void flattenAnimatedNodeOffset(double d6);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "NativeAnimatedModule";
    }

    @ReactMethod
    @a
    public abstract void getValue(double d6, Callback callback);

    @ReactMethod
    @a
    public void queueAndExecuteBatchedOperations(ReadableArray readableArray) {
    }

    @ReactMethod
    @a
    public abstract void removeAnimatedEventFromView(double d6, String str, double d7);

    @ReactMethod
    @a
    public abstract void removeListeners(double d6);

    @ReactMethod
    @a
    public abstract void restoreDefaultValues(double d6);

    @ReactMethod
    @a
    public abstract void setAnimatedNodeOffset(double d6, double d7);

    @ReactMethod
    @a
    public abstract void setAnimatedNodeValue(double d6, double d7);

    @ReactMethod
    @a
    public abstract void startAnimatingNode(double d6, double d7, ReadableMap readableMap, Callback callback);

    @ReactMethod
    @a
    public abstract void startListeningToAnimatedNodeValue(double d6);

    @ReactMethod
    @a
    public abstract void startOperationBatch();

    @ReactMethod
    @a
    public abstract void stopAnimation(double d6);

    @ReactMethod
    @a
    public abstract void stopListeningToAnimatedNodeValue(double d6);

    @ReactMethod
    @a
    public void updateAnimatedNodeConfig(double d6, ReadableMap readableMap) {
    }
}
