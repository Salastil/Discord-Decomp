package nm;

import android.animation.ValueAnimator;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class e implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ SheetAnimationCoordinator f15561b;

    public /* synthetic */ e(SheetAnimationCoordinator sheetAnimationCoordinator, int i5) {
        this.a = i5;
        this.f15561b = sheetAnimationCoordinator;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator it) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(it, "it");
                Object animatedValue = it.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Float");
                this.f15561b.e(((Float) animatedValue).floatValue());
                break;
            case 1:
                Intrinsics.checkNotNullParameter(it, "it");
                Object animatedValue2 = it.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue2, "null cannot be cast to non-null type kotlin.Float");
                this.f15561b.e(((Float) animatedValue2).floatValue());
                break;
            case 2:
                Intrinsics.checkNotNullParameter(it, "it");
                Screen b10 = this.f15561b.b();
                Object animatedValue3 = it.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue3, "null cannot be cast to non-null type kotlin.Float");
                b10.setTranslationY(((Float) animatedValue3).floatValue());
                break;
            default:
                Intrinsics.checkNotNullParameter(it, "it");
                Screen b11 = this.f15561b.b();
                Object animatedValue4 = it.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue4, "null cannot be cast to non-null type kotlin.Float");
                b11.setTranslationY(((Float) animatedValue4).floatValue());
                break;
        }
    }
}
