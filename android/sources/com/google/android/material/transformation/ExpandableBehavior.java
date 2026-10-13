package com.google.android.material.transformation;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import java.util.List;
import v0.b;

@Deprecated
/* loaded from: classes3.dex */
public abstract class ExpandableBehavior extends b {
    public ExpandableBehavior() {
    }

    @Override // v0.b
    public abstract boolean f(View view, View view2);

    @Override // v0.b
    public final boolean h(CoordinatorLayout coordinatorLayout, View view, View view2) {
        view2.getClass();
        throw new ClassCastException();
    }

    @Override // v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        if (!view.isLaidOut()) {
            List d6 = coordinatorLayout.d(view);
            int size = d6.size();
            for (int i6 = 0; i6 < size; i6++) {
                f(view, (View) d6.get(i6));
            }
        }
        return false;
    }

    public ExpandableBehavior(Context context, AttributeSet attributeSet) {
    }
}
