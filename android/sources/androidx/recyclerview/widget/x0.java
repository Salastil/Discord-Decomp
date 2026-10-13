package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.ViewInfoStore;

/* loaded from: classes.dex */
public final class x0 implements ViewInfoStore.ProcessCallback {
    public final /* synthetic */ RecyclerView a;

    public x0(RecyclerView recyclerView) {
        this.a = recyclerView;
    }

    @Override // androidx.recyclerview.widget.ViewInfoStore.ProcessCallback
    public final void a(RecyclerView.ViewHolder viewHolder) {
        RecyclerView recyclerView = this.a;
        recyclerView.mLayout.removeAndRecycleView(viewHolder.itemView, recyclerView.mRecycler);
    }

    @Override // androidx.recyclerview.widget.ViewInfoStore.ProcessCallback
    public final void b(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo2) {
        this.a.animateAppearance(viewHolder, itemHolderInfo, itemHolderInfo2);
    }

    @Override // androidx.recyclerview.widget.ViewInfoStore.ProcessCallback
    public final void c(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo2) {
        RecyclerView recyclerView = this.a;
        recyclerView.mRecycler.n(viewHolder);
        recyclerView.animateDisappearance(viewHolder, itemHolderInfo, itemHolderInfo2);
    }

    @Override // androidx.recyclerview.widget.ViewInfoStore.ProcessCallback
    public final void d(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo2) {
        viewHolder.setIsRecyclable(false);
        RecyclerView recyclerView = this.a;
        if (recyclerView.mDataSetHasChangedAfterLayout) {
            if (recyclerView.mItemAnimator.animateChange(viewHolder, viewHolder, itemHolderInfo, itemHolderInfo2)) {
                recyclerView.postAnimationRunner();
            }
        } else if (recyclerView.mItemAnimator.animatePersistence(viewHolder, itemHolderInfo, itemHolderInfo2)) {
            recyclerView.postAnimationRunner();
        }
    }
}
