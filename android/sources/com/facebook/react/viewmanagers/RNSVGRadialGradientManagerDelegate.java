package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSVGRadialGradientManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGRadialGradientManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGRadialGradientManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGRadialGradientManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1932235233:
                if (str.equals("gradientUnits")) {
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
            case -1081239615:
                if (str.equals("matrix")) {
                    c6 = 2;
                    break;
                }
                break;
            case -933864895:
                if (str.equals("markerEnd")) {
                    c6 = 3;
                    break;
                }
                break;
            case -933857362:
                if (str.equals("markerMid")) {
                    c6 = 4;
                    break;
                }
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = 5;
                    break;
                }
                break;
            case 3189:
                if (str.equals("cx")) {
                    c6 = 6;
                    break;
                }
                break;
            case 3190:
                if (str.equals("cy")) {
                    c6 = 7;
                    break;
                }
                break;
            case 3282:
                if (str.equals("fx")) {
                    c6 = '\b';
                    break;
                }
                break;
            case 3283:
                if (str.equals("fy")) {
                    c6 = '\t';
                    break;
                }
                break;
            case 3654:
                if (str.equals("rx")) {
                    c6 = '\n';
                    break;
                }
                break;
            case 3655:
                if (str.equals("ry")) {
                    c6 = 11;
                    break;
                }
                break;
            case 3344108:
                if (str.equals("mask")) {
                    c6 = '\f';
                    break;
                }
                break;
            case 3373707:
                if (str.equals(StackTraceHelper.NAME_KEY)) {
                    c6 = '\r';
                    break;
                }
                break;
            case 89650992:
                if (str.equals("gradient")) {
                    c6 = 14;
                    break;
                }
                break;
            case 217109576:
                if (str.equals("markerStart")) {
                    c6 = 15;
                    break;
                }
                break;
            case 917656469:
                if (str.equals("clipPath")) {
                    c6 = 16;
                    break;
                }
                break;
            case 917735020:
                if (str.equals("clipRule")) {
                    c6 = 17;
                    break;
                }
                break;
            case 1671764162:
                if (str.equals(ViewProps.DISPLAY)) {
                    c6 = 18;
                    break;
                }
                break;
            case 1822665244:
                if (str.equals("gradientTransform")) {
                    c6 = 19;
                    break;
                }
                break;
            case 1847674614:
                if (str.equals("responsible")) {
                    c6 = 20;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setGradientUnits(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 1:
                this.mViewManager.setOpacity(t5, obj == null ? 1.0f : ((Double) obj).floatValue());
                break;
            case 2:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setMatrix(t5, (ReadableArray) obj);
                break;
            case 3:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setMarkerEnd(t5, obj != null ? (String) obj : null);
                break;
            case 4:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setMarkerMid(t5, obj != null ? (String) obj : null);
                break;
            case 5:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setPointerEvents(t5, obj != null ? (String) obj : null);
                break;
            case 6:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setCx(t5, new DynamicFromObject(obj));
                break;
            case 7:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setCy(t5, new DynamicFromObject(obj));
                break;
            case '\b':
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setFx(t5, new DynamicFromObject(obj));
                break;
            case '\t':
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setFy(t5, new DynamicFromObject(obj));
                break;
            case '\n':
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setRx(t5, new DynamicFromObject(obj));
                break;
            case 11:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setRy(t5, new DynamicFromObject(obj));
                break;
            case '\f':
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setMask(t5, obj != null ? (String) obj : null);
                break;
            case '\r':
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setName(t5, obj != null ? (String) obj : null);
                break;
            case 14:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setGradient(t5, (ReadableArray) obj);
                break;
            case 15:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setMarkerStart(t5, obj != null ? (String) obj : null);
                break;
            case 16:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setClipPath(t5, obj != null ? (String) obj : null);
                break;
            case 17:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setClipRule(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 18:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setDisplay(t5, obj != null ? (String) obj : null);
                break;
            case 19:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setGradientTransform(t5, (ReadableArray) obj);
                break;
            case 20:
                ((RNSVGRadialGradientManagerInterface) this.mViewManager).setResponsible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
