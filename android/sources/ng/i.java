package ng;

import android.view.View;
import android.widget.FrameLayout;
import androidx.core.view.WindowInsetsCompat;

/* loaded from: classes3.dex */
public final class i implements f {
    public final /* synthetic */ k a;

    public i(k kVar) {
        this.a = kVar;
    }

    @Override // ng.f
    public final void a(int i5) {
        k kVar = this.a;
        ch.c cVar = kVar.J;
        ch.c cVar2 = kVar.I;
        kVar.f15448b0 = i5;
        WindowInsetsCompat windowInsetsCompat = kVar.f15453e0;
        int d6 = windowInsetsCompat != null ? windowInsetsCompat.d() : 0;
        int childCount = kVar.getChildCount();
        for (int i6 = 0; i6 < childCount; i6++) {
            View childAt = kVar.getChildAt(i6);
            h hVar = (h) childAt.getLayoutParams();
            m b10 = k.b(childAt);
            int i10 = hVar.a;
            if (i10 == 1) {
                b10.b(jb.a.d(-i5, 0, ((kVar.getHeight() - k.b(childAt).f15465b) - childAt.getHeight()) - ((FrameLayout.LayoutParams) ((h) childAt.getLayoutParams())).bottomMargin));
            } else if (i10 == 2) {
                b10.b(Math.round((-i5) * hVar.f15447b));
            }
        }
        kVar.d();
        if (kVar.P != null && d6 > 0) {
            kVar.postInvalidateOnAnimation();
        }
        int height = kVar.getHeight();
        int minimumHeight = (height - kVar.getMinimumHeight()) - d6;
        int scrimVisibleHeightTrigger = height - kVar.getScrimVisibleHeightTrigger();
        int i11 = kVar.f15448b0 + minimumHeight;
        float f2 = minimumHeight;
        float abs = Math.abs(i5) / f2;
        float f10 = scrimVisibleHeightTrigger / f2;
        float min = Math.min(1.0f, f10);
        cVar2.f3502d = min;
        cVar2.f3504e = k0.d.c(1.0f, min, 0.5f, min);
        cVar2.f3506f = i11;
        cVar2.A(abs);
        float min2 = Math.min(1.0f, f10);
        cVar.f3502d = min2;
        cVar.f3504e = k0.d.c(1.0f, min2, 0.5f, min2);
        cVar.f3506f = i11;
        cVar.A(abs);
    }
}
