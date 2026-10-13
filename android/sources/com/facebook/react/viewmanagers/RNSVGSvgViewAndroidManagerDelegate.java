package com.facebook.react.viewmanagers;

import android.view.View;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ReactClippingViewGroupHelper;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSVGSvgViewAndroidManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGSvgViewAndroidManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGSvgViewAndroidManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGSvgViewAndroidManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -2064426617:
                if (str.equals("bbHeight")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1989576717:
                if (str.equals(ViewProps.BORDER_RIGHT_COLOR)) {
                    c6 = 1;
                    break;
                }
                break;
            case -1697814026:
                if (str.equals("backfaceVisibility")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1567958285:
                if (str.equals("vbHeight")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1470826662:
                if (str.equals(ViewProps.BORDER_TOP_COLOR)) {
                    c6 = 4;
                    break;
                }
                break;
            case -1308858324:
                if (str.equals(ViewProps.BORDER_BOTTOM_COLOR)) {
                    c6 = 5;
                    break;
                }
                break;
            case -1228066334:
                if (str.equals("borderTopLeftRadius")) {
                    c6 = 6;
                    break;
                }
                break;
            case -1141400650:
                if (str.equals("accessible")) {
                    c6 = 7;
                    break;
                }
                break;
            case -1122140597:
                if (str.equals(ViewProps.BORDER_TOP_START_RADIUS)) {
                    c6 = '\b';
                    break;
                }
                break;
            case -867333731:
                if (str.equals(ViewProps.BORDER_BOTTOM_START_RADIUS)) {
                    c6 = '\t';
                    break;
                }
                break;
            case -679581037:
                if (str.equals("hasTVPreferredFocus")) {
                    c6 = '\n';
                    break;
                }
                break;
            case -631506969:
                if (str.equals("nextFocusDown")) {
                    c6 = 11;
                    break;
                }
                break;
            case -631278772:
                if (str.equals("nextFocusLeft")) {
                    c6 = '\f';
                    break;
                }
                break;
            case -483490364:
                if (str.equals(ViewProps.BORDER_TOP_END_RADIUS)) {
                    c6 = '\r';
                    break;
                }
                break;
            case -329721498:
                if (str.equals("bbWidth")) {
                    c6 = 14;
                    break;
                }
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = 15;
                    break;
                }
                break;
            case -252105751:
                if (str.equals(ReactClippingViewGroupHelper.PROP_REMOVE_CLIPPED_SUBVIEWS)) {
                    c6 = 16;
                    break;
                }
                break;
            case -242276144:
                if (str.equals(ViewProps.BORDER_LEFT_COLOR)) {
                    c6 = 17;
                    break;
                }
                break;
            case -223134121:
                if (str.equals(ViewProps.BORDER_START_END_RADIUS)) {
                    c6 = 18;
                    break;
                }
                break;
            case -148030058:
                if (str.equals(ViewProps.BORDER_BOTTOM_END_RADIUS)) {
                    c6 = 19;
                    break;
                }
                break;
            case -109689771:
                if (str.equals("nativeForegroundAndroid")) {
                    c6 = 20;
                    break;
                }
                break;
            case -27894242:
                if (str.equals(ViewProps.BORDER_START_START_RADIUS)) {
                    c6 = 21;
                    break;
                }
                break;
            case 3351622:
                if (str.equals("minX")) {
                    c6 = 22;
                    break;
                }
                break;
            case 3351623:
                if (str.equals("minY")) {
                    c6 = 23;
                    break;
                }
                break;
            case 92903173:
                if (str.equals("align")) {
                    c6 = 24;
                    break;
                }
                break;
            case 94842723:
                if (str.equals(ViewProps.COLOR)) {
                    c6 = 25;
                    break;
                }
                break;
            case 240482938:
                if (str.equals("vbWidth")) {
                    c6 = 26;
                    break;
                }
                break;
            case 306963138:
                if (str.equals(ViewProps.BORDER_BLOCK_START_COLOR)) {
                    c6 = 27;
                    break;
                }
                break;
            case 333432965:
                if (str.equals("borderTopRightRadius")) {
                    c6 = 28;
                    break;
                }
                break;
            case 503397728:
                if (str.equals("nextFocusForward")) {
                    c6 = 29;
                    break;
                }
                break;
            case 581268560:
                if (str.equals("borderBottomLeftRadius")) {
                    c6 = 30;
                    break;
                }
                break;
            case 588239831:
                if (str.equals("borderBottomRightRadius")) {
                    c6 = 31;
                    break;
                }
                break;
            case 660795168:
                if (str.equals("nextFocusUp")) {
                    c6 = ' ';
                    break;
                }
                break;
            case 684610594:
                if (str.equals(ViewProps.BORDER_BLOCK_COLOR)) {
                    c6 = '!';
                    break;
                }
                break;
            case 722830999:
                if (str.equals(ViewProps.BORDER_COLOR)) {
                    c6 = '\"';
                    break;
                }
                break;
            case 737768677:
                if (str.equals("borderStyle")) {
                    c6 = '#';
                    break;
                }
                break;
            case 762983977:
                if (str.equals(ViewProps.BORDER_BLOCK_END_COLOR)) {
                    c6 = '$';
                    break;
                }
                break;
            case 910681861:
                if (str.equals(ViewProps.BORDER_END_START_RADIUS)) {
                    c6 = '%';
                    break;
                }
                break;
            case 926871597:
                if (str.equals("hitSlop")) {
                    c6 = '&';
                    break;
                }
                break;
            case 1220735892:
                if (str.equals(ViewProps.BORDER_END_COLOR)) {
                    c6 = '\'';
                    break;
                }
                break;
            case 1349188574:
                if (str.equals("borderRadius")) {
                    c6 = '(';
                    break;
                }
                break;
            case 1629011506:
                if (str.equals("focusable")) {
                    c6 = ')';
                    break;
                }
                break;
            case 1667773924:
                if (str.equals(ViewProps.NEEDS_OFFSCREEN_ALPHA_COMPOSITING)) {
                    c6 = '*';
                    break;
                }
                break;
            case 1735382270:
                if (str.equals(ViewProps.BORDER_END_END_RADIUS)) {
                    c6 = '+';
                    break;
                }
                break;
            case 1747724810:
                if (str.equals("nativeBackgroundAndroid")) {
                    c6 = ',';
                    break;
                }
                break;
            case 1908075304:
                if (str.equals("meetOrSlice")) {
                    c6 = '-';
                    break;
                }
                break;
            case 1910855543:
                if (str.equals("nextFocusRight")) {
                    c6 = '.';
                    break;
                }
                break;
            case 2119889261:
                if (str.equals(ViewProps.BORDER_START_COLOR)) {
                    c6 = '/';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBbHeight(t5, new DynamicFromObject(obj));
                break;
            case 1:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderRightColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 2:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBackfaceVisibility(t5, obj != null ? (String) obj : null);
                break;
            case 3:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setVbHeight(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 4:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderTopColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 5:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBottomColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 6:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderTopLeftRadius(t5, new DynamicFromObject(obj));
                break;
            case 7:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setAccessible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '\b':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderTopStartRadius(t5, new DynamicFromObject(obj));
                break;
            case '\t':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBottomStartRadius(t5, new DynamicFromObject(obj));
                break;
            case '\n':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setHasTVPreferredFocus(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 11:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNextFocusDown(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '\f':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNextFocusLeft(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '\r':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderTopEndRadius(t5, new DynamicFromObject(obj));
                break;
            case 14:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBbWidth(t5, new DynamicFromObject(obj));
                break;
            case 15:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setPointerEvents(t5, obj != null ? (String) obj : null);
                break;
            case 16:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setRemoveClippedSubviews(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 17:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderLeftColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 18:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderStartEndRadius(t5, new DynamicFromObject(obj));
                break;
            case 19:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBottomEndRadius(t5, new DynamicFromObject(obj));
                break;
            case 20:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNativeForegroundAndroid(t5, (ReadableMap) obj);
                break;
            case 21:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderStartStartRadius(t5, new DynamicFromObject(obj));
                break;
            case 22:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setMinX(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 23:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setMinY(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 24:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setAlign(t5, obj != null ? (String) obj : null);
                break;
            case 25:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 26:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setVbWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 27:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBlockStartColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 28:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderTopRightRadius(t5, new DynamicFromObject(obj));
                break;
            case 29:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNextFocusForward(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 30:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBottomLeftRadius(t5, new DynamicFromObject(obj));
                break;
            case 31:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBottomRightRadius(t5, new DynamicFromObject(obj));
                break;
            case ' ':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNextFocusUp(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '!':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBlockColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '\"':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '#':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderStyle(t5, obj != null ? (String) obj : null);
                break;
            case '$':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderBlockEndColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderEndStartRadius(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setHitSlop(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderEndColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '(':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderRadius(t5, new DynamicFromObject(obj));
                break;
            case ')':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setFocusable(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '*':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNeedsOffscreenAlphaCompositing(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderEndEndRadius(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNativeBackgroundAndroid(t5, (ReadableMap) obj);
                break;
            case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setMeetOrSlice(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '.':
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setNextFocusRight(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                ((RNSVGSvgViewAndroidManagerInterface) this.mViewManager).setBorderStartColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
