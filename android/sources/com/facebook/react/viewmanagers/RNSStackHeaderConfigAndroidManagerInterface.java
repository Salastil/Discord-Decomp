package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

/* loaded from: classes3.dex */
public interface RNSStackHeaderConfigAndroidManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
    void setBackButtonDrawableIconResourceName(T t5, String str);

    void setBackButtonHidden(T t5, boolean z5);

    void setBackButtonImageIconResource(T t5, ReadableMap readableMap);

    void setBackButtonTintColorFocused(T t5, Integer num);

    void setBackButtonTintColorNormal(T t5, Integer num);

    void setBackButtonTintColorPressed(T t5, Integer num);

    void setHidden(T t5, boolean z5);

    void setScrollFlagEnterAlways(T t5, boolean z5);

    void setScrollFlagEnterAlwaysCollapsed(T t5, boolean z5);

    void setScrollFlagExitUntilCollapsed(T t5, boolean z5);

    void setScrollFlagScroll(T t5, boolean z5);

    void setScrollFlagSnap(T t5, boolean z5);

    void setTitle(T t5, String str);

    void setToolbarMenu(T t5, Dynamic dynamic);

    void setToolbarMenuGroupDividerEnabled(T t5, boolean z5);

    void setTransparent(T t5, boolean z5);

    void setType(T t5, String str);

    void updateToolbarMenuElements(T t5, ReadableArray readableArray);
}
