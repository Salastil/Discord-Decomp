package androidx.appcompat.widget;

import android.os.SystemClock;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewParent;

/* loaded from: classes.dex */
public final class v1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1136d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ w1 f1137e;

    public /* synthetic */ v1(w1 w1Var, int i5) {
        this.f1136d = i5;
        this.f1137e = w1Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1136d) {
            case 0:
                ViewParent parent = this.f1137e.f1150v.getParent();
                if (parent != null) {
                    parent.requestDisallowInterceptTouchEvent(true);
                    break;
                }
                break;
            default:
                w1 w1Var = this.f1137e;
                w1Var.a();
                View view = w1Var.f1150v;
                if (view.isEnabled() && !view.isLongClickable() && w1Var.c()) {
                    view.getParent().requestDisallowInterceptTouchEvent(true);
                    long uptimeMillis = SystemClock.uptimeMillis();
                    MotionEvent obtain = MotionEvent.obtain(uptimeMillis, uptimeMillis, 3, 0.0f, 0.0f, 0);
                    view.onTouchEvent(obtain);
                    obtain.recycle();
                    w1Var.f1153y = true;
                    break;
                }
                break;
        }
    }
}
