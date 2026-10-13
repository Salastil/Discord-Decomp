package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSTabsHostAndroidManagerInterface;

/* loaded from: classes3.dex */
public class RNSTabsHostAndroidManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSTabsHostAndroidManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSTabsHostAndroidManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        switch (str) {
            case "rejectStaleNavStateUpdates":
                ((RNSTabsHostAndroidManagerInterface) this.mViewManager).setRejectStaleNavStateUpdates(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case "tabBarHidden":
                ((RNSTabsHostAndroidManagerInterface) this.mViewManager).setTabBarHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case "nativeContainerBackgroundColor":
                ((RNSTabsHostAndroidManagerInterface) this.mViewManager).setNativeContainerBackgroundColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case "tabBarRespectsIMEInsets":
                ((RNSTabsHostAndroidManagerInterface) this.mViewManager).setTabBarRespectsIMEInsets(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case "colorScheme":
                ((RNSTabsHostAndroidManagerInterface) this.mViewManager).setColorScheme(t5, (String) obj);
                break;
            case "navStateRequest":
                ((RNSTabsHostAndroidManagerInterface) this.mViewManager).setNavStateRequest(t5, (ReadableMap) obj);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
