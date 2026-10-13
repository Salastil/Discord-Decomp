package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSTabsScreenAndroidManagerInterface;

/* loaded from: classes3.dex */
public class RNSTabsScreenAndroidManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSTabsScreenAndroidManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSTabsScreenAndroidManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1770963447:
                if (str.equals("specialEffects")) {
                    c6 = 0;
                    break;
                }
                break;
            case -558395241:
                if (str.equals("tabBarItemAccessibilityLabel")) {
                    c6 = 1;
                    break;
                }
                break;
            case -113697461:
                if (str.equals("selectedDrawableIconResourceName")) {
                    c6 = 2;
                    break;
                }
                break;
            case -10721392:
                if (str.equals("drawableIconResourceName")) {
                    c6 = 3;
                    break;
                }
                break;
            case 28389121:
                if (str.equals("standardAppearance")) {
                    c6 = 4;
                    break;
                }
                break;
            case 110371416:
                if (str.equals(AlertFragment.ARG_TITLE)) {
                    c6 = 5;
                    break;
                }
                break;
            case 125075027:
                if (str.equals("screenKey")) {
                    c6 = 6;
                    break;
                }
                break;
            case 1072026510:
                if (str.equals("badgeValue")) {
                    c6 = 7;
                    break;
                }
                break;
            case 1465115197:
                if (str.equals("preventNativeSelection")) {
                    c6 = '\b';
                    break;
                }
                break;
            case 1479286599:
                if (str.equals("selectedImageIconResource")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 1577043198:
                if (str.equals("tabBarItemTestID")) {
                    c6 = '\n';
                    break;
                }
                break;
            case 2109188258:
                if (str.equals("imageIconResource")) {
                    c6 = 11;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setSpecialEffects(t5, (ReadableMap) obj);
                break;
            case 1:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setTabBarItemAccessibilityLabel(t5, obj != null ? (String) obj : null);
                break;
            case 2:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setSelectedDrawableIconResourceName(t5, obj != null ? (String) obj : null);
                break;
            case 3:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setDrawableIconResourceName(t5, obj != null ? (String) obj : null);
                break;
            case 4:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setStandardAppearance(t5, (ReadableMap) obj);
                break;
            case 5:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setTitle(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setScreenKey(t5, obj != null ? (String) obj : null);
                break;
            case 7:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setBadgeValue(t5, obj != null ? (String) obj : null);
                break;
            case '\b':
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setPreventNativeSelection(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\t':
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setSelectedImageIconResource(t5, (ReadableMap) obj);
                break;
            case '\n':
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setTabBarItemTestID(t5, obj != null ? (String) obj : null);
                break;
            case 11:
                ((RNSTabsScreenAndroidManagerInterface) this.mViewManager).setImageIconResource(t5, (ReadableMap) obj);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
