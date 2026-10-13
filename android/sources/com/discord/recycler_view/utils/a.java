package com.discord.recycler_view.utils;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4357d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TransitionResilientGridLayoutManager f4358e;

    public /* synthetic */ a(TransitionResilientGridLayoutManager transitionResilientGridLayoutManager, int i5) {
        this.f4357d = i5;
        this.f4358e = transitionResilientGridLayoutManager;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit removeAndRecycleView$lambda$1;
        Unit removeAndRecycleViewAt$lambda$5;
        Unit removeAndRecycleAllViews$lambda$4;
        switch (this.f4357d) {
            case 0:
                removeAndRecycleView$lambda$1 = TransitionResilientGridLayoutManager.removeAndRecycleView$lambda$1(this.f4358e, (View) obj);
                return removeAndRecycleView$lambda$1;
            case 1:
                removeAndRecycleViewAt$lambda$5 = TransitionResilientGridLayoutManager.removeAndRecycleViewAt$lambda$5(this.f4358e, ((Integer) obj).intValue());
                return removeAndRecycleViewAt$lambda$5;
            default:
                removeAndRecycleAllViews$lambda$4 = TransitionResilientGridLayoutManager.removeAndRecycleAllViews$lambda$4(this.f4358e, (RecyclerView.Recycler) obj);
                return removeAndRecycleAllViews$lambda$4;
        }
    }
}
