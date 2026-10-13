package com.swmansion.reanimated.nativeProxy;

import com.facebook.jni.HybridData;

@ya.a
/* loaded from: classes3.dex */
public class SensorSetter {

    @ya.a
    private final HybridData mHybridData;

    @ya.a
    private SensorSetter(HybridData hybridData) {
        this.mHybridData = hybridData;
    }

    public native void sensorSetter(float[] fArr, int i5);
}
