package v0;

import android.graphics.Rect;
import android.os.Parcelable;
import android.view.MotionEvent;
import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;

/* loaded from: classes.dex */
public abstract class b {
    public boolean e(View view) {
        return false;
    }

    public boolean f(View view, View view2) {
        return false;
    }

    public boolean h(CoordinatorLayout coordinatorLayout, View view, View view2) {
        return false;
    }

    public boolean k(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        return false;
    }

    public boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        return false;
    }

    public boolean m(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10) {
        return false;
    }

    public boolean n(View view) {
        return false;
    }

    public void p(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10, int[] iArr) {
        iArr[0] = iArr[0] + i6;
        iArr[1] = iArr[1] + i10;
    }

    public boolean q(CoordinatorLayout coordinatorLayout, View view, Rect rect, boolean z5) {
        return false;
    }

    public Parcelable s(View view) {
        return View.BaseSavedState.EMPTY_STATE;
    }

    public boolean t(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6) {
        return false;
    }

    public boolean v(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        return false;
    }

    public void j() {
    }

    public void g(d dVar) {
    }

    public void i(CoordinatorLayout coordinatorLayout, View view) {
    }

    public void r(View view, Parcelable parcelable) {
    }

    public void u(CoordinatorLayout coordinatorLayout, View view, View view2, int i5) {
    }

    public void o(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6, int[] iArr, int i10) {
    }
}
