package androidx.swiperefreshlayout.widget;

import android.animation.Animator;

/* loaded from: classes.dex */
public final class b implements Animator.AnimatorListener {
    public final /* synthetic */ c a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ CircularProgressDrawable f2507b;

    public b(CircularProgressDrawable circularProgressDrawable, c cVar) {
        this.f2507b = circularProgressDrawable;
        this.a = cVar;
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationCancel(Animator animator) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationRepeat(Animator animator) {
        CircularProgressDrawable circularProgressDrawable = this.f2507b;
        c cVar = this.a;
        circularProgressDrawable.a(1.0f, cVar, true);
        cVar.k = cVar.f2511e;
        cVar.f2516l = cVar.f2512f;
        cVar.f2517m = cVar.f2513g;
        cVar.a((cVar.j + 1) % cVar.f2515i.length);
        if (!circularProgressDrawable.f2505x) {
            circularProgressDrawable.f2504w += 1.0f;
            return;
        }
        circularProgressDrawable.f2505x = false;
        animator.cancel();
        animator.setDuration(1332L);
        animator.start();
        if (cVar.f2518n) {
            cVar.f2518n = false;
        }
    }

    @Override // android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        this.f2507b.f2504w = 0.0f;
    }
}
