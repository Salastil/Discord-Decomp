package com.google.android.material.floatingactionbutton;

import android.content.Context;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import lg.a;
import v0.b;
import v0.d;

/* loaded from: classes3.dex */
public class FloatingActionButton$BaseBehavior<T> extends b {
    public FloatingActionButton$BaseBehavior() {
    }

    @Override // v0.b
    public final boolean e(View view) {
        throw new ClassCastException();
    }

    @Override // v0.b
    public final void g(d dVar) {
        if (dVar.f19139h == 0) {
            dVar.f19139h = 80;
        }
    }

    @Override // v0.b
    public final boolean h(CoordinatorLayout coordinatorLayout, View view, View view2) {
        throw new ClassCastException();
    }

    @Override // v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        throw new ClassCastException();
    }

    public FloatingActionButton$BaseBehavior(Context context, AttributeSet attributeSet) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, a.f13964o);
        obtainStyledAttributes.getBoolean(0, true);
        obtainStyledAttributes.recycle();
    }
}
