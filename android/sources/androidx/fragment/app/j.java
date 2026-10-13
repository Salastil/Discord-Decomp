package androidx.fragment.app;

import android.animation.AnimatorSet;
import android.content.Context;
import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import androidx.activity.BackEventCompat;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j extends x1 {

    /* renamed from: c, reason: collision with root package name */
    public final h f2031c;

    /* renamed from: d, reason: collision with root package name */
    public AnimatorSet f2032d;

    public j(h animatorInfo) {
        Intrinsics.checkNotNullParameter(animatorInfo, "animatorInfo");
        this.f2031c = animatorInfo;
    }

    @Override // androidx.fragment.app.x1
    public final void b(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        AnimatorSet animatorSet = this.f2032d;
        h hVar = this.f2031c;
        if (animatorSet == null) {
            hVar.a.c(this);
            return;
        }
        y1 y1Var = hVar.a;
        if (!y1Var.f2129g) {
            animatorSet.end();
        } else if (Build.VERSION.SDK_INT >= 26) {
            l.a.a(animatorSet);
        }
        if (FragmentManager.M(2)) {
            StringBuilder sb2 = new StringBuilder("Animator from operation ");
            sb2.append(y1Var);
            sb2.append(" has been canceled");
            sb2.append(y1Var.f2129g ? " with seeking." : ".");
            sb2.append(' ');
            Log.v("FragmentManager", sb2.toString());
        }
    }

    @Override // androidx.fragment.app.x1
    public final void c(ViewGroup container) {
        Intrinsics.checkNotNullParameter(container, "container");
        y1 y1Var = this.f2031c.a;
        AnimatorSet animatorSet = this.f2032d;
        if (animatorSet == null) {
            y1Var.c(this);
            return;
        }
        animatorSet.start();
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Animator from operation " + y1Var + " has started.");
        }
    }

    @Override // androidx.fragment.app.x1
    public final void d(BackEventCompat backEvent, ViewGroup container) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        Intrinsics.checkNotNullParameter(container, "container");
        y1 y1Var = this.f2031c.a;
        AnimatorSet animatorSet = this.f2032d;
        if (animatorSet == null) {
            y1Var.c(this);
            return;
        }
        if (Build.VERSION.SDK_INT < 34 || !y1Var.f2125c.mTransitioning) {
            return;
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Adding BackProgressCallbacks for Animators to operation " + y1Var);
        }
        long a = k.a.a(animatorSet);
        long j = (long) (backEvent.f731c * a);
        if (j == 0) {
            j = 1;
        }
        if (j == a) {
            j = a - 1;
        }
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Setting currentPlayTime to " + j + " for Animator " + animatorSet + " on operation " + y1Var);
        }
        l.a.b(animatorSet, j);
    }

    @Override // androidx.fragment.app.x1
    public final void e(ViewGroup container) {
        j jVar;
        Intrinsics.checkNotNullParameter(container, "container");
        h hVar = this.f2031c;
        if (hVar.a()) {
            return;
        }
        Context context = container.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "context");
        l0 b10 = hVar.b(context);
        this.f2032d = b10 != null ? (AnimatorSet) b10.f2039b : null;
        y1 y1Var = hVar.a;
        Fragment fragment = y1Var.f2125c;
        boolean z5 = y1Var.a == a2.f1963i;
        View view = fragment.mView;
        container.startViewTransition(view);
        AnimatorSet animatorSet = this.f2032d;
        if (animatorSet != null) {
            jVar = this;
            animatorSet.addListener(new i(container, view, z5, y1Var, jVar));
        } else {
            jVar = this;
        }
        AnimatorSet animatorSet2 = jVar.f2032d;
        if (animatorSet2 != null) {
            animatorSet2.setTarget(view);
        }
    }
}
