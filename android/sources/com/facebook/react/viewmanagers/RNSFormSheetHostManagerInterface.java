package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

/* loaded from: classes3.dex */
public interface RNSFormSheetHostManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
    void setDetents(T t5, ReadableArray readableArray);

    void setInitialDetentIndex(T t5, int i5);

    void setIsOpen(T t5, boolean z5);

    void setLargestUndimmedDetentIndex(T t5, int i5);

    void setNativeContainerBackgroundColor(T t5, Integer num);

    void setPreferredCornerRadius(T t5, float f2);

    void setPrefersGrabberVisible(T t5, boolean z5);

    void setPrefersScrollingExpandsWhenScrolledToEdge(T t5, boolean z5);

    void setPreventNativeDismiss(T t5, boolean z5);
}
