package androidx.core.view;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.view.View;
import androidx.transition.Transition;

/* loaded from: classes.dex */
public final class z0 extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f1663b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f1664c;

    public /* synthetic */ z0(Object obj, View view, int i5) {
        this.a = i5;
        this.f1664c = obj;
        this.f1663b = view;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationCancel(Animator animator) {
        switch (this.a) {
            case 0:
                ((b1) this.f1664c).a();
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
                ((b1) this.f1664c).onAnimationEnd();
                break;
            case 1:
                m1 m1Var = (m1) this.f1664c;
                m1Var.a.d(1.0f);
                h1.e((View) this.f1663b, m1Var);
                break;
            default:
                ((s.e) this.f1664c).remove(animator);
                ((Transition) this.f1663b).L.remove(animator);
                break;
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationStart(Animator animator) {
        switch (this.a) {
            case 0:
                ((b1) this.f1664c).b();
                break;
            case 1:
            default:
                super.onAnimationStart(animator);
                break;
            case 2:
                ((Transition) this.f1663b).L.add(animator);
                break;
        }
    }

    public z0(Transition transition, s.e eVar) {
        this.a = 2;
        this.f1663b = transition;
        this.f1664c = eVar;
    }
}
