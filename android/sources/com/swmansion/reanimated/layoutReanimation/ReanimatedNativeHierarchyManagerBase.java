package com.swmansion.reanimated.layoutReanimation;

import com.facebook.react.uimanager.NativeViewHierarchyManager;
import com.facebook.react.uimanager.ViewManagerRegistry;
import com.facebook.yoga.YogaDirection;

/* loaded from: classes3.dex */
public abstract class ReanimatedNativeHierarchyManagerBase extends NativeViewHierarchyManager {
    public ReanimatedNativeHierarchyManagerBase(ViewManagerRegistry viewManagerRegistry) {
        super(viewManagerRegistry);
    }

    @Override // com.facebook.react.uimanager.NativeViewHierarchyManager
    public synchronized void updateLayout(int i5, int i6, int i10, int i11, int i12, int i13, YogaDirection yogaDirection) {
        try {
            super.updateLayout(i5, i6, i10, i11, i12, i13, yogaDirection);
            updateLayoutCommon(i5, i6, i10, i11, i12, i13);
        } catch (Throwable th2) {
            th = th2;
            while (true) {
                try {
                    throw th;
                } catch (Throwable th3) {
                    th = th3;
                }
            }
        }
    }

    public abstract void updateLayoutCommon(int i5, int i6, int i10, int i11, int i12, int i13);
}
