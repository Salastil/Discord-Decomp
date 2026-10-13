package com.facebook.react.viewmanagers;

import android.view.View;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNGestureHandlerButtonManagerInterface;

/* loaded from: classes3.dex */
public class RNGestureHandlerButtonManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNGestureHandlerButtonManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNGestureHandlerButtonManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        char c6;
        str.getClass();
        switch (str.hashCode()) {
            case -2143114526:
                if (str.equals("rippleRadius")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case -1989576717:
                if (str.equals(ViewProps.BORDER_RIGHT_COLOR)) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case -1971292586:
                if (str.equals(ViewProps.BORDER_RIGHT_WIDTH)) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case -1852182793:
                if (str.equals("underlayColor")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case -1609594047:
                if (str.equals(ViewProps.ENABLED)) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case -1537566178:
                if (str.equals("defaultUnderlayOpacity")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case -1470826662:
                if (str.equals(ViewProps.BORDER_TOP_COLOR)) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case -1452542531:
                if (str.equals(ViewProps.BORDER_TOP_WIDTH)) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            case -1308858324:
                if (str.equals(ViewProps.BORDER_BOTTOM_COLOR)) {
                    c6 = '\b';
                    break;
                }
                c6 = 65535;
                break;
            case -1290574193:
                if (str.equals(ViewProps.BORDER_BOTTOM_WIDTH)) {
                    c6 = '\t';
                    break;
                }
                c6 = 65535;
                break;
            case -1228066334:
                if (str.equals("borderTopLeftRadius")) {
                    c6 = '\n';
                    break;
                }
                c6 = 65535;
                break;
            case -1122140597:
                if (str.equals(ViewProps.BORDER_TOP_START_RADIUS)) {
                    c6 = 11;
                    break;
                }
                c6 = 65535;
                break;
            case -1062924828:
                if (str.equals("activeScale")) {
                    c6 = '\f';
                    break;
                }
                c6 = 65535;
                break;
            case -867333731:
                if (str.equals(ViewProps.BORDER_BOTTOM_START_RADIUS)) {
                    c6 = '\r';
                    break;
                }
                c6 = 65535;
                break;
            case -775297261:
                if (str.equals("rippleColor")) {
                    c6 = 14;
                    break;
                }
                c6 = 65535;
                break;
            case -661847159:
                if (str.equals("defaultScale")) {
                    c6 = 15;
                    break;
                }
                c6 = 65535;
                break;
            case -493736902:
                if (str.equals("hoverAnimationOutDuration")) {
                    c6 = 16;
                    break;
                }
                c6 = 65535;
                break;
            case -483490364:
                if (str.equals(ViewProps.BORDER_TOP_END_RADIUS)) {
                    c6 = 17;
                    break;
                }
                c6 = 65535;
                break;
            case -342936101:
                if (str.equals("longPressDuration")) {
                    c6 = 18;
                    break;
                }
                c6 = 65535;
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = 19;
                    break;
                }
                c6 = 65535;
                break;
            case -267466335:
                if (str.equals("hoverAnimationInDuration")) {
                    c6 = 20;
                    break;
                }
                c6 = 65535;
                break;
            case -242276144:
                if (str.equals(ViewProps.BORDER_LEFT_COLOR)) {
                    c6 = 21;
                    break;
                }
                c6 = 65535;
                break;
            case -223992013:
                if (str.equals(ViewProps.BORDER_LEFT_WIDTH)) {
                    c6 = 22;
                    break;
                }
                c6 = 65535;
                break;
            case -223134121:
                if (str.equals(ViewProps.BORDER_START_END_RADIUS)) {
                    c6 = 23;
                    break;
                }
                c6 = 65535;
                break;
            case -148030058:
                if (str.equals(ViewProps.BORDER_BOTTOM_END_RADIUS)) {
                    c6 = 24;
                    break;
                }
                c6 = 65535;
                break;
            case -81595965:
                if (str.equals("hoverUnderlayOpacity")) {
                    c6 = 25;
                    break;
                }
                c6 = 65535;
                break;
            case -27894242:
                if (str.equals(ViewProps.BORDER_START_START_RADIUS)) {
                    c6 = 26;
                    break;
                }
                c6 = 65535;
                break;
            case 258651502:
                if (str.equals("hoverScale")) {
                    c6 = 27;
                    break;
                }
                c6 = 65535;
                break;
            case 306963138:
                if (str.equals(ViewProps.BORDER_BLOCK_START_COLOR)) {
                    c6 = 28;
                    break;
                }
                c6 = 65535;
                break;
            case 333432965:
                if (str.equals("borderTopRightRadius")) {
                    c6 = 29;
                    break;
                }
                c6 = 65535;
                break;
            case 529642498:
                if (str.equals(ViewProps.OVERFLOW)) {
                    c6 = 30;
                    break;
                }
                c6 = 65535;
                break;
            case 572861231:
                if (str.equals("hoverOpacity")) {
                    c6 = 31;
                    break;
                }
                c6 = 65535;
                break;
            case 580512033:
                if (str.equals("tapAnimationOutDuration")) {
                    c6 = ' ';
                    break;
                }
                c6 = 65535;
                break;
            case 581268560:
                if (str.equals("borderBottomLeftRadius")) {
                    c6 = '!';
                    break;
                }
                c6 = 65535;
                break;
            case 588239831:
                if (str.equals("borderBottomRightRadius")) {
                    c6 = '\"';
                    break;
                }
                c6 = 65535;
                break;
            case 608819877:
                if (str.equals("longPressAnimationOutDuration")) {
                    c6 = '#';
                    break;
                }
                c6 = 65535;
                break;
            case 684610594:
                if (str.equals(ViewProps.BORDER_BLOCK_COLOR)) {
                    c6 = '$';
                    break;
                }
                c6 = 65535;
                break;
            case 716811961:
                if (str.equals("activeUnderlayOpacity")) {
                    c6 = '%';
                    break;
                }
                c6 = 65535;
                break;
            case 722830999:
                if (str.equals(ViewProps.BORDER_COLOR)) {
                    c6 = '&';
                    break;
                }
                c6 = 65535;
                break;
            case 736910986:
                if (str.equals("defaultOpacity")) {
                    c6 = '\'';
                    break;
                }
                c6 = 65535;
                break;
            case 737768677:
                if (str.equals("borderStyle")) {
                    c6 = '(';
                    break;
                }
                c6 = 65535;
                break;
            case 741115130:
                if (str.equals(ViewProps.BORDER_WIDTH)) {
                    c6 = ')';
                    break;
                }
                c6 = 65535;
                break;
            case 762983977:
                if (str.equals(ViewProps.BORDER_BLOCK_END_COLOR)) {
                    c6 = '*';
                    break;
                }
                c6 = 65535;
                break;
            case 910681861:
                if (str.equals(ViewProps.BORDER_END_START_RADIUS)) {
                    c6 = '+';
                    break;
                }
                c6 = 65535;
                break;
            case 1220735892:
                if (str.equals(ViewProps.BORDER_END_COLOR)) {
                    c6 = ',';
                    break;
                }
                c6 = 65535;
                break;
            case 1239020023:
                if (str.equals(ViewProps.BORDER_END_WIDTH)) {
                    c6 = '-';
                    break;
                }
                c6 = 65535;
                break;
            case 1349188574:
                if (str.equals("borderRadius")) {
                    c6 = '.';
                    break;
                }
                c6 = 65535;
                break;
            case 1387411372:
                if (str.equals("touchSoundDisabled")) {
                    c6 = '/';
                    break;
                }
                c6 = 65535;
                break;
            case 1429754842:
                if (str.equals("tapAnimationInDuration")) {
                    c6 = '0';
                    break;
                }
                c6 = 65535;
                break;
            case 1667773924:
                if (str.equals(ViewProps.NEEDS_OFFSCREEN_ALPHA_COMPOSITING)) {
                    c6 = '1';
                    break;
                }
                c6 = 65535;
                break;
            case 1686617758:
                if (str.equals("exclusive")) {
                    c6 = '2';
                    break;
                }
                c6 = 65535;
                break;
            case 1735382270:
                if (str.equals(ViewProps.BORDER_END_END_RADIUS)) {
                    c6 = '3';
                    break;
                }
                c6 = 65535;
                break;
            case 1825644485:
                if (str.equals("borderless")) {
                    c6 = '4';
                    break;
                }
                c6 = 65535;
                break;
            case 1848327717:
                if (str.equals("activeOpacity")) {
                    c6 = '5';
                    break;
                }
                c6 = 65535;
                break;
            case 1984457027:
                if (str.equals("foreground")) {
                    c6 = '6';
                    break;
                }
                c6 = 65535;
                break;
            case 2119889261:
                if (str.equals(ViewProps.BORDER_START_COLOR)) {
                    c6 = '7';
                    break;
                }
                c6 = 65535;
                break;
            case 2138173392:
                if (str.equals(ViewProps.BORDER_START_WIDTH)) {
                    c6 = '8';
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
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setRippleRadius(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 1:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderRightColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 2:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderRightWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 3:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setUnderlayColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 4:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setEnabled(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 5:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setDefaultUnderlayOpacity(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 6:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderTopColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 7:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderTopWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '\b':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBottomColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case '\t':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBottomWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '\n':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderTopLeftRadius(t5, new DynamicFromObject(obj));
                break;
            case 11:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderTopStartRadius(t5, new DynamicFromObject(obj));
                break;
            case '\f':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setActiveScale(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case '\r':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBottomStartRadius(t5, new DynamicFromObject(obj));
                break;
            case 14:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setRippleColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 15:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setDefaultScale(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 16:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setHoverAnimationOutDuration(t5, obj != null ? ((Double) obj).intValue() : 100);
                break;
            case 17:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderTopEndRadius(t5, new DynamicFromObject(obj));
                break;
            case 18:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setLongPressDuration(t5, obj != null ? ((Double) obj).intValue() : -1);
                break;
            case 19:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setPointerEvents(t5, (String) obj);
                break;
            case 20:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setHoverAnimationInDuration(t5, obj != null ? ((Double) obj).intValue() : 50);
                break;
            case 21:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderLeftColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 22:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderLeftWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 23:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderStartEndRadius(t5, new DynamicFromObject(obj));
                break;
            case 24:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBottomEndRadius(t5, new DynamicFromObject(obj));
                break;
            case 25:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setHoverUnderlayOpacity(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case 26:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderStartStartRadius(t5, new DynamicFromObject(obj));
                break;
            case 27:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setHoverScale(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case 28:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBlockStartColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 29:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderTopRightRadius(t5, new DynamicFromObject(obj));
                break;
            case 30:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setOverflow(t5, obj == null ? ViewProps.VISIBLE : (String) obj);
                break;
            case 31:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setHoverOpacity(t5, obj != null ? ((Double) obj).floatValue() : -1.0f);
                break;
            case ' ':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setTapAnimationOutDuration(t5, obj != null ? ((Double) obj).intValue() : 100);
                break;
            case '!':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBottomLeftRadius(t5, new DynamicFromObject(obj));
                break;
            case '\"':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBottomRightRadius(t5, new DynamicFromObject(obj));
                break;
            case '#':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setLongPressAnimationOutDuration(t5, obj != null ? ((Double) obj).intValue() : -1);
                break;
            case '$':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBlockColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setActiveUnderlayOpacity(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setDefaultOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case '(':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderStyle(t5, obj == null ? "solid" : (String) obj);
                break;
            case ')':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '*':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderBlockEndColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderEndStartRadius(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderEndColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderEndWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '.':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderRadius(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setTouchSoundDisabled(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '0':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setTapAnimationInDuration(t5, obj != null ? ((Double) obj).intValue() : 50);
                break;
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setNeedsOffscreenAlphaCompositing(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '2':
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setExclusive(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderEndEndRadius(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderless(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setActiveOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setForeground(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderStartColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                ((RNGestureHandlerButtonManagerInterface) this.mViewManager).setBorderStartWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
