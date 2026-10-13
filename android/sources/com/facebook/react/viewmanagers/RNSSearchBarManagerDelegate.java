package com.facebook.react.viewmanagers;

import android.view.View;
import com.appsflyer.AdRevenueScheme;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSSearchBarManagerInterface;

/* loaded from: classes3.dex */
public class RNSSearchBarManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSSearchBarManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSSearchBarManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: receiveCommand */
    public void kotlinCompat$receiveCommand(T t5, String str, ReadableArray readableArray) {
        str.getClass();
        switch (str) {
            case "cancelSearch":
                ((RNSSearchBarManagerInterface) this.mViewManager).cancelSearch(t5);
                break;
            case "clearText":
                ((RNSSearchBarManagerInterface) this.mViewManager).clearText(t5);
                break;
            case "toggleCancelButton":
                ((RNSSearchBarManagerInterface) this.mViewManager).toggleCancelButton(t5, readableArray.getBoolean(0));
                break;
            case "blur":
                ((RNSSearchBarManagerInterface) this.mViewManager).blur(t5);
                break;
            case "focus":
                ((RNSSearchBarManagerInterface) this.mViewManager).focus(t5);
                break;
            case "setText":
                ((RNSSearchBarManagerInterface) this.mViewManager).setText(t5, readableArray.getString(0));
                break;
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1619312835:
                if (str.equals("hideNavigationBar")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1465798051:
                if (str.equals("headerIconColor")) {
                    c6 = 1;
                    break;
                }
                break;
            case -1339545093:
                if (str.equals("autoCapitalize")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1063571914:
                if (str.equals("textColor")) {
                    c6 = 3;
                    break;
                }
                break;
            case -336520619:
                if (str.equals("barTintColor")) {
                    c6 = 4;
                    break;
                }
                break;
            case -256845969:
                if (str.equals("hintTextColor")) {
                    c6 = 5;
                    break;
                }
                break;
            case -186579527:
                if (str.equals("hideWhenScrolling")) {
                    c6 = 6;
                    break;
                }
                break;
            case -146361959:
                if (str.equals("cancelButtonText")) {
                    c6 = 7;
                    break;
                }
                break;
            case -109380883:
                if (str.equals("disableBackButtonOverride")) {
                    c6 = '\b';
                    break;
                }
                break;
            case -39414888:
                if (str.equals("shouldShowHintSearchIcon")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 598246771:
                if (str.equals("placeholder")) {
                    c6 = '\n';
                    break;
                }
                break;
            case 1327599912:
                if (str.equals("tintColor")) {
                    c6 = 11;
                    break;
                }
                break;
            case 1399891586:
                if (str.equals("allowToolbarIntegration")) {
                    c6 = '\f';
                    break;
                }
                break;
            case 1584806451:
                if (str.equals("obscureBackground")) {
                    c6 = '\r';
                    break;
                }
                break;
            case 1638055017:
                if (str.equals("autoFocus")) {
                    c6 = 14;
                    break;
                }
                break;
            case 1706976804:
                if (str.equals("inputType")) {
                    c6 = 15;
                    break;
                }
                break;
            case 1792938725:
                if (str.equals(AdRevenueScheme.PLACEMENT)) {
                    c6 = 16;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSSearchBarManagerInterface) this.mViewManager).setHideNavigationBar(t5, (String) obj);
                break;
            case 1:
                ((RNSSearchBarManagerInterface) this.mViewManager).setHeaderIconColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 2:
                ((RNSSearchBarManagerInterface) this.mViewManager).setAutoCapitalize(t5, (String) obj);
                break;
            case 3:
                ((RNSSearchBarManagerInterface) this.mViewManager).setTextColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 4:
                ((RNSSearchBarManagerInterface) this.mViewManager).setBarTintColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 5:
                ((RNSSearchBarManagerInterface) this.mViewManager).setHintTextColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 6:
                ((RNSSearchBarManagerInterface) this.mViewManager).setHideWhenScrolling(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 7:
                ((RNSSearchBarManagerInterface) this.mViewManager).setCancelButtonText(t5, obj != null ? (String) obj : null);
                break;
            case '\b':
                ((RNSSearchBarManagerInterface) this.mViewManager).setDisableBackButtonOverride(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\t':
                ((RNSSearchBarManagerInterface) this.mViewManager).setShouldShowHintSearchIcon(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '\n':
                ((RNSSearchBarManagerInterface) this.mViewManager).setPlaceholder(t5, obj != null ? (String) obj : null);
                break;
            case 11:
                ((RNSSearchBarManagerInterface) this.mViewManager).setTintColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '\f':
                ((RNSSearchBarManagerInterface) this.mViewManager).setAllowToolbarIntegration(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '\r':
                ((RNSSearchBarManagerInterface) this.mViewManager).setObscureBackground(t5, (String) obj);
                break;
            case 14:
                ((RNSSearchBarManagerInterface) this.mViewManager).setAutoFocus(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 15:
                ((RNSSearchBarManagerInterface) this.mViewManager).setInputType(t5, obj != null ? (String) obj : null);
                break;
            case 16:
                ((RNSSearchBarManagerInterface) this.mViewManager).setPlacement(t5, (String) obj);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
