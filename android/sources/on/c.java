package on;

import android.view.View;
import android.view.ViewParent;
import android.view.animation.Animation;
import com.swmansion.rnscreens.ScreenStack;
import com.swmansion.rnscreens.b0;
import com.swmansion.rnscreens.stack.views.ScreensCoordinatorLayout;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c implements Animation.AnimationListener {
    public final /* synthetic */ ScreensCoordinatorLayout a;

    public c(ScreensCoordinatorLayout screensCoordinatorLayout) {
        this.a = screensCoordinatorLayout;
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationEnd(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        ScreensCoordinatorLayout screensCoordinatorLayout = this.a;
        if (screensCoordinatorLayout.getBlockFrameworkTransitionFinalization$react_native_screens_release()) {
            screensCoordinatorLayout.setBlockFrameworkTransitionFinalization$react_native_screens_release(false);
            screensCoordinatorLayout.setNeedsTransitionFinalization$react_native_screens_release(true);
        }
        b0 fragment$react_native_screens_release = screensCoordinatorLayout.getFragment$react_native_screens_release();
        fragment$react_native_screens_release.w(true);
        View view = fragment$react_native_screens_release.getView();
        ScreensCoordinatorLayout screensCoordinatorLayout2 = null;
        ViewParent parent = view != null ? view.getParent() : null;
        if (parent instanceof ScreenStack) {
            ScreenStack screenStack = (ScreenStack) parent;
            ScreensCoordinatorLayout screensCoordinatorLayout3 = fragment$react_native_screens_release.N;
            if (screensCoordinatorLayout3 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("coordinatorLayout");
            } else {
                screensCoordinatorLayout2 = screensCoordinatorLayout3;
            }
            screenStack.onViewTransitionEnd$react_native_screens_release(screensCoordinatorLayout2);
        }
        fragment$react_native_screens_release.a().endRemovalTransition();
        screensCoordinatorLayout.setNeedsTransitionFinalization$react_native_screens_release(false);
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationRepeat(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
    }

    @Override // android.view.animation.Animation.AnimationListener
    public final void onAnimationStart(Animation animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        this.a.getFragment$react_native_screens_release().w(false);
    }
}
