package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSScrollViewMarkerManagerInterface;

/* loaded from: classes3.dex */
public class RNSScrollViewMarkerManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSScrollViewMarkerManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSScrollViewMarkerManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        switch (str) {
            case "bottomScrollEdgeEffect":
                ((RNSScrollViewMarkerManagerInterface) this.mViewManager).setBottomScrollEdgeEffect(t5, (String) obj);
                break;
            case "topScrollEdgeEffect":
                ((RNSScrollViewMarkerManagerInterface) this.mViewManager).setTopScrollEdgeEffect(t5, (String) obj);
                break;
            case "leftScrollEdgeEffect":
                ((RNSScrollViewMarkerManagerInterface) this.mViewManager).setLeftScrollEdgeEffect(t5, (String) obj);
                break;
            case "rightScrollEdgeEffect":
                ((RNSScrollViewMarkerManagerInterface) this.mViewManager).setRightScrollEdgeEffect(t5, (String) obj);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
