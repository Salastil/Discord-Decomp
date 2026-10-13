package eightbitlab.com.blurview;

import android.view.ViewTreeObserver;
import androidx.coordinatorlayout.widget.CoordinatorLayout;

/* loaded from: classes3.dex */
public final class b implements ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8112d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f8113e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f8112d = i5;
        this.f8113e = obj;
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        switch (this.f8112d) {
            case 0:
                ((c) this.f8113e).d();
                break;
            default:
                ((CoordinatorLayout) this.f8113e).j(0);
                break;
        }
        return true;
    }
}
