package com.google.android.material.datepicker;

import android.view.View;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;

/* loaded from: classes3.dex */
public final class g extends androidx.core.view.b {
    public final /* synthetic */ int a;

    public /* synthetic */ g(int i5) {
        this.a = i5;
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        switch (this.a) {
            case 0:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                accessibilityNodeInfoCompat.q(null);
                break;
            case 1:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                accessibilityNodeInfoCompat.y(false);
                break;
            case 2:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                accessibilityNodeInfoCompat.q(null);
                break;
            case 3:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                accessibilityNodeInfoCompat.o("android.widget.Button");
                break;
            default:
                super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
                accessibilityNodeInfoCompat.a.setVisibleToUser(false);
                break;
        }
    }
}
