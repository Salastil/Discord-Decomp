package com.swmansion.reanimated.keyboard;

import com.facebook.jni.HybridData;

@ya.a
/* loaded from: classes3.dex */
public class KeyboardWorkletWrapper {

    @ya.a
    private final HybridData mHybridData;

    @ya.a
    private KeyboardWorkletWrapper(HybridData hybridData) {
        this.mHybridData = hybridData;
    }

    public native void invoke(int i5, int i6);
}
