package com.facebook.react.viewmanagers;

import android.view.View;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSModalScreenManagerInterface;

/* loaded from: classes3.dex */
public class RNSModalScreenManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSModalScreenManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSModalScreenManagerDelegate(BaseViewManager baseViewManager) {
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
            case 2097450072:
                if (str.equals("sheetExpandsWhenScrolledToEdge")) {
                    c6 = '\'';
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
                ((RNSModalScreenManagerInterface) this.mViewManager).setSynchronousShadowStateUpdatesEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 1:
                ((RNSModalScreenManagerInterface) this.mViewManager).setBottomScrollEdgeEffect(t5, (String) obj);
                break;
            case 2:
                ((RNSModalScreenManagerInterface) this.mViewManager).setHomeIndicatorHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 3:
                ((RNSModalScreenManagerInterface) this.mViewManager).setTopScrollEdgeEffect(t5, (String) obj);
                break;
            case 4:
                ((RNSModalScreenManagerInterface) this.mViewManager).setGestureEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 5:
                ((RNSModalScreenManagerInterface) this.mViewManager).setLeftScrollEdgeEffect(t5, (String) obj);
                break;
            case 6:
                ((RNSModalScreenManagerInterface) this.mViewManager).setHideKeyboardOnSwipe(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 7:
                ((RNSModalScreenManagerInterface) this.mViewManager).setRightScrollEdgeEffect(t5, (String) obj);
                break;
            case '\b':
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetCornerRadius(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case '\t':
                ((RNSModalScreenManagerInterface) this.mViewManager).setNavigationBarHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\n':
                ((RNSModalScreenManagerInterface) this.mViewManager).setStatusBarTranslucent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 11:
                ((RNSModalScreenManagerInterface) this.mViewManager).setStackPresentation(t5, (String) obj);
                break;
            case '\f':
                ((RNSModalScreenManagerInterface) this.mViewManager).setActivityState(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case '\r':
                ((RNSModalScreenManagerInterface) this.mViewManager).setStatusBarColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 14:
                ((RNSModalScreenManagerInterface) this.mViewManager).setStatusBarStyle(t5, obj != null ? (String) obj : null);
                break;
            case 15:
                ((RNSModalScreenManagerInterface) this.mViewManager).setFullScreenSwipeShadowEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 16:
                ((RNSModalScreenManagerInterface) this.mViewManager).setStackAnimation(t5, (String) obj);
                break;
            case 17:
                ((RNSModalScreenManagerInterface) this.mViewManager).setNavigationBarColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 18:
                ((RNSModalScreenManagerInterface) this.mViewManager).setScreenId(t5, obj == null ? "" : (String) obj);
                break;
            case 19:
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetInitialDetent(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 20:
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetAllowedDetents(t5, (ReadableArray) obj);
                break;
            case 21:
                ((RNSModalScreenManagerInterface) this.mViewManager).setReplaceAnimation(t5, (String) obj);
                break;
            case 22:
                ((RNSModalScreenManagerInterface) this.mViewManager).setPreventNativeDismiss(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 23:
                ((RNSModalScreenManagerInterface) this.mViewManager).setIosOrientationInheritanceFixEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 24:
                ((RNSModalScreenManagerInterface) this.mViewManager).setStatusBarHidden(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 25:
                ((RNSModalScreenManagerInterface) this.mViewManager).setFullScreenSwipeEnabled(t5, (String) obj);
                break;
            case 26:
                ((RNSModalScreenManagerInterface) this.mViewManager).setGestureResponseDistance(t5, (ReadableMap) obj);
                break;
            case 27:
                ((RNSModalScreenManagerInterface) this.mViewManager).setScreenOrientation(t5, obj != null ? (String) obj : null);
                break;
            case 28:
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetLargestUndimmedDetent(t5, obj != null ? ((Double) obj).intValue() : -1);
                break;
            case 29:
                ((RNSModalScreenManagerInterface) this.mViewManager).setTransitionDuration(t5, obj == null ? 500 : ((Double) obj).intValue());
                break;
            case 30:
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetShouldOverflowTopInset(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 31:
                ((RNSModalScreenManagerInterface) this.mViewManager).setSwipeDirection(t5, (String) obj);
                break;
            case ' ':
                ((RNSModalScreenManagerInterface) this.mViewManager).setCustomAnimationOnSwipe(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '!':
                ((RNSModalScreenManagerInterface) this.mViewManager).setNavigationBarTranslucent(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\"':
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetElevation(t5, obj != null ? ((Double) obj).intValue() : 24);
                break;
            case '#':
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetDefaultResizeAnimationEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case '$':
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetGrabberVisible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                ((RNSModalScreenManagerInterface) this.mViewManager).setStatusBarAnimation(t5, obj != null ? (String) obj : null);
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                ((RNSModalScreenManagerInterface) this.mViewManager).setNativeBackButtonDismissalEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                ((RNSModalScreenManagerInterface) this.mViewManager).setSheetExpandsWhenScrolledToEdge(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
