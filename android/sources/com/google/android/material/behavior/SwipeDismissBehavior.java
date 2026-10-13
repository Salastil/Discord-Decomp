package com.google.android.material.behavior;

import android.view.MotionEvent;
import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.accessibility.a;
import androidx.core.view.s0;
import androidx.customview.widget.ViewDragHelper;
import com.discord.key_commands.KeyCommandDescriptor;
import pg.c;
import pg.d;
import v0.b;

/* loaded from: classes3.dex */
public class SwipeDismissBehavior<V extends View> extends b {
    public ViewDragHelper a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f5947b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f5948c;

    /* renamed from: d, reason: collision with root package name */
    public int f5949d = 2;

    /* renamed from: e, reason: collision with root package name */
    public float f5950e = 0.0f;

    /* renamed from: f, reason: collision with root package name */
    public float f5951f = 0.5f;

    /* renamed from: g, reason: collision with root package name */
    public final c f5952g = new c(this);

    @Override // v0.b
    public boolean k(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        boolean z5 = this.f5947b;
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            z5 = coordinatorLayout.i(view, (int) motionEvent.getX(), (int) motionEvent.getY());
            this.f5947b = z5;
        } else if (actionMasked == 1 || actionMasked == 3) {
            this.f5947b = false;
        }
        if (z5) {
            if (this.a == null) {
                this.a = new ViewDragHelper(coordinatorLayout.getContext(), coordinatorLayout, this.f5952g);
            }
            if (!this.f5948c && this.a.r(motionEvent)) {
                return true;
            }
        }
        return false;
    }

    @Override // v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        if (view.getImportantForAccessibility() == 0) {
            view.setImportantForAccessibility(1);
            s0.m(KeyCommandDescriptor.ModifierFlags.COMMAND, view);
            s0.j(0, view);
            if (w(view)) {
                s0.n(view, a.f1559m, null, new d(this));
            }
        }
        return false;
    }

    @Override // v0.b
    public final boolean v(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        if (this.a == null) {
            return false;
        }
        if (this.f5948c && motionEvent.getActionMasked() == 3) {
            return true;
        }
        this.a.k(motionEvent);
        return true;
    }

    public boolean w(View view) {
        return true;
    }
}
