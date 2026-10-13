package com.discord.recycler_view.utils;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4361d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TransitionResilientLinearLayoutManager f4362e;

    public /* synthetic */ c(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, int i5) {
        this.f4361d = i5;
        this.f4362e = transitionResilientLinearLayoutManager;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit removeAndRecycleView$lambda$1;
        Unit removeAndRecycleAllViews$lambda$4;
        Unit removeAndRecycleViewAt$lambda$5;
        switch (this.f4361d) {
            case 0:
                removeAndRecycleView$lambda$1 = TransitionResilientLinearLayoutManager.removeAndRecycleView$lambda$1(this.f4362e, (View) obj);
                return removeAndRecycleView$lambda$1;
            case 1:
                removeAndRecycleAllViews$lambda$4 = TransitionResilientLinearLayoutManager.removeAndRecycleAllViews$lambda$4(this.f4362e, (RecyclerView.Recycler) obj);
                return removeAndRecycleAllViews$lambda$4;
            default:
                removeAndRecycleViewAt$lambda$5 = TransitionResilientLinearLayoutManager.removeAndRecycleViewAt$lambda$5(this.f4362e, ((Integer) obj).intValue());
                return removeAndRecycleViewAt$lambda$5;
        }
    }
}
