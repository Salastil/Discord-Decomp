package androidx.recyclerview.widget;

import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class z extends RecyclerView.OnScrollListener {
    public final /* synthetic */ c0 a;

    public z(c0 c0Var) {
        this.a = c0Var;
    }

    @Override // androidx.recyclerview.widget.RecyclerView.OnScrollListener
    public final void onScrolled(RecyclerView recyclerView, int i5, int i6) {
        int computeHorizontalScrollOffset = recyclerView.computeHorizontalScrollOffset();
        int computeVerticalScrollOffset = recyclerView.computeVerticalScrollOffset();
        c0 c0Var = this.a;
        int i10 = c0Var.a;
        int computeVerticalScrollRange = c0Var.f2376s.computeVerticalScrollRange();
        int i11 = c0Var.f2375r;
        c0Var.f2377t = computeVerticalScrollRange - i11 > 0 && i11 >= i10;
        int computeHorizontalScrollRange = c0Var.f2376s.computeHorizontalScrollRange();
        int i12 = c0Var.f2374q;
        boolean z5 = computeHorizontalScrollRange - i12 > 0 && i12 >= i10;
        c0Var.f2378u = z5;
        boolean z6 = c0Var.f2377t;
        if (!z6 && !z5) {
            if (c0Var.f2379v != 0) {
                c0Var.d(0);
                return;
            }
            return;
        }
        if (z6) {
            float f2 = i11;
            c0Var.f2369l = (int) ((((f2 / 2.0f) + computeVerticalScrollOffset) * f2) / computeVerticalScrollRange);
            c0Var.k = Math.min(i11, (i11 * i11) / computeVerticalScrollRange);
        }
        if (c0Var.f2378u) {
            float f10 = computeHorizontalScrollOffset;
            float f11 = i12;
            c0Var.f2372o = (int) ((((f11 / 2.0f) + f10) * f11) / computeHorizontalScrollRange);
            c0Var.f2371n = Math.min(i12, (i12 * i12) / computeHorizontalScrollRange);
        }
        int i13 = c0Var.f2379v;
        if (i13 == 0 || i13 == 1) {
            c0Var.d(1);
        }
    }
}
