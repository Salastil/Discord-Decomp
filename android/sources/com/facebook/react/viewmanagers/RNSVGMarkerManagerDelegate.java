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
import com.facebook.react.viewmanagers.RNSVGMarkerManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGMarkerManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGMarkerManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGMarkerManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1567958285:
                if (str.equals("vbHeight")) {
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
            case -1081239615:
                if (str.equals("matrix")) {
                    c6 = 3;
                    break;
                }
                break;
            case -1008621499:
                if (str.equals("orient")) {
                    c6 = 4;
                    break;
                }
                break;
            case -993894751:
                if (str.equals("propList")) {
                    c6 = 5;
                    break;
                }
                break;
            case -933864895:
                if (str.equals("markerEnd")) {
                    c6 = 6;
                    break;
                }
                break;
            case -933857362:
                if (str.equals("markerMid")) {
                    c6 = 7;
                    break;
                }
                break;
            case -891980232:
                if (str.equals("stroke")) {
                    c6 = '\b';
                    break;
                }
                break;
            case -734428249:
                if (str.equals(ViewProps.FONT_WEIGHT)) {
                    c6 = '\t';
                    break;
                }
                break;
            case -729118945:
                if (str.equals("fillRule")) {
                    c6 = '\n';
                    break;
                }
                break;
            case -416535885:
                if (str.equals("strokeOpacity")) {
                    c6 = 11;
                    break;
                }
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
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
            case 3143043:
                if (str.equals("fill")) {
                    c6 = 15;
                    break;
                }
                break;
            case 3148879:
                if (str.equals("font")) {
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
            case 3351622:
                if (str.equals("minX")) {
                    c6 = 18;
                    break;
                }
                break;
            case 3351623:
                if (str.equals("minY")) {
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
            case 3496485:
                if (str.equals("refX")) {
                    c6 = 21;
                    break;
                }
                break;
            case 3496486:
                if (str.equals("refY")) {
                    c6 = 22;
                    break;
                }
                break;
            case 78845486:
                if (str.equals("strokeMiterlimit")) {
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
            case 104482996:
                if (str.equals("vectorEffect")) {
                    c6 = 26;
                    break;
                }
                break;
            case 217109576:
                if (str.equals("markerStart")) {
                    c6 = 27;
                    break;
                }
                break;
            case 218785621:
                if (str.equals("markerUnits")) {
                    c6 = 28;
                    break;
                }
                break;
            case 220478892:
                if (str.equals("markerWidth")) {
                    c6 = 29;
                    break;
                }
                break;
            case 240482938:
                if (str.equals("vbWidth")) {
                    c6 = 30;
                    break;
                }
                break;
            case 365601008:
                if (str.equals(ViewProps.FONT_SIZE)) {
                    c6 = 31;
                    break;
                }
                break;
            case 401643183:
                if (str.equals("strokeDasharray")) {
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
            case 1671764162:
                if (str.equals(ViewProps.DISPLAY)) {
                    c6 = '$';
                    break;
                }
                break;
            case 1790285174:
                if (str.equals("strokeLinejoin")) {
                    c6 = '%';
                    break;
                }
                break;
            case 1847674614:
                if (str.equals("responsible")) {
                    c6 = '&';
                    break;
                }
                break;
            case 1908075304:
                if (str.equals("meetOrSlice")) {
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
            case 2106883585:
                if (str.equals("markerHeight")) {
                    c6 = ')';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setVbHeight(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 1:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFilter(t5, obj != null ? (String) obj : null);
                break;
            case 2:
                this.mViewManager.setOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 3:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMatrix(t5, (ReadableArray) obj);
                break;
            case 4:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setOrient(t5, obj != null ? (String) obj : null);
                break;
            case 5:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setPropList(t5, (ReadableArray) obj);
                break;
            case 6:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMarkerEnd(t5, obj != null ? (String) obj : null);
                break;
            case 7:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMarkerMid(t5, obj != null ? (String) obj : null);
                break;
            case '\b':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStroke(t5, new DynamicFromObject(obj));
                break;
            case '\t':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFontWeight(t5, new DynamicFromObject(obj));
                break;
            case '\n':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFillRule(t5, obj != null ? ((Double) obj).intValue() : 1);
                break;
            case 11:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case '\f':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setPointerEvents(t5, obj != null ? (String) obj : null);
                break;
            case '\r':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFillOpacity(t5, obj != null ? ((Double) obj).floatValue() : 1.0f);
                break;
            case 14:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeDashoffset(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 15:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFill(t5, new DynamicFromObject(obj));
                break;
            case 16:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFont(t5, new DynamicFromObject(obj));
                break;
            case 17:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMask(t5, obj != null ? (String) obj : null);
                break;
            case 18:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMinX(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 19:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMinY(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 20:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setName(t5, obj != null ? (String) obj : null);
                break;
            case 21:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setRefX(t5, new DynamicFromObject(obj));
                break;
            case 22:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setRefY(t5, new DynamicFromObject(obj));
                break;
            case 23:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeMiterlimit(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 24:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setAlign(t5, obj != null ? (String) obj : null);
                break;
            case 25:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 26:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setVectorEffect(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 27:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMarkerStart(t5, obj != null ? (String) obj : null);
                break;
            case 28:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMarkerUnits(t5, obj != null ? (String) obj : null);
                break;
            case 29:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMarkerWidth(t5, new DynamicFromObject(obj));
                break;
            case 30:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setVbWidth(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case 31:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setFontSize(t5, new DynamicFromObject(obj));
                break;
            case ' ':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeDasharray(t5, new DynamicFromObject(obj));
                break;
            case '!':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setClipPath(t5, obj != null ? (String) obj : null);
                break;
            case '\"':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setClipRule(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '#':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeLinecap(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '$':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setDisplay(t5, obj != null ? (String) obj : null);
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeLinejoin(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setResponsible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMeetOrSlice(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case '(':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setStrokeWidth(t5, new DynamicFromObject(obj));
                break;
            case ')':
                ((RNSVGMarkerManagerInterface) this.mViewManager).setMarkerHeight(t5, new DynamicFromObject(obj));
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
