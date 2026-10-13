package gh;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;

/* loaded from: classes3.dex */
public final class i extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ j f9276b;

    public /* synthetic */ i(j jVar, int i5) {
        this.a = i5;
        this.f9276b = jVar;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public void onAnimationEnd(Animator animator) {
        switch (this.a) {
            case 1:
                super.onAnimationEnd(animator);
                j jVar = this.f9276b;
                jVar.c();
                c cVar = jVar.j;
                if (cVar != null) {
                    cVar.a((t) jVar.a);
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
                j jVar = this.f9276b;
                jVar.f9285g = (jVar.f9285g + j.f9277l.length) % jVar.f9284f.f9291e.length;
                break;
            default:
                super.onAnimationRepeat(animator);
                break;
        }
    }
}
