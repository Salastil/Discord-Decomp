package androidx.appcompat.widget;

import android.widget.AbsListView;

/* loaded from: classes.dex */
public final class e2 implements AbsListView.OnScrollListener {
    public final /* synthetic */ g2 a;

    public e2(g2 g2Var) {
        this.a = g2Var;
    }

    @Override // android.widget.AbsListView.OnScrollListener
    public final void onScroll(AbsListView absListView, int i5, int i6, int i10) {
    }

    @Override // android.widget.AbsListView.OnScrollListener
    public final void onScrollStateChanged(AbsListView absListView, int i5) {
        g2 g2Var = this.a;
        c2 c2Var = g2Var.O;
        b0 b0Var = g2Var.W;
        if (i5 != 1 || b0Var.getInputMethodMode() == 2 || b0Var.getContentView() == null) {
            return;
        }
        g2Var.S.removeCallbacks(c2Var);
        c2Var.run();
    }
}
