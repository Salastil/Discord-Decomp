package androidx.appcompat.widget;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.util.AttributeSet;
import android.util.Log;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewPropertyAnimator;
import android.view.Window;
import android.view.WindowInsets;
import android.widget.OverScroller;
import androidx.annotation.NonNull;
import androidx.core.graphics.Insets;
import androidx.core.view.NestedScrollingParentHelper;
import androidx.core.view.WindowInsetsCompat;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.WeakHashMap;

@SuppressLint({"UnknownNullness"})
/* loaded from: classes.dex */
public class ActionBarOverlayLayout extends ViewGroup implements j1, androidx.core.view.p, androidx.core.view.q {

    /* renamed from: c0, reason: collision with root package name */
    public static final int[] f836c0 = {R.attr.actionBarSize, android.R.attr.windowContentOverlay};

    /* renamed from: d0, reason: collision with root package name */
    public static final WindowInsetsCompat f837d0;

    /* renamed from: e0, reason: collision with root package name */
    public static final Rect f838e0;
    public boolean E;
    public boolean F;
    public boolean G;
    public int H;
    public int I;
    public final Rect J;
    public final Rect K;
    public final Rect L;
    public final Rect M;
    public WindowInsetsCompat N;
    public WindowInsetsCompat O;
    public WindowInsetsCompat P;
    public WindowInsetsCompat Q;
    public e R;
    public OverScroller S;
    public ViewPropertyAnimator T;
    public final c U;
    public final d V;
    public final d W;
    public final NestedScrollingParentHelper a0;

    /* renamed from: b0, reason: collision with root package name */
    public final g f839b0;

    /* renamed from: d, reason: collision with root package name */
    public int f840d;

    /* renamed from: e, reason: collision with root package name */
    public int f841e;

    /* renamed from: i, reason: collision with root package name */
    public ContentFrameLayout f842i;

    /* renamed from: v, reason: collision with root package name */
    public ActionBarContainer f843v;

    /* renamed from: w, reason: collision with root package name */
    public k1 f844w;

    /* renamed from: x, reason: collision with root package name */
    public Drawable f845x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f846y;

    static {
        int i5 = Build.VERSION.SDK_INT;
        androidx.core.view.u1 t1Var = i5 >= 34 ? new androidx.core.view.t1() : i5 >= 31 ? new androidx.core.view.s1() : i5 >= 30 ? new androidx.core.view.r1() : i5 >= 29 ? new androidx.core.view.q1() : new androidx.core.view.o1();
        t1Var.g(Insets.b(0, 1, 0, 1));
        f837d0 = t1Var.b();
        f838e0 = new Rect();
    }

