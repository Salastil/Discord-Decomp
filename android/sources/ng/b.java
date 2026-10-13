package ng;

import android.animation.ValueAnimator;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.google.android.material.appbar.AppBarLayout$BaseBehavior;

/* loaded from: classes3.dex */
public final class b implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ CoordinatorLayout a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ g f15429b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ AppBarLayout$BaseBehavior f15430c;

    public b(CoordinatorLayout coordinatorLayout, AppBarLayout$BaseBehavior appBarLayout$BaseBehavior, g gVar) {
        this.f15430c = appBarLayout$BaseBehavior;
        this.a = coordinatorLayout;
        this.f15429b = gVar;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        this.f15430c.F(this.a, this.f15429b, ((Integer) valueAnimator.getAnimatedValue()).intValue());
    }
}
