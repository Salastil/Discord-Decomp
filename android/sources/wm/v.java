package wm;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.view.View;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class v extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ w f19945b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ AnimatorSet f19946c;

    public /* synthetic */ v(w wVar, AnimatorSet animatorSet, int i5) {
        this.a = i5;
        this.f19945b = wVar;
        this.f19946c = animatorSet;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animation) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(animation, "animation");
                w wVar = this.f19945b;
                wVar.f19948c.f9624b = false;
                if (Intrinsics.areEqual(wVar.f19954i, this.f19946c)) {
                    wVar.f19954i = null;
                }
                if (wVar.f19951f == x.f19958v) {
                    wVar.f19951f = x.f19957i;
                    r rVar = wVar.f19950e;
                    if (rVar != null) {
                        rVar.b();
                    }
                    wVar.a();
                    break;
                }
                break;
            default:
                Intrinsics.checkNotNullParameter(animation, "animation");
                w wVar2 = this.f19945b;
                wVar2.f19948c.f9624b = false;
                if (Intrinsics.areEqual(wVar2.f19954i, this.f19946c)) {
                    wVar2.f19954i = null;
                }
                View view = wVar2.f19947b;
                BottomSheetBehavior D = BottomSheetBehavior.D(view);
                Intrinsics.checkNotNullExpressionValue(D, "from(...)");
                Object parent = view.getParent();
                View view2 = parent instanceof View ? (View) parent : null;
                view.offsetTopAndBottom((view2 != null ? view2.getHeight() : view.getHeight()) - view.getTop());
                D.P(5);
                wVar2.a.dismiss();
                if (wVar2.f19951f == x.f19956e) {
                    wVar2.f19951f = x.f19955d;
                    r rVar2 = wVar2.f19950e;
                    if (rVar2 != null) {
                        rVar2.a();
                    }
                    wVar2.a();
                    break;
                }
                break;
        }
    }
}
