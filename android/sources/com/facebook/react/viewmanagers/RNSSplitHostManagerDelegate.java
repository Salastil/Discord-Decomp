package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.BaseViewManager;
import com.facebook.react.uimanager.BaseViewManagerDelegate;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.viewmanagers.RNSSplitHostManagerInterface;

/* loaded from: classes3.dex */
public class RNSSplitHostManagerDelegate<T extends View, U extends BaseViewManager<T, ? extends LayoutShadowNode> & RNSSplitHostManagerInterface<T>> extends BaseViewManagerDelegate<T, U> {
    /* JADX WARN: Incorrect types in method signature: (TU;)V */
    public RNSSplitHostManagerDelegate(BaseViewManager baseViewManager) {
        super(baseViewManager);
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: receiveCommand */
    public void kotlinCompat$receiveCommand(T t5, String str, ReadableArray readableArray) {
        str.getClass();
        if (str.equals("showColumn")) {
            ((RNSSplitHostManagerInterface) this.mViewManager).showColumn(t5, readableArray.getString(0));
        }
    }

    @Override // com.facebook.react.uimanager.BaseViewManagerDelegate, com.facebook.react.uimanager.ViewManagerDelegate
    /* renamed from: setProperty */
    public void kotlinCompat$setProperty(T t5, String str, Object obj) {
        str.getClass();
        switch (str) {
            case "preferredSplitBehavior":
                ((RNSSplitHostManagerInterface) this.mViewManager).setPreferredSplitBehavior(t5, (String) obj);
                break;
            case "orientation":
                ((RNSSplitHostManagerInterface) this.mViewManager).setOrientation(t5, (String) obj);
                break;
            case "primaryEdge":
                ((RNSSplitHostManagerInterface) this.mViewManager).setPrimaryEdge(t5, (String) obj);
                break;
            case "showInspector":
                ((RNSSplitHostManagerInterface) this.mViewManager).setShowInspector(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case "showSecondaryToggleButton":
                ((RNSSplitHostManagerInterface) this.mViewManager).setShowSecondaryToggleButton(t5, obj != null ? ((Boolean) obj).booleanValue() : false);
                break;
            case "preferredDisplayMode":
                ((RNSSplitHostManagerInterface) this.mViewManager).setPreferredDisplayMode(t5, (String) obj);
                break;
            case "primaryBackgroundStyle":
                ((RNSSplitHostManagerInterface) this.mViewManager).setPrimaryBackgroundStyle(t5, (String) obj);
                break;
            case "topColumnForCollapsing":
                ((RNSSplitHostManagerInterface) this.mViewManager).setTopColumnForCollapsing(t5, (String) obj);
                break;
            case "colorScheme":
                ((RNSSplitHostManagerInterface) this.mViewManager).setColorScheme(t5, (String) obj);
                break;
            case "presentsWithGesture":
                ((RNSSplitHostManagerInterface) this.mViewManager).setPresentsWithGesture(t5, obj != null ? ((Boolean) obj).booleanValue() : true);
                break;
            case "displayModeButtonVisibility":
                ((RNSSplitHostManagerInterface) this.mViewManager).setDisplayModeButtonVisibility(t5, (String) obj);
                break;
            case "columnMetrics":
                ((RNSSplitHostManagerInterface) this.mViewManager).setColumnMetrics(t5, (ReadableMap) obj);
                break;
            default:
                super.kotlinCompat$setProperty(t5, str, obj);
                break;
        }
    }
}
