package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;

/* loaded from: classes.dex */
public final class d implements Animation.AnimationListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ i f2526b;

    public /* synthetic */ d(i iVar, int i5) {
        this.a = i5;
        this.f2526b = iVar;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationEnd(Animation animation) {
        SwipeRefreshLayout$OnRefreshListener swipeRefreshLayout$OnRefreshListener;
        switch (this.a) {
            case 0:
                ReactSwipeRefreshLayout reactSwipeRefreshLayout = (ReactSwipeRefreshLayout) this.f2526b;
                if (!reactSwipeRefreshLayout.mRefreshing) {
                    reactSwipeRefreshLayout.reset();
                    break;
                } else {
                    reactSwipeRefreshLayout.mProgress.setAlpha(255);
                    reactSwipeRefreshLayout.mProgress.start();
                    if (reactSwipeRefreshLayout.mNotify && (swipeRefreshLayout$OnRefreshListener = reactSwipeRefreshLayout.mListener) != null) {
                        swipeRefreshLayout$OnRefreshListener.c();
                    }
                    reactSwipeRefreshLayout.mCurrentTargetOffsetTop = reactSwipeRefreshLayout.mCircleView.getTop();
                    break;
                }
                break;
            default:
                i iVar = this.f2526b;
                if (!iVar.mScale) {
                    iVar.startScaleDownAnimation(null);
                    break;
                }
                break;
        }
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationRepeat(Animation animation) {
        int i5 = this.a;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationStart(Animation animation) {
        int i5 = this.a;
    }

    private final void a(Animation animation) {
    }

    private final void b(Animation animation) {
    }

    private final void c(Animation animation) {
    }

    private final void d(Animation animation) {
    }
}
