package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.ContextThemeWrapper;
import android.view.KeyEvent;
import android.view.Menu;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import androidx.appcompat.view.menu.ActionMenuItemView;

/* loaded from: classes.dex */
public class ActionMenuView extends y1 implements n.i, n.x {
    public n.j M;
    public Context N;
    public int O;
    public boolean P;
    public n Q;
    public a5.h0 R;
    public n.h S;
    public boolean T;
    public int U;
    public final int V;
    public final int W;
    public q a0;

    public ActionMenuView(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        setBaselineAligned(false);
        float f2 = context.getResources().getDisplayMetrics().density;
        this.V = (int) (56.0f * f2);
        this.W = (int) (f2 * 4.0f);
        this.N = context;
        this.O = 0;
    }

    public static p j() {
        p pVar = new p(-2, -2);
        pVar.a = false;
        ((LinearLayout.LayoutParams) pVar).gravity = 16;
        return pVar;
    }

    public static p k(ViewGroup.LayoutParams layoutParams) {
        p pVar;
        if (layoutParams == null) {
            return j();
        }
        if (layoutParams instanceof p) {
            p pVar2 = (p) layoutParams;
            pVar = new p(pVar2);
            pVar.a = pVar2.a;
        } else {
            pVar = new p(layoutParams);
        }
        if (((LinearLayout.LayoutParams) pVar).gravity <= 0) {
            ((LinearLayout.LayoutParams) pVar).gravity = 16;
        }
        return pVar;
    }

    @Override // n.x
    public final void b(n.j jVar) {
        this.M = jVar;
    }

    @Override // n.i
    public final boolean c(n.l lVar) {
        return this.M.q(lVar, null, 0);
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup
    public final boolean checkLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return layoutParams instanceof p;
    }

