package com.reactnativecommunity.webview;

import android.view.View;
import android.view.ViewGroup;
import androidx.coordinatorlayout.widget.CoordinatorLayout;

/* loaded from: classes3.dex */
public final class b implements ViewGroup.OnHierarchyChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6630d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f6631e;

    public /* synthetic */ b(ViewGroup viewGroup, int i5) {
        this.f6630d = i5;
        this.f6631e = viewGroup;
    }

    @Override // android.view.ViewGroup.OnHierarchyChangeListener
    public final void onChildViewAdded(View view, View view2) {
        switch (this.f6630d) {
            case 0:
                c cVar = (c) this.f6631e;
                if (view != null) {
                    view.measure(View.MeasureSpec.makeMeasureSpec(cVar.getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(cVar.getMeasuredHeight(), 1073741824));
                    view.layout(0, 0, view.getMeasuredWidth(), view.getMeasuredHeight());
                    break;
                }
                break;
            default:
                ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener = ((CoordinatorLayout) this.f6631e).M;
                if (onHierarchyChangeListener != null) {
                    onHierarchyChangeListener.onChildViewAdded(view, view2);
                    break;
                }
                break;
        }
    }

    @Override // android.view.ViewGroup.OnHierarchyChangeListener
    public final void onChildViewRemoved(View view, View view2) {
        switch (this.f6630d) {
            case 0:
                break;
            default:
                CoordinatorLayout coordinatorLayout = (CoordinatorLayout) this.f6631e;
                coordinatorLayout.j(2);
                ViewGroup.OnHierarchyChangeListener onHierarchyChangeListener = coordinatorLayout.M;
                if (onHierarchyChangeListener != null) {
                    onHierarchyChangeListener.onChildViewRemoved(view, view2);
                    break;
                }
                break;
        }
    }

    private final void a(View view, View view2) {
    }
}
