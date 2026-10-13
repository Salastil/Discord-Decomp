package eh;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;

/* loaded from: classes3.dex */
public final class g extends AnimatorListenerAdapter {
    public final /* synthetic */ boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f8092b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ h f8093c;

    public g(h hVar, boolean z5, int i5) {
        this.f8093c = hVar;
        this.a = z5;
        this.f8092b = i5;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        h hVar = this.f8093c;
        hVar.f8084b.setTranslationX(0.0f);
        hVar.a(this.f8092b, 0.0f, this.a);
    }
}
