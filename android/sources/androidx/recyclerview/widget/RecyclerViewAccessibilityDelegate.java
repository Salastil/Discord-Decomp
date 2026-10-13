package androidx.recyclerview.widget;

import android.os.Bundle;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;

/* loaded from: classes.dex */
public final class RecyclerViewAccessibilityDelegate extends androidx.core.view.b {
    public final RecyclerView a;

    /* renamed from: b, reason: collision with root package name */
    public final j1 f2345b;

    public RecyclerViewAccessibilityDelegate(RecyclerView recyclerView) {
        this.a = recyclerView;
        j1 j1Var = this.f2345b;
        if (j1Var != null) {
            this.f2345b = j1Var;
        } else {
            this.f2345b = new j1(this);
        }
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(view, accessibilityEvent);
        if (!(view instanceof RecyclerView) || this.a.hasPendingAdapterUpdates()) {
            return;
        }
        RecyclerView recyclerView = (RecyclerView) view;
        if (recyclerView.getLayoutManager() != null) {
            recyclerView.getLayoutManager().onInitializeAccessibilityEvent(accessibilityEvent);
        }
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        RecyclerView recyclerView = this.a;
        if (recyclerView.hasPendingAdapterUpdates() || recyclerView.getLayoutManager() == null) {
            return;
        }
        recyclerView.getLayoutManager().onInitializeAccessibilityNodeInfo(accessibilityNodeInfoCompat);
    }

    @Override // androidx.core.view.b
    public final boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
        if (super.performAccessibilityAction(view, i5, bundle)) {
            return true;
        }
        RecyclerView recyclerView = this.a;
        if (recyclerView.hasPendingAdapterUpdates() || recyclerView.getLayoutManager() == null) {
            return false;
        }
        return recyclerView.getLayoutManager().performAccessibilityAction(i5, bundle);
    }
}
