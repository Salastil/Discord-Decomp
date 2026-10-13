package androidx.swiperefreshlayout.widget;

import android.view.animation.Animation;
import android.view.animation.Transformation;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;

/* loaded from: classes.dex */
public final class f extends Animation {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2530d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ReactSwipeRefreshLayout f2531e;

    public /* synthetic */ f(ReactSwipeRefreshLayout reactSwipeRefreshLayout, int i5) {
        this.f2530d = i5;
        this.f2531e = reactSwipeRefreshLayout;
    }

    @Override // android.view.animation.Animation
    public final void applyTransformation(float f2, Transformation transformation) {
        switch (this.f2530d) {
            case 0:
                ReactSwipeRefreshLayout reactSwipeRefreshLayout = this.f2531e;
                int abs = !reactSwipeRefreshLayout.mUsingCustomStart ? reactSwipeRefreshLayout.mSpinnerOffsetEnd - Math.abs(reactSwipeRefreshLayout.mOriginalOffsetTop) : reactSwipeRefreshLayout.mSpinnerOffsetEnd;
                reactSwipeRefreshLayout.setTargetOffsetTopAndBottom((reactSwipeRefreshLayout.mFrom + ((int) ((abs - r1) * f2))) - reactSwipeRefreshLayout.mCircleView.getTop());
                CircularProgressDrawable circularProgressDrawable = reactSwipeRefreshLayout.mProgress;
                float f10 = 1.0f - f2;
                c cVar = circularProgressDrawable.f2500d;
                if (f10 != cVar.f2520p) {
                    cVar.f2520p = f10;
                }
                circularProgressDrawable.invalidateSelf();
                break;
            default:
                this.f2531e.moveToStart(f2);
                break;
        }
    }
}
