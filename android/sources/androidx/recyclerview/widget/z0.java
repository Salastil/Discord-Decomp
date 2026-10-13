package androidx.recyclerview.widget;

import android.view.View;

/* loaded from: classes.dex */
public final class z0 {
    public final /* synthetic */ RecyclerView a;

    public z0(RecyclerView recyclerView) {
        this.a = recyclerView;
    }

    public final void a(int i5) {
        RecyclerView recyclerView = this.a;
        View childAt = recyclerView.getChildAt(i5);
        if (childAt != null) {
            recyclerView.dispatchChildDetached(childAt);
            childAt.clearAnimation();
        }
        recyclerView.removeViewAt(i5);
    }
}
