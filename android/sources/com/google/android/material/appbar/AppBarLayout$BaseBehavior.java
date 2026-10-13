package com.google.android.material.appbar;

import a5.s;
import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Rect;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.AbsSavedState;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.AbsListView;
import android.widget.LinearLayout;
import android.widget.OverScroller;
import android.widget.ScrollView;
import androidx.collection.SimpleArrayMap;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.core.view.o;
import androidx.core.view.s0;
import e4.c;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import jb.a;
import ng.d;
import ng.e;
import ng.g;
import ng.l;
import ng.m;
import v0.b;

/* loaded from: classes3.dex */
public class AppBarLayout$BaseBehavior<T extends g> extends l {

    /* renamed from: c, reason: collision with root package name */
    public s f5911c;

    /* renamed from: d, reason: collision with root package name */
    public OverScroller f5912d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f5913e;

    /* renamed from: f, reason: collision with root package name */
    public int f5914f;

    /* renamed from: g, reason: collision with root package name */
    public int f5915g;

    /* renamed from: h, reason: collision with root package name */
    public int f5916h;

    /* renamed from: i, reason: collision with root package name */
    public VelocityTracker f5917i;
    public int j;
    public int k;

    /* renamed from: l, reason: collision with root package name */
    public ValueAnimator f5918l;

    /* renamed from: m, reason: collision with root package name */
    public d f5919m;

    /* renamed from: n, reason: collision with root package name */
    public WeakReference f5920n;

    public AppBarLayout$BaseBehavior() {
        this.f5914f = -1;
        this.f5916h = -1;
    }

