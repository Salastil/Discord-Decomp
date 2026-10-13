package com.swmansion.reanimated.nativeProxy;

import com.facebook.jni.HybridData;
import com.swmansion.reanimated.NodesManager;

@ya.a
/* loaded from: classes3.dex */
public class AnimationFrameCallback implements NodesManager.OnAnimationFrame {

    @ya.a
    private final HybridData mHybridData;

    @ya.a
    private AnimationFrameCallback(HybridData hybridData) {
        this.mHybridData = hybridData;
    }

    @Override // com.swmansion.reanimated.NodesManager.OnAnimationFrame
    public native void onAnimationFrame(double d6);
}
