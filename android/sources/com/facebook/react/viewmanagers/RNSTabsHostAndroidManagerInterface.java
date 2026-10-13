package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

/* loaded from: classes3.dex */
public interface RNSTabsHostAndroidManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
    void setColorScheme(T t5, String str);

    void setNativeContainerBackgroundColor(T t5, Integer num);

    void setNavStateRequest(T t5, ReadableMap readableMap);

    void setRejectStaleNavStateUpdates(T t5, boolean z5);

    void setTabBarHidden(T t5, boolean z5);

    void setTabBarRespectsIMEInsets(T t5, boolean z5);
}
