package androidx.recyclerview.widget;

import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.accessibility.AccessibilityNodeProviderCompat;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class j1 extends androidx.core.view.b {
    public final RecyclerViewAccessibilityDelegate a;

    /* renamed from: b, reason: collision with root package name */
    public final WeakHashMap f2408b = new WeakHashMap();

    public j1(RecyclerViewAccessibilityDelegate recyclerViewAccessibilityDelegate) {
        this.a = recyclerViewAccessibilityDelegate;
    }

    @Override // androidx.core.view.b
    public final boolean dispatchPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        return bVar != null ? bVar.dispatchPopulateAccessibilityEvent(view, accessibilityEvent) : super.dispatchPopulateAccessibilityEvent(view, accessibilityEvent);
    }

    @Override // androidx.core.view.b
    public final AccessibilityNodeProviderCompat getAccessibilityNodeProvider(View view) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        return bVar != null ? bVar.getAccessibilityNodeProvider(view) : super.getAccessibilityNodeProvider(view);
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        if (bVar != null) {
            bVar.onInitializeAccessibilityEvent(view, accessibilityEvent);
        } else {
            super.onInitializeAccessibilityEvent(view, accessibilityEvent);
        }
    }

    @Override // androidx.core.view.b
    public final void onInitializeAccessibilityNodeInfo(View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        RecyclerViewAccessibilityDelegate recyclerViewAccessibilityDelegate = this.a;
        RecyclerView recyclerView = recyclerViewAccessibilityDelegate.a;
        RecyclerView recyclerView2 = recyclerViewAccessibilityDelegate.a;
        if (recyclerView.hasPendingAdapterUpdates() || recyclerView2.getLayoutManager() == null) {
            super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
            return;
        }
        recyclerView2.getLayoutManager().onInitializeAccessibilityNodeInfoForItem(view, accessibilityNodeInfoCompat);
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        if (bVar != null) {
            bVar.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        } else {
            super.onInitializeAccessibilityNodeInfo(view, accessibilityNodeInfoCompat);
        }
    }

    @Override // androidx.core.view.b
    public final void onPopulateAccessibilityEvent(View view, AccessibilityEvent accessibilityEvent) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        if (bVar != null) {
            bVar.onPopulateAccessibilityEvent(view, accessibilityEvent);
        } else {
            super.onPopulateAccessibilityEvent(view, accessibilityEvent);
        }
    }

    @Override // androidx.core.view.b
    public final boolean onRequestSendAccessibilityEvent(ViewGroup viewGroup, View view, AccessibilityEvent accessibilityEvent) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(viewGroup);
        return bVar != null ? bVar.onRequestSendAccessibilityEvent(viewGroup, view, accessibilityEvent) : super.onRequestSendAccessibilityEvent(viewGroup, view, accessibilityEvent);
    }

    @Override // androidx.core.view.b
    public final boolean performAccessibilityAction(View view, int i5, Bundle bundle) {
        RecyclerViewAccessibilityDelegate recyclerViewAccessibilityDelegate = this.a;
        RecyclerView recyclerView = recyclerViewAccessibilityDelegate.a;
        RecyclerView recyclerView2 = recyclerViewAccessibilityDelegate.a;
        if (recyclerView.hasPendingAdapterUpdates() || recyclerView2.getLayoutManager() == null) {
            return super.performAccessibilityAction(view, i5, bundle);
        }
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        if (bVar != null) {
            if (bVar.performAccessibilityAction(view, i5, bundle)) {
                return true;
            }
        } else if (super.performAccessibilityAction(view, i5, bundle)) {
            return true;
        }
        return recyclerView2.getLayoutManager().performAccessibilityActionForItem(view, i5, bundle);
    }

    @Override // androidx.core.view.b
    public final void sendAccessibilityEvent(View view, int i5) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        if (bVar != null) {
            bVar.sendAccessibilityEvent(view, i5);
        } else {
            super.sendAccessibilityEvent(view, i5);
        }
    }

    @Override // androidx.core.view.b
    public final void sendAccessibilityEventUnchecked(View view, AccessibilityEvent accessibilityEvent) {
        androidx.core.view.b bVar = (androidx.core.view.b) this.f2408b.get(view);
        if (bVar != null) {
            bVar.sendAccessibilityEventUnchecked(view, accessibilityEvent);
        } else {
            super.sendAccessibilityEventUnchecked(view, accessibilityEvent);
        }
    }
}
