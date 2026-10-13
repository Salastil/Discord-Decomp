package androidx.recyclerview.widget;

import android.animation.ValueAnimator;

/* loaded from: classes.dex */
public final class v0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2479d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f2480e;

    public /* synthetic */ v0(int i5, Object obj) {
        this.f2479d = i5;
        this.f2480e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f2479d;
        Object obj = this.f2480e;
        switch (i5) {
            case 0:
                RecyclerView recyclerView = (RecyclerView) obj;
                if (recyclerView.mFirstLayoutComplete && !recyclerView.isLayoutRequested()) {
                    if (!recyclerView.mIsAttached) {
                        recyclerView.requestLayout();
                        break;
                    } else if (!recyclerView.mLayoutSuppressed) {
                        recyclerView.consumePendingUpdateOperations();
                        break;
                    } else {
                        recyclerView.mLayoutWasDefered = true;
                        break;
                    }
                }
                break;
            case 1:
                c0 c0Var = (c0) obj;
                ValueAnimator valueAnimator = c0Var.f2383z;
                int i6 = c0Var.A;
                if (i6 == 1) {
                    valueAnimator.cancel();
                } else if (i6 != 2) {
                }
                c0Var.A = 3;
                valueAnimator.setFloatValues(((Float) valueAnimator.getAnimatedValue()).floatValue(), 0.0f);
                valueAnimator.setDuration(500);
                valueAnimator.start();
                break;
            default:
                ((StaggeredGridLayoutManager) obj).d();
                break;
        }
    }
}
