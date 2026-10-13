package com.discord.codegen;

import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeCallKitModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeCallKitModule";

    public NativeCallKitModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void answerCall(String str, Promise promise);

    public final void emitOnPerformAnswerCallAction(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onPerformAnswerCallAction", readableMap);
    }

    public final void emitOnPerformEndCallAction(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onPerformEndCallAction", readableMap);
    }

    public final void emitOnPerformSetMutedCallAction(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onPerformSetMutedCallAction", readableMap);
    }

    public final void emitOnPerformStartCallAction(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onPerformStartCallAction", readableMap);
    }

    public final void emitOnStartCallNotification(ReadableMap readableMap) {
        this.mEventEmitterCallback.invoke("onStartCallNotification", readableMap);
    }

    @ReactMethod
    @a
    public abstract void endCall(String str, Promise promise);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void initializeManager();

    @ReactMethod
    @a
    public abstract void reportCall(String str, String str2, boolean z5, String str3);

    @ReactMethod
    @a
    public abstract void reportCallEnded(String str);

    @ReactMethod
    @a
    public abstract void reportNewIncomingCall(String str, String str2, boolean z5, String str3);

    @ReactMethod
    @a
    public abstract void reportOutgoingCallConnected(String str);

    @ReactMethod
    @a
    public abstract void reportOutgoingCallStartedConnecting(String str);

    @ReactMethod
    @a
    public abstract void setIncomingRingtone(String str);

    @ReactMethod
    @a
    public abstract void setMutedCall(String str, boolean z5, Promise promise);

    @ReactMethod
    @a
    public abstract void startCall(String str, String str2, boolean z5, String str3, Promise promise);
}
