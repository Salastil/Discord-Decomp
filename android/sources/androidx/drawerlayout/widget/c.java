package androidx.drawerlayout.widget;

import android.graphics.Rect;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.s0;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class c extends androidx.core.view.b {
    public final Rect a = new Rect();

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ DrawerLayout f1857b;

    public c(DrawerLayout drawerLayout) {
        this.f1857b = drawerLayout;
    }

    @Override // androidx.core.view.b
    public final boolean dispatchPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        CharSequence drawerTitle;
        if (accessibilityEvent.getEventType() != 32) {
            return super.dispatchPopulateAccessibilityEvent(view, accessibilityEvent);
        }
        List<CharSequence> text = accessibilityEvent.getText();
        DrawerLayout drawerLayout = this.f1857b;
        View findVisibleDrawer = drawerLayout.findVisibleDrawer();
        if (findVisibleDrawer == null || (drawerTitle = drawerLayout.getDrawerTitle(drawerLayout.getDrawerViewAbsoluteGravity(findVisibleDrawer))) == null) {
            return true;
        }
        text.add(drawerTitle);
        return true;
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(view, accessibilityEvent);
        accessibilityEvent.setClassName("androidx.drawerlayout.widget.DrawerLayout");
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        if (DrawerLayout.CAN_HIDE_DESCENDANTS) {
            super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        } else {
            AccessibilityNodeInfo accessibilityNodeInfo = accessibilityNodeInfoCompat.a;
            AccessibilityNodeInfo accessibilityNodeInfo2 = accessibilityNodeInfoCompat.a;
            AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain(accessibilityNodeInfo);
            super.onInitializeAccessibilityNodeInfo(view, new AccessibilityNodeInfoCompat(obtain));
            accessibilityNodeInfoCompat.f1552b = -1;
            accessibilityNodeInfo2.setSource(view);
            WeakHashMap weakHashMap = s0.a;
            Object parentForAccessibility = view.getParentForAccessibility();
            if (parentForAccessibility instanceof View) {
                accessibilityNodeInfo2.setParent((View) parentForAccessibility);
            }
            Rect rect = this.a;
            obtain.getBoundsInScreen(rect);
            accessibilityNodeInfo2.setBoundsInScreen(rect);
            accessibilityNodeInfo2.setVisibleToUser(obtain.isVisibleToUser());
            accessibilityNodeInfo2.setPackageName(obtain.getPackageName());
            accessibilityNodeInfoCompat.o(obtain.getClassName());
            accessibilityNodeInfoCompat.s(obtain.getContentDescription());
            accessibilityNodeInfo2.setEnabled(obtain.isEnabled());
            accessibilityNodeInfo2.setFocused(obtain.isFocused());
            accessibilityNodeInfo2.setAccessibilityFocused(obtain.isAccessibilityFocused());
            accessibilityNodeInfo2.setSelected(obtain.isSelected());
            accessibilityNodeInfoCompat.a(obtain.getActions());
            ViewGroup viewGroup = (ViewGroup) view;
            int childCount = viewGroup.getChildCount();
            for (int i5 = 0; i5 < childCount; i5++) {
                View childAt = viewGroup.getChildAt(i5);
                if (DrawerLayout.includeChildForAccessibility(childAt)) {
                    accessibilityNodeInfo2.addChild(childAt);
                }
            }
        }
        accessibilityNodeInfoCompat.o("androidx.drawerlayout.widget.DrawerLayout");
        AccessibilityNodeInfo accessibilityNodeInfo3 = accessibilityNodeInfoCompat.a;
        accessibilityNodeInfo3.setFocusable(false);
        accessibilityNodeInfo3.setFocused(false);
        accessibilityNodeInfo3.removeAction((AccessibilityNodeInfo.AccessibilityAction) androidx.core.view.accessibility.a.f1553e.a);
        accessibilityNodeInfo3.removeAction((AccessibilityNodeInfo.AccessibilityAction) androidx.core.view.accessibility.a.f1554f.a);
    }

    @Override // androidx.core.view.b
    public final boolean onRequestSendAccessibilityEvent(ViewGroup viewGroup, View view, AccessibilityEvent accessibilityEvent) {
        if (DrawerLayout.CAN_HIDE_DESCENDANTS || DrawerLayout.includeChildForAccessibility(view)) {
            return super.onRequestSendAccessibilityEvent(viewGroup, view, accessibilityEvent);
        }
        return false;
    }
}
