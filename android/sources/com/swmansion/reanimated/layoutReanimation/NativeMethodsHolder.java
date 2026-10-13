package com.swmansion.reanimated.layoutReanimation;

import java.util.HashMap;

/* loaded from: classes3.dex */
public interface NativeMethodsHolder {
    void cancelAnimation(int i5);

    void checkDuplicateSharedTag(int i5, int i6);

    void clearAnimationConfig(int i5);

    int findPrecedingViewTagForTransition(int i5);

    int[] getSharedGroup(int i5);

    boolean hasAnimation(int i5, int i6);

    boolean isLayoutAnimationEnabled();

    boolean shouldAnimateExiting(int i5, boolean z5);

    void startAnimation(int i5, int i6, HashMap<String, Object> hashMap);
}
