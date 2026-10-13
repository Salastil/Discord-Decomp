package com.swmansion.reanimated.layoutReanimation;

import com.facebook.jni.HybridData;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.soloader.SoLoader;
import com.swmansion.reanimated.ReanimatedModule;
import java.lang.ref.WeakReference;
import java.util.Map;

/* loaded from: classes3.dex */
public class LayoutAnimations {
    private final WeakReference<ReactApplicationContext> mContext;
    private WeakReference<AnimationsManager> mWeakAnimationsManager = new WeakReference<>(null);

    @ya.a
    private final HybridData mHybridData = initHybrid();

    public static class Types {
        static final int ENTERING = 1;
        static final int EXITING = 2;
        static final int LAYOUT = 3;
        static final int SHARED_ELEMENT_TRANSITION = 4;
        static final int SHARED_ELEMENT_TRANSITION_PROGRESS = 5;
    }

    static {
        SoLoader.m("reanimated");
    }

    public LayoutAnimations(ReactApplicationContext reactApplicationContext) {
        this.mContext = new WeakReference<>(reactApplicationContext);
    }

    private void endLayoutAnimation(int i5, boolean z5) {
        AnimationsManager animationsManager = getAnimationsManager();
        if (animationsManager == null) {
            return;
        }
        animationsManager.endLayoutAnimation(i5, z5);
    }

    private AnimationsManager getAnimationsManager() {
        if (this.mWeakAnimationsManager.get() != null) {
            return this.mWeakAnimationsManager.get();
        }
        ReactApplicationContext reactApplicationContext = this.mContext.get();
        if (reactApplicationContext == null) {
            return null;
        }
        AnimationsManager animationsManager = ((ReanimatedModule) reactApplicationContext.getNativeModule(ReanimatedModule.class)).getNodesManager().getAnimationsManager();
        this.mWeakAnimationsManager = new WeakReference<>(animationsManager);
        return animationsManager;
    }

    private native HybridData initHybrid();

    private void progressLayoutAnimation(int i5, Map<String, Object> map, boolean z5) {
        AnimationsManager animationsManager = getAnimationsManager();
        if (animationsManager == null) {
            return;
        }
        animationsManager.progressLayoutAnimation(i5, map, z5);
    }

    public native void cancelAnimationForTag(int i5);

    public native void checkDuplicateSharedTag(int i5, int i6);

    public native void clearAnimationConfigForTag(int i5);

    public native int findPrecedingViewTagForTransition(int i5);

    public native int[] getSharedGroup(int i5);

    public native boolean hasAnimationForTag(int i5, int i6);

    public native boolean isLayoutAnimationEnabled();

    public native boolean shouldAnimateExiting(int i5, boolean z5);

    public native void startAnimationForTag(int i5, int i6, Map<String, String> map);
}
