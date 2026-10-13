package com.google.android.material.timepicker;

import android.os.Bundle;
import android.os.SystemClock;
import android.view.MotionEvent;
import android.view.View;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import com.discord.R;

/* loaded from: classes3.dex */
public final class c extends androidx.core.view.b {
    public final /* synthetic */ ClockFaceView a;

    public c(ClockFaceView clockFaceView) {
        this.a = clockFaceView;
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        int intValue = ((Integer) view.getTag(R.id.material_value_index)).intValue();
        if (intValue > 0) {
            accessibilityNodeInfoCompat.a.setTraversalAfter((View) this.a.E.get(intValue - 1));
        }
        accessibilityNodeInfoCompat.r(l1.d.a(0, 1, intValue, 1, view.isSelected()));
        accessibilityNodeInfoCompat.p(true);
        accessibilityNodeInfoCompat.b(androidx.core.view.accessibility.a.f1555g);
    }

    @Override // androidx.core.view.b
    public final boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
        if (i5 != 16) {
            return super.performAccessibilityAction(view, i5, bundle);
        }
        long uptimeMillis = SystemClock.uptimeMillis();
        ClockFaceView clockFaceView = this.a;
        view.getHitRect(clockFaceView.f6149w);
        float centerX = clockFaceView.f6149w.centerX();
        float centerY = clockFaceView.f6149w.centerY();
        clockFaceView.f6148v.onTouchEvent(MotionEvent.obtain(uptimeMillis, uptimeMillis, 0, centerX, centerY, 0));
        clockFaceView.f6148v.onTouchEvent(MotionEvent.obtain(uptimeMillis, uptimeMillis, 1, centerX, centerY, 0));
        return true;
    }
}
