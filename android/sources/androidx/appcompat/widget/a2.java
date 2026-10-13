package androidx.appcompat.widget;

import android.view.View;
import android.widget.PopupWindow;

/* loaded from: classes.dex */
public abstract class a2 {
    public static int a(PopupWindow popupWindow, View view, int i5, boolean z5) {
        return popupWindow.getMaxAvailableHeight(view, i5, z5);
    }
}
