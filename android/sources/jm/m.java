package jm;

import android.view.MotionEvent;
import android.view.View;
import com.facebook.react.views.text.ReactTextView;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m implements o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12918d;

    public /* synthetic */ m(int i5) {
        this.f12918d = i5;
    }

    @Override // jm.o
    public final boolean a() {
        switch (this.f12918d) {
            case 0:
                return false;
            case 1:
                return false;
            case 2:
                return true;
            default:
                return false;
        }
    }

    @Override // jm.o
    public final Boolean b(f handler) {
        switch (this.f12918d) {
            case 0:
                Intrinsics.checkNotNullParameter(handler, "handler");
                return null;
            case 1:
                Intrinsics.checkNotNullParameter(handler, "handler");
                return null;
            case 2:
                Intrinsics.checkNotNullParameter(handler, "handler");
                return null;
            default:
                Intrinsics.checkNotNullParameter(handler, "handler");
                return Boolean.FALSE;
        }
    }

    @Override // jm.o
    public final boolean c(MotionEvent event) {
        switch (this.f12918d) {
            case 0:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            case 1:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            case 2:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            default:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
        }
        return true;
    }

    @Override // jm.o
    public final boolean d() {
        switch (this.f12918d) {
        }
        return false;
    }

    @Override // jm.o
    public final boolean e(View view) {
        switch (this.f12918d) {
            case 0:
                return io.sentry.config.a.h(view);
            case 1:
                return io.sentry.config.a.h(view);
            case 2:
                return io.sentry.config.a.h(view);
            default:
                Intrinsics.checkNotNullParameter(view, "view");
                return view instanceof ReactTextView;
        }
    }

    @Override // jm.o
    public final void f(MotionEvent event) {
        switch (this.f12918d) {
            case 0:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            case 1:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            case 2:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            default:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
        }
    }

    @Override // jm.o
    public final Boolean g(View view, MotionEvent event) {
        switch (this.f12918d) {
            case 1:
                Intrinsics.checkNotNullParameter(event, "event");
                if (view != null) {
                    break;
                }
                break;
        }
        return io.sentry.config.a.I(view, event);
    }

    @Override // jm.o
    public final void h(MotionEvent event) {
        switch (this.f12918d) {
            case 0:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            case 1:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            case 2:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
            default:
                Intrinsics.checkNotNullParameter(event, "event");
                break;
        }
    }

    @Override // jm.o
    public final boolean i(List list, q qVar) {
        switch (this.f12918d) {
            case 0:
                io.sentry.config.a.K(list, qVar);
                break;
            case 1:
                io.sentry.config.a.K(list, qVar);
                break;
            case 2:
                io.sentry.config.a.K(list, qVar);
                break;
            default:
                io.sentry.config.a.K(list, qVar);
                break;
        }
        return true;
    }
}
