package com.google.android.material.snackbar;

import android.view.MotionEvent;
import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.google.android.material.behavior.SwipeDismissBehavior;
import ha.k;
import l1.c;

/* loaded from: classes3.dex */
public class BaseTransientBottomBar$Behavior extends SwipeDismissBehavior<View> {

    /* renamed from: h, reason: collision with root package name */
    public final k f6107h;

    public BaseTransientBottomBar$Behavior() {
        k kVar = new k(15);
        this.f5950e = Math.min(Math.max(0.0f, 0.1f), 1.0f);
        this.f5951f = Math.min(Math.max(0.0f, 0.6f), 1.0f);
        this.f5949d = 0;
        this.f6107h = kVar;
    }

    @Override // com.google.android.material.behavior.SwipeDismissBehavior, v0.b
    public final boolean k(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        this.f6107h.getClass();
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked != 0) {
            if (actionMasked == 1 || actionMasked == 3) {
                if (c.f13701b == null) {
                    c.f13701b = new c();
                }
                synchronized (c.f13701b.a) {
                }
            }
        } else if (coordinatorLayout.i(view, (int) motionEvent.getX(), (int) motionEvent.getY())) {
            if (c.f13701b == null) {
                c.f13701b = new c();
            }
            synchronized (c.f13701b.a) {
            }
        }
        return super.k(coordinatorLayout, view, motionEvent);
    }

    @Override // com.google.android.material.behavior.SwipeDismissBehavior
    public final boolean w(View view) {
        this.f6107h.getClass();
        return view instanceof nh.c;
    }
}
