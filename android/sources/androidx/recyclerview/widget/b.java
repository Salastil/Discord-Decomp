package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class b implements p0 {
    public final RecyclerView.Adapter a;

    public b(RecyclerView.Adapter adapter) {
        this.a = adapter;
    }

    @Override // androidx.recyclerview.widget.p0
    public final void a(int i5, int i6) {
        this.a.notifyItemMoved(i5, i6);
    }

    @Override // androidx.recyclerview.widget.p0
    public final void b(int i5, int i6) {
        this.a.notifyItemRangeInserted(i5, i6);
    }

    @Override // androidx.recyclerview.widget.p0
    public final void c(int i5, int i6) {
        this.a.notifyItemRangeRemoved(i5, i6);
    }

    @Override // androidx.recyclerview.widget.p0
    public final void d(int i5, int i6, Object obj) {
        this.a.notifyItemRangeChanged(i5, i6, obj);
    }
}