    public static View A(CoordinatorLayout coordinatorLayout) {
        int childCount = coordinatorLayout.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = coordinatorLayout.getChildAt(i5);
            if ((childAt instanceof o) || (childAt instanceof AbsListView) || (childAt instanceof ScrollView)) {
                return childAt;
            }
        }
        return null;
    }

    public static void H(CoordinatorLayout coordinatorLayout, g gVar, int i5, int i6, boolean z5) {
        View view;
        boolean z6;
        int abs = Math.abs(i5);
        int childCount = gVar.getChildCount();
        int i10 = 0;
        while (true) {
            if (i10 >= childCount) {
                view = null;
                break;
            }
            view = gVar.getChildAt(i10);
            if (abs >= view.getTop() && abs <= view.getBottom()) {
                break;
            } else {
                i10++;
            }
        }
        if (view != null) {
            int i11 = ((e) view.getLayoutParams()).a;
            if ((i11 & 1) != 0) {
                int minimumHeight = view.getMinimumHeight();
                z6 = true;
                if (i6 > 0) {
                }
            }
        }
        z6 = false;
        if (gVar.I) {
            z6 = gVar.h(A(coordinatorLayout));
        }
        boolean g6 = gVar.g(z6);
        if (!z5) {
            if (g6) {
                ArrayList arrayList = (ArrayList) ((SimpleArrayMap) coordinatorLayout.f1422e.f7953e).get(gVar);
                List arrayList2 = arrayList != null ? new ArrayList(arrayList) : null;
                if (arrayList2 == null) {
                    arrayList2 = Collections.EMPTY_LIST;
                }
                int size = arrayList2.size();
                for (int i12 = 0; i12 < size; i12++) {
                    b bVar = ((v0.d) ((View) arrayList2.get(i12)).getLayoutParams()).a;
                    if (bVar instanceof AppBarLayout$ScrollingViewBehavior) {
                        if (((AppBarLayout$ScrollingViewBehavior) bVar).f5924f == 0) {
                            return;
                        }
                    }
                }
                return;
            }
            return;
        }
        if (gVar.getBackground() != null) {
            gVar.getBackground().jumpToCurrentState();
        }
        if (gVar.getForeground() != null) {
            gVar.getForeground().jumpToCurrentState();
        }
        if (gVar.getStateListAnimator() != null) {
            gVar.getStateListAnimator().jumpToCurrentState();
        }
    }

    public static View y(AppBarLayout$BaseBehavior appBarLayout$BaseBehavior, CoordinatorLayout coordinatorLayout) {
        int childCount = coordinatorLayout.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = coordinatorLayout.getChildAt(i5);
            if (((v0.d) childAt.getLayoutParams()).a instanceof AppBarLayout$ScrollingViewBehavior) {
                return childAt;
            }
        }
        return null;
    }

    public final int B() {
        return w() + this.j;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0030  */
    @Override // v0.b
    /* renamed from: C, reason: merged with bridge method [inline-methods] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void o(CoordinatorLayout coordinatorLayout, g gVar, View view, int i5, int i6, int[] iArr, int i10) {
        g gVar2;
        int i11;
        int i12;
        if (i6 != 0) {
            if (i6 < 0) {
                i11 = -gVar.getTotalScrollRange();
                i12 = gVar.getDownNestedPreScrollRange() + i11;
            } else {
                i11 = -gVar.getUpNestedPreScrollRange();
                i12 = 0;
            }
            int i13 = i11;
            int i14 = i12;
            if (i13 != i14) {
                gVar2 = gVar;
                iArr[1] = E(coordinatorLayout, gVar2, B() - i6, i13, i14);
                if (gVar2.I) {
                    return;
                }
                gVar2.g(gVar2.h(view));
                return;
            }
        }
        gVar2 = gVar;
        if (gVar2.I) {
        }
    }

    public final d D(Parcelable parcelable, g gVar) {
        int w5 = w();
        int childCount = gVar.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = gVar.getChildAt(i5);
            int bottom = childAt.getBottom() + w5;
            if (childAt.getTop() + w5 <= 0 && bottom >= 0) {
                if (parcelable == null) {
                    parcelable = d2.b.f7398e;
                }
                d dVar = new d(parcelable);
                boolean z5 = w5 == 0;
                dVar.f15434v = z5;
                dVar.f15433i = !z5 && (-w5) >= gVar.getTotalScrollRange();
                dVar.f15435w = i5;
                dVar.f15437y = bottom == gVar.getTopInset() + childAt.getMinimumHeight();
                dVar.f15436x = bottom / childAt.getHeight();
                return dVar;
            }
        }
        return null;
    }

    public final int E(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10) {
        int i11;
        boolean z5;
        ArrayList arrayList;
        int i12;
        g gVar = (g) view;
        int B = B();
        int i13 = 0;
        if (i6 == 0 || B < i6 || B > i10) {
            this.j = 0;
        } else {
            int d6 = a.d(i5, i6, i10);
            if (B != d6) {
                if (gVar.f15444w) {
                    int abs = Math.abs(d6);
                    int childCount = gVar.getChildCount();
                    int i14 = 0;
                    while (true) {
                        if (i14 >= childCount) {
                            break;
                        }
                        View childAt = gVar.getChildAt(i14);
                        e eVar = (e) childAt.getLayoutParams();
                        Interpolator interpolator = eVar.f15439c;
                        if (abs < childAt.getTop() || abs > childAt.getBottom()) {
                            i14++;
                        } else if (interpolator != null) {
                            int i15 = eVar.a;
                            if ((i15 & 1) != 0) {
                                i12 = childAt.getHeight() + ((LinearLayout.LayoutParams) eVar).topMargin + ((LinearLayout.LayoutParams) eVar).bottomMargin;
                                if ((i15 & 2) != 0) {
                                    i12 -= childAt.getMinimumHeight();
                                }
                            } else {
                                i12 = 0;
                            }
                            if (childAt.getFitsSystemWindows()) {
                                i12 -= gVar.getTopInset();
                            }
                            if (i12 > 0) {
                                float f2 = i12;
                                i11 = (childAt.getTop() + Math.round(interpolator.getInterpolation((abs - childAt.getTop()) / f2) * f2)) * Integer.signum(d6);
                            }
                        }
                    }
                }
                i11 = d6;
                m mVar = this.a;
                if (mVar != null) {
                    z5 = mVar.b(i11);
                } else {
                    this.f15464b = i11;
                    z5 = false;
                }
                int i16 = B - d6;
                this.j = d6 - i11;
                int i17 = 1;
                if (z5) {
                    int i18 = 0;
                    while (i18 < gVar.getChildCount()) {
                        e eVar2 = (e) gVar.getChildAt(i18).getLayoutParams();
                        c cVar = eVar2.f15438b;
                        if (cVar != null && (eVar2.a & i17) != 0) {
                            View childAt2 = gVar.getChildAt(i18);
                            float w5 = w();
                            Rect rect = (Rect) cVar.f7940i;
                            Rect rect2 = (Rect) cVar.f7939e;
                            childAt2.getDrawingRect(rect2);
                            gVar.offsetDescendantRectToMyCoords(childAt2, rect2);
                            rect2.offset(0, -gVar.getTopInset());
                            float abs2 = rect2.top - Math.abs(w5);
                            if (abs2 <= 0.0f) {
                                float c6 = 1.0f - a.c(Math.abs(abs2 / rect2.height()), 0.0f, 1.0f);
                                float height = (-abs2) - ((rect2.height() * 0.3f) * (1.0f - (c6 * c6)));
                                childAt2.setTranslationY(height);
                                childAt2.getDrawingRect(rect);
                                rect.offset(0, (int) (-height));
                                if (height >= rect.height()) {
                                    childAt2.setAlpha(0.0f);
                                } else {
                                    childAt2.setAlpha(1.0f);
                                }
                                childAt2.setClipBounds(rect);
                            } else {
                                childAt2.setClipBounds(null);
                                childAt2.setTranslationY(0.0f);
                                childAt2.setAlpha(1.0f);
                            }
                        }
                        i18++;
                        i17 = 1;
                    }
                }
                if (!z5 && gVar.f15444w && (arrayList = (ArrayList) ((SimpleArrayMap) coordinatorLayout.f1422e.f7953e).get(gVar)) != null && !arrayList.isEmpty()) {
                    for (int i19 = 0; i19 < arrayList.size(); i19++) {
                        View view2 = (View) arrayList.get(i19);
                        b bVar = ((v0.d) view2.getLayoutParams()).a;
                        if (bVar != null) {
                            bVar.h(coordinatorLayout, view2, gVar);
                        }
                    }
                }
                gVar.e(w());
                H(coordinatorLayout, gVar, d6, d6 < B ? -1 : 1, false);
                i13 = i16;
            }
        }
        if (s0.f(coordinatorLayout) != null) {
            return i13;
        }
        s0.p(coordinatorLayout, new ng.c(coordinatorLayout, this, gVar));
        return i13;
    }

    public final void F(CoordinatorLayout coordinatorLayout, View view, int i5) {
        E(coordinatorLayout, view, i5, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }

    public final void G(CoordinatorLayout coordinatorLayout, g gVar) {
        int paddingTop = gVar.getPaddingTop() + gVar.getTopInset();
        int B = B() - paddingTop;
        int childCount = gVar.getChildCount();
        int i5 = 0;
        while (true) {
            if (i5 >= childCount) {
                i5 = -1;
                break;
            }
            View childAt = gVar.getChildAt(i5);
            int top = childAt.getTop();
            int bottom = childAt.getBottom();
            e eVar = (e) childAt.getLayoutParams();
            if ((eVar.a & 32) == 32) {
                top -= ((LinearLayout.LayoutParams) eVar).topMargin;
                bottom += ((LinearLayout.LayoutParams) eVar).bottomMargin;
            }
            int i6 = -B;
            if (top <= i6 && bottom >= i6) {
                break;
            } else {
                i5++;
            }
        }
        if (i5 >= 0) {
            View childAt2 = gVar.getChildAt(i5);
            e eVar2 = (e) childAt2.getLayoutParams();
            int i10 = eVar2.a;
            if ((i10 & 17) == 17) {
                int i11 = -childAt2.getTop();
                int i12 = -childAt2.getBottom();
                if (i5 == 0 && gVar.getFitsSystemWindows() && childAt2.getFitsSystemWindows()) {
                    i11 -= gVar.getTopInset();
                }
                if ((i10 & 2) == 2) {
                    i12 += childAt2.getMinimumHeight();
                } else if ((i10 & 5) == 5) {
                    int minimumHeight = childAt2.getMinimumHeight() + i12;
                    if (B < minimumHeight) {
                        i11 = minimumHeight;
                    } else {
                        i12 = minimumHeight;
                    }
                }
                if ((i10 & 32) == 32) {
                    i11 += ((LinearLayout.LayoutParams) eVar2).topMargin;
                    i12 -= ((LinearLayout.LayoutParams) eVar2).bottomMargin;
                }
                if (B < (i12 + i11) / 2) {
                    i11 = i12;
                }
                z(coordinatorLayout, gVar, a.d(i11 + paddingTop, -gVar.getTotalScrollRange(), 0));
            }
        }
    }

    @Override // v0.b
    public final boolean k(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        View view2;
        int findPointerIndex;
        if (this.f5916h < 0) {
            this.f5916h = ViewConfiguration.get(coordinatorLayout.getContext()).getScaledTouchSlop();
        }
        if (motionEvent.getActionMasked() == 2 && this.f5913e) {
            int i5 = this.f5914f;
            if (i5 != -1 && (findPointerIndex = motionEvent.findPointerIndex(i5)) != -1) {
                int y5 = (int) motionEvent.getY(findPointerIndex);
                if (Math.abs(y5 - this.f5915g) > this.f5916h) {
                    this.f5915g = y5;
                    return true;
                }
            }
            return false;
        }
        if (motionEvent.getActionMasked() == 0) {
            this.f5914f = -1;
            int x5 = (int) motionEvent.getX();
            int y6 = (int) motionEvent.getY();
            WeakReference weakReference = this.f5920n;
            boolean z5 = (weakReference == null || !((view2 = (View) weakReference.get()) == null || !view2.isShown() || view2.canScrollVertically(-1))) && coordinatorLayout.i(view, x5, y6);
            this.f5913e = z5;
            if (z5) {
                this.f5915g = y6;
                this.f5914f = motionEvent.getPointerId(0);
                if (this.f5917i == null) {
                    this.f5917i = VelocityTracker.obtain();
                }
                OverScroller overScroller = this.f5912d;
                if (overScroller != null && !overScroller.isFinished()) {
                    this.f5912d.abortAnimation();
                    return true;
                }
            }
        }
        VelocityTracker velocityTracker = this.f5917i;
        if (velocityTracker != null) {
            velocityTracker.addMovement(motionEvent);
        }
        return false;
    }

    @Override // ng.l, v0.b
    public final boolean l(CoordinatorLayout coordinatorLayout, View view, int i5) {
        g gVar = (g) view;
        super.l(coordinatorLayout, gVar, i5);
        int pendingAction = gVar.getPendingAction();
        d dVar = this.f5919m;
        if (dVar == null || (pendingAction & 8) != 0) {
            if (pendingAction != 0) {
                boolean z5 = (pendingAction & 4) != 0;
                if ((pendingAction & 2) != 0) {
                    int i6 = -gVar.getUpNestedPreScrollRange();
                    if (z5) {
                        z(coordinatorLayout, gVar, i6);
                    } else {
                        F(coordinatorLayout, gVar, i6);
                    }
                } else if ((pendingAction & 1) != 0) {
                    if (z5) {
                        z(coordinatorLayout, gVar, 0);
                    } else {
                        F(coordinatorLayout, gVar, 0);
                    }
                }
            }
        } else if (dVar.f15433i) {
            F(coordinatorLayout, gVar, -gVar.getTotalScrollRange());
        } else if (dVar.f15434v) {
            F(coordinatorLayout, gVar, 0);
        } else {
            View childAt = gVar.getChildAt(dVar.f15435w);
            int i10 = -childAt.getBottom();
            F(coordinatorLayout, gVar, this.f5919m.f15437y ? gVar.getTopInset() + childAt.getMinimumHeight() + i10 : Math.round(childAt.getHeight() * this.f5919m.f15436x) + i10);
        }
        gVar.f15445x = 0;
        this.f5919m = null;
        int d6 = a.d(w(), -gVar.getTotalScrollRange(), 0);
        m mVar = this.a;
        if (mVar != null) {
            mVar.b(d6);
        } else {
            this.f15464b = d6;
        }
        H(coordinatorLayout, gVar, w(), 0, true);
        gVar.e(w());
        if (s0.f(coordinatorLayout) != null) {
            return true;
        }
        s0.p(coordinatorLayout, new ng.c(coordinatorLayout, this, gVar));
        return true;
    }

    @Override // v0.b
    public final boolean m(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10) {
        g gVar = (g) view;
        if (((ViewGroup.MarginLayoutParams) ((v0.d) gVar.getLayoutParams())).height != -2) {
            return false;
        }
        coordinatorLayout.l(i5, i6, View.MeasureSpec.makeMeasureSpec(0, 0), gVar);
        return true;
    }

    @Override // v0.b
    public final void p(CoordinatorLayout coordinatorLayout, View view, int i5, int i6, int i10, int[] iArr) {
        CoordinatorLayout coordinatorLayout2;
        g gVar = (g) view;
        if (i10 < 0) {
            coordinatorLayout2 = coordinatorLayout;
            iArr[1] = E(coordinatorLayout2, gVar, B() - i10, -gVar.getDownNestedScrollRange(), 0);
        } else {
            coordinatorLayout2 = coordinatorLayout;
        }
        if (i10 == 0 && s0.f(coordinatorLayout2) == null) {
            s0.p(coordinatorLayout2, new ng.c(coordinatorLayout2, this, gVar));
        }
    }

    @Override // v0.b
    public final void r(View view, Parcelable parcelable) {
        if (parcelable instanceof d) {
            this.f5919m = (d) parcelable;
        } else {
            this.f5919m = null;
        }
    }

    @Override // v0.b
    public final Parcelable s(View view) {
        AbsSavedState absSavedState = View.BaseSavedState.EMPTY_STATE;
        d D = D(absSavedState, (g) view);
        return D == null ? absSavedState : D;
    }

    @Override // v0.b
    public final boolean t(CoordinatorLayout coordinatorLayout, View view, View view2, int i5, int i6) {
        ValueAnimator valueAnimator;
        g gVar = (g) view;
        boolean z5 = (i5 & 2) != 0 && (gVar.I || gVar.H || (gVar.getTotalScrollRange() != 0 && coordinatorLayout.getHeight() - view2.getHeight() <= gVar.getHeight()));
        if (z5 && (valueAnimator = this.f5918l) != null) {
            valueAnimator.cancel();
        }
        this.f5920n = null;
        this.k = i6;
        return z5;
    }

    @Override // v0.b
    public final void u(CoordinatorLayout coordinatorLayout, View view, View view2, int i5) {
        g gVar = (g) view;
        if (this.k == 0 || i5 == 1) {
            G(coordinatorLayout, gVar);
            if (gVar.I) {
                gVar.g(gVar.h(view2));
            }
        }
        this.f5920n = new WeakReference(view2);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x00fc  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0103 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00f3  */
    @Override // v0.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean v(CoordinatorLayout coordinatorLayout, View view, MotionEvent motionEvent) {
        boolean z5;
        VelocityTracker velocityTracker;
        VelocityTracker velocityTracker2;
        AppBarLayout$BaseBehavior<T> appBarLayout$BaseBehavior = this;
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked != 1) {
            if (actionMasked == 2) {
                int findPointerIndex = motionEvent.findPointerIndex(appBarLayout$BaseBehavior.f5914f);
                if (findPointerIndex != -1) {
                    int y5 = (int) motionEvent.getY(findPointerIndex);
                    int i5 = appBarLayout$BaseBehavior.f5915g - y5;
                    appBarLayout$BaseBehavior.f5915g = y5;
                    g gVar = (g) view;
                    appBarLayout$BaseBehavior.E(coordinatorLayout, view, appBarLayout$BaseBehavior.B() - i5, gVar.getTopInset() + (-gVar.getDownNestedScrollRange()), 0);
                }
            }
            if (actionMasked != 3) {
                if (actionMasked == 6) {
                    int i6 = motionEvent.getActionIndex() == 0 ? 1 : 0;
                    appBarLayout$BaseBehavior.f5914f = motionEvent.getPointerId(i6);
                    appBarLayout$BaseBehavior.f5915g = (int) (motionEvent.getY(i6) + 0.5f);
                }
            }
            z5 = false;
            velocityTracker2 = appBarLayout$BaseBehavior.f5917i;
            if (velocityTracker2 != null) {
                velocityTracker2.addMovement(motionEvent);
            }
            return !appBarLayout$BaseBehavior.f5913e || z5;
        }
        VelocityTracker velocityTracker3 = appBarLayout$BaseBehavior.f5917i;
        if (velocityTracker3 != null) {
            velocityTracker3.addMovement(motionEvent);
            appBarLayout$BaseBehavior.f5917i.computeCurrentVelocity(1000);
            float yVelocity = appBarLayout$BaseBehavior.f5917i.getYVelocity(appBarLayout$BaseBehavior.f5914f);
            g gVar2 = (g) view;
            int i10 = -gVar2.getTotalScrollRange();
            Runnable runnable = appBarLayout$BaseBehavior.f5911c;
            if (runnable != null) {
                view.removeCallbacks(runnable);
                appBarLayout$BaseBehavior.f5911c = null;
            }
            if (appBarLayout$BaseBehavior.f5912d == null) {
                appBarLayout$BaseBehavior.f5912d = new OverScroller(view.getContext());
            }
            appBarLayout$BaseBehavior.f5912d.fling(0, appBarLayout$BaseBehavior.w(), 0, Math.round(yVelocity), 0, 0, i10, 0);
            if (appBarLayout$BaseBehavior.f5912d.computeScrollOffset()) {
                s sVar = new s(this, coordinatorLayout, view, 10, false);
                appBarLayout$BaseBehavior = this;
                appBarLayout$BaseBehavior.f5911c = sVar;
                view.postOnAnimation(sVar);
            } else {
                appBarLayout$BaseBehavior.G(coordinatorLayout, gVar2);
                if (gVar2.I) {
                    gVar2.g(gVar2.h(A(coordinatorLayout)));
                }
            }
            z5 = true;
            appBarLayout$BaseBehavior.f5913e = false;
            appBarLayout$BaseBehavior.f5914f = -1;
            velocityTracker = appBarLayout$BaseBehavior.f5917i;
            if (velocityTracker != null) {
                velocityTracker.recycle();
                appBarLayout$BaseBehavior.f5917i = null;
            }
            velocityTracker2 = appBarLayout$BaseBehavior.f5917i;
            if (velocityTracker2 != null) {
            }
            if (appBarLayout$BaseBehavior.f5913e) {
            }
        }
        z5 = false;
        appBarLayout$BaseBehavior.f5913e = false;
        appBarLayout$BaseBehavior.f5914f = -1;
        velocityTracker = appBarLayout$BaseBehavior.f5917i;
        if (velocityTracker != null) {
        }
        velocityTracker2 = appBarLayout$BaseBehavior.f5917i;
        if (velocityTracker2 != null) {
        }
        if (appBarLayout$BaseBehavior.f5913e) {
        }
    }

    public final void z(CoordinatorLayout coordinatorLayout, g gVar, int i5) {
        int abs = Math.abs(B() - i5);
        float abs2 = Math.abs(0.0f);
        int round = abs2 > 0.0f ? Math.round((abs / abs2) * 1000.0f) * 3 : (int) (((abs / gVar.getHeight()) + 1.0f) * 150.0f);
        int B = B();
        if (B == i5) {
            ValueAnimator valueAnimator = this.f5918l;
            if (valueAnimator == null || !valueAnimator.isRunning()) {
                return;
            }
            this.f5918l.cancel();
            return;
        }
        ValueAnimator valueAnimator2 = this.f5918l;
        if (valueAnimator2 == null) {
            ValueAnimator valueAnimator3 = new ValueAnimator();
            this.f5918l = valueAnimator3;
            valueAnimator3.setInterpolator(mg.a.f14496e);
            this.f5918l.addUpdateListener(new ng.b(coordinatorLayout, this, gVar));
        } else {
            valueAnimator2.cancel();
        }
        this.f5918l.setDuration(Math.min(round, 600));
        this.f5918l.setIntValues(B, i5);
        this.f5918l.start();
    }

    public AppBarLayout$BaseBehavior(Context context, AttributeSet attributeSet) {
        super(0);
        this.f5914f = -1;
        this.f5916h = -1;
    }
}
