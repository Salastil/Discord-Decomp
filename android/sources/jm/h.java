package jm;

import android.os.Handler;
import android.os.Looper;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import io.sentry.android.core.h1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends f {
    public Handler S;
    public final boolean R = true;
    public final h1 T = new h1(12, this);
    public z U = new z();

    public static Boolean O(View view, View view2, View view3) {
        if (Intrinsics.areEqual(view3, view2)) {
            return Boolean.TRUE;
        }
        if (Intrinsics.areEqual(view3, view)) {
            return Boolean.FALSE;
        }
        if (!(view3 instanceof ViewGroup)) {
            return null;
        }
        ViewGroup viewGroup = (ViewGroup) view3;
        int childCount = viewGroup.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = viewGroup.getChildAt(i5);
            Intrinsics.checkNotNull(childAt);
            Boolean O = O(view, view2, childAt);
            if (O != null) {
                return O;
            }
        }
        return null;
    }

    @Override // jm.f
    public final void B() {
        this.U = new z();
    }

    @Override // jm.f
    public final boolean G(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        if (!(handler instanceof h) || ((h) handler).N(this)) {
            return super.G(handler);
        }
        View view = handler.f12876f;
        Intrinsics.checkNotNull(view);
        View view2 = this.f12876f;
        Intrinsics.checkNotNull(view2);
        Boolean O = O(view, view2, view.getRootView());
        Intrinsics.checkNotNull(O);
        return O.booleanValue();
    }

    @Override // jm.f
    public final boolean I(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        if (((handler instanceof h) && (N(handler) || ((h) handler).N(this))) || (handler instanceof km.l)) {
            return true;
        }
        return super.I(handler);
    }

    @Override // jm.f
    public final boolean J(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        if ((handler instanceof h) && !N(handler) && !((h) handler).N(this)) {
            View view = this.f12876f;
            Intrinsics.checkNotNull(view);
            View view2 = handler.f12876f;
            Intrinsics.checkNotNull(view2);
            Boolean O = O(view, view2, view.getRootView());
            if (O != null) {
                return O.booleanValue();
            }
        }
        return super.J(handler);
    }

    public final void M() {
        int i5 = this.f12878h;
        if (i5 == 0) {
            e();
        } else if (i5 == 2) {
            m();
        } else {
            if (i5 != 4) {
                return;
            }
            k();
        }
    }

    public final boolean N(f fVar) {
        View view = fVar.f12876f;
        while (view != null) {
            if (Intrinsics.areEqual(view, this.f12876f)) {
                return true;
            }
            Object parent = view.getParent();
            view = parent instanceof View ? (View) parent : null;
        }
        return false;
    }

    @Override // jm.f
    public final boolean t() {
        return this.R;
    }

    @Override // jm.f
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (event.getAction() == 0) {
            Handler handler = this.S;
            if (handler != null) {
                handler.removeCallbacksAndMessages(null);
            }
            this.S = null;
            return;
        }
        if (event.getAction() != 1 || this.k) {
            return;
        }
        M();
    }

    @Override // jm.f
    public final void z(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        if (event.getAction() == 10) {
            if (this.S == null) {
                this.S = new Handler(Looper.getMainLooper());
            }
            Handler handler = this.S;
            Intrinsics.checkNotNull(handler);
            handler.postDelayed(this.T, 4L);
            return;
        }
        if (!this.k) {
            M();
            return;
        }
        if (this.f12878h == 4 && event.getToolType(0) == 2) {
            this.U = jb.a.k(event);
            return;
        }
        if (this.f12878h == 0) {
            if (event.getAction() == 7 || event.getAction() == 9) {
                d();
                a(false);
            }
        }
    }
}
