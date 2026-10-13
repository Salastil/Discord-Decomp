package i;

import android.view.View;
import androidx.appcompat.widget.ActionBarOverlayLayout;
import androidx.core.view.s0;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class h0 extends w3.q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10315d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ j0 f10316e;

    public /* synthetic */ h0(j0 j0Var, int i5) {
        this.f10315d = i5;
        this.f10316e = j0Var;
    }

    @Override // androidx.core.view.b1
    public final void onAnimationEnd() {
        View view;
        int i5 = this.f10315d;
        j0 j0Var = this.f10316e;
        switch (i5) {
            case 0:
                if (j0Var.f10337o && (view = j0Var.f10331g) != null) {
                    view.setTranslationY(0.0f);
                    j0Var.f10328d.setTranslationY(0.0f);
                }
                j0Var.f10328d.setVisibility(8);
                j0Var.f10328d.setTransitioning(false);
                j0Var.f10341s = null;
                q qVar = j0Var.k;
                if (qVar != null) {
                    qVar.a(j0Var.j);
                    j0Var.j = null;
                    j0Var.k = null;
                }
                ActionBarOverlayLayout actionBarOverlayLayout = j0Var.f10327c;
                if (actionBarOverlayLayout != null) {
                    WeakHashMap weakHashMap = s0.a;
                    androidx.core.view.h0.c(actionBarOverlayLayout);
                    break;
                }
                break;
            default:
                j0Var.f10341s = null;
                j0Var.f10328d.requestLayout();
                break;
        }
    }
}
