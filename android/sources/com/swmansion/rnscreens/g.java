package com.swmansion.rnscreens;

import android.view.ViewGroup;
import com.facebook.react.bridge.WritableNativeMap;
import com.facebook.react.uimanager.StateWrapper;

/* loaded from: classes3.dex */
public abstract class g extends ViewGroup {
    private float lastHeaderHeight;
    private float lastHeight;
    private float lastWidth;
    private StateWrapper mStateWrapper;

    public final void setStateWrapper(StateWrapper stateWrapper) {
        this.mStateWrapper = stateWrapper;
    }

    public final void updateState(int i5, int i6, int i10) {
        float P = a5.k0.P(this, i5);
        float P2 = a5.k0.P(this, i6);
        float P3 = a5.k0.P(this, i10);
        if (Math.abs(this.lastWidth - P) >= 0.9f || Math.abs(this.lastHeight - P2) >= 0.9f || Math.abs(this.lastHeaderHeight - P3) >= 0.9f) {
            this.lastWidth = P;
            this.lastHeight = P2;
            this.lastHeaderHeight = P3;
            WritableNativeMap writableNativeMap = new WritableNativeMap();
            writableNativeMap.putDouble("frameWidth", P);
            writableNativeMap.putDouble("frameHeight", P2);
            writableNativeMap.putDouble("contentOffsetX", 0.0d);
            writableNativeMap.putDouble("contentOffsetY", P3);
            StateWrapper stateWrapper = this.mStateWrapper;
            if (stateWrapper != null) {
                stateWrapper.updateState(writableNativeMap);
            }
        }
    }
}