    @Override // android.view.View
    public final boolean dispatchPopulateAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        return false;
    }

    @Override // androidx.appcompat.widget.y1
    /* renamed from: f */
    public final /* bridge */ /* synthetic */ x1 generateDefaultLayoutParams() {
        return j();
    }

    @Override // androidx.appcompat.widget.y1
    /* renamed from: g */
    public final x1 generateLayoutParams(AttributeSet attributeSet) {
        return new p(getContext(), attributeSet);
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup
    public final /* bridge */ /* synthetic */ ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return j();
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup
    public final /* bridge */ /* synthetic */ ViewGroup.LayoutParams generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return k(layoutParams);
    }

    public Menu getMenu() {
        if (this.M == null) {
            Context context = getContext();
            n.j jVar = new n.j(context);
            this.M = jVar;
            jVar.f14650e = new gj.c(3, this);
            n nVar = new n(context);
            this.Q = nVar;
            nVar.J = true;
            nVar.K = true;
            n.u uVar = this.R;
            if (uVar == null) {
                uVar = new lh.f(1);
            }
            nVar.f1043w = uVar;
            this.M.b(nVar, this.N);
            n nVar2 = this.Q;
            nVar2.E = this;
            this.M = nVar2.f1041i;
        }
        return this.M;
    }

    public Drawable getOverflowIcon() {
        getMenu();
        n nVar = this.Q;
        l lVar = nVar.G;
        if (lVar != null) {
            return lVar.getDrawable();
        }
        if (nVar.I) {
            return nVar.H;
        }
        return null;
    }

    public int getPopupTheme() {
        return this.O;
    }

    public int getWindowAnimations() {
        return 0;
    }

    @Override // androidx.appcompat.widget.y1
    /* renamed from: h */
    public final /* bridge */ /* synthetic */ x1 generateLayoutParams(ViewGroup.LayoutParams layoutParams) {
        return k(layoutParams);
    }

    public final boolean l(int i5) {
        boolean z5 = false;
        if (i5 == 0) {
            return false;
        }
        KeyEvent.Callback childAt = getChildAt(i5 - 1);
        KeyEvent.Callback childAt2 = getChildAt(i5);
        if (i5 < getChildCount() && (childAt instanceof o)) {
            z5 = ((o) childAt).b();
        }
        return (i5 <= 0 || !(childAt2 instanceof o)) ? z5 : ((o) childAt2).c() | z5;
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        n nVar = this.Q;
        if (nVar != null) {
            nVar.a(false);
            if (this.Q.m()) {
                this.Q.l();
                this.Q.n();
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        n nVar = this.Q;
        if (nVar != null) {
            nVar.l();
            h hVar = nVar.R;
            if (hVar == null || !hVar.b()) {
                return;
            }
            hVar.f14709i.dismiss();
        }
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int width;
        int i12;
        if (!this.T) {
            super.onLayout(z5, i5, i6, i10, i11);
            return;
        }
        int childCount = getChildCount();
        int i13 = (i11 - i6) / 2;
        int dividerWidth = getDividerWidth();
        int i14 = i10 - i5;
        int paddingRight = (i14 - getPaddingRight()) - getPaddingLeft();
        boolean z6 = f4.a;
        boolean z7 = getLayoutDirection() == 1;
        int i15 = 0;
        int i16 = 0;
        for (int i17 = 0; i17 < childCount; i17++) {
            View childAt = getChildAt(i17);
            if (childAt.getVisibility() != 8) {
                p pVar = (p) childAt.getLayoutParams();
                if (pVar.a) {
                    int measuredWidth = childAt.getMeasuredWidth();
                    if (l(i17)) {
                        measuredWidth += dividerWidth;
                    }
                    int measuredHeight = childAt.getMeasuredHeight();
                    if (z7) {
                        i12 = getPaddingLeft() + ((LinearLayout.LayoutParams) pVar).leftMargin;
                        width = i12 + measuredWidth;
                    } else {
                        width = (getWidth() - getPaddingRight()) - ((LinearLayout.LayoutParams) pVar).rightMargin;
                        i12 = width - measuredWidth;
                    }
                    int i18 = i13 - (measuredHeight / 2);
                    childAt.layout(i12, i18, width, measuredHeight + i18);
                    paddingRight -= measuredWidth;
                    i15 = 1;
                } else {
                    paddingRight -= (childAt.getMeasuredWidth() + ((LinearLayout.LayoutParams) pVar).leftMargin) + ((LinearLayout.LayoutParams) pVar).rightMargin;
                    l(i17);
                    i16++;
                }
            }
        }
        if (childCount == 1 && i15 == 0) {
            View childAt2 = getChildAt(0);
            int measuredWidth2 = childAt2.getMeasuredWidth();
            int measuredHeight2 = childAt2.getMeasuredHeight();
            int i19 = (i14 / 2) - (measuredWidth2 / 2);
            int i20 = i13 - (measuredHeight2 / 2);
            childAt2.layout(i19, i20, measuredWidth2 + i19, measuredHeight2 + i20);
            return;
        }
        int i21 = i16 - (i15 ^ 1);
        int max = Math.max(0, i21 > 0 ? paddingRight / i21 : 0);
        if (z7) {
            int width2 = getWidth() - getPaddingRight();
            for (int i22 = 0; i22 < childCount; i22++) {
                View childAt3 = getChildAt(i22);
                p pVar2 = (p) childAt3.getLayoutParams();
                if (childAt3.getVisibility() != 8 && !pVar2.a) {
                    int i23 = width2 - ((LinearLayout.LayoutParams) pVar2).rightMargin;
                    int measuredWidth3 = childAt3.getMeasuredWidth();
                    int measuredHeight3 = childAt3.getMeasuredHeight();
                    int i24 = i13 - (measuredHeight3 / 2);
                    childAt3.layout(i23 - measuredWidth3, i24, i23, measuredHeight3 + i24);
                    width2 = i23 - ((measuredWidth3 + ((LinearLayout.LayoutParams) pVar2).leftMargin) + max);
                }
            }
            return;
        }
        int paddingLeft = getPaddingLeft();
        for (int i25 = 0; i25 < childCount; i25++) {
            View childAt4 = getChildAt(i25);
            p pVar3 = (p) childAt4.getLayoutParams();
            if (childAt4.getVisibility() != 8 && !pVar3.a) {
                int i26 = paddingLeft + ((LinearLayout.LayoutParams) pVar3).leftMargin;
                int measuredWidth4 = childAt4.getMeasuredWidth();
                int measuredHeight4 = childAt4.getMeasuredHeight();
                int i27 = i13 - (measuredHeight4 / 2);
                childAt4.layout(i26, i27, i26 + measuredWidth4, measuredHeight4 + i27);
                paddingLeft = measuredWidth4 + ((LinearLayout.LayoutParams) pVar3).rightMargin + max + i26;
            }
        }
    }

    /* JADX WARN: Type inference failed for: r11v15 */
    /* JADX WARN: Type inference failed for: r11v16, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r11v18 */
    /* JADX WARN: Type inference failed for: r11v41 */
    @Override // androidx.appcompat.widget.y1, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        int i11;
        ?? r11;
        int i12;
        int i13;
        n.j jVar;
        boolean z5 = this.T;
        boolean z6 = View.MeasureSpec.getMode(i5) == 1073741824;
        this.T = z6;
        if (z5 != z6) {
            this.U = 0;
        }
        int size = View.MeasureSpec.getSize(i5);
        if (this.T && (jVar = this.M) != null && size != this.U) {
            this.U = size;
            jVar.p(true);
        }
        int childCount = getChildCount();
        if (!this.T || childCount <= 0) {
            for (int i14 = 0; i14 < childCount; i14++) {
                p pVar = (p) getChildAt(i14).getLayoutParams();
                ((LinearLayout.LayoutParams) pVar).rightMargin = 0;
                ((LinearLayout.LayoutParams) pVar).leftMargin = 0;
            }
            super.onMeasure(i5, i6);
            return;
        }
        int mode = View.MeasureSpec.getMode(i6);
        int size2 = View.MeasureSpec.getSize(i5);
        int size3 = View.MeasureSpec.getSize(i6);
        int paddingRight = getPaddingRight() + getPaddingLeft();
        int paddingBottom = getPaddingBottom() + getPaddingTop();
        int childMeasureSpec = ViewGroup.getChildMeasureSpec(i6, paddingBottom, -2);
        int i15 = size2 - paddingRight;
        int i16 = this.V;
        int i17 = i15 / i16;
        int i18 = i15 % i16;
        if (i17 == 0) {
            setMeasuredDimension(i15, 0);
            return;
        }
        int i19 = (i18 / i17) + i16;
        int childCount2 = getChildCount();
        int i20 = 0;
        int i21 = 0;
        int i22 = 0;
        int i23 = 0;
        boolean z7 = false;
        int i24 = 0;
        long j = 0;
        while (true) {
            i10 = this.W;
            if (i23 >= childCount2) {
                break;
            }
            View childAt = getChildAt(i23);
            int i25 = size3;
            int i26 = paddingBottom;
            if (childAt.getVisibility() == 8) {
                i12 = i19;
            } else {
                boolean z8 = childAt instanceof ActionMenuItemView;
                i21++;
                if (z8) {
                    childAt.setPadding(i10, 0, i10, 0);
                }
                p pVar2 = (p) childAt.getLayoutParams();
                pVar2.f1065f = false;
                pVar2.f1062c = 0;
                pVar2.f1061b = 0;
                pVar2.f1063d = false;
                ((LinearLayout.LayoutParams) pVar2).leftMargin = 0;
                ((LinearLayout.LayoutParams) pVar2).rightMargin = 0;
                pVar2.f1064e = z8 && !TextUtils.isEmpty(((ActionMenuItemView) childAt).getText());
                int i27 = pVar2.a ? 1 : i17;
                p pVar3 = (p) childAt.getLayoutParams();
                int i28 = i17;
                i12 = i19;
                int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(View.MeasureSpec.getSize(childMeasureSpec) - i26, View.MeasureSpec.getMode(childMeasureSpec));
                ActionMenuItemView actionMenuItemView = z8 ? (ActionMenuItemView) childAt : null;
                boolean z10 = (actionMenuItemView == null || TextUtils.isEmpty(actionMenuItemView.getText())) ? false : true;
                boolean z11 = z10;
                if (i27 <= 0 || (z10 && i27 < 2)) {
                    i13 = 0;
                } else {
                    childAt.measure(View.MeasureSpec.makeMeasureSpec(i12 * i27, Integer.MIN_VALUE), makeMeasureSpec);
                    int measuredWidth = childAt.getMeasuredWidth();
                    i13 = measuredWidth / i12;
                    if (measuredWidth % i12 != 0) {
                        i13++;
                    }
                    if (z11 && i13 < 2) {
                        i13 = 2;
                    }
                }
                pVar3.f1063d = !pVar3.a && z11;
                pVar3.f1061b = i13;
                childAt.measure(View.MeasureSpec.makeMeasureSpec(i13 * i12, 1073741824), makeMeasureSpec);
                i22 = Math.max(i22, i13);
                if (pVar2.f1063d) {
                    i24++;
                }
                if (pVar2.a) {
                    z7 = true;
                }
                i17 = i28 - i13;
                i20 = Math.max(i20, childAt.getMeasuredHeight());
                if (i13 == 1) {
                    j |= 1 << i23;
                }
            }
            i23++;
            size3 = i25;
            paddingBottom = i26;
            i19 = i12;
        }
        int i29 = size3;
        int i30 = i17;
        int i31 = i19;
        boolean z12 = z7 && i21 == 2;
        int i32 = i30;
        boolean z13 = false;
        while (i24 > 0 && i32 > 0) {
            int i33 = Integer.MAX_VALUE;
            long j5 = 0;
            int i34 = 0;
            int i35 = 0;
            while (i35 < childCount2) {
                int i36 = i20;
                p pVar4 = (p) getChildAt(i35).getLayoutParams();
                boolean z14 = z12;
                if (pVar4.f1063d) {
                    int i37 = pVar4.f1061b;
                    if (i37 < i33) {
                        j5 = 1 << i35;
                        i33 = i37;
                        i34 = 1;
                    } else if (i37 == i33) {
                        j5 |= 1 << i35;
                        i34++;
                    }
                }
                i35++;
                z12 = z14;
                i20 = i36;
            }
            i11 = i20;
            boolean z15 = z12;
            j |= j5;
            if (i34 > i32) {
                break;
            }
            int i38 = i33 + 1;
            int i39 = 0;
            while (i39 < childCount2) {
                View childAt2 = getChildAt(i39);
                p pVar5 = (p) childAt2.getLayoutParams();
                boolean z16 = z7;
                long j7 = 1 << i39;
                if ((j5 & j7) != 0) {
                    if (z15 && pVar5.f1064e) {
                        r11 = 1;
                        r11 = 1;
                        if (i32 == 1) {
                            childAt2.setPadding(i10 + i31, 0, i10, 0);
                        }
                    } else {
                        r11 = 1;
                    }
                    pVar5.f1061b += r11;
                    pVar5.f1065f = r11;
                    i32--;
                } else if (pVar5.f1061b == i38) {
                    j |= j7;
                }
                i39++;
                z7 = z16;
            }
            z12 = z15;
            i20 = i11;
            z13 = true;
        }
        i11 = i20;
        boolean z17 = !z7 && i21 == 1;
        if (i32 > 0 && j != 0 && (i32 < i21 - 1 || z17 || i22 > 1)) {
            float bitCount = Long.bitCount(j);
            if (!z17) {
                if ((j & 1) != 0 && !((p) getChildAt(0).getLayoutParams()).f1064e) {
                    bitCount -= 0.5f;
                }
                int i40 = childCount2 - 1;
                if ((j & (1 << i40)) != 0 && !((p) getChildAt(i40).getLayoutParams()).f1064e) {
                    bitCount -= 0.5f;
                }
            }
            int i41 = bitCount > 0.0f ? (int) ((i32 * i31) / bitCount) : 0;
            boolean z18 = z13;
            for (int i42 = 0; i42 < childCount2; i42++) {
                if ((j & (1 << i42)) != 0) {
                    View childAt3 = getChildAt(i42);
                    p pVar6 = (p) childAt3.getLayoutParams();
                    if (childAt3 instanceof ActionMenuItemView) {
                        pVar6.f1062c = i41;
                        pVar6.f1065f = true;
                        if (i42 == 0 && !pVar6.f1064e) {
                            ((LinearLayout.LayoutParams) pVar6).leftMargin = (-i41) / 2;
                        }
                        z18 = true;
                    } else if (pVar6.a) {
                        pVar6.f1062c = i41;
                        pVar6.f1065f = true;
                        ((LinearLayout.LayoutParams) pVar6).rightMargin = (-i41) / 2;
                        z18 = true;
                    } else {
                        if (i42 != 0) {
                            ((LinearLayout.LayoutParams) pVar6).leftMargin = i41 / 2;
                        }
                        if (i42 != childCount2 - 1) {
                            ((LinearLayout.LayoutParams) pVar6).rightMargin = i41 / 2;
                        }
                    }
                }
            }
            z13 = z18;
        }
        if (z13) {
            for (int i43 = 0; i43 < childCount2; i43++) {
                View childAt4 = getChildAt(i43);
                p pVar7 = (p) childAt4.getLayoutParams();
                if (pVar7.f1065f) {
                    childAt4.measure(View.MeasureSpec.makeMeasureSpec((pVar7.f1061b * i31) + pVar7.f1062c, 1073741824), childMeasureSpec);
                }
            }
        }
        setMeasuredDimension(i15, mode != 1073741824 ? i11 : i29);
    }

    public void setExpandedActionViewsExclusive(boolean z5) {
        this.Q.O = z5;
    }

    public void setOnMenuItemClickListener(q qVar) {
        this.a0 = qVar;
    }

    public void setOverflowIcon(Drawable drawable) {
        getMenu();
        n nVar = this.Q;
        l lVar = nVar.G;
        if (lVar != null) {
            lVar.setImageDrawable(drawable);
        } else {
            nVar.I = true;
            nVar.H = drawable;
        }
    }

    public void setOverflowReserved(boolean z5) {
        this.P = z5;
    }

    public void setPopupTheme(int i5) {
        if (this.O != i5) {
            this.O = i5;
            if (i5 == 0) {
                this.N = getContext();
            } else {
                this.N = new ContextThemeWrapper(getContext(), i5);
            }
        }
    }

    public void setPresenter(n nVar) {
        this.Q = nVar;
        nVar.E = this;
        this.M = nVar.f1041i;
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new p(getContext(), attributeSet);
    }
}
