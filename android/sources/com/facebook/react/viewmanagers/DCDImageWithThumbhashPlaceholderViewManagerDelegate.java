package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.DCDImageWithThumbhashPlaceholderViewManagerInterface;

/* loaded from: classes3.dex */
public class DCDImageWithThumbhashPlaceholderViewManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & DCDImageWithThumbhashPlaceholderViewManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public DCDImageWithThumbhashPlaceholderViewManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case 96681:
                if (str.equals("alt")) {
                    c6 = 0;
                    break;
                }
                break;
            case 116076:
                if (str.equals("uri")) {
                    c6 = 1;
                    break;
                }
                break;
            case 234665957:
                if (str.equals("placeholderVersion")) {
                    c6 = 2;
                    break;
                }
                break;
            case 598246771:
                if (str.equals("placeholder")) {
                    c6 = 3;
                    break;
                }
                break;
        }
        switch (c6) {
            case 0:
                ((DCDImageWithThumbhashPlaceholderViewManagerInterface) this.mViewManager).setAlt(t5, obj != null ? (String) obj : null);
                break;
            case 1:
                ((DCDImageWithThumbhashPlaceholderViewManagerInterface) this.mViewManager).setUri(t5, obj != null ? (String) obj : null);
                break;
            case 2:
                ((DCDImageWithThumbhashPlaceholderViewManagerInterface) this.mViewManager).setPlaceholderVersion(t5, obj != null ? ((Double) obj).intValue() : 0);
                break;
            case 3:
                ((DCDImageWithThumbhashPlaceholderViewManagerInterface) this.mViewManager).setPlaceholder(t5, obj != null ? (String) obj : null);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
