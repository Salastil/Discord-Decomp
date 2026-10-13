package com.swmansion.reanimated.nativeProxy;

import com.facebook.jni.HybridData;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.UIManagerModule;
import com.facebook.react.uimanager.events.RCTEventEmitter;

@ya.a
/* loaded from: classes3.dex */
public class EventHandler implements RCTEventEmitter {
    UIManagerModule.CustomEventNamesResolver mCustomEventNamesResolver;

    @ya.a
    private final HybridData mHybridData;

    @ya.a
    private EventHandler(HybridData hybridData) {
        this.mHybridData = hybridData;
    }

    @Override // com.facebook.react.uimanager.events.RCTEventEmitter
    public void receiveEvent(int i5, String str, WritableMap writableMap) {
        receiveEvent(this.mCustomEventNamesResolver.resolveCustomEventName(str), i5, writableMap);
    }

    public native void receiveEvent(String str, int i5, WritableMap writableMap);

    @Override // com.facebook.react.uimanager.events.RCTEventEmitter
    public void receiveTouches(String str, WritableArray writableArray, WritableArray writableArray2) {
    }
}
