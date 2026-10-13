package androidx.fragment.app;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class i extends AnimatorListenerAdapter {
    public final /* synthetic */ ViewGroup a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ View f2019b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ boolean f2020c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ y1 f2021d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ j f2022e;

    public i(ViewGroup viewGroup, View view, boolean z5, y1 y1Var, j jVar) {
        this.a = viewGroup;
        this.f2019b = view;
        this.f2020c = z5;
        this.f2021d = y1Var;
        this.f2022e = jVar;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator anim) {
        Intrinsics.checkNotNullParameter(anim, "anim");
        ViewGroup viewGroup = this.a;
        View viewToAnimate = this.f2019b;
        viewGroup.endViewTransition(viewToAnimate);
        boolean z5 = this.f2020c;
        y1 y1Var = this.f2021d;
        if (z5 || y1Var.a == a2.f1963i) {
            a2 a2Var = y1Var.a;
            Intrinsics.checkNotNullExpressionValue(viewToAnimate, "viewToAnimate");
            a2Var.a(viewToAnimate, viewGroup);
        }
        j jVar = this.f2022e;
        jVar.f2031c.a.c(jVar);
        if (FragmentManager.M(2)) {
            Log.v("FragmentManager", "Animator from operation " + y1Var + " has ended.");
        }
    }
}
