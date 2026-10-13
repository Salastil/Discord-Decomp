package com.swmansion.reanimated;

import com.facebook.jni.HybridData;
import com.facebook.react.bridge.JavaScriptContextHolder;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.fabric.FabricUIManager;
import com.facebook.react.turbomodule.core.CallInvokerHolderImpl;
import com.facebook.react.uimanager.IllegalViewOperationException;
import com.facebook.react.uimanager.UIManagerHelper;
import com.swmansion.reanimated.layoutReanimation.LayoutAnimations;
import com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder;
import com.swmansion.reanimated.nativeProxy.NativeProxyCommon;
import com.swmansion.worklets.WorkletsModule;
import java.util.HashMap;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public class NativeProxy extends NativeProxyCommon {
    private final FabricUIManager mFabricUIManager;

    @ya.a
    private final HybridData mHybridData;
    private final AtomicBoolean mInvalidated;

    public NativeProxy(ReactApplicationContext reactApplicationContext, WorkletsModule workletsModule) {
        super(reactApplicationContext);
        this.mInvalidated = new AtomicBoolean(false);
        ReactFeatureFlagsWrapper.enableMountHooks();
        FabricUIManager fabricUIManager = (FabricUIManager) UIManagerHelper.getUIManager(reactApplicationContext, 2);
        this.mFabricUIManager = fabricUIManager;
        LayoutAnimations layoutAnimations = new LayoutAnimations(reactApplicationContext);
        CallInvokerHolderImpl y5 = ki.b.y(reactApplicationContext);
        JavaScriptContextHolder javaScriptContextHolder = reactApplicationContext.getJavaScriptContextHolder();
        Objects.requireNonNull(javaScriptContextHolder);
        this.mHybridData = initHybrid(workletsModule, javaScriptContextHolder.getContext(), y5, layoutAnimations, reactApplicationContext.isBridgeless(), fabricUIManager);
        prepareLayoutAnimations(layoutAnimations);
        installJSIBindings();
    }

    public static NativeMethodsHolder createNativeMethodsHolder(LayoutAnimations layoutAnimations) {
        return new NativeMethodsHolder() { // from class: com.swmansion.reanimated.NativeProxy.1
            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public void cancelAnimation(int i5) {
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public void checkDuplicateSharedTag(int i5, int i6) {
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public void clearAnimationConfig(int i5) {
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public int findPrecedingViewTagForTransition(int i5) {
                return -1;
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public int[] getSharedGroup(int i5) {
                return new int[0];
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public boolean hasAnimation(int i5, int i6) {
                return false;
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public boolean isLayoutAnimationEnabled() {
                return false;
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public boolean shouldAnimateExiting(int i5, boolean z5) {
                return false;
            }

            @Override // com.swmansion.reanimated.layoutReanimation.NativeMethodsHolder
            public void startAnimation(int i5, int i6, HashMap<String, Object> hashMap) {
            }
        };
    }

    private native HybridData initHybrid(WorkletsModule workletsModule, long j, CallInvokerHolderImpl callInvokerHolderImpl, LayoutAnimations layoutAnimations, boolean z5, FabricUIManager fabricUIManager);

    private native void invalidateCpp();

    @Override // com.swmansion.reanimated.nativeProxy.NativeProxyCommon
    public HybridData getHybridData() {
        return this.mHybridData;
    }

    public void invalidate() {
        HybridData hybridData;
        if (this.mInvalidated.getAndSet(true) || (hybridData = this.mHybridData) == null || !hybridData.isValid()) {
            return;
        }
        invalidateCpp();
    }

    public native boolean isAnyHandlerWaitingForEvent(String str, int i5);

    public native void performOperations(boolean z5, boolean z6);

    @ya.a
    public boolean preserveMountedTags(int[] iArr) {
        for (int i5 = 0; i5 < iArr.length; i5++) {
            try {
                if (this.mFabricUIManager.resolveView(iArr[i5]) == null) {
                    iArr[i5] = -1;
                }
            } catch (IllegalViewOperationException unused) {
                iArr[i5] = -1;
            }
        }
        return true;
    }
}
