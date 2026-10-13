package androidx.recyclerview.widget;

import androidx.core.view.DifferentialMotionFlingTarget;

/* loaded from: classes.dex */
public final class y0 implements DifferentialMotionFlingTarget {
    public final /* synthetic */ RecyclerView a;

    public y0(RecyclerView recyclerView) {
        this.a = recyclerView;
    }

    @Override // androidx.core.view.DifferentialMotionFlingTarget
    public final boolean a(float f2) {
        int i5;
        int i6;
        RecyclerView recyclerView = this.a;
        if (recyclerView.mLayout.canScrollVertically()) {
            i6 = (int) f2;
            i5 = 0;
        } else if (recyclerView.mLayout.canScrollHorizontally()) {
            i5 = (int) f2;
            i6 = 0;
        } else {
            i5 = 0;
            i6 = 0;
        }
        if (i5 == 0 && i6 == 0) {
            return false;
        }
        recyclerView.stopScroll();
        return recyclerView.flingNoThresholdCheck(i5, i6);
    }

    @Override // androidx.core.view.DifferentialMotionFlingTarget
    public final float b() {
        float f2;
        RecyclerView recyclerView = this.a;
        if (recyclerView.mLayout.canScrollVertically()) {
            f2 = recyclerView.mScaledVerticalScrollFactor;
        } else {
            if (!recyclerView.mLayout.canScrollHorizontally()) {
                return 0.0f;
            }
            f2 = recyclerView.mScaledHorizontalScrollFactor;
        }
        return -f2;
    }

    @Override // androidx.core.view.DifferentialMotionFlingTarget
    public final void c() {
        this.a.stopScroll();
    }
}
