package i;

import android.view.View;
import androidx.core.view.s0;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class p extends w3.q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ androidx.appcompat.app.a f10352d;

    public p(androidx.appcompat.app.a aVar) {
        this.f10352d = aVar;
    }

    @Override // w3.q, androidx.core.view.b1
    public final void b() {
        androidx.appcompat.app.a aVar = this.f10352d;
        aVar.S.setVisibility(0);
        if (aVar.S.getParent() instanceof View) {
            View view = (View) aVar.S.getParent();
            WeakHashMap weakHashMap = s0.a;
            androidx.core.view.h0.c(view);
        }
    }

    @Override // androidx.core.view.b1
    public final void onAnimationEnd() {
        androidx.appcompat.app.a aVar = this.f10352d;
        aVar.S.setAlpha(1.0f);
        aVar.V.d(null);
        aVar.V = null;
    }
}
