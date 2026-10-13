package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSFormSheetHostManagerInterface;

/* loaded from: classes3.dex */
public class RNSFormSheetHostManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSFormSheetHostManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSFormSheetHostManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        char c6;
        str.getClass();
        switch (str.hashCode()) {
            case -1887691039:
                if (str.equals("largestUndimmedDetentIndex")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case -1180237164:
                if (str.equals("isOpen")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case -582508952:
                if (str.equals("preferredCornerRadius")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case -166356101:
                if (str.equals("preventNativeDismiss")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case 490025029:
                if (str.equals("prefersScrollingExpandsWhenScrolledToEdge")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case 595595083:
                if (str.equals("nativeContainerBackgroundColor")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case 1275407218:
                if (str.equals("prefersGrabberVisible")) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case 1557845883:
                if (str.equals("detents")) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            case 1699490262:
                if (str.equals("initialDetentIndex")) {
                    c6 = '\b';
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
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setLargestUndimmedDetentIndex(t5, obj != null ? ((Double) obj).intValue() : -1);
                break;
            case 1:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setIsOpen(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 2:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setPreferredCornerRadius(t5, obj == null ? -1.0f : ((Double) obj).floatValue());
                break;
            case 3:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setPreventNativeDismiss(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 4:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setPrefersScrollingExpandsWhenScrolledToEdge(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case 5:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setNativeContainerBackgroundColor(t5, ColorPropConverter.getColor(obj, t5.getContext()));
                break;
            case 6:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setPrefersGrabberVisible(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 7:
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setDetents(t5, (ReadableArray) obj);
                break;
            case '\b':
                ((RNSFormSheetHostManagerInterface) this.mViewManager).setInitialDetentIndex(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
