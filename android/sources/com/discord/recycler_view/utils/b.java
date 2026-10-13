package com.discord.recycler_view.utils;

import android.view.View;
import androidx.recyclerview.widget.RecyclerView;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4359d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ TransitionResilientGridLayoutManager f4360e;

    public /* synthetic */ b(TransitionResilientGridLayoutManager transitionResilientGridLayoutManager, int i5) {
        this.f4359d = i5;
        this.f4360e = transitionResilientGridLayoutManager;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit removeAndRecycleView$lambda$2;
        Unit onLayoutChildren$lambda$7;
        Unit removeAndRecycleViewAt$lambda$6;
        switch (this.f4359d) {
            case 0:
                removeAndRecycleView$lambda$2 = TransitionResilientGridLayoutManager.removeAndRecycleView$lambda$2(this.f4360e, (View) obj, (RecyclerView.Recycler) obj2);
                return removeAndRecycleView$lambda$2;
            case 1:
                onLayoutChildren$lambda$7 = TransitionResilientGridLayoutManager.onLayoutChildren$lambda$7(this.f4360e, (RecyclerView.Recycler) obj, (RecyclerView.State) obj2);
                return onLayoutChildren$lambda$7;
            default:
                removeAndRecycleViewAt$lambda$6 = TransitionResilientGridLayoutManager.removeAndRecycleViewAt$lambda$6(this.f4360e, ((Integer) obj).intValue(), (RecyclerView.Recycler) obj2);
                return removeAndRecycleViewAt$lambda$6;
        }
    }
}
