package io.sentry.react;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;

/* loaded from: classes3.dex */
public abstract class NativeRNSentrySpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "RNSentry";

    public NativeRNSentrySpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @ya.a
    public abstract void addBreadcrumb(ReadableMap readableMap);

    @ReactMethod
    @ya.a
    public abstract void addListener(String str);

    @ReactMethod
    @ya.a
    public abstract void captureEnvelope(String str, ReadableMap readableMap, Promise promise);

    @ReactMethod
    @ya.a
    public abstract void captureReplay(boolean z5, Promise promise);

    @ReactMethod
    @ya.a
    public abstract void captureScreenshot(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void clearBreadcrumbs();

    @ReactMethod
    @ya.a
    public abstract void closeNativeSdk(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void crash();

    @ReactMethod
    @ya.a
    public abstract void crashedLastRun(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void disableNativeFramesTracking();

    @ReactMethod
    @ya.a
    public abstract void enableNativeFramesTracking();

    @ReactMethod
    @ya.a
    public abstract void encodeToBase64(ReadableArray readableArray, Promise promise);

    @ReactMethod
    @ya.a
    public abstract void fetchModules(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void fetchNativeAppStart(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void fetchNativeDeviceContexts(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void fetchNativeFrames(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void fetchNativeLogAttributes(Promise promise);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract String fetchNativePackageName();

    @ReactMethod
    @ya.a
    public abstract void fetchNativeRelease(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void fetchNativeSdkInfo(Promise promise);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap fetchNativeStackFramesBy(ReadableArray readableArray);

    @ReactMethod
    @ya.a
    public abstract void fetchViewHierarchy(Promise promise);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract String getCurrentReplayId();

    @ReactMethod
    @ya.a
    public abstract void getDataFromUri(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return "RNSentry";
    }

    @ReactMethod
    @ya.a
    public abstract void getNewScreenTimeToDisplay(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void initNativeReactNavigationNewFrameTracking(Promise promise);

    @ReactMethod
    @ya.a
    public abstract void initNativeSdk(ReadableMap readableMap, Promise promise);

    @ReactMethod
    @ya.a
    public abstract void popTimeToDisplayFor(String str, Promise promise);

    @ReactMethod
    @ya.a
    public abstract void removeListeners(double d6);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract boolean setActiveSpanId(String str);

    @ReactMethod
    @ya.a
    public abstract void setContext(String str, ReadableMap readableMap);

    @ReactMethod
    @ya.a
    public abstract void setExtra(String str, String str2);

    @ReactMethod
    @ya.a
    public abstract void setTag(String str, String str2);

    @ReactMethod
    @ya.a
    public abstract void setUser(ReadableMap readableMap, ReadableMap readableMap2);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap startProfiling(boolean z5);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @ya.a
    public abstract WritableMap stopProfiling();
}
