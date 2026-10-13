package com.google.android.material.behavior;

import android.animation.TimeInterpolator;
import android.content.Context;
import android.util.AttributeSet;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;
import android.view.accessibility.AccessibilityManager;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.c;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.discord.R;
import com.facebook.imageutils.JfifUtil;
import el.i;
import java.util.Iterator;
import java.util.LinkedHashSet;
import s4.h;
import ta.a;
import v0.b;
import v0.d;

/* loaded from: classes3.dex */
public class HideViewOnScrollBehavior<V extends View> extends b {
    public a a;

    /* renamed from: b, reason: collision with root package name */
    public AccessibilityManager f5939b;

    /* renamed from: c, reason: collision with root package name */
    public pg.a f5940c;

    /* renamed from: e, reason: collision with root package name */
    public int f5942e;

    /* renamed from: f, reason: collision with root package name */
    public int f5943f;

    /* renamed from: g, reason: collision with root package name */
    public TimeInterpolator f5944g;

    /* renamed from: h, reason: collision with root package name */
    public TimeInterpolator f5945h;
    public ViewPropertyAnimator k;

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashSet f5941d = new LinkedHashSet();

    /* renamed from: i, reason: collision with root package name */
    public int f5946i = 0;
    public int j = 2;

    public HideViewOnScrollBehavior() {
    }

    @Override // v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        if (this.f5939b == null) {
            this.f5939b = (AccessibilityManager) view.getContext().getSystemService(AccessibilityManager.class);
        }
        AccessibilityManager accessibilityManager = this.f5939b;
        if (accessibilityManager != null && this.f5940c == null) {
            pg.a aVar = new pg.a(this, view, 1);
            this.f5940c = aVar;
            accessibilityManager.addTouchExplorationStateChangeListener(aVar);
            view.addOnAttachStateChangeListener(new i(6, this));
        }
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        int i6 = ((d) view.getLayoutParams()).f19134c;
        if (i6 == 80 || i6 == 81) {
            w(1);
        } else {
            int absoluteGravity = Gravity.getAbsoluteGravity(i6, i5);
            w((absoluteGravity == 3 || absoluteGravity == 19) ? 2 : 0);
        }
        this.f5946i = this.a.y(view, marginLayoutParams);
        this.f5942e = a.G(view.getContext(), R.attr.motionDurationLong2, JfifUtil.MARKER_APP1);
        this.f5943f = a.G(view.getContext(), R.attr.motionDurationMedium4, 175);
        this.f5944g = a.H(view.getContext(), R.attr.motionEasingEmphasizedInterpolator, mg.a.f14495d);
        this.f5945h = a.H(view.getContext(), R.attr.motionEasingEmphasizedInterpolator, mg.a.f14494c);
        return false;
    }

    @Override // v0.b
    public final void p(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10, int[] iArr) {
        if (i5 <= 0) {
            if (i5 < 0) {
                x(view);
                return;
            }
            return;
        }
        if (this.j == 1) {
            return;
        }
        AccessibilityManager accessibilityManager = this.f5939b;
        if (accessibilityManager == null || !accessibilityManager.isTouchExplorationEnabled()) {
            ViewPropertyAnimator viewPropertyAnimator = this.k;
            if (viewPropertyAnimator != null) {
                viewPropertyAnimator.cancel();
                view.clearAnimation();
            }
            this.j = 1;
            Iterator it = this.f5941d.iterator();
            if (it.hasNext()) {
                throw h.b(it);
            }
            this.k = this.a.A(this.f5946i, view).setInterpolator(this.f5945h).setDuration(this.f5943f).setListener(new c(9, this));
        }
    }

    @Override // v0.b
    public final boolean t(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6) {
        return i5 == 2;
    }

    public final void w(int i5) {
        a aVar = this.a;
        if (aVar == null || aVar.z() != i5) {
            if (i5 == 0) {
                this.a = new pg.b(2);
            } else if (i5 == 1) {
                this.a = new pg.b(0);
            } else {
                if (i5 != 2) {
                    throw new IllegalArgumentException(h.e(i5, "Invalid view edge position value: ", ". Must be 0, 1 or 2."));
                }
                this.a = new pg.b(1);
            }
        }
    }

    public final void x(View view) {
        if (this.j == 2) {
            return;
        }
        ViewPropertyAnimator viewPropertyAnimator = this.k;
        if (viewPropertyAnimator != null) {
            viewPropertyAnimator.cancel();
            view.clearAnimation();
        }
        this.j = 2;
        Iterator it = this.f5941d.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
        this.a.getClass();
        this.k = this.a.A(0, view).setInterpolator(this.f5944g).setDuration(this.f5942e).setListener(new c(9, this));
    }

    public HideViewOnScrollBehavior(@NonNull Context context, AttributeSet attributeSet) {
    }
}
