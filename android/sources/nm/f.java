package nm;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends AnimatorListenerAdapter {
    public final /* synthetic */ BottomSheetBehavior a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f15562b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ SheetAnimationCoordinator f15563c;

    public f(BottomSheetBehavior bottomSheetBehavior, int i5, SheetAnimationCoordinator sheetAnimationCoordinator) {
        this.a = bottomSheetBehavior;
        this.f15562b = i5;
        this.f15563c = sheetAnimationCoordinator;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        SheetAnimationCoordinator sheetAnimationCoordinator = this.f15563c;
        sheetAnimationCoordinator.f6724d = null;
        Screen b10 = sheetAnimationCoordinator.b();
        b10.getParent().requestLayout();
        b10.onSheetYTranslationChanged$react_native_screens_release();
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        BottomSheetBehavior bottomSheetBehavior = this.a;
        Intrinsics.checkNotNullParameter(bottomSheetBehavior, "<this>");
        int i5 = this.f15562b;
        bottomSheetBehavior.f5968l = i5;
        SheetAnimationCoordinator.c(this.f15563c.b(), i5);
    }
}
