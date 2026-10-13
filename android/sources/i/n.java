package i;

import android.view.View;
import android.view.ViewGroup;
import android.widget.PopupWindow;
import androidx.core.view.s0;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class n extends w3.q {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10349d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f10350e;

    public /* synthetic */ n(int i5, Object obj) {
        this.f10349d = i5;
        this.f10350e = obj;
    }

    @Override // w3.q, androidx.core.view.b1
    public void b() {
        switch (this.f10349d) {
            case 0:
                ((o) this.f10350e).f10351d.S.setVisibility(0);
                break;
        }
    }

    @Override // androidx.core.view.b1
    public final void onAnimationEnd() {
        int i5 = this.f10349d;
        Object obj = this.f10350e;
        switch (i5) {
            case 0:
                androidx.appcompat.app.a aVar = ((o) obj).f10351d;
                aVar.S.setAlpha(1.0f);
                aVar.V.d(null);
                aVar.V = null;
                break;
            default:
                androidx.appcompat.app.a aVar2 = ((q) obj).f10353b;
                aVar2.S.setVisibility(8);
                PopupWindow popupWindow = aVar2.T;
                if (popupWindow != null) {
                    popupWindow.dismiss();
                } else if (aVar2.S.getParent() instanceof View) {
                    View view = (View) aVar2.S.getParent();
                    WeakHashMap weakHashMap = s0.a;
                    androidx.core.view.h0.c(view);
                }
                aVar2.S.e();
                aVar2.V.d(null);
                aVar2.V = null;
                ViewGroup viewGroup = aVar2.X;
                WeakHashMap weakHashMap2 = s0.a;
                androidx.core.view.h0.c(viewGroup);
                break;
        }
    }
}
