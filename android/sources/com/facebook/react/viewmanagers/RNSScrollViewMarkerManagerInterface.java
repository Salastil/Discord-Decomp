package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

/* loaded from: classes3.dex */
public interface RNSScrollViewMarkerManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
    void setBottomScrollEdgeEffect(T t5, String str);

    void setLeftScrollEdgeEffect(T t5, String str);

    void setRightScrollEdgeEffect(T t5, String str);

    void setTopScrollEdgeEffect(T t5, String str);
}
