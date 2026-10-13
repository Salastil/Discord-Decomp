package androidx.recyclerview.widget;

import android.content.Context;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.animation.DecelerateInterpolator;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class t0 extends m0 {
    public final /* synthetic */ u0 a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public t0(u0 u0Var, Context context) {
        super(context);
        this.a = u0Var;
    }

    @Override // androidx.recyclerview.widget.m0
    public final float calculateSpeedPerPixel(DisplayMetrics displayMetrics) {
        return 100.0f / displayMetrics.densityDpi;
    }

    @Override // androidx.recyclerview.widget.m0
    public final int calculateTimeForScrolling(int i5) {
        return Math.min(100, super.calculateTimeForScrolling(i5));
    }

    @Override // androidx.recyclerview.widget.m0, androidx.recyclerview.widget.RecyclerView.SmoothScroller
    public final void onTargetFound(View view, RecyclerView.State state, RecyclerView.SmoothScroller.Action action) {
        u0 u0Var = this.a;
        int[] a = u0Var.a(u0Var.a.getLayoutManager(), view);
        int i5 = a[0];
        int i6 = a[1];
        int calculateTimeForDeceleration = calculateTimeForDeceleration(Math.max(Math.abs(i5), Math.abs(i6)));
        if (calculateTimeForDeceleration > 0) {
            DecelerateInterpolator decelerateInterpolator = this.mDecelerateInterpolator;
            action.a = i5;
            action.f2321b = i6;
            action.f2322c = calculateTimeForDeceleration;
            action.f2324e = decelerateInterpolator;
            action.f2325f = true;
        }
    }
}