    public ActionBarOverlayLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f841e = 0;
        this.J = new Rect();
        this.K = new Rect();
        this.L = new Rect();
        this.M = new Rect();
        new Rect();
        new Rect();
        new Rect();
        new Rect();
        WindowInsetsCompat windowInsetsCompat = WindowInsetsCompat.f1547b;
        this.N = windowInsetsCompat;
        this.O = windowInsetsCompat;
        this.P = windowInsetsCompat;
        this.Q = windowInsetsCompat;
        this.U = new c(0, this);
        this.V = new d(this, 0);
        this.W = new d(this, 1);
        c(context);
        this.a0 = new NestedScrollingParentHelper();
        g gVar = new g(context);
        gVar.setWillNotDraw(true);
        this.f839b0 = gVar;
        addView(gVar);
    }

    public static boolean a(View view, Rect rect, boolean z5) {
        boolean z6;
        f fVar = (f) view.getLayoutParams();
        int i5 = ((ViewGroup.MarginLayoutParams) fVar).leftMargin;
        int i6 = rect.left;
        if (i5 != i6) {
            ((ViewGroup.MarginLayoutParams) fVar).leftMargin = i6;
            z6 = true;
        } else {
            z6 = false;
        }
        int i10 = ((ViewGroup.MarginLayoutParams) fVar).topMargin;
        int i11 = rect.top;
        if (i10 != i11) {
            ((ViewGroup.MarginLayoutParams) fVar).topMargin = i11;
            z6 = true;
        }
        int i12 = ((ViewGroup.MarginLayoutParams) fVar).rightMargin;
        int i13 = rect.right;
        if (i12 != i13) {
            ((ViewGroup.MarginLayoutParams) fVar).rightMargin = i13;
            z6 = true;
        }
        if (z5) {
            int i14 = ((ViewGroup.MarginLayoutParams) fVar).bottomMargin;
            int i15 = rect.bottom;
            if (i14 != i15) {
                ((ViewGroup.MarginLayoutParams) fVar).bottomMargin = i15;
                return true;
            }
        }
        return z6;
    }

    public final void b() {
        removeCallbacks(this.V);
        removeCallbacks(this.W);
        ViewPropertyAnimator viewPropertyAnimator = this.T;
        if (viewPropertyAnimator != null) {
            viewPropertyAnimator.cancel();
        }
    }

    public final void c(Context context) {
        TypedArray obtainStyledAttributes = getContext().getTheme().obtainStyledAttributes(f836c0);
        this.f840d = obtainStyledAttributes.getDimensionPixelSize(0, 0);
        Drawable drawable = obtainStyledAttributes.getDrawable(1);
        this.f845x = drawable;
        setWillNotDraw(drawable == null);
        obtainStyledAttributes.recycle();
        this.S = new OverScroller(context);
    }

    @Override // android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof f;
    }

    public final void d(int i5) {
        e();
        if (i5 == 2) {
            ((x3) this.f844w).getClass();
            Log.i("ToolbarWidgetWrapper", "Progress display unsupported");
        } else if (i5 == 5) {
            ((x3) this.f844w).getClass();
            Log.i("ToolbarWidgetWrapper", "Progress display unsupported");
        } else {
            if (i5 != 109) {
                return;
            }
            setOverlayMode(true);
        }
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
        int i5;
        super.draw(canvas);
        if (this.f845x != null) {
            if (this.f843v.getVisibility() == 0) {
                i5 = (int) (this.f843v.getTranslationY() + this.f843v.getBottom() + 0.5f);
            } else {
                i5 = 0;
            }
            this.f845x.setBounds(0, i5, getWidth(), this.f845x.getIntrinsicHeight() + i5);
            this.f845x.draw(canvas);
        }
    }

    public final void e() {
        k1 wrapper;
        if (this.f842i == null) {
            this.f842i = (ContentFrameLayout) findViewById(R.id.action_bar_activity_content);
            this.f843v = (ActionBarContainer) findViewById(R.id.action_bar_container);
            KeyEvent.Callback findViewById = findViewById(R.id.action_bar);
            if (findViewById instanceof k1) {
                wrapper = (k1) findViewById;
            } else {
                if (!(findViewById instanceof Toolbar)) {
                    throw new IllegalStateException("Can't make a decor toolbar out of ".concat(findViewById.getClass().getSimpleName()));
                }
                wrapper = ((Toolbar) findViewById).getWrapper();
            }
            this.f844w = wrapper;
        }
    }

    public final void f(Menu menu, n.u uVar) {
        e();
        x3 x3Var = (x3) this.f844w;
        Toolbar toolbar = x3Var.a;
        if (x3Var.f1169m == null) {
            n nVar = new n(toolbar.getContext());
            x3Var.f1169m = nVar;
            nVar.F = R.id.action_menu_presenter;
        }
        n nVar2 = x3Var.f1169m;
        nVar2.f1043w = uVar;
        n.j jVar = (n.j) menu;
        if (jVar == null && toolbar.f883d == null) {
            return;
        }
        toolbar.f();
        n.j jVar2 = toolbar.f883d.M;
        if (jVar2 == jVar) {
            return;
        }
        if (jVar2 != null) {
            jVar2.r(toolbar.f893l0);
            jVar2.r(toolbar.f894m0);
        }
        if (toolbar.f894m0 == null) {
            toolbar.f894m0 = new r3(toolbar);
        }
        nVar2.O = true;
        if (jVar != null) {
            jVar.b(nVar2, toolbar.G);
            jVar.b(toolbar.f894m0, toolbar.G);
        } else {
            nVar2.c(toolbar.G, null);
            toolbar.f894m0.c(toolbar.G, null);
            nVar2.a(true);
            toolbar.f894m0.a(true);
        }
        toolbar.f883d.setPopupTheme(toolbar.H);
        toolbar.f883d.setPresenter(nVar2);
        toolbar.f893l0 = nVar2;
        toolbar.v();
    }

    @Override // android.view.View
    public final boolean fitSystemWindows(Rect rect) {
        return super.fitSystemWindows(rect);
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new f(-1, -1);
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new f(getContext(), attributeSet);
    }

    public int getActionBarHideOffset() {
        ActionBarContainer actionBarContainer = this.f843v;
        if (actionBarContainer != null) {
            return -((int) actionBarContainer.getTranslationY());
        }
        return 0;
    }

    @Override // android.view.ViewGroup
    public int getNestedScrollAxes() {
        NestedScrollingParentHelper nestedScrollingParentHelper = this.a0;
        return nestedScrollingParentHelper.f1546b | nestedScrollingParentHelper.a;
    }

    public CharSequence getTitle() {
        e();
        return ((x3) this.f844w).a.getTitle();
    }

    @Override // android.view.View
    public final WindowInsets onApplyWindowInsets(WindowInsets windowInsets) {
        e();
        WindowInsetsCompat g6 = WindowInsetsCompat.g(this, windowInsets);
        boolean a = a(this.f843v, new Rect(g6.b(), g6.d(), g6.c(), g6.a()), false);
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        Rect rect = this.J;
        androidx.core.view.j0.b(this, g6, rect);
        int i5 = rect.left;
        int i6 = rect.top;
        int i10 = rect.right;
        int i11 = rect.bottom;
        androidx.core.view.c2 c2Var = g6.a;
        WindowInsetsCompat m5 = c2Var.m(i5, i6, i10, i11);
        this.N = m5;
        boolean z5 = true;
        if (!this.O.equals(m5)) {
            this.O = this.N;
            a = true;
        }
        Rect rect2 = this.K;
        if (rect2.equals(rect)) {
            z5 = a;
        } else {
            rect2.set(rect);
        }
        if (z5) {
            requestLayout();
        }
        return c2Var.a().a.c().a.b().f();
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        c(getContext());
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        androidx.core.view.h0.c(this);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        b();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int childCount = getChildCount();
        int paddingLeft = getPaddingLeft();
        int paddingTop = getPaddingTop();
        for (int i12 = 0; i12 < childCount; i12++) {
            View childAt = getChildAt(i12);
            if (childAt.getVisibility() != 8) {
                f fVar = (f) childAt.getLayoutParams();
                int measuredWidth = childAt.getMeasuredWidth();
                int measuredHeight = childAt.getMeasuredHeight();
                int i13 = ((ViewGroup.MarginLayoutParams) fVar).leftMargin + paddingLeft;
                int i14 = ((ViewGroup.MarginLayoutParams) fVar).topMargin + paddingTop;
                childAt.layout(i13, i14, measuredWidth + i13, measuredHeight + i14);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0110  */
    @Override // android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onMeasure(int i5, int i6) {
        int measuredHeight;
        e();
        measureChildWithMargins(this.f843v, i5, 0, i6, 0);
        f fVar = (f) this.f843v.getLayoutParams();
        int max = Math.max(0, this.f843v.getMeasuredWidth() + ((ViewGroup.MarginLayoutParams) fVar).leftMargin + ((ViewGroup.MarginLayoutParams) fVar).rightMargin);
        int max2 = Math.max(0, this.f843v.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) fVar).topMargin + ((ViewGroup.MarginLayoutParams) fVar).bottomMargin);
        int combineMeasuredStates = View.combineMeasuredStates(0, this.f843v.getMeasuredState());
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        boolean z5 = (getWindowSystemUiVisibility() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0;
        if (z5) {
            measuredHeight = this.f840d;
            if (this.E && this.f843v.getTabContainer() != null) {
                measuredHeight += this.f840d;
            }
        } else {
            measuredHeight = this.f843v.getVisibility() != 8 ? this.f843v.getMeasuredHeight() : 0;
        }
        Rect rect = this.J;
        Rect rect2 = this.L;
        rect2.set(rect);
        this.P = this.N;
        if (!this.f846y && !z5) {
            g gVar = this.f839b0;
            WindowInsetsCompat windowInsetsCompat = f837d0;
            Rect rect3 = this.M;
            androidx.core.view.j0.b(gVar, windowInsetsCompat, rect3);
            if (!rect3.equals(f838e0)) {
                rect2.top += measuredHeight;
                rect2.bottom = rect2.bottom;
                this.P = this.P.a.m(0, measuredHeight, 0, 0);
                a(this.f842i, rect2, true);
                if (!this.Q.equals(this.P)) {
                    WindowInsetsCompat windowInsetsCompat2 = this.P;
                    this.Q = windowInsetsCompat2;
                    androidx.core.view.s0.c(this.f842i, windowInsetsCompat2);
                }
                measureChildWithMargins(this.f842i, i5, 0, i6, 0);
                f fVar2 = (f) this.f842i.getLayoutParams();
                int max3 = Math.max(max, this.f842i.getMeasuredWidth() + ((ViewGroup.MarginLayoutParams) fVar2).leftMargin + ((ViewGroup.MarginLayoutParams) fVar2).rightMargin);
                int max4 = Math.max(max2, this.f842i.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) fVar2).topMargin + ((ViewGroup.MarginLayoutParams) fVar2).bottomMargin);
                int combineMeasuredStates2 = View.combineMeasuredStates(combineMeasuredStates, this.f842i.getMeasuredState());
                setMeasuredDimension(View.resolveSizeAndState(Math.max(getPaddingRight() + getPaddingLeft() + max3, getSuggestedMinimumWidth()), i5, combineMeasuredStates2), View.resolveSizeAndState(Math.max(getPaddingBottom() + getPaddingTop() + max4, getSuggestedMinimumHeight()), i6, combineMeasuredStates2 << 16));
            }
        }
        Insets b10 = Insets.b(this.P.b(), this.P.d() + measuredHeight, this.P.c(), this.P.a());
        WindowInsetsCompat windowInsetsCompat3 = this.P;
        int i10 = Build.VERSION.SDK_INT;
        androidx.core.view.u1 t1Var = i10 >= 34 ? new androidx.core.view.t1(windowInsetsCompat3) : i10 >= 31 ? new androidx.core.view.s1(windowInsetsCompat3) : i10 >= 30 ? new androidx.core.view.r1(windowInsetsCompat3) : i10 >= 29 ? new androidx.core.view.q1(windowInsetsCompat3) : new androidx.core.view.o1(windowInsetsCompat3);
        t1Var.g(b10);
        this.P = t1Var.b();
        a(this.f842i, rect2, true);
        if (!this.Q.equals(this.P)) {
        }
        measureChildWithMargins(this.f842i, i5, 0, i6, 0);
        f fVar22 = (f) this.f842i.getLayoutParams();
        int max32 = Math.max(max, this.f842i.getMeasuredWidth() + ((ViewGroup.MarginLayoutParams) fVar22).leftMargin + ((ViewGroup.MarginLayoutParams) fVar22).rightMargin);
        int max42 = Math.max(max2, this.f842i.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) fVar22).topMargin + ((ViewGroup.MarginLayoutParams) fVar22).bottomMargin);
        int combineMeasuredStates22 = View.combineMeasuredStates(combineMeasuredStates, this.f842i.getMeasuredState());
        setMeasuredDimension(View.resolveSizeAndState(Math.max(getPaddingRight() + getPaddingLeft() + max32, getSuggestedMinimumWidth()), i5, combineMeasuredStates22), View.resolveSizeAndState(Math.max(getPaddingBottom() + getPaddingTop() + max42, getSuggestedMinimumHeight()), i6, combineMeasuredStates22 << 16));
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean onNestedFling(View view, float f2, float f10, boolean z5) {
        if (!this.F || !z5) {
            return false;
        }
        this.S.fling(0, 0, 0, (int) f10, 0, 0, Integer.MIN_VALUE, Integer.MAX_VALUE);
        if (this.S.getFinalY() > this.f843v.getHeight()) {
            b();
            this.W.run();
        } else {
            b();
            this.V.run();
        }
        this.G = true;
        return true;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean onNestedPreFling(View view, float f2, float f10) {
        return false;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onNestedPreScroll(View view, int i5, int i6, int[] iArr) {
    }

    @Override // androidx.core.view.q
    public final void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12, int[] iArr) {
        onNestedScroll(view, i5, i6, i10, i11, i12);
    }

    @Override // androidx.core.view.p
    public final void onNestedScrollAccepted(View view, View view2, int i5, int i6) {
        if (i6 == 0) {
            onNestedScrollAccepted(view, view2, i5);
        }
    }

    @Override // androidx.core.view.p
    public final boolean onStartNestedScroll(View view, View view2, int i5, int i6) {
        return i6 == 0 && onStartNestedScroll(view, view2, i5);
    }

    @Override // androidx.core.view.p
    public final void onStopNestedScroll(View view, int i5) {
        if (i5 == 0) {
            onStopNestedScroll(view);
        }
    }

    @Override // android.view.View
    public final void onWindowSystemUiVisibilityChanged(int i5) {
        super.onWindowSystemUiVisibilityChanged(i5);
        e();
        int i6 = this.I ^ i5;
        this.I = i5;
        boolean z5 = (i5 & 4) == 0;
        boolean z6 = (i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0;
        e eVar = this.R;
        if (eVar != null) {
            i.j0 j0Var = (i.j0) eVar;
            j0Var.f10337o = !z6;
            if (z5 || !z6) {
                if (j0Var.f10338p) {
                    j0Var.f10338p = false;
                    j0Var.w(true);
                }
            } else if (!j0Var.f10338p) {
                j0Var.f10338p = true;
                j0Var.w(true);
            }
        }
        if ((i6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) == 0 || this.R == null) {
            return;
        }
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        androidx.core.view.h0.c(this);
    }

    @Override // android.view.View
    public final void onWindowVisibilityChanged(int i5) {
        super.onWindowVisibilityChanged(i5);
        this.f841e = i5;
        e eVar = this.R;
        if (eVar != null) {
            ((i.j0) eVar).f10336n = i5;
        }
    }

    public void setActionBarHideOffset(int i5) {
        b();
        this.f843v.setTranslationY(-Math.max(0, Math.min(i5, this.f843v.getHeight())));
    }

    public void setActionBarVisibilityCallback(e eVar) {
        this.R = eVar;
        if (getWindowToken() != null) {
            ((i.j0) this.R).f10336n = this.f841e;
            int i5 = this.I;
            if (i5 != 0) {
                onWindowSystemUiVisibilityChanged(i5);
                WeakHashMap weakHashMap = androidx.core.view.s0.a;
                androidx.core.view.h0.c(this);
            }
        }
    }

    public void setHasNonEmbeddedTabs(boolean z5) {
        this.E = z5;
    }

    public void setHideOnContentScrollEnabled(boolean z5) {
        if (z5 != this.F) {
            this.F = z5;
            if (z5) {
                return;
            }
            b();
            setActionBarHideOffset(0);
        }
    }

    public void setIcon(int i5) {
        e();
        x3 x3Var = (x3) this.f844w;
        x3Var.f1162d = i5 != 0 ? ys.d.J(x3Var.a.getContext(), i5) : null;
        x3Var.c();
    }

    public void setLogo(int i5) {
        e();
        x3 x3Var = (x3) this.f844w;
        x3Var.f1163e = i5 != 0 ? ys.d.J(x3Var.a.getContext(), i5) : null;
        x3Var.c();
    }

    public void setOverlayMode(boolean z5) {
        this.f846y = z5;
    }

    public void setShowingForActionMode(boolean z5) {
    }

    public void setUiOptions(int i5) {
    }

    @Override // androidx.appcompat.widget.j1
    public void setWindowCallback(Window.Callback callback) {
        e();
        ((x3) this.f844w).k = callback;
    }

    @Override // androidx.appcompat.widget.j1
    public void setWindowTitle(CharSequence charSequence) {
        e();
        x3 x3Var = (x3) this.f844w;
        if (x3Var.f1165g) {
            return;
        }
        Toolbar toolbar = x3Var.a;
        x3Var.f1166h = charSequence;
        if ((x3Var.f1160b & 8) != 0) {
            toolbar.setTitle(charSequence);
            if (x3Var.f1165g) {
                androidx.core.view.s0.q(toolbar.getRootView(), charSequence);
            }
        }
    }

    @Override // android.view.ViewGroup
    public final boolean shouldDelayChildPressedState() {
        return false;
    }

    @Override // androidx.core.view.p
    public final void onNestedPreScroll(View view, int i5, int i6, int[] iArr, int i10) {
    }

    @Override // androidx.core.view.p
    public final void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12) {
        if (i12 == 0) {
            onNestedScroll(view, i5, i6, i10, i11);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onNestedScrollAccepted(View view, View view2, int i5) {
        i.j0 j0Var;
        m.f fVar;
        this.a0.a = i5;
        this.H = getActionBarHideOffset();
        b();
        e eVar = this.R;
        if (eVar == null || (fVar = (j0Var = (i.j0) eVar).f10341s) == null) {
            return;
        }
        fVar.a();
        j0Var.f10341s = null;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final boolean onStartNestedScroll(View view, View view2, int i5) {
        if ((i5 & 2) == 0 || this.f843v.getVisibility() != 0) {
            return false;
        }
        return this.F;
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onStopNestedScroll(View view) {
        if (!this.F || this.G) {
            return;
        }
        if (this.H <= this.f843v.getHeight()) {
            b();
            postDelayed(this.V, 600L);
        } else {
            b();
            postDelayed(this.W, 600L);
        }
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return new f(layoutParams);
    }

    @Override // android.view.ViewGroup, android.view.ViewParent
    public final void onNestedScroll(View view, int i5, int i6, int i10, int i11) {
        int i12 = this.H + i6;
        this.H = i12;
        setActionBarHideOffset(i12);
    }

    public void setIcon(Drawable drawable) {
        e();
        x3 x3Var = (x3) this.f844w;
        x3Var.f1162d = drawable;
        x3Var.c();
    }
}
