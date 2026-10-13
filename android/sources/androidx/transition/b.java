package androidx.transition;

import android.animation.ObjectAnimator;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.DecelerateInterpolator;
import m3.b0;
import m3.l;
import m3.m;
import m3.n;
import m3.o;

/* loaded from: classes.dex */
public final class b extends c {

    /* renamed from: g0, reason: collision with root package name */
    public static final DecelerateInterpolator f2549g0 = new DecelerateInterpolator();
    public static final AccelerateInterpolator h0 = new AccelerateInterpolator();

    /* renamed from: i0, reason: collision with root package name */
    public static final m f2550i0 = new m(0);

    /* renamed from: j0, reason: collision with root package name */
    public static final m f2551j0 = new m(1);

    /* renamed from: k0, reason: collision with root package name */
    public static final n f2552k0 = new n(0);

    /* renamed from: l0, reason: collision with root package name */
    public static final m f2553l0 = new m(2);

    /* renamed from: m0, reason: collision with root package name */
    public static final m f2554m0 = new m(3);

    /* renamed from: n0, reason: collision with root package name */
    public static final n f2555n0 = new n(1);

    /* renamed from: f0, reason: collision with root package name */
    public final o f2556f0;

    public b(int i5) {
        n nVar = f2555n0;
        this.f2556f0 = nVar;
        if (i5 == 3) {
            this.f2556f0 = f2550i0;
        } else if (i5 == 5) {
            this.f2556f0 = f2553l0;
        } else if (i5 == 48) {
            this.f2556f0 = f2552k0;
        } else if (i5 == 80) {
            this.f2556f0 = nVar;
        } else if (i5 == 8388611) {
            this.f2556f0 = f2551j0;
        } else {
            if (i5 != 8388613) {
                throw new IllegalArgumentException("Invalid slide direction");
            }
            this.f2556f0 = f2554m0;
        }
        l lVar = new l();
        lVar.a = i5;
        this.T = lVar;
    }

    @Override // androidx.transition.c
    public final ObjectAnimator S(ViewGroup viewGroup, View view, b0 b0Var, b0 b0Var2) {
        if (b0Var2 == null) {
            return null;
        }
        int[] iArr = (int[]) b0Var2.a.get("android:slide:screenPosition");
        float translationX = view.getTranslationX();
        float translationY = view.getTranslationY();
        return android.support.v4.media.session.b.f(view, b0Var2, iArr[0], iArr[1], this.f2556f0.a(view, viewGroup), this.f2556f0.b(view, viewGroup), translationX, translationY, f2549g0, this);
    }

    @Override // androidx.transition.c
    public final ObjectAnimator T(ViewGroup viewGroup, View view, b0 b0Var, b0 b0Var2) {
        if (b0Var == null) {
            return null;
        }
        int[] iArr = (int[]) b0Var.a.get("android:slide:screenPosition");
        return android.support.v4.media.session.b.f(view, b0Var, iArr[0], iArr[1], view.getTranslationX(), view.getTranslationY(), this.f2556f0.a(view, viewGroup), this.f2556f0.b(view, viewGroup), h0, this);
    }

    @Override // androidx.transition.c, androidx.transition.Transition
    public final void d(b0 b0Var) {
        c.Q(b0Var);
        int[] iArr = new int[2];
        b0Var.f14327b.getLocationOnScreen(iArr);
        b0Var.a.put("android:slide:screenPosition", iArr);
    }

    @Override // androidx.transition.Transition
    public final void g(b0 b0Var) {
        c.Q(b0Var);
        int[] iArr = new int[2];
        b0Var.f14327b.getLocationOnScreen(iArr);
        b0Var.a.put("android:slide:screenPosition", iArr);
    }

    @Override // androidx.transition.Transition
    public final boolean v() {
        return true;
    }
}
