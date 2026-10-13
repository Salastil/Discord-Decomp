package nm;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g extends AnimatorListenerAdapter {
    public final /* synthetic */ BottomSheetBehavior a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f15564b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ SheetAnimationCoordinator f15565c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ float f15566d;

    public g(BottomSheetBehavior bottomSheetBehavior, int i5, SheetAnimationCoordinator sheetAnimationCoordinator, float f2) {
        this.a = bottomSheetBehavior;
        this.f15564b = i5;
        this.f15565c = sheetAnimationCoordinator;
        this.f15566d = f2;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        SheetAnimationCoordinator sheetAnimationCoordinator = this.f15565c;
        sheetAnimationCoordinator.f6724d = null;
        SheetAnimationCoordinator.c(sheetAnimationCoordinator.b(), this.f15564b);
        sheetAnimationCoordinator.b().setTranslationY(this.f15566d);
        Screen b10 = sheetAnimationCoordinator.b();
        b10.getParent().requestLayout();
        b10.onSheetYTranslationChanged$react_native_screens_release();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        BottomSheetBehavior bottomSheetBehavior = this.a;
        Intrinsics.checkNotNullParameter(bottomSheetBehavior, "<this>");
        bottomSheetBehavior.f5968l = this.f15564b;
    }
}
