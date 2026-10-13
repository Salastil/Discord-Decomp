package jm;

import android.view.MotionEvent;
import android.view.View;
import android.widget.ScrollView;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;
import java.util.ArrayList;
import java.util.List;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class p implements o {

    /* renamed from: d, reason: collision with root package name */
    public final q f12924d;

    /* renamed from: e, reason: collision with root package name */
    public final ReactSwipeRefreshLayout f12925e;

    /* renamed from: i, reason: collision with root package name */
    public Float f12926i;

    public p(q handler, ReactSwipeRefreshLayout swipeRefreshLayout) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(swipeRefreshLayout, "swipeRefreshLayout");
        this.f12924d = handler;
        this.f12925e = swipeRefreshLayout;
    }

    @Override // jm.o
    public final boolean a() {
        return false;
    }

    @Override // jm.o
    public final Boolean b(f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        return null;
    }

    @Override // jm.o
    public final boolean c(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        return true;
    }

    @Override // jm.o
    public final boolean d() {
        return true;
    }

    @Override // jm.o
    public final boolean e(View view) {
        return io.sentry.config.a.h(view);
    }

    @Override // jm.o
    public final void f(MotionEvent event) {
        l lVar;
        Intrinsics.checkNotNullParameter(event, "event");
        View childAt = this.f12925e.getChildAt(0);
        f fVar = null;
        ScrollView view = childAt instanceof ScrollView ? (ScrollView) childAt : null;
        if (view == null) {
            return;
        }
        q qVar = this.f12924d;
        g gVar = qVar.F;
        if (gVar != null) {
            Intrinsics.checkNotNullParameter(view, "view");
            ArrayList<f> g6 = gVar.f12900b.g(view);
            if (g6 != null) {
                for (f fVar2 : g6) {
                    if (fVar2 instanceof q) {
                        fVar = fVar2;
                    }
                }
                throw new NoSuchElementException("Collection contains no element matching the predicate.");
            }
        }
        Float f2 = this.f12926i;
        if (f2 != null) {
            float floatValue = f2.floatValue() - event.getY();
            lVar = floatValue < 0.0f ? l.f12914d : floatValue > 0.0f ? l.f12915e : l.f12916i;
        } else {
            lVar = l.f12916i;
        }
        if (fVar != null && fVar.f12878h == 4 && (lVar == l.f12915e || view.canScrollVertically(-1))) {
            qVar.m();
        }
        this.f12926i = Float.valueOf(event.getY());
    }

    @Override // jm.o
    public final Boolean g(View view, MotionEvent motionEvent) {
        return io.sentry.config.a.I(view, motionEvent);
    }

    @Override // jm.o
    public final void h(MotionEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
    }

    @Override // jm.o
    public final boolean i(List list, q qVar) {
        io.sentry.config.a.K(list, qVar);
        return true;
    }
}
