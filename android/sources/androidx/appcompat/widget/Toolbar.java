package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.ContextThemeWrapper;
import android.view.Gravity;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import android.window.OnBackInvokedCallback;
import android.window.OnBackInvokedDispatcher;
import androidx.annotation.NonNull;
import androidx.core.view.MenuHostHelper;
import androidx.core.view.MenuProvider;
import com.discord.R;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public class Toolbar extends ViewGroup implements androidx.core.view.k {
    public y E;
    public View F;
    public Context G;
    public int H;
    public int I;
    public int J;
    public final int K;
    public final int L;
    public int M;
    public int N;
    public int O;
    public int P;
    public p2 Q;
    public int R;
    public int S;
    public final int T;
    public CharSequence U;
    public CharSequence V;
    public ColorStateList W;
    public ColorStateList a0;

    /* renamed from: b0, reason: collision with root package name */
    public boolean f881b0;

    /* renamed from: c0, reason: collision with root package name */
    public boolean f882c0;

    /* renamed from: d, reason: collision with root package name */
    public ActionMenuView f883d;

    /* renamed from: d0, reason: collision with root package name */
    public final ArrayList f884d0;

    /* renamed from: e, reason: collision with root package name */
    public AppCompatTextView f885e;

    /* renamed from: e0, reason: collision with root package name */
    public final ArrayList f886e0;

    /* renamed from: f0, reason: collision with root package name */
    public final int[] f887f0;

    /* renamed from: g0, reason: collision with root package name */
    public final MenuHostHelper f888g0;
    public ArrayList h0;

    /* renamed from: i, reason: collision with root package name */
    public AppCompatTextView f889i;

    /* renamed from: i0, reason: collision with root package name */
    public t3 f890i0;

    /* renamed from: j0, reason: collision with root package name */
    public final ha.l f891j0;

    /* renamed from: k0, reason: collision with root package name */
    public x3 f892k0;

    /* renamed from: l0, reason: collision with root package name */
    public n f893l0;

    /* renamed from: m0, reason: collision with root package name */
    public r3 f894m0;

    /* renamed from: n0, reason: collision with root package name */
    public a5.h0 f895n0;

    /* renamed from: o0, reason: collision with root package name */
    public u4.c f896o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f897p0;

    /* renamed from: q0, reason: collision with root package name */
    public OnBackInvokedCallback f898q0;

    /* renamed from: r0, reason: collision with root package name */
    public OnBackInvokedDispatcher f899r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f900s0;

    /* renamed from: t0, reason: collision with root package name */
    public final a3.h f901t0;

    /* renamed from: v, reason: collision with root package name */
    public y f902v;

    /* renamed from: w, reason: collision with root package name */
    public z f903w;

    /* renamed from: x, reason: collision with root package name */
    public final Drawable f904x;

    /* renamed from: y, reason: collision with root package name */
    public final CharSequence f905y;

    public Toolbar(@NonNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    private ArrayList<MenuItem> getCurrentMenuItems() {
        ArrayList<MenuItem> arrayList = new ArrayList<>();
        Menu menu = getMenu();
        for (int i5 = 0; i5 < menu.size(); i5++) {
            arrayList.add(menu.getItem(i5));
        }
        return arrayList;
    }

    private MenuInflater getMenuInflater() {
        return new m.e(getContext());
    }

    public static s3 h() {
        return new s3(-2);
    }

    public static s3 i(ViewGroup.LayoutParams layoutParams) {
        boolean z5 = layoutParams instanceof s3;
        if (z5) {
            s3 s3Var = (s3) layoutParams;
            s3 s3Var2 = new s3(s3Var);
            s3Var2.f1103b = 0;
            s3Var2.f1103b = s3Var.f1103b;
            return s3Var2;
        }
        if (z5) {
            s3 s3Var3 = new s3((s3) layoutParams);
            s3Var3.f1103b = 0;
            return s3Var3;
        }
        if (!(layoutParams instanceof ViewGroup.MarginLayoutParams)) {
            s3 s3Var4 = new s3(layoutParams);
            s3Var4.f1103b = 0;
            return s3Var4;
        }
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams;
        s3 s3Var5 = new s3(marginLayoutParams);
        s3Var5.f1103b = 0;
        ((ViewGroup.MarginLayoutParams) s3Var5).leftMargin = marginLayoutParams.leftMargin;
        ((ViewGroup.MarginLayoutParams) s3Var5).topMargin = marginLayoutParams.topMargin;
        ((ViewGroup.MarginLayoutParams) s3Var5).rightMargin = marginLayoutParams.rightMargin;
        ((ViewGroup.MarginLayoutParams) s3Var5).bottomMargin = marginLayoutParams.bottomMargin;
        return s3Var5;
    }

    public static int k(View view) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        return marginLayoutParams.getMarginEnd() + marginLayoutParams.getMarginStart();
    }

    public static int l(View view) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        return marginLayoutParams.topMargin + marginLayoutParams.bottomMargin;
    }

    public final void a(int i5, ArrayList arrayList) {
        boolean z5 = getLayoutDirection() == 1;
        int childCount = getChildCount();
        int absoluteGravity = Gravity.getAbsoluteGravity(i5, getLayoutDirection());
        arrayList.clear();
        if (!z5) {
            for (int i6 = 0; i6 < childCount; i6++) {
                View childAt = getChildAt(i6);
                s3 s3Var = (s3) childAt.getLayoutParams();
                if (s3Var.f1103b == 0 && t(childAt)) {
                    int i10 = s3Var.a;
                    int layoutDirection = getLayoutDirection();
                    int absoluteGravity2 = Gravity.getAbsoluteGravity(i10, layoutDirection) & 7;
                    if (absoluteGravity2 != 1 && absoluteGravity2 != 3 && absoluteGravity2 != 5) {
                        absoluteGravity2 = layoutDirection == 1 ? 5 : 3;
                    }
                    if (absoluteGravity2 == absoluteGravity) {
                        arrayList.add(childAt);
                    }
                }
            }
            return;
        }
        for (int i11 = childCount - 1; i11 >= 0; i11--) {
            View childAt2 = getChildAt(i11);
            s3 s3Var2 = (s3) childAt2.getLayoutParams();
            if (s3Var2.f1103b == 0 && t(childAt2)) {
                int i12 = s3Var2.a;
                int layoutDirection2 = getLayoutDirection();
                int absoluteGravity3 = Gravity.getAbsoluteGravity(i12, layoutDirection2) & 7;
                if (absoluteGravity3 != 1 && absoluteGravity3 != 3 && absoluteGravity3 != 5) {
                    absoluteGravity3 = layoutDirection2 == 1 ? 5 : 3;
                }
                if (absoluteGravity3 == absoluteGravity) {
                    arrayList.add(childAt2);
                }
            }
        }
    }

    @Override // androidx.core.view.k
    public final void addMenuProvider(MenuProvider menuProvider) {
        MenuHostHelper menuHostHelper = this.f888g0;
        menuHostHelper.f1540b.add(menuProvider);
        menuHostHelper.a.run();
    }

    public final void b(View view, boolean z5) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        s3 h6 = layoutParams == null ? h() : !checkLayoutParams(layoutParams) ? i(layoutParams) : (s3) layoutParams;
        h6.f1103b = 1;
        if (!z5 || this.F == null) {
            addView(view, h6);
        } else {
            view.setLayoutParams(h6);
            this.f886e0.add(view);
        }
    }

    public final void c() {
        if (this.E == null) {
            y yVar = new y(getContext(), null, R.attr.toolbarNavigationButtonStyle);
            this.E = yVar;
            yVar.setImageDrawable(this.f904x);
            this.E.setContentDescription(this.f905y);
            s3 h6 = h();
            h6.a = (this.K & 112) | 8388611;
            h6.f1103b = 2;
            this.E.setLayoutParams(h6);
            this.E.setOnClickListener(new b(2, this));
        }
    }

    @Override // android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return super.checkLayoutParams(layoutParams) && (layoutParams instanceof s3);
    }

    public final void d() {
        if (this.Q == null) {
            p2 p2Var = new p2();
            p2Var.a = 0;
            p2Var.f1072b = 0;
            p2Var.f1073c = Integer.MIN_VALUE;
            p2Var.f1074d = Integer.MIN_VALUE;
            p2Var.f1075e = 0;
            p2Var.f1076f = 0;
            p2Var.f1077g = false;
            p2Var.f1078h = false;
            this.Q = p2Var;
        }
    }

    public final void e() {
        f();
        ActionMenuView actionMenuView = this.f883d;
        if (actionMenuView.M == null) {
            n.j jVar = (n.j) actionMenuView.getMenu();
            if (this.f894m0 == null) {
                this.f894m0 = new r3(this);
            }
            this.f883d.setExpandedActionViewsExclusive(true);
            jVar.b(this.f894m0, this.G);
            v();
        }
    }

    public final void f() {
        if (this.f883d == null) {
            ActionMenuView actionMenuView = new ActionMenuView(getContext(), null);
            this.f883d = actionMenuView;
            actionMenuView.setPopupTheme(this.H);
            this.f883d.setOnMenuItemClickListener(this.f891j0);
            ActionMenuView actionMenuView2 = this.f883d;
            a5.h0 h0Var = this.f895n0;
            u4.b bVar = new u4.b(3, this);
            actionMenuView2.R = h0Var;
            actionMenuView2.S = bVar;
            s3 h6 = h();
            h6.a = (this.K & 112) | 8388613;
            this.f883d.setLayoutParams(h6);
            b(this.f883d, false);
        }
    }

    public final void g() {
        if (this.f902v == null) {
            this.f902v = new y(getContext(), null, R.attr.toolbarNavigationButtonStyle);
            s3 h6 = h();
            h6.a = (this.K & 112) | 8388611;
            this.f902v.setLayoutParams(h6);
        }
    }

    @Override // android.view.ViewGroup
    public final /* bridge */ /* synthetic */ ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return h();
    }

    @Override // android.view.ViewGroup
    public final /* bridge */ /* synthetic */ ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return i(layoutParams);
    }

    public CharSequence getCollapseContentDescription() {
        y yVar = this.E;
        if (yVar != null) {
            return yVar.getContentDescription();
        }
        return null;
    }

    public Drawable getCollapseIcon() {
        y yVar = this.E;
        if (yVar != null) {
            return yVar.getDrawable();
        }
        return null;
    }

    public int getContentInsetEnd() {
        p2 p2Var = this.Q;
        if (p2Var != null) {
            return p2Var.f1077g ? p2Var.a : p2Var.f1072b;
        }
        return 0;
    }

    public int getContentInsetEndWithActions() {
        int i5 = this.S;
        return i5 != Integer.MIN_VALUE ? i5 : getContentInsetEnd();
    }

    public int getContentInsetLeft() {
        p2 p2Var = this.Q;
        if (p2Var != null) {
            return p2Var.a;
        }
        return 0;
    }

    public int getContentInsetRight() {
        p2 p2Var = this.Q;
        if (p2Var != null) {
            return p2Var.f1072b;
        }
        return 0;
    }

    public int getContentInsetStart() {
        p2 p2Var = this.Q;
        if (p2Var != null) {
            return p2Var.f1077g ? p2Var.f1072b : p2Var.a;
        }
        return 0;
    }

    public int getContentInsetStartWithNavigation() {
        int i5 = this.R;
        return i5 != Integer.MIN_VALUE ? i5 : getContentInsetStart();
    }

    public int getCurrentContentInsetEnd() {
        n.j jVar;
        ActionMenuView actionMenuView = this.f883d;
        return (actionMenuView == null || (jVar = actionMenuView.M) == null || !jVar.hasVisibleItems()) ? getContentInsetEnd() : Math.max(getContentInsetEnd(), Math.max(this.S, 0));
    }

    public int getCurrentContentInsetLeft() {
        return getLayoutDirection() == 1 ? getCurrentContentInsetEnd() : getCurrentContentInsetStart();
    }

    public int getCurrentContentInsetRight() {
        return getLayoutDirection() == 1 ? getCurrentContentInsetStart() : getCurrentContentInsetEnd();
    }

    public int getCurrentContentInsetStart() {
        return getNavigationIcon() != null ? Math.max(getContentInsetStart(), Math.max(this.R, 0)) : getContentInsetStart();
    }

    public Drawable getLogo() {
        z zVar = this.f903w;
        if (zVar != null) {
            return zVar.getDrawable();
        }
        return null;
    }

    public CharSequence getLogoDescription() {
        z zVar = this.f903w;
        if (zVar != null) {
            return zVar.getContentDescription();
        }
        return null;
    }

    public Menu getMenu() {
        e();
        return this.f883d.getMenu();
    }

    public View getNavButtonView() {
        return this.f902v;
    }

    public CharSequence getNavigationContentDescription() {
        y yVar = this.f902v;
        if (yVar != null) {
            return yVar.getContentDescription();
        }
        return null;
    }

    public Drawable getNavigationIcon() {
        y yVar = this.f902v;
        if (yVar != null) {
            return yVar.getDrawable();
        }
        return null;
    }

    public n getOuterActionMenuPresenter() {
        return this.f893l0;
    }

    public Drawable getOverflowIcon() {
        e();
        return this.f883d.getOverflowIcon();
    }

    public Context getPopupContext() {
        return this.G;
    }

    public int getPopupTheme() {
        return this.H;
    }

    public CharSequence getSubtitle() {
        return this.V;
    }

    public final TextView getSubtitleTextView() {
        return this.f889i;
    }

    public CharSequence getTitle() {
        return this.U;
    }

    public int getTitleMarginBottom() {
        return this.P;
    }

    public int getTitleMarginEnd() {
        return this.N;
    }

    public int getTitleMarginStart() {
        return this.M;
    }

    public int getTitleMarginTop() {
        return this.O;
    }

    public final TextView getTitleTextView() {
        return this.f885e;
    }

    public k1 getWrapper() {
        if (this.f892k0 == null) {
            this.f892k0 = new x3(this, true);
        }
        return this.f892k0;
    }

    public final int j(int i5, View view) {
        s3 s3Var = (s3) view.getLayoutParams();
        int measuredHeight = view.getMeasuredHeight();
        int i6 = i5 > 0 ? (measuredHeight - i5) / 2 : 0;
        int i10 = s3Var.a & 112;
        if (i10 != 16 && i10 != 48 && i10 != 80) {
            i10 = this.T & 112;
        }
        if (i10 == 48) {
            return getPaddingTop() - i6;
        }
        if (i10 == 80) {
            return (((getHeight() - getPaddingBottom()) - measuredHeight) - ((ViewGroup.MarginLayoutParams) s3Var).bottomMargin) - i6;
        }
        int paddingTop = getPaddingTop();
        int paddingBottom = getPaddingBottom();
        int height = getHeight();
        int i11 = (((height - paddingTop) - paddingBottom) - measuredHeight) / 2;
        int i12 = ((ViewGroup.MarginLayoutParams) s3Var).topMargin;
        if (i11 < i12) {
            i11 = i12;
        } else {
            int i13 = (((height - paddingBottom) - measuredHeight) - i11) - paddingTop;
            int i14 = ((ViewGroup.MarginLayoutParams) s3Var).bottomMargin;
            if (i13 < i14) {
                i11 = Math.max(0, i11 - (i14 - i13));
            }
        }
        return paddingTop + i11;
    }

    public final void m() {
        Iterator it = this.h0.iterator();
        while (it.hasNext()) {
            getMenu().removeItem(((MenuItem) it.next()).getItemId());
        }
        Menu menu = getMenu();
        ArrayList<MenuItem> currentMenuItems = getCurrentMenuItems();
        MenuInflater menuInflater = getMenuInflater();
        Iterator it2 = this.f888g0.f1540b.iterator();
        while (it2.hasNext()) {
            ((MenuProvider) it2.next()).c(menu, menuInflater);
        }
        ArrayList<MenuItem> currentMenuItems2 = getCurrentMenuItems();
        currentMenuItems2.removeAll(currentMenuItems);
        this.h0 = currentMenuItems2;
    }

    public final boolean n(View view) {
        return view.getParent() == this || this.f886e0.contains(view);
    }

    public final boolean o() {
        n nVar;
        ActionMenuView actionMenuView = this.f883d;
        return (actionMenuView == null || (nVar = actionMenuView.Q) == null || !nVar.m()) ? false : true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        v();
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        removeCallbacks(this.f901t0);
        v();
    }

    @Override // android.view.View
    public final boolean onHoverEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 9) {
            this.f882c0 = false;
        }
        if (!this.f882c0) {
            boolean onHoverEvent = super.onHoverEvent(motionEvent);
            if (actionMasked == 9 && !onHoverEvent) {
                this.f882c0 = true;
            }
        }
        if (actionMasked != 10 && actionMasked != 3) {
            return true;
        }
        this.f882c0 = false;
        return true;
    }

    /* JADX WARN: Removed duplicated region for block: B:110:0x019d  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x0131  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x012a  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x011f  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x0101  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0079  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00b6  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0106  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x028f A[LOOP:0: B:39:0x028d->B:40:0x028f, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x02a7 A[LOOP:1: B:43:0x02a5->B:44:0x02a7, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:48:0x02c7 A[LOOP:2: B:47:0x02c5->B:48:0x02c7, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:52:0x030d  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x031a A[LOOP:3: B:56:0x0318->B:57:0x031a, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0127  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x012e  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0164  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x01aa  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0218  */
    @Override // android.view.ViewGroup, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        int max;
        boolean t5;
        boolean t10;
        boolean z6;
        int i14;
        int i15;
        int paddingTop;
        int i16;
        int i17;
        int i18;
        int i19;
        int size;
        int i20;
        int i21;
        int size2;
        int i22;
        int size3;
        int i23;
        int i24;
        int i25;
        int size4;
        boolean z7 = getLayoutDirection() == 1;
        int width = getWidth();
        int height = getHeight();
        int paddingLeft = getPaddingLeft();
        int paddingRight = getPaddingRight();
        int paddingTop2 = getPaddingTop();
        int paddingBottom = getPaddingBottom();
        int i26 = width - paddingRight;
        int[] iArr = this.f887f0;
        iArr[1] = 0;
        iArr[0] = 0;
        WeakHashMap weakHashMap = androidx.core.view.s0.a;
        int minimumHeight = getMinimumHeight();
        int min = minimumHeight >= 0 ? Math.min(minimumHeight, i11 - i6) : 0;
        if (!t(this.f902v)) {
            i12 = paddingLeft;
        } else {
            if (z7) {
                i13 = q(this.f902v, i26, min, iArr);
                i12 = paddingLeft;
                if (t(this.E)) {
                    if (z7) {
                        i13 = q(this.E, i13, min, iArr);
                    } else {
                        i12 = p(this.E, i12, min, iArr);
                    }
                }
                if (t(this.f883d)) {
                    if (z7) {
                        i12 = p(this.f883d, i12, min, iArr);
                    } else {
                        i13 = q(this.f883d, i13, min, iArr);
                    }
                }
                int currentContentInsetLeft = getCurrentContentInsetLeft();
                int currentContentInsetRight = getCurrentContentInsetRight();
                iArr[0] = Math.max(0, currentContentInsetLeft - i12);
                iArr[1] = Math.max(0, currentContentInsetRight - (i26 - i13));
                max = Math.max(i12, currentContentInsetLeft);
                int min2 = Math.min(i13, i26 - currentContentInsetRight);
                if (t(this.F)) {
                    if (z7) {
                        min2 = q(this.F, min2, min, iArr);
                    } else {
                        max = p(this.F, max, min, iArr);
                    }
                }
                if (t(this.f903w)) {
                    if (z7) {
                        min2 = q(this.f903w, min2, min, iArr);
                    } else {
                        max = p(this.f903w, max, min, iArr);
                    }
                }
                t5 = t(this.f885e);
                t10 = t(this.f889i);
                if (t5) {
                    z6 = z7;
                    i14 = 0;
                } else {
                    s3 s3Var = (s3) this.f885e.getLayoutParams();
                    z6 = z7;
                    i14 = this.f885e.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) s3Var).topMargin + ((ViewGroup.MarginLayoutParams) s3Var).bottomMargin;
                }
                if (!t10) {
                    s3 s3Var2 = (s3) this.f889i.getLayoutParams();
                    i14 = this.f889i.getMeasuredHeight() + ((ViewGroup.MarginLayoutParams) s3Var2).topMargin + ((ViewGroup.MarginLayoutParams) s3Var2).bottomMargin + i14;
                }
                if (!t5 || t10) {
                    AppCompatTextView appCompatTextView = !t5 ? this.f885e : this.f889i;
                    AppCompatTextView appCompatTextView2 = !t10 ? this.f889i : this.f885e;
                    s3 s3Var3 = (s3) appCompatTextView.getLayoutParams();
                    s3 s3Var4 = (s3) appCompatTextView2.getLayoutParams();
                    int i27 = i14;
                    boolean z8 = (!t5 && this.f885e.getMeasuredWidth() > 0) || (t10 && this.f889i.getMeasuredWidth() > 0);
                    i15 = this.T & 112;
                    int i28 = max;
                    if (i15 != 48) {
                        paddingTop = getPaddingTop() + ((ViewGroup.MarginLayoutParams) s3Var3).topMargin + this.O;
                    } else if (i15 != 80) {
                        int i29 = (((height - paddingTop2) - paddingBottom) - i27) / 2;
                        int i30 = ((ViewGroup.MarginLayoutParams) s3Var3).topMargin + this.O;
                        if (i29 < i30) {
                            i29 = i30;
                        } else {
                            int i31 = (((height - paddingBottom) - i27) - i29) - paddingTop2;
                            int i32 = ((ViewGroup.MarginLayoutParams) s3Var3).bottomMargin;
                            int i33 = this.P;
                            if (i31 < i32 + i33) {
                                i29 = Math.max(0, i29 - ((((ViewGroup.MarginLayoutParams) s3Var4).bottomMargin + i33) - i31));
                            }
                        }
                        paddingTop = paddingTop2 + i29;
                    } else {
                        paddingTop = (((height - paddingBottom) - ((ViewGroup.MarginLayoutParams) s3Var4).bottomMargin) - this.P) - i27;
                    }
                    if (z6) {
                        int i34 = (z8 ? this.M : 0) - iArr[0];
                        max = Math.max(0, i34) + i28;
                        iArr[0] = Math.max(0, -i34);
                        if (t5) {
                            s3 s3Var5 = (s3) this.f885e.getLayoutParams();
                            int measuredWidth = this.f885e.getMeasuredWidth() + max;
                            int measuredHeight = this.f885e.getMeasuredHeight() + paddingTop;
                            this.f885e.layout(max, paddingTop, measuredWidth, measuredHeight);
                            i16 = measuredWidth + this.N;
                            paddingTop = measuredHeight + ((ViewGroup.MarginLayoutParams) s3Var5).bottomMargin;
                        } else {
                            i16 = max;
                        }
                        if (t10) {
                            int i35 = paddingTop + ((ViewGroup.MarginLayoutParams) ((s3) this.f889i.getLayoutParams())).topMargin;
                            int measuredWidth2 = this.f889i.getMeasuredWidth() + max;
                            this.f889i.layout(max, i35, measuredWidth2, this.f889i.getMeasuredHeight() + i35);
                            i17 = measuredWidth2 + this.N;
                        } else {
                            i17 = max;
                        }
                        if (z8) {
                            max = Math.max(i16, i17);
                        }
                    } else {
                        int i36 = (z8 ? this.M : 0) - iArr[1];
                        min2 -= Math.max(0, i36);
                        iArr[1] = Math.max(0, -i36);
                        if (t5) {
                            s3 s3Var6 = (s3) this.f885e.getLayoutParams();
                            int measuredWidth3 = min2 - this.f885e.getMeasuredWidth();
                            int measuredHeight2 = this.f885e.getMeasuredHeight() + paddingTop;
                            this.f885e.layout(measuredWidth3, paddingTop, min2, measuredHeight2);
                            i18 = measuredWidth3 - this.N;
                            paddingTop = measuredHeight2 + ((ViewGroup.MarginLayoutParams) s3Var6).bottomMargin;
                        } else {
                            i18 = min2;
                        }
                        if (t10) {
                            int i37 = paddingTop + ((ViewGroup.MarginLayoutParams) ((s3) this.f889i.getLayoutParams())).topMargin;
                            this.f889i.layout(min2 - this.f889i.getMeasuredWidth(), i37, min2, this.f889i.getMeasuredHeight() + i37);
                            i19 = min2 - this.N;
                        } else {
                            i19 = min2;
                        }
                        if (z8) {
                            min2 = Math.min(i18, i19);
                        }
                        max = i28;
                    }
                }
                ArrayList arrayList = this.f884d0;
                a(3, arrayList);
                size = arrayList.size();
                i20 = max;
                for (i21 = 0; i21 < size; i21++) {
                    i20 = p((View) arrayList.get(i21), i20, min, iArr);
                }
                a(5, arrayList);
                size2 = arrayList.size();
                for (i22 = 0; i22 < size2; i22++) {
                    min2 = q((View) arrayList.get(i22), min2, min, iArr);
                }
                a(1, arrayList);
                int i38 = iArr[0];
                int i39 = iArr[1];
                size3 = arrayList.size();
                int i40 = i38;
                i23 = 0;
                int i41 = 0;
                while (i23 < size3) {
                    View view = (View) arrayList.get(i23);
                    s3 s3Var7 = (s3) view.getLayoutParams();
                    int i42 = i39;
                    int i43 = ((ViewGroup.MarginLayoutParams) s3Var7).leftMargin - i40;
                    int i44 = ((ViewGroup.MarginLayoutParams) s3Var7).rightMargin - i42;
                    int max2 = Math.max(0, i43);
                    int max3 = Math.max(0, i44);
                    int max4 = Math.max(0, -i43);
                    int max5 = Math.max(0, -i44);
                    i41 += view.getMeasuredWidth() + max2 + max3;
                    i23++;
                    i40 = max4;
                    i39 = max5;
                }
                i25 = ((((width - paddingLeft) - paddingRight) / 2) + paddingLeft) - (i41 / 2);
                int i45 = i41 + i25;
                if (i25 >= i20) {
                    i20 = i45 > min2 ? i25 - (i45 - min2) : i25;
                }
                size4 = arrayList.size();
                for (i24 = 0; i24 < size4; i24++) {
                    i20 = p((View) arrayList.get(i24), i20, min, iArr);
                }
                arrayList.clear();
            }
            i12 = p(this.f902v, paddingLeft, min, iArr);
        }
        i13 = i26;
        if (t(this.E)) {
        }
        if (t(this.f883d)) {
        }
        int currentContentInsetLeft2 = getCurrentContentInsetLeft();
        int currentContentInsetRight2 = getCurrentContentInsetRight();
        iArr[0] = Math.max(0, currentContentInsetLeft2 - i12);
        iArr[1] = Math.max(0, currentContentInsetRight2 - (i26 - i13));
        max = Math.max(i12, currentContentInsetLeft2);
        int min22 = Math.min(i13, i26 - currentContentInsetRight2);
        if (t(this.F)) {
        }
        if (t(this.f903w)) {
        }
        t5 = t(this.f885e);
        t10 = t(this.f889i);
        if (t5) {
        }
        if (!t10) {
        }
        if (!t5) {
        }
        if (!t5) {
        }
        if (!t10) {
        }
        s3 s3Var32 = (s3) appCompatTextView.getLayoutParams();
        s3 s3Var42 = (s3) appCompatTextView2.getLayoutParams();
        int i272 = i14;
        if (t5) {
        }
        i15 = this.T & 112;
        int i282 = max;
        if (i15 != 48) {
        }
        if (z6) {
        }
        ArrayList arrayList2 = this.f884d0;
        a(3, arrayList2);
        size = arrayList2.size();
        i20 = max;
        while (i21 < size) {
        }
        a(5, arrayList2);
        size2 = arrayList2.size();
        while (i22 < size2) {
        }
        a(1, arrayList2);
        int i382 = iArr[0];
        int i392 = iArr[1];
        size3 = arrayList2.size();
        int i402 = i382;
        i23 = 0;
        int i412 = 0;
        while (i23 < size3) {
        }
        i25 = ((((width - paddingLeft) - paddingRight) / 2) + paddingLeft) - (i412 / 2);
        int i452 = i412 + i25;
        if (i25 >= i20) {
        }
        size4 = arrayList2.size();
        while (i24 < size4) {
        }
        arrayList2.clear();
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        char c6;
        Object[] objArr;
        int i10;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        boolean z5 = f4.a;
        int i17 = 0;
        if (getLayoutDirection() == 1) {
            objArr = true;
            c6 = 0;
        } else {
            c6 = 1;
            objArr = false;
        }
        if (t(this.f902v)) {
            s(this.f902v, i5, 0, i6, this.L);
            i10 = k(this.f902v) + this.f902v.getMeasuredWidth();
            i11 = Math.max(0, l(this.f902v) + this.f902v.getMeasuredHeight());
            i12 = View.combineMeasuredStates(0, this.f902v.getMeasuredState());
        } else {
            i10 = 0;
            i11 = 0;
            i12 = 0;
        }
        if (t(this.E)) {
            s(this.E, i5, 0, i6, this.L);
            i10 = k(this.E) + this.E.getMeasuredWidth();
            i11 = Math.max(i11, l(this.E) + this.E.getMeasuredHeight());
            i12 = View.combineMeasuredStates(i12, this.E.getMeasuredState());
        }
        int currentContentInsetStart = getCurrentContentInsetStart();
        int max = Math.max(currentContentInsetStart, i10);
        int max2 = Math.max(0, currentContentInsetStart - i10);
        Object[] objArr2 = objArr;
        int[] iArr = this.f887f0;
        iArr[objArr2 == true ? 1 : 0] = max2;
        if (t(this.f883d)) {
            s(this.f883d, i5, max, i6, this.L);
            i13 = k(this.f883d) + this.f883d.getMeasuredWidth();
            i11 = Math.max(i11, l(this.f883d) + this.f883d.getMeasuredHeight());
            i12 = View.combineMeasuredStates(i12, this.f883d.getMeasuredState());
        } else {
            i13 = 0;
        }
        int currentContentInsetEnd = getCurrentContentInsetEnd();
        int max3 = max + Math.max(currentContentInsetEnd, i13);
        iArr[c6] = Math.max(0, currentContentInsetEnd - i13);
        if (t(this.F)) {
            max3 += r(this.F, i5, max3, i6, 0, iArr);
            i11 = Math.max(i11, l(this.F) + this.F.getMeasuredHeight());
            i12 = View.combineMeasuredStates(i12, this.F.getMeasuredState());
        }
        if (t(this.f903w)) {
            max3 += r(this.f903w, i5, max3, i6, 0, iArr);
            i11 = Math.max(i11, l(this.f903w) + this.f903w.getMeasuredHeight());
            i12 = View.combineMeasuredStates(i12, this.f903w.getMeasuredState());
        }
        int childCount = getChildCount();
        for (int i18 = 0; i18 < childCount; i18++) {
            View childAt = getChildAt(i18);
            if (((s3) childAt.getLayoutParams()).f1103b == 0 && t(childAt)) {
                max3 += r(childAt, i5, max3, i6, 0, iArr);
                int max4 = Math.max(i11, l(childAt) + childAt.getMeasuredHeight());
                i12 = View.combineMeasuredStates(i12, childAt.getMeasuredState());
                i11 = max4;
            } else {
                max3 = max3;
            }
        }
        int i19 = max3;
        int i20 = this.O + this.P;
        int i21 = this.M + this.N;
        if (t(this.f885e)) {
            r(this.f885e, i5, i19 + i21, i6, i20, iArr);
            int k = k(this.f885e) + this.f885e.getMeasuredWidth();
            i14 = l(this.f885e) + this.f885e.getMeasuredHeight();
            i15 = View.combineMeasuredStates(i12, this.f885e.getMeasuredState());
            i16 = k;
        } else {
            i14 = 0;
            i15 = i12;
            i16 = 0;
        }
        if (t(this.f889i)) {
            i16 = Math.max(i16, r(this.f889i, i5, i19 + i21, i6, i20 + i14, iArr));
            i14 += l(this.f889i) + this.f889i.getMeasuredHeight();
            i15 = View.combineMeasuredStates(i15, this.f889i.getMeasuredState());
        }
        int max5 = Math.max(i11, i14);
        int paddingRight = getPaddingRight() + getPaddingLeft() + i19 + i16;
        int paddingBottom = getPaddingBottom() + getPaddingTop() + max5;
        int resolveSizeAndState = View.resolveSizeAndState(Math.max(paddingRight, getSuggestedMinimumWidth()), i5, (-16777216) & i15);
        int resolveSizeAndState2 = View.resolveSizeAndState(Math.max(paddingBottom, getSuggestedMinimumHeight()), i6, i15 << 16);
        if (this.f897p0) {
            int childCount2 = getChildCount();
            for (int i22 = 0; i22 < childCount2; i22++) {
                View childAt2 = getChildAt(i22);
                if (!t(childAt2) || childAt2.getMeasuredWidth() <= 0 || childAt2.getMeasuredHeight() <= 0) {
                }
            }
            setMeasuredDimension(resolveSizeAndState, i17);
        }
        i17 = resolveSizeAndState2;
        setMeasuredDimension(resolveSizeAndState, i17);
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        MenuItem findItem;
        if (!(parcelable instanceof u3)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        u3 u3Var = (u3) parcelable;
        super.onRestoreInstanceState(u3Var.f7399d);
        ActionMenuView actionMenuView = this.f883d;
        n.j jVar = actionMenuView != null ? actionMenuView.M : null;
        int i5 = u3Var.f1124i;
        if (i5 != 0 && this.f894m0 != null && jVar != null && (findItem = jVar.findItem(i5)) != null) {
            findItem.expandActionView();
        }
        if (u3Var.f1125v) {
            a3.h hVar = this.f901t0;
            removeCallbacks(hVar);
            post(hVar);
        }
    }

    @Override // android.view.View
    public final void onRtlPropertiesChanged(int i5) {
        super.onRtlPropertiesChanged(i5);
        d();
        p2 p2Var = this.Q;
        boolean z5 = i5 == 1;
        if (z5 == p2Var.f1077g) {
            return;
        }
        p2Var.f1077g = z5;
        if (!p2Var.f1078h) {
            p2Var.a = p2Var.f1075e;
            p2Var.f1072b = p2Var.f1076f;
            return;
        }
        if (z5) {
            int i6 = p2Var.f1074d;
            if (i6 == Integer.MIN_VALUE) {
                i6 = p2Var.f1075e;
            }
            p2Var.a = i6;
            int i10 = p2Var.f1073c;
            if (i10 == Integer.MIN_VALUE) {
                i10 = p2Var.f1076f;
            }
            p2Var.f1072b = i10;
            return;
        }
        int i11 = p2Var.f1073c;
        if (i11 == Integer.MIN_VALUE) {
            i11 = p2Var.f1075e;
        }
        p2Var.a = i11;
        int i12 = p2Var.f1074d;
        if (i12 == Integer.MIN_VALUE) {
            i12 = p2Var.f1076f;
        }
        p2Var.f1072b = i12;
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        n.l lVar;
        u3 u3Var = new u3(super.onSaveInstanceState());
        r3 r3Var = this.f894m0;
        if (r3Var != null && (lVar = r3Var.f1089e) != null) {
            u3Var.f1124i = lVar.a;
        }
        u3Var.f1125v = o();
        return u3Var;
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            this.f881b0 = false;
        }
        if (!this.f881b0) {
            boolean onTouchEvent = super.onTouchEvent(motionEvent);
            if (actionMasked == 0 && !onTouchEvent) {
                this.f881b0 = true;
            }
        }
        if (actionMasked != 1 && actionMasked != 3) {
            return true;
        }
        this.f881b0 = false;
        return true;
    }

    public final int p(View view, int i5, int i6, int[] iArr) {
        s3 s3Var = (s3) view.getLayoutParams();
        int i10 = ((ViewGroup.MarginLayoutParams) s3Var).leftMargin - iArr[0];
        int max = Math.max(0, i10) + i5;
        iArr[0] = Math.max(0, -i10);
        int j = j(i6, view);
        int measuredWidth = view.getMeasuredWidth();
        view.layout(max, j, max + measuredWidth, view.getMeasuredHeight() + j);
        return measuredWidth + ((ViewGroup.MarginLayoutParams) s3Var).rightMargin + max;
    }

    public final int q(View view, int i5, int i6, int[] iArr) {
        s3 s3Var = (s3) view.getLayoutParams();
        int i10 = ((ViewGroup.MarginLayoutParams) s3Var).rightMargin - iArr[1];
        int max = i5 - Math.max(0, i10);
        iArr[1] = Math.max(0, -i10);
        int j = j(i6, view);
        int measuredWidth = view.getMeasuredWidth();
        view.layout(max - measuredWidth, j, max, view.getMeasuredHeight() + j);
        return max - (measuredWidth + ((ViewGroup.MarginLayoutParams) s3Var).leftMargin);
    }

    public final int r(View view, int i5, int i6, int i10, int i11, int[] iArr) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        int i12 = marginLayoutParams.leftMargin - iArr[0];
        int i13 = marginLayoutParams.rightMargin - iArr[1];
        int max = Math.max(0, i13) + Math.max(0, i12);
        iArr[0] = Math.max(0, -i12);
        iArr[1] = Math.max(0, -i13);
        view.measure(ViewGroup.getChildMeasureSpec(i5, getPaddingRight() + getPaddingLeft() + max + i6, marginLayoutParams.width), ViewGroup.getChildMeasureSpec(i10, getPaddingBottom() + getPaddingTop() + marginLayoutParams.topMargin + marginLayoutParams.bottomMargin + i11, marginLayoutParams.height));
        return view.getMeasuredWidth() + max;
    }

    @Override // androidx.core.view.k
    public final void removeMenuProvider(MenuProvider menuProvider) {
        this.f888g0.a(menuProvider);
    }

    public final void s(View view, int i5, int i6, int i10, int i11) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
        int childMeasureSpec = ViewGroup.getChildMeasureSpec(i5, getPaddingRight() + getPaddingLeft() + marginLayoutParams.leftMargin + marginLayoutParams.rightMargin + i6, marginLayoutParams.width);
        int childMeasureSpec2 = ViewGroup.getChildMeasureSpec(i10, getPaddingBottom() + getPaddingTop() + marginLayoutParams.topMargin + marginLayoutParams.bottomMargin, marginLayoutParams.height);
        int mode = View.MeasureSpec.getMode(childMeasureSpec2);
        if (mode != 1073741824 && i11 >= 0) {
            if (mode != 0) {
                i11 = Math.min(View.MeasureSpec.getSize(childMeasureSpec2), i11);
            }
            childMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(i11, 1073741824);
        }
        view.measure(childMeasureSpec, childMeasureSpec2);
    }

    public void setBackInvokedCallbackEnabled(boolean z5) {
        if (this.f900s0 != z5) {
            this.f900s0 = z5;
            v();
        }
    }

    public void setCollapseContentDescription(int i5) {
        setCollapseContentDescription(i5 != 0 ? getContext().getText(i5) : null);
    }

    public void setCollapseIcon(int i5) {
        setCollapseIcon(ys.d.J(getContext(), i5));
    }

    public void setCollapsible(boolean z5) {
        this.f897p0 = z5;
        requestLayout();
    }

    public void setContentInsetEndWithActions(int i5) {
        if (i5 < 0) {
            i5 = Integer.MIN_VALUE;
        }
        if (i5 != this.S) {
            this.S = i5;
            if (getNavigationIcon() != null) {
                requestLayout();
            }
        }
    }

    public void setContentInsetStartWithNavigation(int i5) {
        if (i5 < 0) {
            i5 = Integer.MIN_VALUE;
        }
        if (i5 != this.R) {
            this.R = i5;
            if (getNavigationIcon() != null) {
                requestLayout();
            }
        }
    }

    public void setLogo(int i5) {
        setLogo(ys.d.J(getContext(), i5));
    }

    public void setLogoDescription(int i5) {
        setLogoDescription(getContext().getText(i5));
    }

    public void setNavigationContentDescription(int i5) {
        setNavigationContentDescription(i5 != 0 ? getContext().getText(i5) : null);
    }

    public void setNavigationIcon(int i5) {
        setNavigationIcon(ys.d.J(getContext(), i5));
    }

    public void setNavigationOnClickListener(View.OnClickListener onClickListener) {
        g();
        this.f902v.setOnClickListener(onClickListener);
    }

    public void setOnMenuItemClickListener(t3 t3Var) {
        this.f890i0 = t3Var;
    }

    public void setOverflowIcon(Drawable drawable) {
        e();
        this.f883d.setOverflowIcon(drawable);
    }

    public void setPopupTheme(int i5) {
        if (this.H != i5) {
            this.H = i5;
            if (i5 == 0) {
                this.G = getContext();
            } else {
                this.G = new ContextThemeWrapper(getContext(), i5);
            }
        }
    }

    public void setSubtitle(int i5) {
        setSubtitle(getContext().getText(i5));
    }

    public void setSubtitleTextColor(int i5) {
        setSubtitleTextColor(ColorStateList.valueOf(i5));
    }

    public void setTitle(int i5) {
        setTitle(getContext().getText(i5));
    }

    public void setTitleMarginBottom(int i5) {
        this.P = i5;
        requestLayout();
    }

    public void setTitleMarginEnd(int i5) {
        this.N = i5;
        requestLayout();
    }

    public void setTitleMarginStart(int i5) {
        this.M = i5;
        requestLayout();
    }

    public void setTitleMarginTop(int i5) {
        this.O = i5;
        requestLayout();
    }

    public void setTitleTextColor(int i5) {
        setTitleTextColor(ColorStateList.valueOf(i5));
    }

    public final boolean t(View view) {
        return (view == null || view.getParent() != this || view.getVisibility() == 8) ? false : true;
    }

    public final boolean u() {
        n nVar;
        ActionMenuView actionMenuView = this.f883d;
        return (actionMenuView == null || (nVar = actionMenuView.Q) == null || !nVar.n()) ? false : true;
    }

    public final void v() {
        OnBackInvokedDispatcher onBackInvokedDispatcher;
        if (Build.VERSION.SDK_INT >= 33) {
            OnBackInvokedDispatcher a = q3.a(this);
            r3 r3Var = this.f894m0;
            boolean z5 = (r3Var == null || r3Var.f1089e == null || a == null || !isAttachedToWindow() || !this.f900s0) ? false : true;
            if (z5 && this.f899r0 == null) {
                if (this.f898q0 == null) {
                    this.f898q0 = q3.b(new o3(this, 0));
                }
                q3.c(a, this.f898q0);
                this.f899r0 = a;
                return;
            }
            if (z5 || (onBackInvokedDispatcher = this.f899r0) == null) {
                return;
            }
            q3.d(onBackInvokedDispatcher, this.f898q0);
            this.f899r0 = null;
        }
    }

    public Toolbar(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, R.attr.toolbarStyle);
        this.T = 8388627;
        this.f884d0 = new ArrayList();
        this.f886e0 = new ArrayList();
        this.f887f0 = new int[2];
        this.f888g0 = new MenuHostHelper(new o3(this, 1));
        this.h0 = new ArrayList();
        this.f891j0 = new ha.l(this);
        this.f901t0 = new a3.h(7, this);
        Context context2 = getContext();
        int[] iArr = h.a.f9467y;
        e4.m b02 = e4.m.b0(context2, attributeSet, iArr, R.attr.toolbarStyle);
        androidx.core.view.s0.o(this, context, iArr, attributeSet, (TypedArray) b02.f7964i, R.attr.toolbarStyle, 0);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        this.I = typedArray.getResourceId(28, 0);
        this.J = typedArray.getResourceId(19, 0);
        this.T = typedArray.getInteger(0, 8388627);
        this.K = typedArray.getInteger(2, 48);
        int dimensionPixelOffset = typedArray.getDimensionPixelOffset(22, 0);
        dimensionPixelOffset = typedArray.hasValue(27) ? typedArray.getDimensionPixelOffset(27, dimensionPixelOffset) : dimensionPixelOffset;
        this.P = dimensionPixelOffset;
        this.O = dimensionPixelOffset;
        this.N = dimensionPixelOffset;
        this.M = dimensionPixelOffset;
        int dimensionPixelOffset2 = typedArray.getDimensionPixelOffset(25, -1);
        if (dimensionPixelOffset2 >= 0) {
            this.M = dimensionPixelOffset2;
        }
        int dimensionPixelOffset3 = typedArray.getDimensionPixelOffset(24, -1);
        if (dimensionPixelOffset3 >= 0) {
            this.N = dimensionPixelOffset3;
        }
        int dimensionPixelOffset4 = typedArray.getDimensionPixelOffset(26, -1);
        if (dimensionPixelOffset4 >= 0) {
            this.O = dimensionPixelOffset4;
        }
        int dimensionPixelOffset5 = typedArray.getDimensionPixelOffset(23, -1);
        if (dimensionPixelOffset5 >= 0) {
            this.P = dimensionPixelOffset5;
        }
        this.L = typedArray.getDimensionPixelSize(13, -1);
        int dimensionPixelOffset6 = typedArray.getDimensionPixelOffset(9, Integer.MIN_VALUE);
        int dimensionPixelOffset7 = typedArray.getDimensionPixelOffset(5, Integer.MIN_VALUE);
        int dimensionPixelSize = typedArray.getDimensionPixelSize(7, 0);
        int dimensionPixelSize2 = typedArray.getDimensionPixelSize(8, 0);
        d();
        p2 p2Var = this.Q;
        p2Var.f1078h = false;
        if (dimensionPixelSize != Integer.MIN_VALUE) {
            p2Var.f1075e = dimensionPixelSize;
            p2Var.a = dimensionPixelSize;
        }
        if (dimensionPixelSize2 != Integer.MIN_VALUE) {
            p2Var.f1076f = dimensionPixelSize2;
            p2Var.f1072b = dimensionPixelSize2;
        }
        if (dimensionPixelOffset6 != Integer.MIN_VALUE || dimensionPixelOffset7 != Integer.MIN_VALUE) {
            p2Var.a(dimensionPixelOffset6, dimensionPixelOffset7);
        }
        this.R = typedArray.getDimensionPixelOffset(10, Integer.MIN_VALUE);
        this.S = typedArray.getDimensionPixelOffset(6, Integer.MIN_VALUE);
        this.f904x = b02.U(4);
        this.f905y = typedArray.getText(3);
        CharSequence text = typedArray.getText(21);
        if (!TextUtils.isEmpty(text)) {
            setTitle(text);
        }
        CharSequence text2 = typedArray.getText(18);
        if (!TextUtils.isEmpty(text2)) {
            setSubtitle(text2);
        }
        this.G = getContext();
        setPopupTheme(typedArray.getResourceId(17, 0));
        Drawable U = b02.U(16);
        if (U != null) {
            setNavigationIcon(U);
        }
        CharSequence text3 = typedArray.getText(15);
        if (!TextUtils.isEmpty(text3)) {
            setNavigationContentDescription(text3);
        }
        Drawable U2 = b02.U(11);
        if (U2 != null) {
            setLogo(U2);
        }
        CharSequence text4 = typedArray.getText(12);
        if (!TextUtils.isEmpty(text4)) {
            setLogoDescription(text4);
        }
        if (typedArray.hasValue(29)) {
            setTitleTextColor(b02.T(29));
        }
        if (typedArray.hasValue(20)) {
            setSubtitleTextColor(b02.T(20));
        }
        if (typedArray.hasValue(14)) {
            getMenuInflater().inflate(typedArray.getResourceId(14, 0), getMenu());
        }
        b02.e0();
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        Context context = getContext();
        s3 s3Var = new s3(context, attributeSet);
        s3Var.a = 0;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.f9446b);
        s3Var.a = obtainStyledAttributes.getInt(0, 0);
        obtainStyledAttributes.recycle();
        s3Var.f1103b = 0;
        return s3Var;
    }

    public void setCollapseContentDescription(CharSequence charSequence) {
        if (!TextUtils.isEmpty(charSequence)) {
            c();
        }
        y yVar = this.E;
        if (yVar != null) {
            yVar.setContentDescription(charSequence);
        }
    }

    public void setCollapseIcon(Drawable drawable) {
        if (drawable != null) {
            c();
            this.E.setImageDrawable(drawable);
        } else {
            y yVar = this.E;
            if (yVar != null) {
                yVar.setImageDrawable(this.f904x);
            }
        }
    }

    public void setLogo(Drawable drawable) {
        if (drawable != null) {
            if (this.f903w == null) {
                this.f903w = new z(getContext());
            }
            if (!n(this.f903w)) {
                b(this.f903w, true);
            }
        } else {
            z zVar = this.f903w;
            if (zVar != null && n(zVar)) {
                removeView(this.f903w);
                this.f886e0.remove(this.f903w);
            }
        }
        z zVar2 = this.f903w;
        if (zVar2 != null) {
            zVar2.setImageDrawable(drawable);
        }
    }

    public void setLogoDescription(CharSequence charSequence) {
        if (!TextUtils.isEmpty(charSequence) && this.f903w == null) {
            this.f903w = new z(getContext());
        }
        z zVar = this.f903w;
        if (zVar != null) {
            zVar.setContentDescription(charSequence);
        }
    }

    public void setNavigationContentDescription(CharSequence charSequence) {
        if (!TextUtils.isEmpty(charSequence)) {
            g();
        }
        y yVar = this.f902v;
        if (yVar != null) {
            yVar.setContentDescription(charSequence);
            nt.a.I(this.f902v, charSequence);
        }
    }

    public void setNavigationIcon(Drawable drawable) {
        if (drawable != null) {
            g();
            if (!n(this.f902v)) {
                b(this.f902v, true);
            }
        } else {
            y yVar = this.f902v;
            if (yVar != null && n(yVar)) {
                removeView(this.f902v);
                this.f886e0.remove(this.f902v);
            }
        }
        y yVar2 = this.f902v;
        if (yVar2 != null) {
            yVar2.setImageDrawable(drawable);
        }
    }

    public void setSubtitle(CharSequence charSequence) {
        if (TextUtils.isEmpty(charSequence)) {
            AppCompatTextView appCompatTextView = this.f889i;
            if (appCompatTextView != null && n(appCompatTextView)) {
                removeView(this.f889i);
                this.f886e0.remove(this.f889i);
            }
        } else {
            if (this.f889i == null) {
                Context context = getContext();
                AppCompatTextView appCompatTextView2 = new AppCompatTextView(context, null);
                this.f889i = appCompatTextView2;
                appCompatTextView2.setSingleLine();
                this.f889i.setEllipsize(TextUtils.TruncateAt.END);
                int i5 = this.J;
                if (i5 != 0) {
                    this.f889i.setTextAppearance(context, i5);
                }
                ColorStateList colorStateList = this.a0;
                if (colorStateList != null) {
                    this.f889i.setTextColor(colorStateList);
                }
            }
            if (!n(this.f889i)) {
                b(this.f889i, true);
            }
        }
        AppCompatTextView appCompatTextView3 = this.f889i;
        if (appCompatTextView3 != null) {
            appCompatTextView3.setText(charSequence);
        }
        this.V = charSequence;
    }

    public void setSubtitleTextColor(@NonNull ColorStateList colorStateList) {
        this.a0 = colorStateList;
        AppCompatTextView appCompatTextView = this.f889i;
        if (appCompatTextView != null) {
            appCompatTextView.setTextColor(colorStateList);
        }
    }

    public void setTitle(CharSequence charSequence) {
        if (TextUtils.isEmpty(charSequence)) {
            AppCompatTextView appCompatTextView = this.f885e;
            if (appCompatTextView != null && n(appCompatTextView)) {
                removeView(this.f885e);
                this.f886e0.remove(this.f885e);
            }
        } else {
            if (this.f885e == null) {
                Context context = getContext();
                AppCompatTextView appCompatTextView2 = new AppCompatTextView(context, null);
                this.f885e = appCompatTextView2;
                appCompatTextView2.setSingleLine();
                this.f885e.setEllipsize(TextUtils.TruncateAt.END);
                int i5 = this.I;
                if (i5 != 0) {
                    this.f885e.setTextAppearance(context, i5);
                }
                ColorStateList colorStateList = this.W;
                if (colorStateList != null) {
                    this.f885e.setTextColor(colorStateList);
                }
            }
            if (!n(this.f885e)) {
                b(this.f885e, true);
            }
        }
        AppCompatTextView appCompatTextView3 = this.f885e;
        if (appCompatTextView3 != null) {
            appCompatTextView3.setText(charSequence);
        }
        this.U = charSequence;
    }

    public void setTitleTextColor(@NonNull ColorStateList colorStateList) {
        this.W = colorStateList;
        AppCompatTextView appCompatTextView = this.f885e;
        if (appCompatTextView != null) {
            appCompatTextView.setTextColor(colorStateList);
        }
    }
}
