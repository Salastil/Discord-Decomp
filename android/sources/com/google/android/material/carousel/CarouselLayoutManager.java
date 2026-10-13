package com.google.android.material.carousel;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.PointF;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.i1;
import com.discord.R;
import com.discord.channel_spine.a;
import k0.d;
import vg.b;
import vg.c;
import vg.e;
import vg.h;

/* loaded from: classes3.dex */
public class CarouselLayoutManager extends RecyclerView.LayoutManager implements i1 {

    /* renamed from: d, reason: collision with root package name */
    public final h f6000d;

    /* renamed from: e, reason: collision with root package name */
    public e f6001e;

    /* renamed from: i, reason: collision with root package name */
    public final View.OnLayoutChangeListener f6002i;

    public CarouselLayoutManager() {
        h hVar = new h();
        new b();
        this.f6002i = new a(5, this);
        this.f6000d = hVar;
        requestLayout();
        setOrientation(0);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean canScrollHorizontally() {
        return e();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean canScrollVertically() {
        return !e();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollExtent(RecyclerView.State state) {
        getChildCount();
        return 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollOffset(RecyclerView.State state) {
        return 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeHorizontalScrollRange(RecyclerView.State state) {
        return 0;
    }

    @Override // androidx.recyclerview.widget.i1
    public final PointF computeScrollVectorForPosition(int i5) {
        return null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollExtent(RecyclerView.State state) {
        getChildCount();
        return 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollOffset(RecyclerView.State state) {
        return 0;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int computeVerticalScrollRange(RecyclerView.State state) {
        return 0;
    }

    public final float d(float f2, float f10) {
        return f() ? f2 - f10 : f2 + f10;
    }

    public final boolean e() {
        return this.f6001e.a == 0;
    }

    public final boolean f() {
        return e() && getLayoutDirection() == 1;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final RecyclerView.LayoutParams generateDefaultLayoutParams() {
        return new RecyclerView.LayoutParams(-2, -2);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void getDecoratedBoundsWithMargins(View view, Rect rect) {
        super.getDecoratedBoundsWithMargins(view, rect);
        rect.centerY();
        if (e()) {
            rect.centerX();
        }
        throw null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean isAutoMeasureEnabled() {
        return true;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void measureChildWithMargins(View view, int i5, int i6) {
        throw new IllegalStateException("All children of a RecyclerView using CarouselLayoutManager must use MaskableFrameLayout as their root ViewGroup.");
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onAttachedToWindow(RecyclerView recyclerView) {
        super.onAttachedToWindow(recyclerView);
        Context context = recyclerView.getContext();
        h hVar = this.f6000d;
        float f2 = hVar.a;
        if (f2 <= 0.0f) {
            f2 = context.getResources().getDimension(R.dimen.m3_carousel_small_item_size_min);
        }
        hVar.a = f2;
        float f10 = hVar.f19414b;
        if (f10 <= 0.0f) {
            f10 = context.getResources().getDimension(R.dimen.m3_carousel_small_item_size_max);
        }
        hVar.f19414b = f10;
        requestLayout();
        recyclerView.addOnLayoutChangeListener(this.f6002i);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onDetachedFromWindow(RecyclerView recyclerView, RecyclerView.Recycler recycler) {
        super.onDetachedFromWindow(recyclerView, recycler);
        recyclerView.removeOnLayoutChangeListener(this.f6002i);
    }

    /* JADX WARN: Code restructure failed: missing block: B:50:0x002e, code lost:
    
        if (r6 == 1) goto L20;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0038, code lost:
    
        if (f() != false) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x003c, code lost:
    
        if (r6 == 1) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0045, code lost:
    
        if (f() != false) goto L20;
     */
    /* JADX WARN: Removed duplicated region for block: B:18:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:49:? A[RETURN, SYNTHETIC] */
    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final View onFocusSearchFailed(View view, int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        char c6;
        if (getChildCount() == 0) {
            return null;
        }
        int i6 = this.f6001e.a;
        if (i5 != 1) {
            if (i5 != 2) {
                if (i5 == 17) {
                    if (i6 == 0) {
                    }
                    c6 = 0;
                } else if (i5 != 33) {
                    if (i5 != 66) {
                        if (i5 != 130) {
                            d.q(i5, "Unknown focus request:", "CarouselLayoutManager");
                        }
                        c6 = 0;
                    } else {
                        if (i6 == 0) {
                        }
                        c6 = 0;
                    }
                }
                if (c6 == 0) {
                    return null;
                }
                if (c6 == 65535) {
                    if (getPosition(view) == 0) {
                        return null;
                    }
                    int position = getPosition(getChildAt(0)) - 1;
                    if (position < 0 || position >= getItemCount()) {
                        return getChildAt(f() ? getChildCount() - 1 : 0);
                    }
                    this.f6001e.d();
                    throw null;
                }
                if (getPosition(view) == getItemCount() - 1) {
                    return null;
                }
                int position2 = getPosition(getChildAt(getChildCount() - 1)) + 1;
                if (position2 < 0 || position2 >= getItemCount()) {
                    return getChildAt(f() ? 0 : getChildCount() - 1);
                }
                this.f6001e.d();
                throw null;
            }
            c6 = 1;
            if (c6 == 0) {
            }
        }
        c6 = 65535;
        if (c6 == 0) {
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        if (getChildCount() > 0) {
            accessibilityEvent.setFromIndex(getPosition(getChildAt(0)));
            accessibilityEvent.setToIndex(getPosition(getChildAt(getChildCount() - 1)));
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsAdded(RecyclerView recyclerView, int i5, int i6) {
        super.onItemsAdded(recyclerView, i5, i6);
        getItemCount();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsChanged(RecyclerView recyclerView) {
        super.onItemsChanged(recyclerView);
        getItemCount();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onItemsRemoved(RecyclerView recyclerView, int i5, int i6) {
        super.onItemsRemoved(recyclerView, i5, i6);
        getItemCount();
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onLayoutChildren(RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (state.b() > 0) {
            if ((e() ? getWidth() : getHeight()) > 0.0f) {
                f();
                measureChildWithMargins(recycler.e(0), 0, 0);
                throw null;
            }
        }
        removeAndRecycleAllViews(recycler);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void onLayoutCompleted(RecyclerView.State state) {
        super.onLayoutCompleted(state);
        if (getChildCount() == 0) {
            return;
        }
        getPosition(getChildAt(0));
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final boolean requestChildRectangleOnScreen(RecyclerView recyclerView, View view, Rect rect, boolean z5, boolean z6) {
        return false;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int scrollHorizontallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (!e() || getChildCount() == 0 || i5 == 0) {
            return 0;
        }
        measureChildWithMargins(recycler.e(0), 0, 0);
        throw null;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void scrollToPosition(int i5) {
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final int scrollVerticallyBy(int i5, RecyclerView.Recycler recycler, RecyclerView.State state) {
        if (!canScrollVertically() || getChildCount() == 0 || i5 == 0) {
            return 0;
        }
        measureChildWithMargins(recycler.e(0), 0, 0);
        throw null;
    }

    public final void setOrientation(int i5) {
        e dVar;
        if (i5 != 0 && i5 != 1) {
            throw new IllegalArgumentException(d.i(i5, "invalid orientation:"));
        }
        assertNotInLayoutOrScroll(null);
        e eVar = this.f6001e;
        if (eVar == null || i5 != eVar.a) {
            if (i5 == 0) {
                dVar = new vg.d(this);
            } else {
                if (i5 != 1) {
                    throw new IllegalArgumentException("invalid orientation");
                }
                dVar = new c(this);
            }
            this.f6001e = dVar;
            requestLayout();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.LayoutManager
    public final void smoothScrollToPosition(RecyclerView recyclerView, RecyclerView.State state, int i5) {
        vg.a aVar = new vg.a(recyclerView.getContext());
        aVar.setTargetPosition(i5);
        startSmoothScroll(aVar);
    }

    @SuppressLint({"UnknownNullness"})
    public CarouselLayoutManager(Context context, AttributeSet attributeSet, int i5, int i6) {
        new b();
        this.f6002i = new a(5, this);
        this.f6000d = new h();
        requestLayout();
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.f13958g);
            obtainStyledAttributes.getInt(0, 0);
            requestLayout();
            setOrientation(obtainStyledAttributes.getInt(0, 0));
            obtainStyledAttributes.recycle();
        }
    }
}
