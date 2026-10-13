package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSStackHeaderConfigAndroidManagerInterface;

/* loaded from: classes3.dex */
public class RNSStackHeaderConfigAndroidManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSStackHeaderConfigAndroidManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSStackHeaderConfigAndroidManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: receiveCommand */
    public void kotlinCompat$receiveCommand(T t5, String str, ReadableArray readableArray) {
        str.getClass();
        if (str.equals("updateToolbarMenuElements")) {
            ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).updateToolbarMenuElements(t5, readableArray.getArray(0));
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1726194350:
                if (str.equals("transparent")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1635632637:
                if (str.equals("backButtonHidden")) {
                    c6 = 1;
                    break;
                }
                break;
            case -1351025853:
                if (str.equals("scrollFlagSnap")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1265371130:
                if (str.equals("scrollFlagScroll")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1217487446:
                if (str.equals(ViewProps.HIDDEN)) {
                    c6 = 4;
                    break;
                }
                break;
            case -1149435991:
                if (str.equals("backButtonDrawableIconResourceName")) {
                    c6 = 5;
                    break;
                }
                break;
            case -1116497648:
                if (str.equals("scrollFlagExitUntilCollapsed")) {
                    c6 = 6;
                    break;
                }
                break;
            case -638202514:
                if (str.equals("scrollFlagEnterAlways")) {
                    c6 = 7;
                    break;
                }
                break;
            case -166071306:
                if (str.equals("backButtonTintColorNormal")) {
                    c6 = '\b';
                    break;
                }
                break;
            case 3575610:
                if (str.equals("type")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 110371416:
                if (str.equals(AlertFragment.ARG_TITLE)) {
                    c6 = '\n';
                    break;
                }
                break;
            case 358792301:
                if (str.equals("toolbarMenuGroupDividerEnabled")) {
                    c6 = 11;
                    break;
                }
                break;
            case 623064648:
                if (str.equals("backButtonTintColorFocused")) {
                    c6 = '\f';
                    break;
                }
                break;
            case 944955529:
                if (str.equals("scrollFlagEnterAlwaysCollapsed")) {
                    c6 = '\r';
                    break;
                }
                break;
            case 995841779:
                if (str.equals("backButtonTintColorPressed")) {
                    c6 = 14;
                    break;
                }
                break;
            case 1783433897:
                if (str.equals("backButtonImageIconResource")) {
                    c6 = 15;
                    break;
                }
                break;
            case 1815601018:
                if (str.equals("toolbarMenu")) {
                    c6 = 16;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setTransparent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 1:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setBackButtonHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 2:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setScrollFlagSnap(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 3:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setScrollFlagScroll(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 4:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 5:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setBackButtonDrawableIconResourceName(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setScrollFlagExitUntilCollapsed(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 7:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setScrollFlagEnterAlways(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\b':
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setBackButtonTintColorNormal(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '\t':
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setType(t5, (String) obj);
                break;
            case '\n':
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setTitle(t5, obj != null ? (String) obj : null);
                break;
            case 11:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setToolbarMenuGroupDividerEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\f':
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setBackButtonTintColorFocused(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '\r':
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setScrollFlagEnterAlwaysCollapsed(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 14:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setBackButtonTintColorPressed(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 15:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setBackButtonImageIconResource(t5, (ReadableMap) obj);
                break;
            case 16:
                ((RNSStackHeaderConfigAndroidManagerInterface) this.mViewManager).setToolbarMenu(t5, new DynamicFromObject(obj));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
