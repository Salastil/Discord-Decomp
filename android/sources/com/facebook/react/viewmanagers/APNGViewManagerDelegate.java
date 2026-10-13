package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.APNGViewManagerInterface;

/* loaded from: classes3.dex */
public class APNGViewManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & APNGViewManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public APNGViewManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        if (str.equals("url")) {
            ((APNGViewManagerInterface) this.mViewManager).setUrl(t5, obj == null ? null : (String) obj);
        } else {
            super.kotlinCompat$setProperty(t5, str, obj);
        }
    }
}
