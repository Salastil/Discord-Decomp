package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSSplitScreenManagerInterface;

/* loaded from: classes3.dex */
public class RNSSplitScreenManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSSplitScreenManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSSplitScreenManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        if (str.equals("columnType")) {
            ((RNSSplitScreenManagerInterface) this.mViewManager).setColumnType(t5, (String) obj);
        } else {
            super.kotlinCompat$setProperty(t5, str, obj);
        }
    }
}
