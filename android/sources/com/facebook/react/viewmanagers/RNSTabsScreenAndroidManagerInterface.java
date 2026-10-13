package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

/* loaded from: classes3.dex */
public interface RNSTabsScreenAndroidManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
    void setBadgeValue(T t5, String str);

    void setDrawableIconResourceName(T t5, String str);

    void setImageIconResource(T t5, ReadableMap readableMap);

    void setPreventNativeSelection(T t5, boolean z5);

    void setScreenKey(T t5, String str);

    void setSelectedDrawableIconResourceName(T t5, String str);

    void setSelectedImageIconResource(T t5, ReadableMap readableMap);

    void setSpecialEffects(T t5, ReadableMap readableMap);

    void setStandardAppearance(T t5, ReadableMap readableMap);

    void setTabBarItemAccessibilityLabel(T t5, String str);

    void setTabBarItemTestID(T t5, String str);

    void setTitle(T t5, String str);
}
