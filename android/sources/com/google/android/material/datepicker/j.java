package com.google.android.material.datepicker;

import android.graphics.Canvas;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes3.dex */
public final class j extends RecyclerView.ItemDecoration {
    public final /* synthetic */ l a;

    public j(l lVar) {
        this.a = lVar;
        y.c(null);
        y.c(null);
    }

    @Override // androidx.recyclerview.widget.RecyclerView.ItemDecoration
    public final void onDraw(Canvas canvas, RecyclerView recyclerView, RecyclerView.State state) {
        if ((recyclerView.getAdapter() instanceof a0) && (recyclerView.getLayoutManager() instanceof GridLayoutManager)) {
            this.a.getClass();
            throw null;
        }
    }
}
