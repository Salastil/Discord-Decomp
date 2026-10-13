package com.google.android.material.sidesheet;

import a5.k0;
import af.k;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.os.Build;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.Property;
import android.util.TypedValue;
import android.view.AbsSavedState;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.ViewParent;
import androidx.activity.BackEventCompat;
import androidx.annotation.NonNull;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.customview.widget.ViewDragHelper;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import com.google.android.material.sidesheet.SideSheetBehavior;
import eh.g;
import eh.h;
import hc.u;
import java.lang.ref.WeakReference;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.WeakHashMap;
import jb.a;
import lh.i;
import lh.l;
import lh.m;
import mh.c;
import v0.b;
import v0.d;

/* loaded from: classes3.dex */
public class SideSheetBehavior<V extends View> extends b implements eh.b {
    public a a;

    /* renamed from: b, reason: collision with root package name */
    public final i f6087b;

    /* renamed from: c, reason: collision with root package name */
    public final ColorStateList f6088c;

    /* renamed from: d, reason: collision with root package name */
    public final m f6089d;

    /* renamed from: e, reason: collision with root package name */
    public final k f6090e;

    /* renamed from: f, reason: collision with root package name */
    public final float f6091f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f6092g;

    /* renamed from: h, reason: collision with root package name */
    public int f6093h;

    /* renamed from: i, reason: collision with root package name */
    public ViewDragHelper f6094i;
    public boolean j;
    public final float k;

    /* renamed from: l, reason: collision with root package name */
    public int f6095l;

    /* renamed from: m, reason: collision with root package name */
    public int f6096m;

    /* renamed from: n, reason: collision with root package name */
    public int f6097n;

    /* renamed from: o, reason: collision with root package name */
    public int f6098o;

    /* renamed from: p, reason: collision with root package name */
    public WeakReference f6099p;

    /* renamed from: q, reason: collision with root package name */
    public WeakReference f6100q;

    /* renamed from: r, reason: collision with root package name */
    public final int f6101r;

    /* renamed from: s, reason: collision with root package name */
    public VelocityTracker f6102s;

    /* renamed from: t, reason: collision with root package name */
    public h f6103t;

    /* renamed from: u, reason: collision with root package name */
    public int f6104u;

    /* renamed from: v, reason: collision with root package name */
    public final LinkedHashSet f6105v;

    /* renamed from: w, reason: collision with root package name */
    public final c f6106w;

    public SideSheetBehavior() {
        this.f6090e = new k(this);
        this.f6092g = true;
        this.f6093h = 5;
        this.k = 0.1f;
        this.f6101r = -1;
        this.f6105v = new LinkedHashSet();
        this.f6106w = new c(this, 0);
    }

    public final void A() {
        View view;
        WeakReference weakReference = this.f6099p;
        if (weakReference == null || (view = (View) weakReference.get()) == null) {
            return;
        }
        s0.m(KeyCommandDescriptor.ModifierFlags.CONTROL, view);
        s0.j(0, view);
        s0.m(KeyCommandDescriptor.ModifierFlags.COMMAND, view);
        s0.j(0, view);
        if (this.f6093h != 5) {
            s0.n(view, androidx.core.view.accessibility.a.f1559m, null, new u(5, this));
        }
        if (this.f6093h != 3) {
            s0.n(view, androidx.core.view.accessibility.a.k, null, new u(3, this));
        }
    }

    @Override // eh.b
    public final void a(BackEventCompat backEventCompat) {
        h hVar = this.f6103t;
        if (hVar == null) {
            return;
        }
        hVar.f8088f = backEventCompat;
    }

