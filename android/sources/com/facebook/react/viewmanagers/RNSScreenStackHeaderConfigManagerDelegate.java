package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSScreenStackHeaderConfigManagerInterface;

/* loaded from: classes3.dex */
public class RNSScreenStackHeaderConfigManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSScreenStackHeaderConfigManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSScreenStackHeaderConfigManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -2035671681:
                if (str.equals("synchronousShadowStateUpdatesEnabled")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1941136198:
                if (str.equals("consumeLeftInset")) {
                    c6 = 1;
                    break;
                }
                break;
            case -1829317469:
                if (str.equals("userInterfaceStyle")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1822687399:
                if (str.equals("translucent")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1799367701:
                if (str.equals("titleColor")) {
                    c6 = 4;
                    break;
                }
                break;
            case -1795707688:
                if (str.equals("blurEffect")) {
                    c6 = 5;
                    break;
                }
                break;
            case -1774658170:
                if (str.equals("largeTitleColor")) {
                    c6 = 6;
                    break;
                }
                break;
            case -1715368693:
                if (str.equals("titleFontFamily")) {
                    c6 = 7;
                    break;
                }
                break;
            case -1503810304:
                if (str.equals("disableBackButtonMenu")) {
                    c6 = '\b';
                    break;
                }
                break;
            case -1225100257:
                if (str.equals("titleFontWeight")) {
                    c6 = '\t';
                    break;
                }
                break;
            case -1217487446:
                if (str.equals(ViewProps.HIDDEN)) {
                    c6 = '\n';
                    break;
                }
                break;
            case -1094575123:
                if (str.equals("largeTitleFontSize")) {
                    c6 = 11;
                    break;
                }
                break;
            case -1093089076:
                if (str.equals("backButtonDisplayMode")) {
                    c6 = '\f';
                    break;
                }
                break;
            case -1063138943:
                if (str.equals("backTitleVisible")) {
                    c6 = '\r';
                    break;
                }
                break;
            case -962590849:
                if (str.equals("direction")) {
                    c6 = 14;
                    break;
                }
                break;
            case -389245640:
                if (str.equals("largeTitleBackgroundColor")) {
                    c6 = 15;
                    break;
                }
                break;
            case -360738525:
                if (str.equals("legacyTopInsetBehavior")) {
                    c6 = 16;
                    break;
                }
                break;
            case -140063148:
                if (str.equals("backButtonInCustomView")) {
                    c6 = 17;
                    break;
                }
                break;
            case -134815516:
                if (str.equals("consumeTopInset")) {
                    c6 = 18;
                    break;
                }
                break;
            case 347216:
                if (str.equals("largeTitleFontFamily")) {
                    c6 = 19;
                    break;
                }
                break;
            case 94842723:
                if (str.equals(ViewProps.COLOR)) {
                    c6 = 20;
                    break;
                }
                break;
            case 110371416:
                if (str.equals(AlertFragment.ARG_TITLE)) {
                    c6 = 21;
                    break;
                }
                break;
            case 183888321:
                if (str.equals("backTitleFontSize")) {
                    c6 = 22;
                    break;
                }
                break;
            case 243070244:
                if (str.equals("backTitleFontFamily")) {
                    c6 = 23;
                    break;
                }
                break;
            case 339462402:
                if (str.equals("hideShadow")) {
                    c6 = 24;
                    break;
                }
                break;
            case 490615652:
                if (str.equals("largeTitleFontWeight")) {
                    c6 = 25;
                    break;
                }
                break;
            case 946001674:
                if (str.equals("headerRightBarButtonItems")) {
                    c6 = 26;
                    break;
                }
                break;
            case 1014803837:
                if (str.equals("consumeRightInset")) {
                    c6 = 27;
                    break;
                }
                break;
            case 1038753243:
                if (str.equals("hideBackButton")) {
                    c6 = 28;
                    break;
                }
                break;
            case 1249557231:
                if (str.equals("headerLeftBarButtonItems")) {
                    c6 = 29;
                    break;
                }
                break;
            case 1287124693:
                if (str.equals(ViewProps.BACKGROUND_COLOR)) {
                    c6 = 30;
                    break;
                }
                break;
            case 1324688817:
                if (str.equals("backTitle")) {
                    c6 = 31;
                    break;
                }
                break;
            case 1467093014:
                if (str.equals("consumeBottomInset")) {
                    c6 = ' ';
                    break;
                }
                break;
            case 1518161768:
                if (str.equals("titleFontSize")) {
                    c6 = '!';
                    break;
                }
                break;
            case 1564506303:
                if (str.equals("largeTitleHideShadow")) {
                    c6 = '\"';
                    break;
                }
                break;
            case 2029798365:
                if (str.equals("largeTitle")) {
                    c6 = '#';
                    break;
                }
                break;
            case 2099541337:
                if (str.equals("topInsetEnabled")) {
                    c6 = '$';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setSynchronousShadowStateUpdatesEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 1:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setConsumeLeftInset(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 2:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setUserInterfaceStyle(t5, (String) obj);
                break;
            case 3:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTranslucent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 4:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTitleColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 5:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBlurEffect(t5, (String) obj);
                break;
            case 6:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitleColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 7:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTitleFontFamily(t5, obj != null ? (String) obj : null);
                break;
            case '\b':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setDisableBackButtonMenu(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\t':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTitleFontWeight(t5, obj != null ? (String) obj : null);
                break;
            case '\n':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 11:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitleFontSize(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '\f':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackButtonDisplayMode(t5, (String) obj);
                break;
            case '\r':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackTitleVisible(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 14:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setDirection(t5, (String) obj);
                break;
            case 15:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitleBackgroundColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 16:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLegacyTopInsetBehavior(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 17:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackButtonInCustomView(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 18:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setConsumeTopInset(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 19:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitleFontFamily(t5, obj != null ? (String) obj : null);
                break;
            case 20:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 21:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTitle(t5, obj != null ? (String) obj : null);
                break;
            case 22:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackTitleFontSize(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 23:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackTitleFontFamily(t5, obj != null ? (String) obj : null);
                break;
            case 24:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setHideShadow(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 25:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitleFontWeight(t5, obj != null ? (String) obj : null);
                break;
            case 26:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setHeaderRightBarButtonItems(t5, (ReadableArray) obj);
                break;
            case 27:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setConsumeRightInset(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 28:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setHideBackButton(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 29:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setHeaderLeftBarButtonItems(t5, (ReadableArray) obj);
                break;
            case 30:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackgroundColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 31:
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setBackTitle(t5, obj != null ? (String) obj : null);
                break;
            case ' ':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setConsumeBottomInset(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '!':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTitleFontSize(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '\"':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitleHideShadow(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '#':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setLargeTitle(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '$':
                ((RNSScreenStackHeaderConfigManagerInterface) this.mViewManager).setTopInsetEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
