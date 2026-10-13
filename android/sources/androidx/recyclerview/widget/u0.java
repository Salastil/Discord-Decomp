package androidx.recyclerview.widget;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class u0 extends n1 {

    /* renamed from: c, reason: collision with root package name */
    public s0 f2474c;

    /* renamed from: d, reason: collision with root package name */
    public r0 f2475d;

    public static int c(View view, OrientationHelper orientationHelper) {
        return ((orientationHelper.c(view) / 2) + orientationHelper.e(view)) - ((orientationHelper.l() / 2) + orientationHelper.k());
    }

    public static View d(RecyclerView.LayoutManager layoutManager, OrientationHelper orientationHelper) {
        int childCount = layoutManager.getChildCount();
        View view = null;
        if (childCount == 0) {
            return null;
        }
        int l6 = (orientationHelper.l() / 2) + orientationHelper.k();
        int i5 = Integer.MAX_VALUE;
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = layoutManager.getChildAt(i6);
            int abs = Math.abs(((orientationHelper.c(childAt) / 2) + orientationHelper.e(childAt)) - l6);
            if (abs < i5) {
                view = childAt;
                i5 = abs;
            }
        }
        return view;
    }

    @Override // androidx.recyclerview.widget.n1
    public final int[] a(RecyclerView.LayoutManager layoutManager, View view) {
        int[] iArr = new int[2];
        if (layoutManager.canScrollHorizontally()) {
            iArr[0] = c(view, e(layoutManager));
        } else {
            iArr[0] = 0;
        }
        if (layoutManager.canScrollVertically()) {
            iArr[1] = c(view, f(layoutManager));
            return iArr;
        }
        iArr[1] = 0;
        return iArr;
    }

    public final OrientationHelper e(RecyclerView.LayoutManager layoutManager) {
        r0 r0Var = this.f2475d;
        if (r0Var == null || r0Var.a != layoutManager) {
            this.f2475d = new r0(layoutManager);
        }
        return this.f2475d;
    }

    public final OrientationHelper f(RecyclerView.LayoutManager layoutManager) {
        s0 s0Var = this.f2474c;
        if (s0Var == null || s0Var.a != layoutManager) {
            this.f2474c = new s0(layoutManager);
        }
        return this.f2474c;
    }
}
