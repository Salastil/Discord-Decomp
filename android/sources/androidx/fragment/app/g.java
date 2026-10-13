package androidx.fragment.app;

import android.content.Context;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Animation;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class g extends x1 {

    /* renamed from: c, reason: collision with root package name */
    public final h f2007c;

    public g(h animationInfo) {
        Intrinsics.checkNotNullParameter(animationInfo, "animationInfo");
        this.f2007c = animationInfo;
    }

    @Override // androidx.fragment.app.x1
    public final void b(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        h hVar = this.f2007c;
        y1 y1Var = hVar.a;
        View view = y1Var.f2125c.mView;
        view.clearAnimation();
        container.endViewTransition(view);
        hVar.a.c(this);
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Animation from operation " + y1Var + " has been cancelled.");
        }
    }

    @Override // androidx.fragment.app.x1
    public final void c(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        h hVar = this.f2007c;
        y1 y1Var = hVar.a;
        if (hVar.a()) {
            y1Var.c(this);
            return;
        }
        Context context = container.getContext();
        View view = y1Var.f2125c.mView;
        Intrinsics.checkNotNullExpressionValue(context, "context");
        l0 b10 = hVar.b(context);
        if (b10 == null) {
            throw new IllegalStateException("Required value was null.");
        }
        Animation animation = (Animation) b10.a;
        if (animation == null) {
            throw new IllegalStateException("Required value was null.");
        }
        if (y1Var.a != a2.f1961d) {
            view.startAnimation(animation);
            y1Var.c(this);
            return;
        }
        container.startViewTransition(view);
        m0 m0Var = new m0(animation, container, view);
        m0Var.setAnimationListener(new f(y1Var, container, view, this));
        view.startAnimation(m0Var);
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Animation from operation " + y1Var + " has started.");
        }
    }
}
