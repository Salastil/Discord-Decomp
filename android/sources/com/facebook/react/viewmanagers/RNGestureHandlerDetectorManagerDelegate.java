package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNGestureHandlerDetectorManagerInterface;

/* loaded from: classes3.dex */
public class RNGestureHandlerDetectorManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNGestureHandlerDetectorManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNGestureHandlerDetectorManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        char c6;
        str.getClass();
        switch (str.hashCode()) {
            case -604257113:
                if (str.equals("moduleId")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case -293492298:
                if (str.equals(ViewProps.POINTER_EVENTS)) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case 1374660138:
                if (str.equals("virtualChildren")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case 1510099587:
                if (str.equals("handlerTags")) {
                    c6 = 3;
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
                ((RNGestureHandlerDetectorManagerInterface) this.mViewManager).setModuleId(t5, obj != null ? ((Double) obj).intValue() : -1);
                break;
            case 1:
                ((RNGestureHandlerDetectorManagerInterface) this.mViewManager).setPointerEvents(t5, (String) obj);
                break;
            case 2:
                ((RNGestureHandlerDetectorManagerInterface) this.mViewManager).setVirtualChildren(t5, (ReadableArray) obj);
                break;
            case 3:
                ((RNGestureHandlerDetectorManagerInterface) this.mViewManager).setHandlerTags(t5, (ReadableArray) obj);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
