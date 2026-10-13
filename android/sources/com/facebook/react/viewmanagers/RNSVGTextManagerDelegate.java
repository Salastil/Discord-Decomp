package com.facebook.react.viewmanagers;

import android.view.View;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSVGTextManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGTextManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGTextManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGTextManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1603134955:
                if (str.equals("lengthAdjust")) {
                    c6 = 0;
                    break;
                }
                break;
            case -1274492040:
                if (str.equals(ViewProps.FILTER)) {
                    c6 = 1;
                    break;
                }
                break;
            case -1267206133:
                if (str.equals(ViewProps.OPACITY)) {
                    c6 = 2;
                    break;
                }
                break;
            case -1171891896:
                if (str.equals("alignmentBaseline")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1139902161:
                if (str.equals("verticalAlign")) {
                    c6 = 4;
                    break;
                }
                break;
            case -1081239615:
                if (str.equals("matrix")) {
                    c6 = 5;
                    break;
                }
                break;
            case -993894751:
                if (str.equals("propList")) {
                    c6 = 6;
                    break;
                }
                break;
            case -933864895:
                if (str.equals("markerEnd")) {
                    c6 = 7;
                    break;
                }
                break;
            case -933857362:
                if (str.equals("markerMid")) {
                    c6 = '\b';
                    break;
                }
                break;
            case -925180581:
                if (str.equals("rotate")) {
                    c6 = '\t';
                    break;
                }
                break;
            case -891980232:
                if (str.equals("stroke")) {
                    c6 = '\n';
                    break;
                }
                break;
            case -734428249:
                if (str.equals(ViewProps.FONT_WEIGHT)) {
                    c6 = 11;
                    break;
                }
                break;
            case -729118945:
                if (str.equals("fillRule")) {
                    c6 = '\f';
                    break;
                }
                break;
            case -416535885:
                if (str.equals("strokeOpacity")) {
                    c6 = '\r';
                    break;
                }
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = 14;
                    break;
                }
                break;
            case -53677816:
                if (str.equals("fillOpacity")) {
                    c6 = 15;
                    break;
                }
                break;
            case -44578051:
                if (str.equals("strokeDashoffset")) {
                    c6 = 16;
                    break;
                }
                break;
            case 120:
                if (str.equals("x")) {
                    c6 = 17;
                    break;
                }
                break;
            case 121:
                if (str.equals("y")) {
                    c6 = 18;
                    break;
                }
                break;
            case 3220:
                if (str.equals("dx")) {
                    c6 = 19;
                    break;
                }
                break;
            case 3221:
                if (str.equals("dy")) {
                    c6 = 20;
                    break;
                }
                break;
            case 3143043:
                if (str.equals("fill")) {
                    c6 = 21;
                    break;
                }
                break;
            case 3148879:
                if (str.equals("font")) {
                    c6 = 22;
                    break;
                }
                break;
            case 3344108:
                if (str.equals("mask")) {
                    c6 = 23;
                    break;
                }
                break;
            case 3373707:
                if (str.equals(StackTraceHelper.NAME_KEY)) {
                    c6 = 24;
                    break;
                }
                break;
            case 78845486:
                if (str.equals("strokeMiterlimit")) {
                    c6 = 25;
                    break;
                }
                break;
            case 94842723:
                if (str.equals(ViewProps.COLOR)) {
                    c6 = 26;
                    break;
                }
                break;
            case 104482996:
                if (str.equals("vectorEffect")) {
                    c6 = 27;
                    break;
                }
                break;
            case 217109576:
                if (str.equals("markerStart")) {
                    c6 = 28;
                    break;
                }
                break;
            case 275888445:
                if (str.equals("baselineShift")) {
                    c6 = 29;
                    break;
                }
                break;
            case 365601008:
                if (str.equals(ViewProps.FONT_SIZE)) {
                    c6 = 30;
                    break;
                }
                break;
            case 401643183:
                if (str.equals("strokeDasharray")) {
                    c6 = 31;
                    break;
                }
                break;
            case 778043962:
                if (str.equals("inlineSize")) {
                    c6 = ' ';
                    break;
                }
                break;
            case 917656469:
                if (str.equals("clipPath")) {
                    c6 = '!';
                    break;
                }
                break;
            case 917735020:
                if (str.equals("clipRule")) {
                    c6 = '\"';
                    break;
                }
                break;
            case 1027575302:
                if (str.equals("strokeLinecap")) {
                    c6 = '#';
                    break;
                }
                break;
            case 1637488243:
                if (str.equals("textLength")) {
                    c6 = '$';
                    break;
                }
                break;
            case 1671764162:
                if (str.equals(ViewProps.DISPLAY)) {
                    c6 = '%';
                    break;
                }
                break;
            case 1790285174:
                if (str.equals("strokeLinejoin")) {
                    c6 = '&';
                    break;
                }
                break;
            case 1847674614:
                if (str.equals("responsible")) {
                    c6 = '\'';
                    break;
                }
                break;
            case 1924065902:
                if (str.equals("strokeWidth")) {
                    c6 = '(';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGTextManagerInterface) this.mViewManager).setLengthAdjust(t5, obj != null ? (String) obj : null);
                break;
            case 1:
                ((RNSVGTextManagerInterface) this.mViewManager).setFilter(t5, obj != null ? (String) obj : null);
                break;
            case 2:
                this.mViewManager.setOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 3:
                ((RNSVGTextManagerInterface) this.mViewManager).setAlignmentBaseline(t5, obj != null ? (String) obj : null);
                break;
            case 4:
                ((RNSVGTextManagerInterface) this.mViewManager).setVerticalAlign(t5, new DynamicFromObject(obj));
                break;
            case 5:
                ((RNSVGTextManagerInterface) this.mViewManager).setMatrix(t5, (ReadableArray) obj);
                break;
            case 6:
                ((RNSVGTextManagerInterface) this.mViewManager).setPropList(t5, (ReadableArray) obj);
                break;
            case 7:
                ((RNSVGTextManagerInterface) this.mViewManager).setMarkerEnd(t5, obj != null ? (String) obj : null);
                break;
            case '\b':
                ((RNSVGTextManagerInterface) this.mViewManager).setMarkerMid(t5, obj != null ? (String) obj : null);
                break;
            case '\t':
                ((RNSVGTextManagerInterface) this.mViewManager).setRotate(t5, new DynamicFromObject(obj));
                break;
            case '\n':
                ((RNSVGTextManagerInterface) this.mViewManager).setStroke(t5, new DynamicFromObject(obj));
                break;
            case 11:
                ((RNSVGTextManagerInterface) this.mViewManager).setFontWeight(t5, new DynamicFromObject(obj));
                break;
            case '\f':
                ((RNSVGTextManagerInterface) this.mViewManager).setFillRule(t5, obj != null ? ((Double) obj).intValue() : 1);
                break;
            case '\r':
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 14:
                ((RNSVGTextManagerInterface) this.mViewManager).setPointerEvents(t5, obj != null ? (String) obj : null);
                break;
            case 15:
                ((RNSVGTextManagerInterface) this.mViewManager).setFillOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 16:
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeDashoffset(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 17:
                ((RNSVGTextManagerInterface) this.mViewManager).setX(t5, new DynamicFromObject(obj));
                break;
            case 18:
                ((RNSVGTextManagerInterface) this.mViewManager).setY(t5, new DynamicFromObject(obj));
                break;
            case 19:
                ((RNSVGTextManagerInterface) this.mViewManager).setDx(t5, new DynamicFromObject(obj));
                break;
            case 20:
                ((RNSVGTextManagerInterface) this.mViewManager).setDy(t5, new DynamicFromObject(obj));
                break;
            case 21:
                ((RNSVGTextManagerInterface) this.mViewManager).setFill(t5, new DynamicFromObject(obj));
                break;
            case 22:
                ((RNSVGTextManagerInterface) this.mViewManager).setFont(t5, new DynamicFromObject(obj));
                break;
            case 23:
                ((RNSVGTextManagerInterface) this.mViewManager).setMask(t5, obj != null ? (String) obj : null);
                break;
            case 24:
                ((RNSVGTextManagerInterface) this.mViewManager).setName(t5, obj != null ? (String) obj : null);
                break;
            case 25:
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeMiterlimit(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 26:
                ((RNSVGTextManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 27:
                ((RNSVGTextManagerInterface) this.mViewManager).setVectorEffect(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 28:
                ((RNSVGTextManagerInterface) this.mViewManager).setMarkerStart(t5, obj != null ? (String) obj : null);
                break;
            case 29:
                ((RNSVGTextManagerInterface) this.mViewManager).setBaselineShift(t5, new DynamicFromObject(obj));
                break;
            case 30:
                ((RNSVGTextManagerInterface) this.mViewManager).setFontSize(t5, new DynamicFromObject(obj));
                break;
            case 31:
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeDasharray(t5, new DynamicFromObject(obj));
                break;
            case ' ':
                ((RNSVGTextManagerInterface) this.mViewManager).setInlineSize(t5, new DynamicFromObject(obj));
                break;
            case '!':
                ((RNSVGTextManagerInterface) this.mViewManager).setClipPath(t5, obj != null ? (String) obj : null);
                break;
            case '\"':
                ((RNSVGTextManagerInterface) this.mViewManager).setClipRule(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '#':
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeLinecap(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '$':
                ((RNSVGTextManagerInterface) this.mViewManager).setTextLength(t5, new DynamicFromObject(obj));
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                ((RNSVGTextManagerInterface) this.mViewManager).setDisplay(t5, obj != null ? (String) obj : null);
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeLinejoin(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                ((RNSVGTextManagerInterface) this.mViewManager).setResponsible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '(':
                ((RNSVGTextManagerInterface) this.mViewManager).setStrokeWidth(t5, new DynamicFromObject(obj));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
