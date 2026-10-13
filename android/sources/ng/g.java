package ng;

import a5.k0;
import android.animation.AnimatorInflater;
import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewOutlineProvider;
import android.view.animation.AnimationUtils;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.core.view.y0;
import ch.q;
import com.discord.R;
import com.google.android.material.appbar.AppBarLayout$Behavior;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public class g extends LinearLayout implements v0.a {
    public ArrayList E;
    public boolean F;
    public boolean G;
    public boolean H;
    public boolean I;
    public ColorStateList J;
    public int K;
    public WeakReference L;
    public ValueAnimator M;
    public ValueAnimator.AnimatorUpdateListener N;
    public final ArrayList O;
    public final LinkedHashSet P;
    public final long Q;
    public final TimeInterpolator R;
    public int[] S;
    public int T;
    public Drawable U;
    public Integer V;
    public final float W;
    public AppBarLayout$Behavior a0;

    /* renamed from: d, reason: collision with root package name */
    public int f15440d;

    /* renamed from: e, reason: collision with root package name */
    public int f15441e;

    /* renamed from: i, reason: collision with root package name */
    public int f15442i;

    /* renamed from: v, reason: collision with root package name */
    public int f15443v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f15444w;

    /* renamed from: x, reason: collision with root package name */
    public int f15445x;

    /* renamed from: y, reason: collision with root package name */
    public WindowInsetsCompat f15446y;

    public g(Context context) {
        super(ph.a.b(context, null, R.attr.appBarLayoutStyle, R.style.Widget_Design_AppBarLayout, new int[0]), null, R.attr.appBarLayoutStyle);
        this.f15441e = -1;
        this.f15442i = -1;
        this.f15443v = -1;
        this.f15445x = 0;
        this.O = new ArrayList();
        this.P = new LinkedHashSet();
        Context context2 = getContext();
        int i5 = 1;
        setOrientation(1);
        if (getOutlineProvider() == ViewOutlineProvider.BACKGROUND) {
            setOutlineProvider(ViewOutlineProvider.BOUNDS);
        }
        Context context3 = getContext();
        TypedArray f2 = q.f(context3, null, n.a, R.attr.appBarLayoutStyle, R.style.Widget_Design_AppBarLayout, new int[0]);
        try {
            if (f2.hasValue(0)) {
                setStateListAnimator(AnimatorInflater.loadStateListAnimator(context3, f2.getResourceId(0, 0)));
            }
            f2.recycle();
            TypedArray f10 = q.f(context2, null, lg.a.a, R.attr.appBarLayoutStyle, R.style.Widget_Design_AppBarLayout, new int[0]);
            this.J = k0.u(context2, f10, 6);
            this.Q = ta.a.G(context2, R.attr.motionDurationMedium2, getResources().getInteger(R.integer.app_bar_elevation_anim_duration));
            this.R = ta.a.H(context2, R.attr.motionEasingStandardInterpolator, mg.a.a);
            if (f10.hasValue(4)) {
                f(f10.getBoolean(4, false), false, false);
            }
            if (f10.hasValue(3)) {
                n.a(this, f10.getDimensionPixelSize(3, 0));
            }
            setBackground(f10.getDrawable(0));
            if (Build.VERSION.SDK_INT >= 26) {
                if (f10.hasValue(2)) {
                    setKeyboardNavigationCluster(f10.getBoolean(2, false));
                }
                if (f10.hasValue(1)) {
                    setTouchscreenBlocksFocus(f10.getBoolean(1, false));
                }
            }
            this.W = getResources().getDimension(R.dimen.design_appbar_elevation);
            this.I = f10.getBoolean(5, false);
            this.K = f10.getResourceId(7, -1);
            setStatusBarForeground(f10.getDrawable(8));
            f10.recycle();
            i.m mVar = new i.m(i5, this);
            WeakHashMap weakHashMap = s0.a;
            j0.m(this, mVar);
        } catch (Throwable th2) {
            f2.recycle();
            throw th2;
        }
    }

    public static e c(ViewGroup.LayoutParams layoutParams) {
        if (layoutParams instanceof LinearLayout.LayoutParams) {
            e eVar = new e((LinearLayout.LayoutParams) layoutParams);
            eVar.a = 1;
            return eVar;
        }
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            e eVar2 = new e((ViewGroup.MarginLayoutParams) layoutParams);
            eVar2.a = 1;
            return eVar2;
        }
        e eVar3 = new e(layoutParams);
        eVar3.a = 1;
        return eVar3;
    }

    public final void a(f fVar) {
        if (this.E == null) {
            this.E = new ArrayList();
        }
        if (fVar == null || this.E.contains(fVar)) {
            return;
        }
        this.E.add(fVar);
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final e generateLayoutParams(AttributeSet attributeSet) {
        Context context = getContext();
        e eVar = new e(context, attributeSet);
        eVar.a = 1;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.f13953b);
        eVar.a = obtainStyledAttributes.getInt(1, 0);
        eVar.f15438b = obtainStyledAttributes.getInt(0, 0) != 1 ? null : new e4.c(17, (byte) 0);
        if (obtainStyledAttributes.hasValue(2)) {
            eVar.f15439c = AnimationUtils.loadInterpolator(context, obtainStyledAttributes.getResourceId(2, 0));
        }
        obtainStyledAttributes.recycle();
        return eVar;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof e;
    }

    public final void d() {
        AppBarLayout$Behavior appBarLayout$Behavior = this.a0;
        d D = (appBarLayout$Behavior == null || this.f15441e == -1 || this.f15445x != 0) ? null : appBarLayout$Behavior.D(d2.b.f7398e, this);
        this.f15441e = -1;
        this.f15442i = -1;
        this.f15443v = -1;
        if (D != null) {
            AppBarLayout$Behavior appBarLayout$Behavior2 = this.a0;
            if (appBarLayout$Behavior2.f5919m != null) {
                return;
            }
            appBarLayout$Behavior2.f5919m = D;
        }
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
        super.draw(canvas);
        if (this.U == null || getTopInset() <= 0) {
            return;
        }
        int save = canvas.save();
        canvas.translate(0.0f, -this.f15440d);
        this.U.draw(canvas);
        canvas.restoreToCount(save);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        int[] drawableState = getDrawableState();
        Drawable drawable = this.U;
        if (drawable != null && drawable.isStateful() && drawable.setState(drawableState)) {
            invalidateDrawable(drawable);
        }
    }

    public final void e(int i5) {
        this.f15440d = i5;
        if (!willNotDraw()) {
            postInvalidateOnAnimation();
        }
        ArrayList arrayList = this.E;
        if (arrayList != null) {
            int size = arrayList.size();
            for (int i6 = 0; i6 < size; i6++) {
                f fVar = (f) this.E.get(i6);
                if (fVar != null) {
                    fVar.a(i5);
                }
            }
        }
    }

    public final void f(boolean z5, boolean z6, boolean z7) {
        this.f15445x = (z5 ? 1 : 2) | (z6 ? 4 : 0) | (z7 ? 8 : 0);
        requestLayout();
    }

    public final boolean g(boolean z5) {
        if (this.F || this.H == z5) {
            return false;
        }
        this.H = z5;
        refreshDrawableState();
        if (!(getBackground() instanceof lh.i)) {
            return true;
        }
        if (this.J != null) {
            i(z5 ? 0.0f : 1.0f, z5 ? 1.0f : 0.0f);
            return true;
        }
        if (!this.I) {
            return true;
        }
        float f2 = this.W;
        i(z5 ? 0.0f : f2, z5 ? f2 : 0.0f);
        return true;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    public final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new e(-2);
    }

    @NonNull
    public v0.b getBehavior() {
        AppBarLayout$Behavior appBarLayout$Behavior = new AppBarLayout$Behavior();
        this.a0 = appBarLayout$Behavior;
        return appBarLayout$Behavior;
    }

    public int getDownNestedPreScrollRange() {
        int i5;
        int minimumHeight;
        int i6 = this.f15442i;
        if (i6 != -1) {
            return i6;
        }
        int i10 = 0;
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            View childAt = getChildAt(childCount);
            if (childAt.getVisibility() != 8) {
                e eVar = (e) childAt.getLayoutParams();
                int measuredHeight = childAt.getMeasuredHeight();
                int i11 = eVar.a;
                if ((i11 & 5) != 5) {
                    if (i10 > 0) {
                        break;
                    }
                } else {
                    int i12 = ((LinearLayout.LayoutParams) eVar).topMargin + ((LinearLayout.LayoutParams) eVar).bottomMargin;
                    if ((i11 & 8) != 0) {
                        minimumHeight = childAt.getMinimumHeight();
                    } else if ((i11 & 2) != 0) {
                        minimumHeight = measuredHeight - childAt.getMinimumHeight();
                    } else {
                        i5 = i12 + measuredHeight;
                        if (childCount == 0 && childAt.getFitsSystemWindows()) {
                            i5 = Math.min(i5, measuredHeight - getTopInset());
                        }
                        i10 += i5;
                    }
                    i5 = minimumHeight + i12;
                    if (childCount == 0) {
                        i5 = Math.min(i5, measuredHeight - getTopInset());
                    }
                    i10 += i5;
                }
            }
        }
        int max = Math.max(0, i10);
        this.f15442i = max;
        return max;
    }

    public int getDownNestedScrollRange() {
        int i5 = this.f15443v;
        if (i5 != -1) {
            return i5;
        }
        int childCount = getChildCount();
        int i6 = 0;
        int i10 = 0;
        while (true) {
            if (i6 >= childCount) {
                break;
            }
            View childAt = getChildAt(i6);
            if (childAt.getVisibility() != 8) {
                e eVar = (e) childAt.getLayoutParams();
                int measuredHeight = ((LinearLayout.LayoutParams) eVar).topMargin + ((LinearLayout.LayoutParams) eVar).bottomMargin + childAt.getMeasuredHeight();
                int i11 = eVar.a;
                if ((i11 & 1) == 0) {
                    break;
                }
                i10 += measuredHeight;
                if ((i11 & 2) != 0) {
                    i10 -= childAt.getMinimumHeight();
                    break;
                }
            }
            i6++;
        }
        int max = Math.max(0, i10);
        this.f15443v = max;
        return max;
    }

    public int getLiftOnScrollTargetViewId() {
        return this.K;
    }

    public lh.i getMaterialShapeBackground() {
        Drawable background = getBackground();
        if (background instanceof lh.i) {
            return (lh.i) background;
        }
        return null;
    }

    public final int getMinimumHeightForVisibleOverlappingContent() {
        int topInset = getTopInset();
        int minimumHeight = getMinimumHeight();
        if (minimumHeight != 0) {
            int i5 = (minimumHeight * 2) + topInset;
            return i5 < getHeight() ? i5 : minimumHeight + topInset;
        }
        int childCount = getChildCount();
        int minimumHeight2 = childCount >= 1 ? getChildAt(childCount - 1).getMinimumHeight() : 0;
        if (minimumHeight2 == 0) {
            return getHeight() / 3;
        }
        int i6 = (minimumHeight2 * 2) + topInset;
        return i6 < getHeight() ? i6 : minimumHeight2 + topInset;
    }

    public int getPendingAction() {
        return this.f15445x;
    }

    public Drawable getStatusBarForeground() {
        return this.U;
    }

    @Deprecated
    public float getTargetElevation() {
        return 0.0f;
    }

    public final int getTopInset() {
        WindowInsetsCompat windowInsetsCompat = this.f15446y;
        if (windowInsetsCompat != null) {
            return windowInsetsCompat.d();
        }
        return 0;
    }

    public final int getTotalScrollRange() {
        int i5 = this.f15441e;
        if (i5 != -1) {
            return i5;
        }
        int childCount = getChildCount();
        int i6 = 0;
        int i10 = 0;
        while (true) {
            if (i6 >= childCount) {
                break;
            }
            View childAt = getChildAt(i6);
            if (childAt.getVisibility() != 8) {
                e eVar = (e) childAt.getLayoutParams();
                int measuredHeight = childAt.getMeasuredHeight();
                int i11 = eVar.a;
                if ((i11 & 1) == 0) {
                    break;
                }
                int i12 = measuredHeight + ((LinearLayout.LayoutParams) eVar).topMargin + ((LinearLayout.LayoutParams) eVar).bottomMargin + i10;
                if (i6 == 0 && childAt.getFitsSystemWindows()) {
                    i12 -= getTopInset();
                }
                i10 = i12;
                if ((i11 & 2) != 0) {
                    i10 -= childAt.getMinimumHeight();
                    break;
                }
            }
            i6++;
        }
        int max = Math.max(0, i10);
        this.f15441e = max;
        return max;
    }

    public int getUpNestedPreScrollRange() {
        return getTotalScrollRange();
    }

    public final boolean h(View view) {
        int i5;
        if (this.L == null && (i5 = this.K) != -1) {
            View findViewById = view != null ? view.findViewById(i5) : null;
            if (findViewById == null && (getParent() instanceof ViewGroup)) {
                findViewById = ((ViewGroup) getParent()).findViewById(this.K);
            }
            if (findViewById != null) {
                this.L = new WeakReference(findViewById);
            }
        }
        WeakReference weakReference = this.L;
        View view2 = weakReference != null ? (View) weakReference.get() : null;
        if (view2 != null) {
            view = view2;
        }
        if (view != null) {
            return view.canScrollVertically(-1) || view.getScrollY() > 0;
        }
        return false;
    }

    public final void i(float f2, float f10) {
        ValueAnimator valueAnimator = this.M;
        if (valueAnimator != null) {
            valueAnimator.cancel();
        }
        ValueAnimator ofFloat = ValueAnimator.ofFloat(f2, f10);
        this.M = ofFloat;
        ofFloat.setDuration(this.Q);
        this.M.setInterpolator(this.R);
        ValueAnimator.AnimatorUpdateListener animatorUpdateListener = this.N;
        if (animatorUpdateListener != null) {
            this.M.addUpdateListener(animatorUpdateListener);
        }
        this.M.start();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        Drawable background = getBackground();
        if (background instanceof lh.i) {
            jb.a.I(this, (lh.i) background);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        if (this.S == null) {
            this.S = new int[4];
        }
        int[] iArr = this.S;
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + iArr.length);
        boolean z5 = this.G;
        iArr[0] = z5 ? R.attr.state_liftable : -2130969908;
        iArr[1] = (z5 && this.H) ? R.attr.state_lifted : -2130969909;
        iArr[2] = z5 ? R.attr.state_collapsible : -2130969904;
        iArr[3] = (z5 && this.H) ? R.attr.state_collapsed : -2130969903;
        return View.mergeDrawableStates(onCreateDrawableState, iArr);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        WeakReference weakReference = this.L;
        if (weakReference != null) {
            weakReference.clear();
        }
        this.L = null;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        boolean z6 = true;
        if (getFitsSystemWindows() && getChildCount() > 0) {
            View childAt = getChildAt(0);
            if (childAt.getVisibility() != 8 && !childAt.getFitsSystemWindows()) {
                int topInset = getTopInset();
                for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
                    View childAt2 = getChildAt(childCount);
                    WeakHashMap weakHashMap = s0.a;
                    childAt2.offsetTopAndBottom(topInset);
                }
            }
        }
        d();
        this.f15444w = false;
        int childCount2 = getChildCount();
        int i12 = 0;
        while (true) {
            if (i12 >= childCount2) {
                break;
            }
            if (((e) getChildAt(i12).getLayoutParams()).f15439c != null) {
                this.f15444w = true;
                break;
            }
            i12++;
        }
        Drawable drawable = this.U;
        if (drawable != null) {
            drawable.setBounds(0, 0, getWidth(), getTopInset());
        }
        if (this.F) {
            return;
        }
        if (!this.I) {
            int childCount3 = getChildCount();
            int i13 = 0;
            while (true) {
                if (i13 >= childCount3) {
                    z6 = false;
                    break;
                }
                int i14 = ((e) getChildAt(i13).getLayoutParams()).a;
                if ((i14 & 1) == 1 && (i14 & 10) != 0) {
                    break;
                } else {
                    i13++;
                }
            }
        }
        if (this.G != z6) {
            this.G = z6;
            refreshDrawableState();
        }
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        int mode = View.MeasureSpec.getMode(i6);
        if (mode != 1073741824 && getFitsSystemWindows() && getChildCount() > 0) {
            View childAt = getChildAt(0);
            if (childAt.getVisibility() != 8 && !childAt.getFitsSystemWindows()) {
                int measuredHeight = getMeasuredHeight();
                if (mode == Integer.MIN_VALUE) {
                    measuredHeight = jb.a.d(getTopInset() + getMeasuredHeight(), 0, View.MeasureSpec.getSize(i6));
                } else if (mode == 0) {
                    measuredHeight += getTopInset();
                }
                setMeasuredDimension(getMeasuredWidth(), measuredHeight);
            }
        }
        d();
    }

    @Override // android.view.View
    public void setBackground(Drawable drawable) {
        final lh.i iVar;
        ColorStateList colorStateList;
        Context context = getContext();
        final Integer num = null;
        if (drawable instanceof lh.i) {
            iVar = (lh.i) drawable;
        } else {
            ColorStateList b10 = ah.d.b(drawable);
            if (b10 == null) {
                iVar = null;
            } else {
                lh.i iVar2 = new lh.i();
                iVar2.q(b10);
                iVar = iVar2;
            }
        }
        if (iVar != null && (colorStateList = iVar.f14001e.f13985d) != null) {
            this.T = colorStateList.getDefaultColor();
            final ColorStateList colorStateList2 = this.J;
            if (colorStateList2 != null) {
                Context context2 = getContext();
                TypedValue I0 = m3.n.I0(context2, R.attr.colorSurface);
                if (I0 != null) {
                    int i5 = I0.resourceId;
                    num = Integer.valueOf(i5 != 0 ? context2.getColor(i5) : I0.data);
                }
                this.N = new ValueAnimator.AnimatorUpdateListener() { // from class: ng.a
                    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                        Integer num2;
                        g gVar = g.this;
                        LinkedHashSet linkedHashSet = gVar.P;
                        ArrayList arrayList = gVar.O;
                        int Q = com.facebook.imagepipeline.nativecode.c.Q(gVar.T, colorStateList2.getDefaultColor(), ((Float) valueAnimator.getAnimatedValue()).floatValue());
                        ColorStateList valueOf = ColorStateList.valueOf(Q);
                        lh.i iVar3 = iVar;
                        iVar3.q(valueOf);
                        if (gVar.U != null && (num2 = gVar.V) != null && num2.equals(num)) {
                            gVar.U.setTint(Q);
                        }
                        if (!arrayList.isEmpty()) {
                            Iterator it = arrayList.iterator();
                            while (it.hasNext()) {
                                if (it.next() != null) {
                                    throw new ClassCastException();
                                }
                                if (iVar3.f14001e.f13985d != null) {
                                    throw null;
                                }
                            }
                        }
                        if (linkedHashSet.isEmpty()) {
                            return;
                        }
                        Iterator it2 = linkedHashSet.iterator();
                        if (it2.hasNext()) {
                            throw s4.h.b(it2);
                        }
                    }
                };
            } else {
                iVar.m(context);
                this.N = new y0(4, this, iVar);
            }
            drawable = iVar;
        }
        super.setBackground(drawable);
    }

    @Override // android.view.View
    public void setElevation(float f2) {
        super.setElevation(f2);
        Drawable background = getBackground();
        if (background instanceof lh.i) {
            ((lh.i) background).p(f2);
        }
    }

    public void setExpanded(boolean z5) {
        f(z5, isLaidOut(), true);
    }

    public void setLiftOnScroll(boolean z5) {
        this.I = z5;
    }

    public void setLiftOnScrollColor(ColorStateList colorStateList) {
        if (this.J != colorStateList) {
            this.J = colorStateList;
            setBackground(getBackground());
        }
    }

    public void setLiftOnScrollTargetView(View view) {
        this.K = -1;
        if (view != null) {
            this.L = new WeakReference(view);
            return;
        }
        WeakReference weakReference = this.L;
        if (weakReference != null) {
            weakReference.clear();
        }
        this.L = null;
    }

    public void setLiftOnScrollTargetViewId(int i5) {
        this.K = i5;
        WeakReference weakReference = this.L;
        if (weakReference != null) {
            weakReference.clear();
        }
        this.L = null;
    }

    public void setLiftableOverrideEnabled(boolean z5) {
        this.F = z5;
    }

    @Override // android.widget.LinearLayout
    public void setOrientation(int i5) {
        if (i5 != 1) {
            throw new IllegalArgumentException("AppBarLayout is always vertical and does not support horizontal orientation");
        }
        super.setOrientation(i5);
    }

    public void setPendingAction(int i5) {
        this.f15445x = i5;
    }

    public void setStatusBarForeground(Drawable drawable) {
        Drawable drawable2 = this.U;
        if (drawable2 != drawable) {
            Integer num = null;
            if (drawable2 != null) {
                drawable2.setCallback(null);
            }
            Drawable mutate = drawable != null ? drawable.mutate() : null;
            this.U = mutate;
            if (mutate instanceof lh.i) {
                num = Integer.valueOf(((lh.i) mutate).S);
            } else {
                ColorStateList b10 = ah.d.b(mutate);
                if (b10 != null) {
                    num = Integer.valueOf(b10.getDefaultColor());
                }
            }
            this.V = num;
            Drawable drawable3 = this.U;
            boolean z5 = false;
            if (drawable3 != null) {
                if (drawable3.isStateful()) {
                    this.U.setState(getDrawableState());
                }
                this.U.setLayoutDirection(getLayoutDirection());
                this.U.setVisible(getVisibility() == 0, false);
                this.U.setCallback(this);
            }
            if (this.U != null && getTopInset() > 0) {
                z5 = true;
            }
            setWillNotDraw(!z5);
            postInvalidateOnAnimation();
        }
    }

    public void setStatusBarForegroundColor(int i5) {
        setStatusBarForeground(new ColorDrawable(i5));
    }

    public void setStatusBarForegroundResource(int i5) {
        setStatusBarForeground(ys.d.J(getContext(), i5));
    }

    @Deprecated
    public void setTargetElevation(float f2) {
        n.a(this, f2);
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        super.setVisibility(i5);
        boolean z5 = i5 == 0;
        Drawable drawable = this.U;
        if (drawable != null) {
            drawable.setVisible(z5, false);
        }
    }

    @Override // android.view.View
    public final boolean verifyDrawable(Drawable drawable) {
        return super.verifyDrawable(drawable) || drawable == this.U;
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    public final LinearLayout.LayoutParams generateDefaultLayoutParams() {
        return new e(-2);
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    public final /* bridge */ /* synthetic */ ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return c(layoutParams);
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup
    public final /* bridge */ /* synthetic */ LinearLayout.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return c(layoutParams);
    }
}
