package com.facebook.drawee.interfaces;

import android.graphics.drawable.Animatable;
import android.view.MotionEvent;

/* loaded from: classes3.dex */
public interface DraweeController {
    Animatable getAnimatable();

    DraweeHierarchy getHierarchy();

    boolean isSameImageRequest(DraweeController draweeController);

    void onAttach();

    void onDetach();

    boolean onTouchEvent(MotionEvent motionEvent);

    void setHierarchy(DraweeHierarchy draweeHierarchy);
}
