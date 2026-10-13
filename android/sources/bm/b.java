package bm;

import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c2;
import androidx.core.view.r;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.safeareaview.ReactSafeAreaView;
import com.swmansion.rnscreens.b0;
import kotlin.jvm.internal.Intrinsics;
import nm.k;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements r {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3041d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3042e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f3041d = i5;
        this.f3042e = obj;
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View v5, WindowInsetsCompat insets) {
        WindowInsetsCompat onAttachedToWindow$lambda$0;
        switch (this.f3041d) {
            case 0:
                d dVar = (d) this.f3042e;
                Intrinsics.checkNotNullParameter(v5, "v");
                Intrinsics.checkNotNullParameter(insets, "insets");
                ThemedReactContext themedReactContext = dVar.f3044d;
                ViewGroup b10 = tl.c.b(themedReactContext);
                FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
                boolean z5 = (dVar.f3048w || tl.c.d(themedReactContext) != 16 || dVar.f3047v) ? false : true;
                c2 c2Var = insets.a;
                Insets f2 = c2Var.f(2);
                Intrinsics.checkNotNullExpressionValue(f2, "getInsets(...)");
                Insets f10 = c2Var.f(519);
                Intrinsics.checkNotNullExpressionValue(f10, "getInsets(...)");
                int i5 = !z5 ? 0 : c2Var.f(8).f1514d;
                int i6 = f2.a;
                int i10 = dVar.f3045e ? 0 : f10.f1512b;
                int i11 = f2.f1513c;
                if (!dVar.f3046i) {
                    i5 = Math.max(f2.f1514d, i5);
                }
                layoutParams.setMargins(i6, i10, i11, i5);
                if (b10 != null) {
                    b10.setLayoutParams(layoutParams);
                }
                break;
            case 1:
                onAttachedToWindow$lambda$0 = ReactSafeAreaView.onAttachedToWindow$lambda$0((ReactSafeAreaView) this.f3042e, v5, insets);
                break;
            case 2:
                k kVar = (k) this.f3042e;
                Intrinsics.checkNotNullParameter(v5, "<unused var>");
                Intrinsics.checkNotNullParameter(insets, "windowInsets");
                kVar.e(insets);
                break;
            case 3:
                b0 b0Var = (b0) this.f3042e;
                Intrinsics.checkNotNullParameter(v5, "<unused var>");
                Intrinsics.checkNotNullParameter(insets, "windowInsets");
                b0Var.z(insets);
                break;
            default:
                p0.a aVar = (p0.a) this.f3042e;
                Intrinsics.checkNotNullParameter(v5, "<unused var>");
                Intrinsics.checkNotNullParameter(insets, "insets");
                c2 c2Var2 = insets.a;
                aVar.f16260b = c2Var2.f(647).f1512b;
                aVar.f16261c = c2Var2.f(647).f1514d;
                aVar.i();
                break;
        }
        return insets;
    }
}
