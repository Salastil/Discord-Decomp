package jm;

import android.os.SystemClock;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import com.facebook.react.views.scroll.ReactHorizontalScrollView;
import com.facebook.react.views.scroll.ReactScrollView;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;
import com.facebook.react.views.text.ReactTextView;
import com.facebook.react.views.textinput.ReactEditText;
import com.facebook.react.views.view.ReactViewGroup;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q extends f {
    public static final fo.u Z = fo.l.a(new f7.a(10));
    public static final m a0 = new m(0);
    public boolean S;
    public boolean T;
    public boolean U;
    public Boolean V;
    public View W;
    public k Y;
    public final boolean R = true;
    public o X = a0;

    public q() {
        this.E = true;
    }

    @Override // jm.f
    public final void A() {
        View view;
        KeyEvent.Callback callback = this.f12876f;
        if (callback instanceof o) {
            this.X = (o) callback;
        } else if (callback instanceof ReactEditText) {
            this.X = new n(this, (ReactEditText) callback);
        } else if (callback instanceof ReactSwipeRefreshLayout) {
            this.X = new p(this, (ReactSwipeRefreshLayout) callback);
        } else if (callback instanceof ReactScrollView) {
            this.X = new m(2);
        } else if (callback instanceof ReactHorizontalScrollView) {
            this.X = new m(2);
        } else if (callback instanceof ReactTextView) {
            this.X = new m(3);
        } else if (callback instanceof ReactViewGroup) {
            this.X = new m(1);
        }
        Boolean bool = this.V;
        if (bool == null || (view = this.f12876f) == null || !r8.c.p(view, bool)) {
            return;
        }
        this.W = view;
    }

    @Override // jm.f
    public final void B() {
        this.X = a0;
        this.Y = null;
        View view = this.W;
        if (view != null) {
            r8.c.p(view, null);
        }
        this.W = null;
    }

    @Override // jm.f
    public final void D() {
        super.D();
        this.S = false;
        this.T = false;
        this.U = false;
        this.E = true;
        this.V = Boolean.TRUE;
    }

    @Override // jm.f
    public final boolean G(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        return M(handler);
    }

    @Override // jm.f
    public final boolean H(ArrayList recorded) {
        Intrinsics.checkNotNullParameter(recorded, "recorded");
        return this.X.i(recorded, this);
    }

    @Override // jm.f
    public final boolean I(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Boolean b10 = this.X.b(handler);
        if (b10 != null) {
            return b10.booleanValue();
        }
        if (super.I(handler)) {
            return true;
        }
        if ((handler instanceof q) && handler.f12878h == 4) {
            q qVar = (q) handler;
            if (qVar.T && !qVar.U) {
                return false;
            }
        }
        boolean M = M(handler);
        int i5 = handler.f12878h;
        int i6 = this.f12878h;
        if (!(i6 == 4 && i5 == 4 && M) && i6 == 4 && M) {
            return !this.X.a() || handler.f12874d > 0;
        }
        return false;
    }

    public final boolean M(f other) {
        Intrinsics.checkNotNullParameter(other, "other");
        if (this.T) {
            return this.U && other.t();
        }
        return true;
    }

    public final void N() {
        long uptimeMillis = SystemClock.uptimeMillis();
        MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
        obtain.setAction(3);
        o oVar = this.X;
        View view = this.f12876f;
        Intrinsics.checkNotNull(obtain);
        oVar.g(view, obtain);
        obtain.recycle();
    }

    @Override // jm.f
    public final void g(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        k kVar = new k(this.k, this.D, this.I);
        if (Intrinsics.areEqual(kVar, this.Y)) {
            return;
        }
        this.Y = kVar;
        super.g(event);
    }

    @Override // jm.f
    public final void h(int i5, int i6) {
        this.Y = null;
        super.h(i5, i6);
    }

    @Override // jm.f
    public final boolean t() {
        return this.R;
    }

    @Override // jm.f
    public final void w() {
        N();
    }

    @Override // jm.f
    public final void x() {
        N();
    }

    @Override // jm.f
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        View view = this.f12876f;
        Intrinsics.checkNotNull(view);
        if (event.getActionMasked() == 1) {
            if (this.f12878h != 0 || this.X.c(event)) {
                this.X.g(view, event);
                int i5 = this.f12878h;
                if ((i5 == 0 || i5 == 2) && this.X.e(view)) {
                    a(false);
                }
                if (this.f12878h == 0) {
                    e();
                } else {
                    k();
                }
            } else {
                e();
            }
            this.X.h(event);
            return;
        }
        int i6 = this.f12878h;
        if (i6 != 0 && i6 != 2) {
            if (i6 == 4) {
                this.X.g(view, event);
                return;
            }
            return;
        }
        if (i6 != 2 && this.X.c(event)) {
            d();
        }
        if (this.S) {
            if (view instanceof ViewGroup) {
                ((ViewGroup) view).onInterceptTouchEvent(event);
            }
            this.X.g(view, event);
            a(false);
            return;
        }
        if ((view instanceof ViewGroup) && ((ViewGroup) view).onInterceptTouchEvent(event)) {
            this.X.g(view, event);
            a(false);
        } else if (this.X.d()) {
            this.X.f(event);
        }
    }
}
