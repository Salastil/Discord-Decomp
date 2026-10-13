package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.ClippingScrollViewDecoratorViewManagerInterface;

/* loaded from: classes3.dex */
public class ClippingScrollViewDecoratorViewManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & ClippingScrollViewDecoratorViewManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public ClippingScrollViewDecoratorViewManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case -1329494383:
                if (str.equals("contentInsetTop")) {
                    c6 = 0;
                    break;
                }
                break;
            case -158272496:
                if (str.equals("applyWorkaroundForContentInsetHitTestBug")) {
                    c6 = 1;
                    break;
                }
                break;
            case 706149231:
                if (str.equals("contentInsetBottom")) {
                    c6 = 2;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((ClippingScrollViewDecoratorViewManagerInterface) this.mViewManager).setContentInsetTop(t5, obj != null ? ((Double) obj).doubleValue() : Double.NaN);
                break;
            case 1:
                ((ClippingScrollViewDecoratorViewManagerInterface) this.mViewManager).setApplyWorkaroundForContentInsetHitTestBug(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case 2:
                ((ClippingScrollViewDecoratorViewManagerInterface) this.mViewManager).setContentInsetBottom(t5, obj != null ? ((Double) obj).doubleValue() : Double.NaN);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
