package androidx.recyclerview.widget;

import android.graphics.Rect;
import android.view.View;
import android.view.ViewGroup;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class r0 extends OrientationHelper {
    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int b(View view) {
        return this.a.getDecoratedRight(view) + ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) view.getLayoutParams())).rightMargin;
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int c(View view) {
        RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) view.getLayoutParams();
        return this.a.getDecoratedMeasuredWidth(view) + ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin + ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin;
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int d(View view) {
        RecyclerView.LayoutParams layoutParams = (RecyclerView.LayoutParams) view.getLayoutParams();
        return this.a.getDecoratedMeasuredHeight(view) + ((ViewGroup.MarginLayoutParams) layoutParams).topMargin + ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin;
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int e(View view) {
        return this.a.getDecoratedLeft(view) - ((ViewGroup.MarginLayoutParams) ((RecyclerView.LayoutParams) view.getLayoutParams())).leftMargin;
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int f() {
        return this.a.getWidth();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int g() {
        RecyclerView.LayoutManager layoutManager = this.a;
        return layoutManager.getWidth() - layoutManager.getPaddingRight();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int h() {
        return this.a.getPaddingRight();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int i() {
        return this.a.getWidthMode();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int j() {
        return this.a.getHeightMode();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int k() {
        return this.a.getPaddingLeft();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int l() {
        RecyclerView.LayoutManager layoutManager = this.a;
        return (layoutManager.getWidth() - layoutManager.getPaddingLeft()) - layoutManager.getPaddingRight();
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int n(View view) {
        RecyclerView.LayoutManager layoutManager = this.a;
        Rect rect = this.f2301c;
        layoutManager.getTransformedBoundingBox(view, true, rect);
        return rect.right;
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final int o(View view) {
        RecyclerView.LayoutManager layoutManager = this.a;
        Rect rect = this.f2301c;
        layoutManager.getTransformedBoundingBox(view, true, rect);
        return rect.left;
    }

    @Override // androidx.recyclerview.widget.OrientationHelper
    public final void p(int i5) {
        this.a.offsetChildrenHorizontal(i5);
    }
}
