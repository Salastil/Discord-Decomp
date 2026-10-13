package androidx.core.view;

import android.view.View;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final class a1 {
    public final WeakReference a;

    public a1(View view) {
        this.a = new WeakReference(view);
    }

    public final void a(float f2) {
        View view = (View) this.a.get();
        if (view != null) {
            view.animate().alpha(f2);
        }
    }

    public final void b() {
        View view = (View) this.a.get();
        if (view != null) {
            view.animate().cancel();
        }
    }

    public final void c(long j) {
        View view = (View) this.a.get();
        if (view != null) {
            view.animate().setDuration(j);
        }
    }

    public final void d(b1 b1Var) {
        View view = (View) this.a.get();
        if (view != null) {
            if (b1Var != null) {
                view.animate().setListener(new z0(b1Var, view, 0));
            } else {
                view.animate().setListener(null);
            }
        }
    }

    public final void e(float f2) {
        View view = (View) this.a.get();
        if (view != null) {
            view.animate().translationY(f2);
        }
    }
}
