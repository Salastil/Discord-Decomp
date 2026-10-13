package androidx.appcompat.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import androidx.transition.Transition;
import com.google.android.material.behavior.HideBottomViewOnScrollBehavior;
import com.google.android.material.behavior.HideViewOnScrollBehavior;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.google.android.material.sidesheet.SideSheetBehavior;
import com.swmansion.rnscreens.bottomsheet.SheetAnimationCoordinator;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;

/* loaded from: classes.dex */
public final class c extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f934b;

    public /* synthetic */ c(int i5, Object obj) {
        this.a = i5;
        this.f934b = obj;
    }

    public void a(Animator animator) {
        animator.removeListener(this);
        hl.b bVar = (hl.b) this.f934b;
        LinkedHashSet linkedHashSet = bVar.f10094o;
        if (linkedHashSet == null) {
            throw new NullPointerException("null cannot be cast to non-null type kotlin.collections.MutableCollection<T>");
        }
        TypeIntrinsics.asMutableCollection(linkedHashSet).remove(animator);
        if (linkedHashSet.isEmpty()) {
            bVar.f10084c.b(0);
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationCancel(Animator animator) {
        switch (this.a) {
            case 0:
                ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) this.f934b;
                actionBarOverlayLayout.T = null;
                actionBarOverlayLayout.G = false;
                break;
            case 2:
                Intrinsics.checkNotNullParameter(animator, "animator");
                a(animator);
                break;
            case 6:
                Intrinsics.checkNotNullParameter(animator, "animation");
                ((SheetAnimationCoordinator) this.f934b).f6723c = false;
                break;
            default:
                super.onAnimationCancel(animator);
                break;
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        switch (this.a) {
            case 0:
                ActionBarOverlayLayout actionBarOverlayLayout = (ActionBarOverlayLayout) this.f934b;
                actionBarOverlayLayout.T = null;
                actionBarOverlayLayout.G = false;
                break;
            case 1:
                eh.f fVar = (eh.f) this.f934b;
                fVar.f8084b.setTranslationY(0.0f);
                fVar.b(0.0f);
                break;
            case 2:
                Intrinsics.checkNotNullParameter(animator, "animator");
                a(animator);
                break;
            case 3:
                ((Transition) this.f934b).n();
                animator.removeListener(this);
                break;
            case 4:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f934b;
                sideSheetBehavior.x(5);
                WeakReference weakReference = sideSheetBehavior.f6099p;
                if (weakReference != null && weakReference.get() != null) {
                    ((View) sideSheetBehavior.f6099p.get()).requestLayout();
                    break;
                }
                break;
            case 5:
                n3.f fVar2 = (n3.f) this.f934b;
                ArrayList arrayList = new ArrayList(fVar2.f14788w);
                int size = arrayList.size();
                for (int i5 = 0; i5 < size; i5++) {
                    ((gh.c) arrayList.get(i5)).a(fVar2);
                }
                break;
            case 6:
                Intrinsics.checkNotNullParameter(animator, "animation");
                SheetAnimationCoordinator sheetAnimationCoordinator = (SheetAnimationCoordinator) this.f934b;
                sheetAnimationCoordinator.f6723c = false;
                sheetAnimationCoordinator.b().onSheetYTranslationChanged$react_native_screens_release();
                break;
            case 7:
                oh.k kVar = (oh.k) this.f934b;
                kVar.p();
                kVar.f15912r.start();
                break;
            case 8:
                ((HideBottomViewOnScrollBehavior) this.f934b).k = null;
                break;
            case 9:
                ((HideViewOnScrollBehavior) this.f934b).k = null;
                break;
            default:
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f934b;
                bottomSheetBehavior.Q(5);
                WeakReference weakReference2 = bottomSheetBehavior.W;
                if (weakReference2 != null && weakReference2.get() != null) {
                    ((View) bottomSheetBehavior.W.get()).requestLayout();
                    break;
                }
                break;
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationStart(Animator animation) {
        switch (this.a) {
            case 5:
                n3.f fVar = (n3.f) this.f934b;
                ArrayList arrayList = new ArrayList(fVar.f14788w);
                int size = arrayList.size();
                for (int i5 = 0; i5 < size; i5++) {
                    ((gh.c) arrayList.get(i5)).b(fVar);
                }
                break;
            case 6:
                Intrinsics.checkNotNullParameter(animation, "animation");
                SheetAnimationCoordinator sheetAnimationCoordinator = (SheetAnimationCoordinator) this.f934b;
                sheetAnimationCoordinator.f6723c = true;
                sheetAnimationCoordinator.d();
                break;
            default:
                super.onAnimationStart(animation);
                break;
        }
    }
}
