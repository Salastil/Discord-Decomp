package gh;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;

/* loaded from: classes3.dex */
public final class f extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ h f9264b;

    public /* synthetic */ f(h hVar, int i5) {
        this.a = i5;
        this.f9264b = hVar;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationEnd(Animator animator) {
        switch (this.a) {
            case 1:
                super.onAnimationEnd(animator);
                h hVar = this.f9264b;
                hVar.c();
                c cVar = hVar.j;
                if (cVar != null) {
                    cVar.a((t) hVar.a);
                    break;
                }
                break;
            default:
                super.onAnimationEnd(animator);
                break;
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationRepeat(Animator animator) {
        switch (this.a) {
            case 0:
                super.onAnimationRepeat(animator);
                h hVar = this.f9264b;
                hVar.f9273g = (hVar.f9273g + 4) % hVar.f9272f.f9291e.length;
                break;
            default:
                super.onAnimationRepeat(animator);
                break;
        }
    }
}
