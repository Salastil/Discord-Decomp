package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSVGMaskManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGMaskManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGMaskManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGMaskManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1274492040:
                if (str.equals(ViewProps.FILTER)) {
                    c6 = 0;
                    break;
                }
                break;
            case -1267206133:
                if (str.equals(ViewProps.OPACITY)) {
                    c6 = 1;
                    break;
                }
                break;
            case -1221029593:
                if (str.equals("height")) {
                    c6 = 2;
                    break;
                }
                break;
            case -1081239615:
                if (str.equals("matrix")) {
                    c6 = 3;
                    break;
                }
                break;
            case -993894751:
                if (str.equals("propList")) {
                    c6 = 4;
                    break;
                }
                break;
            case -933864895:
                if (str.equals("markerEnd")) {
                    c6 = 5;
                    break;
                }
                break;
            case -933857362:
                if (str.equals("markerMid")) {
                    c6 = 6;
                    break;
                }
                break;
            case -891980232:
                if (str.equals("stroke")) {
                    c6 = 7;
                    break;
                }
                break;
            case -734428249:
                if (str.equals(ViewProps.FONT_WEIGHT)) {
                    c6 = '\b';
                    break;
                }
                break;
            case -729118945:
                if (str.equals("fillRule")) {
                    c6 = '\t';
                    break;
                }
                break;
            case -416535885:
                if (str.equals("strokeOpacity")) {
                    c6 = '\n';
                    break;
                }
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = 11;
                    break;
                }
                break;
            case -61221917:
                if (str.equals("maskUnits")) {
                    c6 = '\f';
                    break;
                }
                break;
            case -53677816:
                if (str.equals("fillOpacity")) {
                    c6 = '\r';
                    break;
                }
                break;
            case -44578051:
                if (str.equals("strokeDashoffset")) {
                    c6 = 14;
                    break;
                }
                break;
            case 120:
                if (str.equals("x")) {
                    c6 = 15;
                    break;
                }
                break;
            case 121:
                if (str.equals("y")) {
                    c6 = 16;
                    break;
                }
                break;
            case 3143043:
                if (str.equals("fill")) {
                    c6 = 17;
                    break;
                }
                break;
            case 3148879:
                if (str.equals("font")) {
                    c6 = 18;
                    break;
                }
                break;
            case 3344108:
                if (str.equals("mask")) {
                    c6 = 19;
                    break;
                }
                break;
            case 3373707:
                if (str.equals(StackTraceHelper.NAME_KEY)) {
                    c6 = 20;
                    break;
                }
                break;
            case 78845486:
                if (str.equals("strokeMiterlimit")) {
                    c6 = 21;
                    break;
                }
                break;
            case 94842723:
                if (str.equals(ViewProps.COLOR)) {
                    c6 = 22;
                    break;
                }
                break;
            case 104482996:
                if (str.equals("vectorEffect")) {
                    c6 = 23;
                    break;
                }
                break;
            case 113126854:
                if (str.equals("width")) {
                    c6 = 24;
                    break;
                }
                break;
            case 217109576:
                if (str.equals("markerStart")) {
                    c6 = 25;
                    break;
                }
                break;
            case 275100742:
                if (str.equals("maskType")) {
                    c6 = 26;
                    break;
                }
                break;
            case 365601008:
                if (str.equals(ViewProps.FONT_SIZE)) {
                    c6 = 27;
                    break;
                }
                break;
            case 401643183:
                if (str.equals("strokeDasharray")) {
                    c6 = 28;
                    break;
                }
                break;
            case 917656469:
                if (str.equals("clipPath")) {
                    c6 = 29;
                    break;
                }
                break;
            case 917735020:
                if (str.equals("clipRule")) {
                    c6 = 30;
                    break;
                }
                break;
            case 1027575302:
                if (str.equals("strokeLinecap")) {
                    c6 = 31;
                    break;
                }
                break;
            case 1671764162:
                if (str.equals(ViewProps.DISPLAY)) {
                    c6 = ' ';
                    break;
                }
                break;
            case 1790285174:
                if (str.equals("strokeLinejoin")) {
                    c6 = '!';
                    break;
                }
                break;
            case 1847674614:
                if (str.equals("responsible")) {
                    c6 = '\"';
                    break;
                }
                break;
            case 1924065902:
                if (str.equals("strokeWidth")) {
                    c6 = '#';
                    break;
                }
                break;
            case 2037673858:
                if (str.equals("maskContentUnits")) {
                    c6 = '$';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGMaskManagerInterface) this.mViewManager).setFilter(t5, obj != null ? (String) obj : null);
                break;
            case 1:
                this.mViewManager.setOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 2:
                ((RNSVGMaskManagerInterface) this.mViewManager).setHeight(t5, new DynamicFromObject(obj));
                break;
            case 3:
                ((RNSVGMaskManagerInterface) this.mViewManager).setMatrix(t5, (ReadableArray) obj);
                break;
            case 4:
                ((RNSVGMaskManagerInterface) this.mViewManager).setPropList(t5, (ReadableArray) obj);
                break;
            case 5:
                ((RNSVGMaskManagerInterface) this.mViewManager).setMarkerEnd(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNSVGMaskManagerInterface) this.mViewManager).setMarkerMid(t5, obj != null ? (String) obj : null);
                break;
            case 7:
                ((RNSVGMaskManagerInterface) this.mViewManager).setStroke(t5, new DynamicFromObject(obj));
                break;
            case '\b':
                ((RNSVGMaskManagerInterface) this.mViewManager).setFontWeight(t5, new DynamicFromObject(obj));
                break;
            case '\t':
                ((RNSVGMaskManagerInterface) this.mViewManager).setFillRule(t5, obj != null ? ((Double) obj).intValue() : 1);
                break;
            case '\n':
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 11:
                ((RNSVGMaskManagerInterface) this.mViewManager).setPointerEvents(t5, obj != null ? (String) obj : null);
                break;
            case '\f':
                ((RNSVGMaskManagerInterface) this.mViewManager).setMaskUnits(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '\r':
                ((RNSVGMaskManagerInterface) this.mViewManager).setFillOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 14:
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeDashoffset(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 15:
                ((RNSVGMaskManagerInterface) this.mViewManager).setX(t5, new DynamicFromObject(obj));
                break;
            case 16:
                ((RNSVGMaskManagerInterface) this.mViewManager).setY(t5, new DynamicFromObject(obj));
                break;
            case 17:
                ((RNSVGMaskManagerInterface) this.mViewManager).setFill(t5, new DynamicFromObject(obj));
                break;
            case 18:
                ((RNSVGMaskManagerInterface) this.mViewManager).setFont(t5, new DynamicFromObject(obj));
                break;
            case 19:
                ((RNSVGMaskManagerInterface) this.mViewManager).setMask(t5, obj != null ? (String) obj : null);
                break;
            case 20:
                ((RNSVGMaskManagerInterface) this.mViewManager).setName(t5, obj != null ? (String) obj : null);
                break;
            case 21:
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeMiterlimit(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 22:
                ((RNSVGMaskManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 23:
                ((RNSVGMaskManagerInterface) this.mViewManager).setVectorEffect(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 24:
                ((RNSVGMaskManagerInterface) this.mViewManager).setWidth(t5, new DynamicFromObject(obj));
                break;
            case 25:
                ((RNSVGMaskManagerInterface) this.mViewManager).setMarkerStart(t5, obj != null ? (String) obj : null);
                break;
            case 26:
                ((RNSVGMaskManagerInterface) this.mViewManager).setMaskType(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 27:
                ((RNSVGMaskManagerInterface) this.mViewManager).setFontSize(t5, new DynamicFromObject(obj));
                break;
            case 28:
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeDasharray(t5, new DynamicFromObject(obj));
                break;
            case 29:
                ((RNSVGMaskManagerInterface) this.mViewManager).setClipPath(t5, obj != null ? (String) obj : null);
                break;
            case 30:
                ((RNSVGMaskManagerInterface) this.mViewManager).setClipRule(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 31:
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeLinecap(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case ' ':
                ((RNSVGMaskManagerInterface) this.mViewManager).setDisplay(t5, obj != null ? (String) obj : null);
                break;
            case '!':
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeLinejoin(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '\"':
                ((RNSVGMaskManagerInterface) this.mViewManager).setResponsible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case '#':
                ((RNSVGMaskManagerInterface) this.mViewManager).setStrokeWidth(t5, new DynamicFromObject(obj));
                break;
            case '$':
                ((RNSVGMaskManagerInterface) this.mViewManager).setMaskContentUnits(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
