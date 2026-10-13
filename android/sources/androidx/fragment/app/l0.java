package androidx.fragment.app;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.os.Bundle;
import android.view.View;
import android.view.animation.Animation;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class l0 {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Cloneable f2039b;

    public l0(FragmentManager fragmentManager) {
        Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
        this.a = fragmentManager;
        this.f2039b = new CopyOnWriteArrayList();
    }

    public void a(Fragment f2, Bundle bundle, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.a(f2, bundle, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentActivityCreated(fragmentManager, f2, bundle);
        }
    }

    public void b(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        FragmentActivity fragmentActivity = fragmentManager.f1933w.f1911e;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.b(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentAttached(fragmentManager, f2, fragmentActivity);
        }
    }

    public void c(Fragment f2, Bundle bundle, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.c(f2, bundle, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentCreated(fragmentManager, f2, bundle);
        }
    }

    public void d(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.d(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentDestroyed(fragmentManager, f2);
        }
    }

    public void e(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.e(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentDetached(fragmentManager, f2);
        }
    }

    public void f(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.f(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentPaused(fragmentManager, f2);
        }
    }

    public void g(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        FragmentActivity fragmentActivity = fragmentManager.f1933w.f1911e;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.g(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentPreAttached(fragmentManager, f2, fragmentActivity);
        }
    }

    public void h(Fragment f2, Bundle bundle, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.h(f2, bundle, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentPreCreated(fragmentManager, f2, bundle);
        }
    }

    public void i(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.i(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentResumed(fragmentManager, f2);
        }
    }

    public void j(Fragment f2, Bundle outState, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        Intrinsics.checkNotNullParameter(outState, "outState");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.j(f2, outState, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentSaveInstanceState(fragmentManager, f2, outState);
        }
    }

    public void k(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.k(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentStarted(fragmentManager, f2);
        }
    }

    public void l(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.l(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentStopped(fragmentManager, f2);
        }
    }

    public void m(Fragment f2, View v5, Bundle bundle, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        Intrinsics.checkNotNullParameter(v5, "v");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.m(f2, v5, bundle, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentViewCreated(fragmentManager, f2, v5, bundle);
        }
    }

    public void n(Fragment f2, boolean z5) {
        Intrinsics.checkNotNullParameter(f2, "f");
        FragmentManager fragmentManager = (FragmentManager) this.a;
        Fragment fragment = fragmentManager.f1935y;
        if (fragment != null) {
            FragmentManager parentFragmentManager = fragment.getParentFragmentManager();
            Intrinsics.checkNotNullExpressionValue(parentFragmentManager, "parent.getParentFragmentManager()");
            parentFragmentManager.f1925o.n(f2, true);
        }
        Iterator it = ((CopyOnWriteArrayList) this.f2039b).iterator();
        while (it.hasNext()) {
            p0 p0Var = (p0) it.next();
            if (z5) {
                p0Var.getClass();
            }
            p0Var.a.onFragmentViewDestroyed(fragmentManager, f2);
        }
    }

    public l0(Animation animation) {
        this.a = animation;
        this.f2039b = null;
    }

    public l0(Animator animator) {
        this.a = null;
        AnimatorSet animatorSet = new AnimatorSet();
        this.f2039b = animatorSet;
        animatorSet.play(animator);
    }
}
