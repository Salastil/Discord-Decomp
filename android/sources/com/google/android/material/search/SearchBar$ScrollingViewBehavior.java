package com.google.android.material.search;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import androidx.annotation.NonNull;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.google.android.material.appbar.AppBarLayout$ScrollingViewBehavior;
import ng.g;

/* loaded from: classes3.dex */
public class SearchBar$ScrollingViewBehavior extends AppBarLayout$ScrollingViewBehavior {

    /* renamed from: g, reason: collision with root package name */
    public boolean f6086g;

    public SearchBar$ScrollingViewBehavior() {
        this.f6086g = false;
    }

    @Override // com.google.android.material.appbar.AppBarLayout$ScrollingViewBehavior, v0.b
    public final boolean h(CoordinatorLayout coordinatorLayout, View view, View view2) {
        super.h(coordinatorLayout, view, view2);
        if (!this.f6086g && (view2 instanceof g)) {
            this.f6086g = true;
            g gVar = (g) view2;
            gVar.setBackgroundColor(0);
            gVar.setTargetElevation(0.0f);
        }
        return false;
    }

    public SearchBar$ScrollingViewBehavior(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f6086g = false;
    }
}
