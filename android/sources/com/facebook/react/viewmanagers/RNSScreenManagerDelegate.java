package com.facebook.react.viewmanagers;

import android.view.View;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSScreenManagerInterface;

/* loaded from: classes3.dex */
public class RNSScreenManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSScreenManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSScreenManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        char c6;
        str.getClass();
        switch (str.hashCode()) {
            case -2035671681:
                if (str.equals("synchronousShadowStateUpdatesEnabled")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case -1991728986:
                if (str.equals("bottomScrollEdgeEffect")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case -1937389126:
                if (str.equals("homeIndicatorHidden")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case -1871891504:
                if (str.equals("topScrollEdgeEffect")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case -1853558344:
                if (str.equals("gestureEnabled")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case -1791070590:
                if (str.equals("leftScrollEdgeEffect")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case -1734097646:
                if (str.equals("hideKeyboardOnSwipe")) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case -1628518761:
                if (str.equals("rightScrollEdgeEffect")) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            case -1349152186:
                if (str.equals("sheetCornerRadius")) {
                    c6 = '\b';
                    break;
                }
                c6 = 65535;
                break;
            case -1322084375:
                if (str.equals("navigationBarHidden")) {
                    c6 = '\t';
                    break;
                }
                c6 = 65535;
                break;
            case -1156137512:
                if (str.equals("statusBarTranslucent")) {
                    c6 = '\n';
                    break;
                }
                c6 = 65535;
                break;
            case -1150711358:
                if (str.equals("stackPresentation")) {
                    c6 = 11;
                    break;
                }
                c6 = 65535;
                break;
            case -1047235902:
                if (str.equals("activityState")) {
                    c6 = '\f';
                    break;
                }
                c6 = 65535;
                break;
            case -973702878:
                if (str.equals("statusBarColor")) {
                    c6 = '\r';
                    break;
                }
                c6 = 65535;
                break;
            case -958765200:
                if (str.equals("statusBarStyle")) {
                    c6 = 14;
                    break;
                }
                c6 = 65535;
                break;
            case -952227806:
                if (str.equals("fullScreenSwipeShadowEnabled")) {
                    c6 = 15;
                    break;
                }
                c6 = 65535;
                break;
            case -577711652:
                if (str.equals("stackAnimation")) {
                    c6 = 16;
                    break;
                }
                c6 = 65535;
                break;
            case -462720700:
                if (str.equals("navigationBarColor")) {
                    c6 = 17;
                    break;
                }
                c6 = 65535;
                break;
            case -411607385:
                if (str.equals("screenId")) {
                    c6 = 18;
                    break;
                }
                c6 = 65535;
                break;
            case -381571779:
                if (str.equals("sheetInitialDetent")) {
                    c6 = 19;
                    break;
                }
                c6 = 65535;
                break;
            case -274098190:
                if (str.equals("sheetAllowedDetents")) {
                    c6 = 20;
                    break;
                }
                c6 = 65535;
                break;
            case -257141968:
                if (str.equals("replaceAnimation")) {
                    c6 = 21;
                    break;
                }
                c6 = 65535;
                break;
            case -166356101:
                if (str.equals("preventNativeDismiss")) {
                    c6 = 22;
                    break;
                }
                c6 = 65535;
                break;
            case -17805805:
                if (str.equals("iosOrientationInheritanceFixEnabled")) {
                    c6 = 23;
                    break;
                }
                c6 = 65535;
                break;
            case 17337291:
                if (str.equals("statusBarHidden")) {
                    c6 = 24;
                    break;
                }
                c6 = 65535;
                break;
            case 129956386:
                if (str.equals("fullScreenSwipeEnabled")) {
                    c6 = 25;
                    break;
                }
                c6 = 65535;
                break;
            case 187703999:
                if (str.equals("gestureResponseDistance")) {
                    c6 = 26;
                    break;
                }
                c6 = 65535;
                break;
            case 227582404:
                if (str.equals("screenOrientation")) {
                    c6 = 27;
                    break;
                }
                c6 = 65535;
                break;
            case 241896530:
                if (str.equals("sheetLargestUndimmedDetent")) {
                    c6 = 28;
                    break;
                }
                c6 = 65535;
                break;
            case 425064969:
                if (str.equals("transitionDuration")) {
                    c6 = 29;
                    break;
                }
                c6 = 65535;
                break;
            case 658632444:
                if (str.equals("sheetShouldOverflowTopInset")) {
                    c6 = 30;
                    break;
                }
                c6 = 65535;
                break;
            case 1082157413:
                if (str.equals("swipeDirection")) {
                    c6 = 31;
                    break;
                }
                c6 = 65535;
                break;
            case 1110843912:
                if (str.equals("customAnimationOnSwipe")) {
                    c6 = ' ';
                    break;
                }
                c6 = 65535;
                break;
            case 1116050554:
                if (str.equals("navigationBarTranslucent")) {
                    c6 = '!';
                    break;
                }
                c6 = 65535;
                break;
            case 1269009342:
                if (str.equals("sheetElevation")) {
                    c6 = '\"';
                    break;
                }
                c6 = 65535;
                break;
            case 1287164531:
                if (str.equals("sheetDefaultResizeAnimationEnabled")) {
                    c6 = '#';
                    break;
                }
                c6 = 65535;
                break;
            case 1357942638:
                if (str.equals("sheetGrabberVisible")) {
                    c6 = '$';
                    break;
                }
                c6 = 65535;
                break;
            case 1387359683:
                if (str.equals("statusBarAnimation")) {
                    c6 = '%';
                    break;
                }
                c6 = 65535;
                break;
            case 1729091548:
                if (str.equals("nativeBackButtonDismissalEnabled")) {
                    c6 = '&';
                    break;
                }
                c6 = 65535;
                break;
            case 2029667685:
                if (str.equals("androidResetScreenShadowStateOnOrientationChangeEnabled")) {
                    c6 = '\'';
                    break;
                }
                c6 = 65535;
                break;
            case 2097450072:
                if (str.equals("sheetExpandsWhenScrolledToEdge")) {
                    c6 = '(';
                    break;
                }
                c6 = 65535;
                break;
            default:
                c6 = 65535;
                break;
        }
        switch (c6) {
            case 0:
                ((RNSScreenManagerInterface) this.mViewManager).setSynchronousShadowStateUpdatesEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 1:
                ((RNSScreenManagerInterface) this.mViewManager).setBottomScrollEdgeEffect(t5, (String) obj);
                break;
            case 2:
                ((RNSScreenManagerInterface) this.mViewManager).setHomeIndicatorHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 3:
                ((RNSScreenManagerInterface) this.mViewManager).setTopScrollEdgeEffect(t5, (String) obj);
                break;
            case 4:
                ((RNSScreenManagerInterface) this.mViewManager).setGestureEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 5:
                ((RNSScreenManagerInterface) this.mViewManager).setLeftScrollEdgeEffect(t5, (String) obj);
                break;
            case 6:
                ((RNSScreenManagerInterface) this.mViewManager).setHideKeyboardOnSwipe(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 7:
                ((RNSScreenManagerInterface) this.mViewManager).setRightScrollEdgeEffect(t5, (String) obj);
                break;
            case '\b':
                ((RNSScreenManagerInterface) this.mViewManager).setSheetCornerRadius(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case '\t':
                ((RNSScreenManagerInterface) this.mViewManager).setNavigationBarHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\n':
                ((RNSScreenManagerInterface) this.mViewManager).setStatusBarTranslucent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 11:
                ((RNSScreenManagerInterface) this.mViewManager).setStackPresentation(t5, (String) obj);
                break;
            case '\f':
                ((RNSScreenManagerInterface) this.mViewManager).setActivityState(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case '\r':
                ((RNSScreenManagerInterface) this.mViewManager).setStatusBarColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 14:
                ((RNSScreenManagerInterface) this.mViewManager).setStatusBarStyle(t5, obj != null ? (String) obj : null);
                break;
            case 15:
                ((RNSScreenManagerInterface) this.mViewManager).setFullScreenSwipeShadowEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 16:
                ((RNSScreenManagerInterface) this.mViewManager).setStackAnimation(t5, (String) obj);
                break;
            case 17:
                ((RNSScreenManagerInterface) this.mViewManager).setNavigationBarColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 18:
                ((RNSScreenManagerInterface) this.mViewManager).setScreenId(t5, obj == null ? "" : (String) obj);
                break;
            case 19:
                ((RNSScreenManagerInterface) this.mViewManager).setSheetInitialDetent(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 20:
                ((RNSScreenManagerInterface) this.mViewManager).setSheetAllowedDetents(t5, (ReadableArray) obj);
                break;
            case 21:
                ((RNSScreenManagerInterface) this.mViewManager).setReplaceAnimation(t5, (String) obj);
                break;
            case 22:
                ((RNSScreenManagerInterface) this.mViewManager).setPreventNativeDismiss(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 23:
                ((RNSScreenManagerInterface) this.mViewManager).setIosOrientationInheritanceFixEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 24:
                ((RNSScreenManagerInterface) this.mViewManager).setStatusBarHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 25:
                ((RNSScreenManagerInterface) this.mViewManager).setFullScreenSwipeEnabled(t5, (String) obj);
                break;
            case 26:
                ((RNSScreenManagerInterface) this.mViewManager).setGestureResponseDistance(t5, (ReadableMap) obj);
                break;
            case 27:
                ((RNSScreenManagerInterface) this.mViewManager).setScreenOrientation(t5, obj != null ? (String) obj : null);
                break;
            case 28:
                ((RNSScreenManagerInterface) this.mViewManager).setSheetLargestUndimmedDetent(t5, obj != null ? ((Double) obj).intValue() : -1);
                break;
            case 29:
                ((RNSScreenManagerInterface) this.mViewManager).setTransitionDuration(t5, obj == null ? 500 : ((Double) obj).intValue());
                break;
            case 30:
                ((RNSScreenManagerInterface) this.mViewManager).setSheetShouldOverflowTopInset(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 31:
                ((RNSScreenManagerInterface) this.mViewManager).setSwipeDirection(t5, (String) obj);
                break;
            case ' ':
                ((RNSScreenManagerInterface) this.mViewManager).setCustomAnimationOnSwipe(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '!':
                ((RNSScreenManagerInterface) this.mViewManager).setNavigationBarTranslucent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\"':
                ((RNSScreenManagerInterface) this.mViewManager).setSheetElevation(t5, obj != null ? ((Double) obj).intValue() : 24);
                break;
            case '#':
                ((RNSScreenManagerInterface) this.mViewManager).setSheetDefaultResizeAnimationEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '$':
                ((RNSScreenManagerInterface) this.mViewManager).setSheetGrabberVisible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                ((RNSScreenManagerInterface) this.mViewManager).setStatusBarAnimation(t5, obj != null ? (String) obj : null);
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                ((RNSScreenManagerInterface) this.mViewManager).setNativeBackButtonDismissalEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                ((RNSScreenManagerInterface) this.mViewManager).setAndroidResetScreenShadowStateOnOrientationChangeEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '(':
                ((RNSScreenManagerInterface) this.mViewManager).setSheetExpandsWhenScrolledToEdge(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
