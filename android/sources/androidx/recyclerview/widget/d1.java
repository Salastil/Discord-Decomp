package androidx.recyclerview.widget;

import android.view.View;
import android.view.ViewGroup;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.ViewBoundsCheck;

/* loaded from: classes.dex */
public final class d1 implements ViewBoundsCheck.Callback {
    public final /* synthetic */ RecyclerView.LayoutManager a;

    public d1(RecyclerView.LayoutManager layoutManager) {
        this.a = layoutManager;
    }

    @Override // androidx.recyclerview.widget.ViewBoundsCheck.Callback
    public final int a(View view) {
        return this.a.getDecoratedLeft(view) - ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) view.getLayoutParams())).leftMargin;
    }

    @Override // androidx.recyclerview.widget.ViewBoundsCheck.Callback
    public final int b() {
        return this.a.getPaddingLeft();
    }

    @Override // androidx.recyclerview.widget.ViewBoundsCheck.Callback
    public final int c() {
        RecyclerView.LayoutManager layoutManager = this.a;
        return layoutManager.getWidth() - layoutManager.getPaddingRight();
    }

    @Override // androidx.recyclerview.widget.ViewBoundsCheck.Callback
    public final int d(View view) {
        return this.a.getDecoratedRight(view) + ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) view.getLayoutParams())).rightMargin;
    }

    @Override // androidx.recyclerview.widget.ViewBoundsCheck.Callback
    public final View getChildAt(int i5) {
        return this.a.getChildAt(i5);
    }
}
