package com.google.android.material.appbar;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.s0;
import com.google.android.material.search.SearchBar$ScrollingViewBehavior;
import java.util.List;
import java.util.WeakHashMap;
import jb.a;
import ng.g;
import ng.l;
import v0.b;
import v0.d;

/* loaded from: classes3.dex */
public class AppBarLayout$ScrollingViewBehavior extends l {

    /* renamed from: c, reason: collision with root package name */
    public final Rect f5921c;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f5922d;

    /* renamed from: e, reason: collision with root package name */
    public int f5923e;

    /* renamed from: f, reason: collision with root package name */
    public final int f5924f;

    public AppBarLayout$ScrollingViewBehavior() {
        this.f5921c = new Rect();
        this.f5922d = new Rect();
        this.f5923e = 0;
    }

    public static g y(List list) {
        int size = list.size();
        for (int i5 = 0; i5 < size; i5++) {
            View view = (View) list.get(i5);
            if (view instanceof g) {
                return (g) view;
            }
        }
        return null;
    }

    @Override // v0.b
    public final boolean f(View view, View view2) {
        return view2 instanceof g;
    }

    @Override // v0.b
    public boolean h(CoordinatorLayout coordinatorLayout, View view, View view2) {
        b bVar = ((d) view2.getLayoutParams()).a;
        if (bVar instanceof AppBarLayout$BaseBehavior) {
            int bottom = (((view2.getBottom() - view.getTop()) + ((AppBarLayout$BaseBehavior) bVar).j) + this.f5923e) - z(view2);
            WeakHashMap weakHashMap = s0.a;
            view.offsetTopAndBottom(bottom);
        }
        if (!(view2 instanceof g)) {
            return false;
        }
        g gVar = (g) view2;
        if (!gVar.I) {
            return false;
        }
        gVar.g(gVar.h(view));
        return false;
    }

    @Override // v0.b
    public final void i(CoordinatorLayout coordinatorLayout, View view) {
        if (view instanceof g) {
            s0.p(coordinatorLayout, null);
        }
    }

    @Override // v0.b
    public final boolean m(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10) {
        g y5;
        WindowInsetsCompat lastWindowInsets;
        int i11 = view.getLayoutParams().height;
        if ((i11 != -1 && i11 != -2) || (y5 = y(coordinatorLayout.d(view))) == null) {
            return false;
        }
        int size = View.MeasureSpec.getSize(i10);
        if (size <= 0) {
            size = coordinatorLayout.getHeight();
        } else if (y5.getFitsSystemWindows() && (lastWindowInsets = coordinatorLayout.getLastWindowInsets()) != null) {
            size += lastWindowInsets.a() + lastWindowInsets.d();
        }
        int totalScrollRange = y5.getTotalScrollRange() + size;
        int measuredHeight = y5.getMeasuredHeight();
        if (this instanceof SearchBar$ScrollingViewBehavior) {
            view.setTranslationY(-measuredHeight);
        } else {
            view.setTranslationY(0.0f);
            totalScrollRange -= measuredHeight;
        }
        coordinatorLayout.l(i5, i6, View.MeasureSpec.makeMeasureSpec(totalScrollRange, i11 == -1 ? 1073741824 : Integer.MIN_VALUE), view);
        return true;
    }

    @Override // v0.b
    public final boolean q(CoordinatorLayout coordinatorLayout, View view, Rect rect, boolean z5) {
        g y5 = y(coordinatorLayout.d(view));
        if (y5 != null) {
            Rect rect2 = new Rect(rect);
            rect2.offset(view.getLeft(), view.getTop());
            int width = coordinatorLayout.getWidth();
            int height = coordinatorLayout.getHeight();
            Rect rect3 = this.f5921c;
            rect3.set(0, 0, width, height);
            if (!rect3.contains(rect2)) {
                y5.f(false, !z5, true);
                return true;
            }
        }
        return false;
    }

    @Override // ng.l
    public final void x(CoordinatorLayout coordinatorLayout, View view, int i5) {
        g y5 = y(coordinatorLayout.d(view));
        if (y5 == null) {
            coordinatorLayout.k(i5, view);
            this.f5923e = 0;
            return;
        }
        d dVar = (d) view.getLayoutParams();
        int paddingLeft = coordinatorLayout.getPaddingLeft() + ((ViewGroup.MarginLayoutParams) dVar).leftMargin;
        int bottom = y5.getBottom() + ((ViewGroup.MarginLayoutParams) dVar).topMargin;
        int width = (coordinatorLayout.getWidth() - coordinatorLayout.getPaddingRight()) - ((ViewGroup.MarginLayoutParams) dVar).rightMargin;
        int bottom2 = ((y5.getBottom() + coordinatorLayout.getHeight()) - coordinatorLayout.getPaddingBottom()) - ((ViewGroup.MarginLayoutParams) dVar).bottomMargin;
        Rect rect = this.f5921c;
        rect.set(paddingLeft, bottom, width, bottom2);
        WindowInsetsCompat lastWindowInsets = coordinatorLayout.getLastWindowInsets();
        if (lastWindowInsets != null && coordinatorLayout.getFitsSystemWindows() && !view.getFitsSystemWindows()) {
            rect.left = lastWindowInsets.b() + rect.left;
            rect.right -= lastWindowInsets.c();
        }
        int i6 = dVar.f19134c;
        if (i6 == 0) {
            i6 = 8388659;
        }
        int measuredWidth = view.getMeasuredWidth();
        int measuredHeight = view.getMeasuredHeight();
        Rect rect2 = this.f5922d;
        Gravity.apply(i6, measuredWidth, measuredHeight, rect, rect2, i5);
        int z5 = z(y5);
        view.layout(rect2.left, rect2.top - z5, rect2.right, rect2.bottom - z5);
        this.f5923e = rect2.top - y5.getBottom();
    }

    public final int z(View view) {
        int i5;
        if (this.f5924f == 0) {
            return 0;
        }
        float f2 = 0.0f;
        if (view instanceof g) {
            g gVar = (g) view;
            int totalScrollRange = gVar.getTotalScrollRange();
            int downNestedPreScrollRange = gVar.getDownNestedPreScrollRange();
            b bVar = ((d) gVar.getLayoutParams()).a;
            int B = bVar instanceof AppBarLayout$BaseBehavior ? ((AppBarLayout$BaseBehavior) bVar).B() : 0;
            if ((downNestedPreScrollRange == 0 || totalScrollRange + B > downNestedPreScrollRange) && (i5 = totalScrollRange - downNestedPreScrollRange) != 0) {
                f2 = (B / i5) + 1.0f;
            }
        }
        int i6 = this.f5924f;
        return a.d((int) (f2 * i6), 0, i6);
    }

    public AppBarLayout$ScrollingViewBehavior(Context context, AttributeSet attributeSet) {
        super(0);
        this.f5921c = new Rect();
        this.f5922d = new Rect();
        this.f5923e = 0;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.I);
        this.f5924f = obtainStyledAttributes.getDimensionPixelSize(0, 0);
        obtainStyledAttributes.recycle();
    }
}
