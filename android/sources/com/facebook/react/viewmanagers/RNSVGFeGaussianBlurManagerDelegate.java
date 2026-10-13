package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.DynamicFromObject;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSVGFeGaussianBlurManagerInterface;

/* loaded from: classes3.dex */
public class RNSVGFeGaussianBlurManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSVGFeGaussianBlurManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSVGFeGaussianBlurManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1221029593:
                if (str.equals("height")) {
                    c6 = 0;
                    break;
                }
                break;
            case -934426595:
                if (str.equals("result")) {
                    c6 = 1;
                    break;
                }
                break;
            case 120:
                if (str.equals("x")) {
                    c6 = 2;
                    break;
                }
                break;
            case 121:
                if (str.equals("y")) {
                    c6 = 3;
                    break;
                }
                break;
            case 104364:
                if (str.equals("in1")) {
                    c6 = 4;
                    break;
                }
                break;
            case 113126854:
                if (str.equals("width")) {
                    c6 = 5;
                    break;
                }
                break;
            case 1530721536:
                if (str.equals("edgeMode")) {
                    c6 = 6;
                    break;
                }
                break;
            case 1837475450:
                if (str.equals("stdDeviationX")) {
                    c6 = 7;
                    break;
                }
                break;
            case 1837475451:
                if (str.equals("stdDeviationY")) {
                    c6 = '\b';
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setHeight(t5, new DynamicFromObject(obj));
                break;
            case 1:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setResult(t5, obj != null ? (String) obj : null);
                break;
            case 2:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setX(t5, new DynamicFromObject(obj));
                break;
            case 3:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setY(t5, new DynamicFromObject(obj));
                break;
            case 4:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setIn1(t5, obj != null ? (String) obj : null);
                break;
            case 5:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setWidth(t5, new DynamicFromObject(obj));
                break;
            case 6:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setEdgeMode(t5, (String) obj);
                break;
            case 7:
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setStdDeviationX(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            case '\b':
                ((RNSVGFeGaussianBlurManagerInterface) this.mViewManager).setStdDeviationY(t5, obj != null ? ((Double) obj).floatValue() : 0.0f);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
