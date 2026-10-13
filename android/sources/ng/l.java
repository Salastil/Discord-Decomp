package ng;

import android.view.View;
import androidx.coordinatorlayout.widget.CoordinatorLayout;

/* loaded from: classes3.dex */
public abstract class l extends v0.b {
    public m a;

    /* renamed from: b, reason: collision with root package name */
    public int f15464b = 0;

    public l() {
    }

    @Override // v0.b
    public boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        x(coordinatorLayout, view, i5);
        if (this.a == null) {
            this.a = new m(view);
        }
        m mVar = this.a;
        View view2 = mVar.a;
        mVar.f15465b = view2.getTop();
        mVar.f15466c = view2.getLeft();
        this.a.a();
        int i6 = this.f15464b;
        if (i6 == 0) {
            return true;
        }
        this.a.b(i6);
        this.f15464b = 0;
        return true;
    }

    public final int w() {
        m mVar = this.a;
        if (mVar != null) {
            return mVar.f15467d;
        }
        return 0;
    }

    public void x(CoordinatorLayout coordinatorLayout, View view, int i5) {
        coordinatorLayout.k(i5, view);
    }

    public l(int i5) {
    }
}
