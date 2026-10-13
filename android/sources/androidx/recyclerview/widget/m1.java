package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class m1 extends RecyclerView.OnScrollListener {
    public boolean a = false;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ n1 f2425b;

    public m1(n1 n1Var) {
        this.f2425b = n1Var;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public final void onScrollStateChanged(RecyclerView recyclerView, int i5) {
        super.onScrollStateChanged(recyclerView, i5);
        if (i5 == 0 && this.a) {
            this.a = false;
            this.f2425b.b();
        }
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public final void onScrolled(RecyclerView recyclerView, int i5, int i6) {
        if (i5 == 0 && i6 == 0) {
            return;
        }
        this.a = true;
    }
}
