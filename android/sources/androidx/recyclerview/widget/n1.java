package androidx.recyclerview.widget;

import android.graphics.PointF;
import android.view.View;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public abstract class n1 extends RecyclerView.OnFlingListener {
    public RecyclerView a;

    /* renamed from: b, reason: collision with root package name */
    public final m1 f2431b = new m1(this);

    public abstract int[] a(RecyclerView.LayoutManager layoutManager, View view);

    public final void b() {
        RecyclerView.LayoutManager layoutManager;
        RecyclerView recyclerView = this.a;
        if (recyclerView == null || (layoutManager = recyclerView.getLayoutManager()) == null) {
            return;
        }
        u0 u0Var = (u0) this;
        View d6 = layoutManager.canScrollVertically() ? u0.d(layoutManager, u0Var.f(layoutManager)) : layoutManager.canScrollHorizontally() ? u0.d(layoutManager, u0Var.e(layoutManager)) : null;
        if (d6 == null) {
            return;
        }
        int[] a = a(layoutManager, d6);
        int i5 = a[0];
        if (i5 == 0 && a[1] == 0) {
            return;
        }
        this.a.smoothScrollBy(i5, a[1]);
    }

    /* JADX WARN: Code restructure failed: missing block: B:73:0x00f1, code lost:
    
        if (r2 < r7) goto L81;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00f7  */
    /* JADX WARN: Removed duplicated region for block: B:23:? A[RETURN, SYNTHETIC] */
    @Override // androidx.recyclerview.widget.RecyclerView.OnFlingListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onFling(int i5, int i6) {
        int minFlingVelocity;
        boolean z5;
        boolean z6;
        int position;
        PointF computeScrollVectorForPosition;
        RecyclerView.LayoutManager layoutManager = this.a.getLayoutManager();
        if (layoutManager != 0 && this.a.getAdapter() != null && ((Math.abs(i6) > (minFlingVelocity = this.a.getMinFlingVelocity()) || Math.abs(i5) > minFlingVelocity) && ((z5 = layoutManager instanceof i1)))) {
            u0 u0Var = (u0) this;
            View view = null;
            t0 t0Var = !z5 ? null : new t0(u0Var, u0Var.a.getContext());
            if (t0Var != null) {
                int itemCount = layoutManager.getItemCount();
                if (itemCount != 0) {
                    OrientationHelper f2 = layoutManager.canScrollVertically() ? u0Var.f(layoutManager) : layoutManager.canScrollHorizontally() ? u0Var.e(layoutManager) : null;
                    if (f2 != null) {
                        int childCount = layoutManager.getChildCount();
                        int i10 = Integer.MAX_VALUE;
                        int i11 = Integer.MIN_VALUE;
                        View view2 = null;
                        for (int i12 = 0; i12 < childCount; i12++) {
                            View childAt = layoutManager.getChildAt(i12);
                            if (childAt != null) {
                                int c6 = u0.c(childAt, f2);
                                if (c6 <= 0 && c6 > i11) {
                                    i11 = c6;
                                    view2 = childAt;
                                }
                                if (c6 >= 0 && c6 < i10) {
                                    i10 = c6;
                                    view = childAt;
                                }
                            }
                        }
                        z6 = false;
                        boolean z7 = !layoutManager.canScrollHorizontally() ? i6 <= 0 : i5 <= 0;
                        if (z7 && view != null) {
                            position = layoutManager.getPosition(view);
                        } else if (z7 || view2 == null) {
                            if (z7) {
                                view = view2;
                            }
                            if (view != null) {
                                position = ((z5 && (computeScrollVectorForPosition = ((i1) layoutManager).computeScrollVectorForPosition(layoutManager.getItemCount() - 1)) != null && ((computeScrollVectorForPosition.x > 0.0f ? 1 : (computeScrollVectorForPosition.x == 0.0f ? 0 : -1)) < 0 || (computeScrollVectorForPosition.y > 0.0f ? 1 : (computeScrollVectorForPosition.y == 0.0f ? 0 : -1)) < 0)) == z7 ? -1 : 1) + layoutManager.getPosition(view);
                                if (position >= 0) {
                                }
                            }
                            position = -1;
                        } else {
                            position = layoutManager.getPosition(view2);
                        }
                        if (position != -1) {
                            return z6;
                        }
                        t0Var.setTargetPosition(position);
                        layoutManager.startSmoothScroll(t0Var);
                        return true;
                    }
                }
                position = -1;
                z6 = false;
                if (position != -1) {
                }
            }
        }
        return false;
    }
}
