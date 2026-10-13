package com.discord.recycler_view.utils;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4363d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TransitionResilientLinearLayoutManager f4364e;

    public /* synthetic */ d(TransitionResilientLinearLayoutManager transitionResilientLinearLayoutManager, int i5) {
        this.f4363d = i5;
        this.f4364e = transitionResilientLinearLayoutManager;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit removeAndRecycleView$lambda$2;
        Unit onLayoutChildren$lambda$7;
        Unit removeAndRecycleViewAt$lambda$6;
        switch (this.f4363d) {
            case 0:
                removeAndRecycleView$lambda$2 = TransitionResilientLinearLayoutManager.removeAndRecycleView$lambda$2(this.f4364e, (View) obj, (RecyclerView.Recycler) obj2);
                return removeAndRecycleView$lambda$2;
            case 1:
                onLayoutChildren$lambda$7 = TransitionResilientLinearLayoutManager.onLayoutChildren$lambda$7(this.f4364e, (RecyclerView.Recycler) obj, (RecyclerView.State) obj2);
                return onLayoutChildren$lambda$7;
            default:
                removeAndRecycleViewAt$lambda$6 = TransitionResilientLinearLayoutManager.removeAndRecycleViewAt$lambda$6(this.f4364e, ((Integer) obj).intValue(), (RecyclerView.Recycler) obj2);
                return removeAndRecycleViewAt$lambda$6;
        }
    }
}
