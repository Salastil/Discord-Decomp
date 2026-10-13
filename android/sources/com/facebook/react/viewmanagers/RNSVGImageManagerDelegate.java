package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSVGImageManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGImageManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGImageManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGImageManagerDelegate(BaseViewManager baseViewManager) {
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
            case -729118945:
                if (str.equals("fillRule")) {
                    c6 = '\b';
                    break;
                }
                break;
            case -416535885:
                if (str.equals("strokeOpacity")) {
                    c6 = '\t';
                    break;
                }
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = '\n';
                    break;
                }
                break;
            case -53677816:
                if (str.equals("fillOpacity")) {
                    c6 = 11;
                    break;
                }
                break;
            case -44578051:
                if (str.equals("strokeDashoffset")) {
                    c6 = '\f';
                    break;
                }
                break;
            case 120:
                if (str.equals("x")) {
                    c6 = '\r';
                    break;
                }
                break;
            case 121:
                if (str.equals("y")) {
                    c6 = 14;
                    break;
                }
                break;
            case 114148:
                if (str.equals("src")) {
                    c6 = 15;
                    break;
                }
                break;
            case 3143043:
                if (str.equals("fill")) {
                    c6 = 16;
                    break;
                }
                break;
            case 3344108:
                if (str.equals("mask")) {
                    c6 = 17;
                    break;
                }
                break;
            case 3373707:
                if (str.equals(StackTraceHelper.NAME_KEY)) {
                    c6 = 18;
                    break;
                }
                break;
            case 78845486:
                if (str.equals("strokeMiterlimit")) {
                    c6 = 19;
                    break;
                }
                break;
            case 92903173:
                if (str.equals("align")) {
                    c6 = 20;
                    break;
                }
                break;
            case 94842723:
                if (str.equals(ViewProps.COLOR)) {
                    c6 = 21;
                    break;
                }
                break;
            case 104482996:
                if (str.equals("vectorEffect")) {
                    c6 = 22;
                    break;
                }
                break;
            case 113126854:
                if (str.equals("width")) {
                    c6 = 23;
                    break;
                }
                break;
            case 217109576:
                if (str.equals("markerStart")) {
                    c6 = 24;
                    break;
                }
                break;
            case 401643183:
                if (str.equals("strokeDasharray")) {
                    c6 = 25;
                    break;
                }
                break;
            case 917656469:
                if (str.equals("clipPath")) {
                    c6 = 26;
                    break;
                }
                break;
            case 917735020:
                if (str.equals("clipRule")) {
                    c6 = 27;
                    break;
                }
                break;
            case 1027575302:
                if (str.equals("strokeLinecap")) {
                    c6 = 28;
                    break;
                }
                break;
            case 1671764162:
                if (str.equals(ViewProps.DISPLAY)) {
                    c6 = 29;
                    break;
                }
                break;
            case 1790285174:
                if (str.equals("strokeLinejoin")) {
                    c6 = 30;
                    break;
                }
                break;
            case 1847674614:
                if (str.equals("responsible")) {
                    c6 = 31;
                    break;
                }
                break;
            case 1908075304:
                if (str.equals("meetOrSlice")) {
                    c6 = ' ';
                    break;
                }
                break;
            case 1924065902:
                if (str.equals("strokeWidth")) {
                    c6 = '!';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGImageManagerInterface) this.mViewManager).setFilter(t5, obj != null ? (String) obj : null);
                break;
            case 1:
                this.mViewManager.setOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 2:
                ((RNSVGImageManagerInterface) this.mViewManager).setHeight(t5, new DynamicFromObject(obj));
                break;
            case 3:
                ((RNSVGImageManagerInterface) this.mViewManager).setMatrix(t5, (ReadableArray) obj);
                break;
            case 4:
                ((RNSVGImageManagerInterface) this.mViewManager).setPropList(t5, (ReadableArray) obj);
                break;
            case 5:
                ((RNSVGImageManagerInterface) this.mViewManager).setMarkerEnd(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNSVGImageManagerInterface) this.mViewManager).setMarkerMid(t5, obj != null ? (String) obj : null);
                break;
            case 7:
                ((RNSVGImageManagerInterface) this.mViewManager).setStroke(t5, new DynamicFromObject(obj));
                break;
            case '\b':
                ((RNSVGImageManagerInterface) this.mViewManager).setFillRule(t5, obj != null ? ((Double) obj).intValue() : 1);
                break;
            case '\t':
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case '\n':
                ((RNSVGImageManagerInterface) this.mViewManager).setPointerEvents(t5, obj != null ? (String) obj : null);
                break;
            case 11:
                ((RNSVGImageManagerInterface) this.mViewManager).setFillOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case '\f':
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeDashoffset(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '\r':
                ((RNSVGImageManagerInterface) this.mViewManager).setX(t5, new DynamicFromObject(obj));
                break;
            case 14:
                ((RNSVGImageManagerInterface) this.mViewManager).setY(t5, new DynamicFromObject(obj));
                break;
            case 15:
                ((RNSVGImageManagerInterface) this.mViewManager).setSrc(t5, (ReadableMap) obj);
                break;
            case 16:
                ((RNSVGImageManagerInterface) this.mViewManager).setFill(t5, new DynamicFromObject(obj));
                break;
            case 17:
                ((RNSVGImageManagerInterface) this.mViewManager).setMask(t5, obj != null ? (String) obj : null);
                break;
            case 18:
                ((RNSVGImageManagerInterface) this.mViewManager).setName(t5, obj != null ? (String) obj : null);
                break;
            case 19:
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeMiterlimit(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 20:
                ((RNSVGImageManagerInterface) this.mViewManager).setAlign(t5, obj != null ? (String) obj : null);
                break;
            case 21:
                ((RNSVGImageManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 22:
                ((RNSVGImageManagerInterface) this.mViewManager).setVectorEffect(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 23:
                ((RNSVGImageManagerInterface) this.mViewManager).setWidth(t5, new DynamicFromObject(obj));
                break;
            case 24:
                ((RNSVGImageManagerInterface) this.mViewManager).setMarkerStart(t5, obj != null ? (String) obj : null);
                break;
            case 25:
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeDasharray(t5, new DynamicFromObject(obj));
                break;
            case 26:
                ((RNSVGImageManagerInterface) this.mViewManager).setClipPath(t5, obj != null ? (String) obj : null);
                break;
            case 27:
                ((RNSVGImageManagerInterface) this.mViewManager).setClipRule(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 28:
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeLinecap(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 29:
                ((RNSVGImageManagerInterface) this.mViewManager).setDisplay(t5, obj != null ? (String) obj : null);
                break;
            case 30:
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeLinejoin(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 31:
                ((RNSVGImageManagerInterface) this.mViewManager).setResponsible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ' ':
                ((RNSVGImageManagerInterface) this.mViewManager).setMeetOrSlice(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '!':
                ((RNSVGImageManagerInterface) this.mViewManager).setStrokeWidth(t5, new DynamicFromObject(obj));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