    @Override // eh.b
    public final void b(BackEventCompat backEventCompat) {
        ViewGroup.MarginLayoutParams marginLayoutParams;
        h hVar = this.f6103t;
        if (hVar == null) {
            return;
        }
        a aVar = this.a;
        int i5 = (aVar == null || aVar.v() == 0) ? 5 : 3;
        if (hVar.f8088f == null) {
            Log.w("MaterialBackHelper", "Must call startBackProgress() before updateBackProgress()");
        }
        BackEventCompat backEventCompat2 = hVar.f8088f;
        hVar.f8088f = backEventCompat;
        if (backEventCompat2 != null) {
            hVar.a(i5, backEventCompat.f731c, backEventCompat.f732d == 0);
        }
        WeakReference weakReference = this.f6099p;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        View view = (View) this.f6099p.get();
        WeakReference weakReference2 = this.f6100q;
        View view2 = weakReference2 != null ? (View) weakReference2.get() : null;
        if (view2 == null || (marginLayoutParams = (ViewGroup.MarginLayoutParams) view2.getLayoutParams()) == null) {
            return;
        }
        this.a.N(marginLayoutParams, (int) ((view.getScaleX() * this.f6095l) + this.f6098o));
        view2.requestLayout();
    }

    @Override // eh.b
    public final void c() {
        int i5;
        final ViewGroup.MarginLayoutParams marginLayoutParams;
        h hVar = this.f6103t;
        if (hVar == null) {
            return;
        }
        BackEventCompat backEventCompat = hVar.f8088f;
        ValueAnimator.AnimatorUpdateListener animatorUpdateListener = null;
        hVar.f8088f = null;
        int i6 = 5;
        if (backEventCompat == null || Build.VERSION.SDK_INT < 34) {
            w(5);
            return;
        }
        a aVar = this.a;
        if (aVar != null && aVar.v() != 0) {
            i6 = 3;
        }
        androidx.appcompat.widget.c cVar = new androidx.appcompat.widget.c(4, this);
        WeakReference weakReference = this.f6100q;
        final View view = weakReference != null ? (View) weakReference.get() : null;
        if (view != null && (marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams()) != null) {
            final int m5 = this.a.m(marginLayoutParams);
            animatorUpdateListener = new ValueAnimator.AnimatorUpdateListener() { // from class: mh.b
                @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                    SideSheetBehavior.this.a.N(marginLayoutParams, mg.a.c(m5, 0, valueAnimator.getAnimatedFraction()));
                    view.requestLayout();
                }
            };
        }
        View view2 = hVar.f8084b;
        boolean z5 = backEventCompat.f732d == 0;
        boolean z6 = (Gravity.getAbsoluteGravity(i6, view2.getLayoutDirection()) & 3) == 3;
        float scaleX = view2.getScaleX() * view2.getWidth();
        ViewGroup.LayoutParams layoutParams = view2.getLayoutParams();
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            ViewGroup.MarginLayoutParams marginLayoutParams2 = (ViewGroup.MarginLayoutParams) layoutParams;
            i5 = z6 ? marginLayoutParams2.leftMargin : marginLayoutParams2.rightMargin;
        } else {
            i5 = 0;
        }
        float f2 = scaleX + i5;
        Property property = View.TRANSLATION_X;
        if (z6) {
            f2 = -f2;
        }
        ObjectAnimator ofFloat = ObjectAnimator.ofFloat(view2, (Property<View, Float>) property, f2);
        if (animatorUpdateListener != null) {
            ofFloat.addUpdateListener(animatorUpdateListener);
        }
        ofFloat.setInterpolator(new q2.a(1));
        ofFloat.setDuration(mg.a.c(hVar.f8085c, hVar.f8086d, backEventCompat.f731c));
        ofFloat.addListener(new g(hVar, z5, i6));
        ofFloat.addListener(cVar);
        ofFloat.start();
    }

    @Override // eh.b
    public final void d() {
        h hVar = this.f6103t;
        if (hVar == null) {
            return;
        }
        View view = hVar.f8084b;
        if (hVar.f8088f == null) {
            Log.w("MaterialBackHelper", "Must call startBackProgress() and updateBackProgress() before cancelBackProgress()");
        }
        BackEventCompat backEventCompat = hVar.f8088f;
        hVar.f8088f = null;
        if (backEventCompat == null) {
            return;
        }
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playTogether(ObjectAnimator.ofFloat(view, (Property<View, Float>) View.SCALE_X, 1.0f), ObjectAnimator.ofFloat(view, (Property<View, Float>) View.SCALE_Y, 1.0f));
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                animatorSet.playTogether(ObjectAnimator.ofFloat(viewGroup.getChildAt(i5), (Property<View, Float>) View.SCALE_Y, 1.0f));
            }
        }
        animatorSet.setDuration(hVar.f8087e);
        animatorSet.start();
    }

    @Override // v0.b
    public final void g(d dVar) {
        this.f6099p = null;
        this.f6094i = null;
        this.f6103t = null;
    }

    @Override // v0.b
    public final void j() {
        this.f6099p = null;
        this.f6094i = null;
        this.f6103t = null;
    }

    @Override // v0.b
    public final boolean k(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        ViewDragHelper viewDragHelper;
        VelocityTracker velocityTracker;
        if ((!view.isShown() && s0.g(view) == null) || !this.f6092g) {
            this.j = true;
            return false;
        }
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0 && (velocityTracker = this.f6102s) != null) {
            velocityTracker.recycle();
            this.f6102s = null;
        }
        if (this.f6102s == null) {
            this.f6102s = VelocityTracker.obtain();
        }
        this.f6102s.addMovement(motionEvent);
        if (actionMasked == 0) {
            this.f6104u = (int) motionEvent.getX();
        } else if ((actionMasked == 1 || actionMasked == 3) && this.j) {
            this.j = false;
            return false;
        }
        return (this.j || (viewDragHelper = this.f6094i) == null || !viewDragHelper.r(motionEvent)) ? false : true;
    }

    @Override // v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        View view2;
        View view3;
        int i6;
        View findViewById;
        int i10 = 1;
        if (coordinatorLayout.getFitsSystemWindows() && !view.getFitsSystemWindows()) {
            view.setFitsSystemWindows(true);
        }
        WeakReference weakReference = this.f6099p;
        i iVar = this.f6087b;
        int i11 = 0;
        if (weakReference == null) {
            this.f6099p = new WeakReference(view);
            this.f6103t = new h(view);
            if (iVar != null) {
                view.setBackground(iVar);
                float f2 = this.f6091f;
                if (f2 == -1.0f) {
                    f2 = view.getElevation();
                }
                iVar.p(f2);
            } else {
                ColorStateList colorStateList = this.f6088c;
                if (colorStateList != null) {
                    WeakHashMap weakHashMap = s0.a;
                    j0.i(view, colorStateList);
                }
            }
            int i12 = this.f6093h == 5 ? 4 : 0;
            if (view.getVisibility() != i12) {
                view.setVisibility(i12);
            }
            A();
            if (view.getImportantForAccessibility() == 0) {
                view.setImportantForAccessibility(1);
            }
            if (s0.g(view) == null) {
                s0.q(view, view.getResources().getString(R.string.side_sheet_accessibility_pane_title));
            }
        }
        int i13 = Gravity.getAbsoluteGravity(((d) view.getLayoutParams()).f19134c, i5) == 3 ? 1 : 0;
        a aVar = this.a;
        if (aVar == null || aVar.v() != i13) {
            d dVar = null;
            m mVar = this.f6089d;
            if (i13 == 0) {
                this.a = new mh.a(this, i10);
                if (mVar != null) {
                    WeakReference weakReference2 = this.f6099p;
                    if (weakReference2 != null && (view3 = (View) weakReference2.get()) != null && (view3.getLayoutParams() instanceof d)) {
                        dVar = (d) view3.getLayoutParams();
                    }
                    if (dVar == null || ((ViewGroup.MarginLayoutParams) dVar).rightMargin <= 0) {
                        l g6 = mVar.g();
                        g6.f14011f = new lh.a(0.0f);
                        g6.f14012g = new lh.a(0.0f);
                        m a = g6.a();
                        if (iVar != null) {
                            iVar.setShapeAppearanceModel(a);
                        }
                    }
                }
            } else {
                if (i13 != 1) {
                    throw new IllegalArgumentException(s4.h.e(i13, "Invalid sheet edge position value: ", ". Must be 0 or 1."));
                }
                this.a = new mh.a(this, i11);
                if (mVar != null) {
                    WeakReference weakReference3 = this.f6099p;
                    if (weakReference3 != null && (view2 = (View) weakReference3.get()) != null && (view2.getLayoutParams() instanceof d)) {
                        dVar = (d) view2.getLayoutParams();
                    }
                    if (dVar == null || ((ViewGroup.MarginLayoutParams) dVar).leftMargin <= 0) {
                        l g10 = mVar.g();
                        g10.f14010e = new lh.a(0.0f);
                        g10.f14013h = new lh.a(0.0f);
                        m a10 = g10.a();
                        if (iVar != null) {
                            iVar.setShapeAppearanceModel(a10);
                        }
                    }
                }
            }
        }
        if (this.f6094i == null) {
            this.f6094i = new ViewDragHelper(coordinatorLayout.getContext(), coordinatorLayout, this.f6106w);
        }
        int s2 = this.a.s(view);
        coordinatorLayout.k(i5, view);
        this.f6096m = coordinatorLayout.getWidth();
        this.f6097n = this.a.t(coordinatorLayout);
        this.f6095l = view.getWidth();
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        this.f6098o = marginLayoutParams != null ? this.a.a(marginLayoutParams) : 0;
        int i14 = this.f6093h;
        if (i14 == 1 || i14 == 2) {
            i11 = s2 - this.a.s(view);
        } else if (i14 != 3) {
            if (i14 != 5) {
                throw new IllegalStateException("Unexpected value: " + this.f6093h);
            }
            i11 = this.a.p();
        }
        WeakHashMap weakHashMap2 = s0.a;
        view.offsetLeftAndRight(i11);
        if (this.f6100q == null && (i6 = this.f6101r) != -1 && (findViewById = coordinatorLayout.findViewById(i6)) != null) {
            this.f6100q = new WeakReference(findViewById);
        }
        Iterator it = this.f6105v.iterator();
        while (it.hasNext()) {
            if (it.next() != null) {
                throw new ClassCastException();
            }
        }
        return true;
    }

    @Override // v0.b
    public final boolean m(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        view.measure(ViewGroup.getChildMeasureSpec(i5, coordinatorLayout.getPaddingRight() + coordinatorLayout.getPaddingLeft() + marginLayoutParams.leftMargin + marginLayoutParams.rightMargin + i6, marginLayoutParams.width), ViewGroup.getChildMeasureSpec(i10, coordinatorLayout.getPaddingBottom() + coordinatorLayout.getPaddingTop() + marginLayoutParams.topMargin + marginLayoutParams.bottomMargin, marginLayoutParams.height));
        return true;
    }

    @Override // v0.b
    public final void r(View view, Parcelable parcelable) {
        int i5 = ((mh.d) parcelable).f14509i;
        if (i5 == 1 || i5 == 2) {
            i5 = 5;
        }
        this.f6093h = i5;
    }

    @Override // v0.b
    public final Parcelable s(View view) {
        AbsSavedState absSavedState = View.BaseSavedState.EMPTY_STATE;
        return new mh.d(this);
    }

    @Override // v0.b
    public final boolean v(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        VelocityTracker velocityTracker;
        if (!view.isShown()) {
            return false;
        }
        int actionMasked = motionEvent.getActionMasked();
        if (this.f6093h == 1 && actionMasked == 0) {
            return true;
        }
        if (y()) {
            this.f6094i.k(motionEvent);
        }
        if (actionMasked == 0 && (velocityTracker = this.f6102s) != null) {
            velocityTracker.recycle();
            this.f6102s = null;
        }
        if (this.f6102s == null) {
            this.f6102s = VelocityTracker.obtain();
        }
        this.f6102s.addMovement(motionEvent);
        if (y() && actionMasked == 2 && !this.j && y()) {
            float abs = Math.abs(this.f6104u - motionEvent.getX());
            ViewDragHelper viewDragHelper = this.f6094i;
            if (abs > viewDragHelper.f1694b) {
                viewDragHelper.b(motionEvent.getPointerId(motionEvent.getActionIndex()), view);
            }
        }
        return !this.j;
    }

    public final void w(int i5) {
        if (i5 == 1 || i5 == 2) {
            throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(new StringBuilder("STATE_"), i5 == 1 ? "DRAGGING" : "SETTLING", " should not be set externally."));
        }
        WeakReference weakReference = this.f6099p;
        if (weakReference == null || weakReference.get() == null) {
            x(i5);
            return;
        }
        View view = (View) this.f6099p.get();
        a1.l lVar = new a1.l(i5, 5, this);
        ViewParent parent = view.getParent();
        if (parent != null && parent.isLayoutRequested() && view.isAttachedToWindow()) {
            view.post(lVar);
        } else {
            lVar.run();
        }
    }

    public final void x(int i5) {
        View view;
        if (this.f6093h == i5) {
            return;
        }
        this.f6093h = i5;
        WeakReference weakReference = this.f6099p;
        if (weakReference == null || (view = (View) weakReference.get()) == null) {
            return;
        }
        int i6 = this.f6093h == 5 ? 4 : 0;
        if (view.getVisibility() != i6) {
            view.setVisibility(i6);
        }
        Iterator it = this.f6105v.iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
        A();
    }

    public final boolean y() {
        if (this.f6094i != null) {
            return this.f6092g || this.f6093h == 1;
        }
        return false;
    }

    public final void z(View view, int i5, boolean z5) {
        int n6;
        if (i5 == 3) {
            n6 = this.a.n();
        } else {
            if (i5 != 5) {
                throw new IllegalArgumentException(k0.d.i(i5, "Invalid state to get outer edge offset: "));
            }
            n6 = this.a.p();
        }
        ViewDragHelper viewDragHelper = this.f6094i;
        if (viewDragHelper == null || (!z5 ? viewDragHelper.s(view, n6, view.getTop()) : viewDragHelper.q(n6, view.getTop()))) {
            x(i5);
        } else {
            x(2);
            this.f6090e.g(i5);
        }
    }

    public SideSheetBehavior(@NonNull Context context, AttributeSet attributeSet) {
        this.f6090e = new k(this);
        this.f6092g = true;
        this.f6093h = 5;
        this.k = 0.1f;
        this.f6101r = -1;
        this.f6105v = new LinkedHashSet();
        this.f6106w = new c(this, 0);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.K);
        if (obtainStyledAttributes.hasValue(3)) {
            this.f6088c = k0.u(context, obtainStyledAttributes, 3);
        }
        if (obtainStyledAttributes.hasValue(6)) {
            this.f6089d = m.c(context, attributeSet, 0, R.style.Widget_Material3_SideSheet).a();
        }
        if (obtainStyledAttributes.hasValue(5)) {
            int resourceId = obtainStyledAttributes.getResourceId(5, -1);
            this.f6101r = resourceId;
            WeakReference weakReference = this.f6100q;
            if (weakReference != null) {
                weakReference.clear();
            }
            this.f6100q = null;
            WeakReference weakReference2 = this.f6099p;
            if (weakReference2 != null) {
                View view = (View) weakReference2.get();
                if (resourceId != -1 && view.isLaidOut()) {
                    view.requestLayout();
                }
            }
        }
        m mVar = this.f6089d;
        if (mVar != null) {
            i iVar = new i(mVar);
            this.f6087b = iVar;
            iVar.m(context);
            ColorStateList colorStateList = this.f6088c;
            if (colorStateList != null) {
                this.f6087b.q(colorStateList);
            } else {
                TypedValue typedValue = new TypedValue();
                context.getTheme().resolveAttribute(android.R.attr.colorBackground, typedValue, true);
                this.f6087b.setTint(typedValue.data);
            }
        }
        this.f6091f = obtainStyledAttributes.getDimension(2, -1.0f);
        this.f6092g = obtainStyledAttributes.getBoolean(4, true);
        obtainStyledAttributes.recycle();
        ViewConfiguration.get(context).getScaledMaximumFlingVelocity();
    }
}
