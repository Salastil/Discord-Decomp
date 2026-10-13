package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class w0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ RecyclerView f2483d;

    public w0(RecyclerView recyclerView) {
        this.f2483d = recyclerView;
    }

    @Override // java.lang.Runnable
    public final void run() {
        RecyclerView recyclerView = this.f2483d;
        RecyclerView.ItemAnimator itemAnimator = recyclerView.mItemAnimator;
        if (itemAnimator != null) {
            itemAnimator.runPendingAnimations();
        }
        recyclerView.mPostedAnimatorRunner = false;
    }
}
