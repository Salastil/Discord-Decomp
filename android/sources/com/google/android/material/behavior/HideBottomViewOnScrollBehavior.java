package com.google.android.material.behavior;

import android.animation.TimeInterpolator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;
import android.view.accessibility.AccessibilityManager;
import androidx.appcompat.widget.c;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.discord.R;
import com.facebook.imageutils.JfifUtil;
import el.i;
import java.util.Iterator;
import java.util.LinkedHashSet;
import pg.a;
import s4.h;
import v0.b;

@Deprecated
/* loaded from: classes3.dex */
public class HideBottomViewOnScrollBehavior<V extends View> extends b {

    /* renamed from: b, reason: collision with root package name */
    public int f5931b;

    /* renamed from: c, reason: collision with root package name */
    public int f5932c;

    /* renamed from: d, reason: collision with root package name */
    public TimeInterpolator f5933d;

    /* renamed from: e, reason: collision with root package name */
    public TimeInterpolator f5934e;

    /* renamed from: g, reason: collision with root package name */
    public AccessibilityManager f5936g;

    /* renamed from: h, reason: collision with root package name */
    public a f5937h;
    public ViewPropertyAnimator k;
    public final LinkedHashSet a = new LinkedHashSet();

    /* renamed from: f, reason: collision with root package name */
    public int f5935f = 0;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f5938i = true;
    public int j = 2;

    public HideBottomViewOnScrollBehavior() {
    }

    @Override // v0.b
    public boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        this.f5935f = view.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) view.getLayoutParams()).bottomMargin;
        this.f5931b = ta.a.G(view.getContext(), R.attr.motionDurationLong2, JfifUtil.MARKER_APP1);
        this.f5932c = ta.a.G(view.getContext(), R.attr.motionDurationMedium4, 175);
        this.f5933d = ta.a.H(view.getContext(), R.attr.motionEasingEmphasizedInterpolator, mg.a.f14495d);
        this.f5934e = ta.a.H(view.getContext(), R.attr.motionEasingEmphasizedInterpolator, mg.a.f14494c);
        if (this.f5936g == null) {
            this.f5936g = (AccessibilityManager) view.getContext().getSystemService(AccessibilityManager.class);
        }
        AccessibilityManager accessibilityManager = this.f5936g;
        if (accessibilityManager == null || this.f5937h != null) {
            return false;
        }
        a aVar = new a(this, view, 0);
        this.f5937h = aVar;
        accessibilityManager.addTouchExplorationStateChangeListener(aVar);
        view.addOnAttachStateChangeListener(new i(5, this));
        return false;
    }

    @Override // v0.b
    public final void p(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10, int[] iArr) {
        AccessibilityManager accessibilityManager;
        if (i5 <= 0) {
            if (i5 < 0) {
                w(view);
                return;
            }
            return;
        }
        if (this.j == 1) {
            return;
        }
        if (this.f5938i && (accessibilityManager = this.f5936g) != null && accessibilityManager.isTouchExplorationEnabled()) {
            return;
        }
        ViewPropertyAnimator viewPropertyAnimator = this.k;
        if (viewPropertyAnimator != null) {
            viewPropertyAnimator.cancel();
            view.clearAnimation();
        }
        this.j = 1;
        Iterator it = this.a.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
        this.k = view.animate().translationY(this.f5935f).setInterpolator(this.f5934e).setDuration(this.f5932c).setListener(new c(8, this));
    }

    @Override // v0.b
    public boolean t(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6) {
        return i5 == 2;
    }

    public final void w(View view) {
        if (this.j == 2) {
            return;
        }
        ViewPropertyAnimator viewPropertyAnimator = this.k;
        if (viewPropertyAnimator != null) {
            viewPropertyAnimator.cancel();
            view.clearAnimation();
        }
        this.j = 2;
        Iterator it = this.a.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
        this.k = view.animate().translationY(0).setInterpolator(this.f5933d).setDuration(this.f5931b).setListener(new c(8, this));
    }

    public HideBottomViewOnScrollBehavior(Context context, AttributeSet attributeSet) {
    }
}
