package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.appcompat.view.ActionMode;
import com.discord.R;

/* loaded from: classes.dex */
public class ActionBarContextView extends ViewGroup {
    public boolean E;
    public CharSequence F;
    public CharSequence G;
    public View H;
    public View I;
    public View J;
    public LinearLayout K;
    public TextView L;
    public TextView M;
    public final int N;
    public final int O;
    public boolean P;
    public final int Q;

    /* renamed from: d, reason: collision with root package name */
    public final a5.f f829d;

    /* renamed from: e, reason: collision with root package name */
    public final Context f830e;

    /* renamed from: i, reason: collision with root package name */
    public ActionMenuView f831i;

    /* renamed from: v, reason: collision with root package name */
    public n f832v;

    /* renamed from: w, reason: collision with root package name */
    public int f833w;

    /* renamed from: x, reason: collision with root package name */
    public androidx.core.view.a1 f834x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f835y;

    public ActionBarContextView(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.actionModeStyle);
        int resourceId;
        a5.f fVar = new a5.f();
        fVar.f154c = this;
        fVar.a = false;
        this.f829d = fVar;
        TypedValue typedValue = new TypedValue();
        if (!context.getTheme().resolveAttribute(R.attr.actionBarPopupTheme, typedValue, true) || typedValue.resourceId == 0) {
            this.f830e = context;
        } else {
            this.f830e = new ContextThemeWrapper(context, typedValue.resourceId);
        }
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, h.a.f9448d, R.attr.actionModeStyle, 0);
        setBackground((!obtainStyledAttributes.hasValue(0) || (resourceId = obtainStyledAttributes.getResourceId(0, 0)) == 0) ? obtainStyledAttributes.getDrawable(0) : ys.d.J(context, resourceId));
        this.N = obtainStyledAttributes.getResourceId(5, 0);
        this.O = obtainStyledAttributes.getResourceId(4, 0);
        this.f833w = obtainStyledAttributes.getLayoutDimension(3, 0);
        this.Q = obtainStyledAttributes.getResourceId(2, R.layout.abc_action_mode_close_item_material);
        obtainStyledAttributes.recycle();
    }

    public static int f(View view, int i5, int i6) {
        view.measure(View.MeasureSpec.makeMeasureSpec(i5, Integer.MIN_VALUE), i6);
        return Math.max(0, i5 - view.getMeasuredWidth());
    }

    public static int g(View view, int i5, int i6, boolean z5, int i10) {
        int measuredWidth = view.getMeasuredWidth();
        int measuredHeight = view.getMeasuredHeight();
        int i11 = ((i10 - measuredHeight) / 2) + i6;
        if (z5) {
            view.layout(i5 - measuredWidth, i11, i5, measuredHeight + i11);
        } else {
            view.layout(i5, i11, i5 + measuredWidth, measuredHeight + i11);
        }
        return z5 ? -measuredWidth : measuredWidth;
    }

    public final void c(ActionMode actionMode) {
        View view = this.H;
        if (view == null) {
            View inflate = LayoutInflater.from(getContext()).inflate(this.Q, (ViewGroup) this, false);
            this.H = inflate;
            addView(inflate);
        } else if (view.getParent() == null) {
            addView(this.H);
        }
        View findViewById = this.H.findViewById(R.id.action_mode_close_button);
        this.I = findViewById;
        findViewById.setOnClickListener(new b(0, actionMode));
        n.j c6 = actionMode.c();
        n nVar = this.f832v;
        if (nVar != null) {
            nVar.l();
            h hVar = nVar.R;
            if (hVar != null && hVar.b()) {
                hVar.f14709i.dismiss();
            }
        }
        n nVar2 = new n(getContext());
        this.f832v = nVar2;
        nVar2.J = true;
        nVar2.K = true;
        ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-2, -1);
        c6.b(this.f832v, this.f830e);
        n nVar3 = this.f832v;
        n.x xVar = nVar3.E;
        if (xVar == null) {
            n.x xVar2 = (n.x) nVar3.f1042v.inflate(nVar3.f1044x, (ViewGroup) this, false);
            nVar3.E = xVar2;
            xVar2.b(nVar3.f1041i);
            nVar3.a(true);
        }
        n.x xVar3 = nVar3.E;
        if (xVar != xVar3) {
            ((ActionMenuView) xVar3).setPresenter(nVar3);
        }
        ActionMenuView actionMenuView = (ActionMenuView) xVar3;
        this.f831i = actionMenuView;
        actionMenuView.setBackground(null);
        addView(this.f831i, layoutParams);
    }

    public final void d() {
        if (this.K == null) {
            LayoutInflater.from(getContext()).inflate(R.layout.abc_action_bar_title_item, this);
            LinearLayout linearLayout = (LinearLayout) getChildAt(getChildCount() - 1);
            this.K = linearLayout;
            this.L = (TextView) linearLayout.findViewById(R.id.action_bar_title);
            this.M = (TextView) this.K.findViewById(R.id.action_bar_subtitle);
            int i5 = this.N;
            if (i5 != 0) {
                this.L.setTextAppearance(getContext(), i5);
            }
            int i6 = this.O;
            if (i6 != 0) {
                this.M.setTextAppearance(getContext(), i6);
            }
        }
        this.L.setText(this.F);
        this.M.setText(this.G);
        boolean isEmpty = TextUtils.isEmpty(this.F);
        boolean isEmpty2 = TextUtils.isEmpty(this.G);
        this.M.setVisibility(!isEmpty2 ? 0 : 8);
        this.K.setVisibility((isEmpty && isEmpty2) ? 8 : 0);
        if (this.K.getParent() == null) {
            addView(this.K);
        }
    }

    public final void e() {
        removeAllViews();
        this.J = null;
        this.f831i = null;
        this.f832v = null;
        View view = this.I;
        if (view != null) {
            view.setOnClickListener(null);
        }
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateDefaultLayoutParams() {
        return new ViewGroup.MarginLayoutParams(-1, -2);
    }

    @Override // android.view.ViewGroup
    public final ViewGroup.LayoutParams generateLayoutParams(AttributeSet attributeSet) {
        return new ViewGroup.MarginLayoutParams(getContext(), attributeSet);
    }

    public int getAnimatedVisibility() {
        return this.f834x != null ? this.f829d.f153b : getVisibility();
    }

    public int getContentHeight() {
        return this.f833w;
    }

    public CharSequence getSubtitle() {
        return this.G;
    }

    public CharSequence getTitle() {
        return this.F;
    }

    @Override // android.view.View
    /* renamed from: h, reason: merged with bridge method [inline-methods] */
    public final void setVisibility(int i5) {
        if (i5 != getVisibility()) {
            androidx.core.view.a1 a1Var = this.f834x;
            if (a1Var != null) {
                a1Var.b();
            }
            super.setVisibility(i5);
        }
    }

    public final androidx.core.view.a1 i(int i5, long j) {
        androidx.core.view.a1 a1Var = this.f834x;
        if (a1Var != null) {
            a1Var.b();
        }
        a5.f fVar = this.f829d;
        if (i5 != 0) {
            androidx.core.view.a1 b10 = androidx.core.view.s0.b(this);
            b10.a(0.0f);
            b10.c(j);
            ((ActionBarContextView) fVar.f154c).f834x = b10;
            fVar.f153b = i5;
            b10.d(fVar);
            return b10;
        }
        if (getVisibility() != 0) {
            setAlpha(0.0f);
        }
        androidx.core.view.a1 b11 = androidx.core.view.s0.b(this);
        b11.a(1.0f);
        b11.c(j);
        ((ActionBarContextView) fVar.f154c).f834x = b11;
        fVar.f153b = i5;
        b11.d(fVar);
        return b11;
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        TypedArray obtainStyledAttributes = getContext().obtainStyledAttributes(null, h.a.a, R.attr.actionBarStyle, 0);
        setContentHeight(obtainStyledAttributes.getLayoutDimension(13, 0));
        obtainStyledAttributes.recycle();
        n nVar = this.f832v;
        if (nVar != null) {
            Configuration configuration2 = nVar.f1040e.getResources().getConfiguration();
            int i5 = configuration2.screenWidthDp;
            int i6 = configuration2.screenHeightDp;
            nVar.N = (configuration2.smallestScreenWidthDp > 600 || i5 > 600 || (i5 > 960 && i6 > 720) || (i5 > 720 && i6 > 960)) ? 5 : (i5 >= 500 || (i5 > 640 && i6 > 480) || (i5 > 480 && i6 > 640)) ? 4 : i5 >= 360 ? 3 : 2;
            n.j jVar = nVar.f1041i;
            if (jVar != null) {
                jVar.p(true);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        n nVar = this.f832v;
        if (nVar != null) {
            nVar.l();
            h hVar = this.f832v.R;
            if (hVar == null || !hVar.b()) {
                return;
            }
            hVar.f14709i.dismiss();
        }
    }

    @Override // android.view.View
    public final boolean onHoverEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 9) {
            this.E = false;
        }
        if (!this.E) {
            boolean onHoverEvent = super.onHoverEvent(motionEvent);
            if (actionMasked == 9 && !onHoverEvent) {
                this.E = true;
            }
        }
        if (actionMasked != 10 && actionMasked != 3) {
            return true;
        }
        this.E = false;
        return true;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        boolean z6 = f4.a;
        boolean z7 = getLayoutDirection() == 1;
        int paddingRight = z7 ? (i10 - i5) - getPaddingRight() : getPaddingLeft();
        int paddingTop = getPaddingTop();
        int paddingTop2 = ((i11 - i6) - getPaddingTop()) - getPaddingBottom();
        View view = this.H;
        if (view != null && view.getVisibility() != 8) {
            ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) this.H.getLayoutParams();
            int i12 = z7 ? marginLayoutParams.rightMargin : marginLayoutParams.leftMargin;
            int i13 = z7 ? marginLayoutParams.leftMargin : marginLayoutParams.rightMargin;
            int i14 = z7 ? paddingRight - i12 : paddingRight + i12;
            int g6 = g(this.H, i14, paddingTop, z7, paddingTop2) + i14;
            paddingRight = z7 ? g6 - i13 : g6 + i13;
        }
        LinearLayout linearLayout = this.K;
        if (linearLayout != null && this.J == null && linearLayout.getVisibility() != 8) {
            paddingRight += g(this.K, paddingRight, paddingTop, z7, paddingTop2);
        }
        View view2 = this.J;
        if (view2 != null) {
            g(view2, paddingRight, paddingTop, z7, paddingTop2);
        }
        int paddingLeft = z7 ? getPaddingLeft() : (i10 - i5) - getPaddingRight();
        ActionMenuView actionMenuView = this.f831i;
        if (actionMenuView != null) {
            g(actionMenuView, paddingLeft, paddingTop, !z7, paddingTop2);
        }
    }

    @Override // android.view.View
    public final void onMeasure(int i5, int i6) {
        if (View.MeasureSpec.getMode(i5) != 1073741824) {
            throw new IllegalStateException(getClass().getSimpleName().concat(" can only be used with android:layout_width=\"match_parent\" (or fill_parent)"));
        }
        if (View.MeasureSpec.getMode(i6) == 0) {
            throw new IllegalStateException(getClass().getSimpleName().concat(" can only be used with android:layout_height=\"wrap_content\""));
        }
        int size = View.MeasureSpec.getSize(i5);
        int i10 = this.f833w;
        if (i10 <= 0) {
            i10 = View.MeasureSpec.getSize(i6);
        }
        int paddingBottom = getPaddingBottom() + getPaddingTop();
        int paddingLeft = (size - getPaddingLeft()) - getPaddingRight();
        int i11 = i10 - paddingBottom;
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(i11, Integer.MIN_VALUE);
        View view = this.H;
        if (view != null) {
            int f2 = f(view, paddingLeft, makeMeasureSpec);
            ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) this.H.getLayoutParams();
            paddingLeft = f2 - (marginLayoutParams.leftMargin + marginLayoutParams.rightMargin);
        }
        ActionMenuView actionMenuView = this.f831i;
        if (actionMenuView != null && actionMenuView.getParent() == this) {
            paddingLeft = f(this.f831i, paddingLeft, makeMeasureSpec);
        }
        LinearLayout linearLayout = this.K;
        if (linearLayout != null && this.J == null) {
            if (this.P) {
                this.K.measure(View.MeasureSpec.makeMeasureSpec(0, 0), makeMeasureSpec);
                int measuredWidth = this.K.getMeasuredWidth();
                boolean z5 = measuredWidth <= paddingLeft;
                if (z5) {
                    paddingLeft -= measuredWidth;
                }
                this.K.setVisibility(z5 ? 0 : 8);
            } else {
                paddingLeft = f(linearLayout, paddingLeft, makeMeasureSpec);
            }
        }
        View view2 = this.J;
        if (view2 != null) {
            ViewGroup.LayoutParams layoutParams = view2.getLayoutParams();
            int i12 = layoutParams.width;
            int i13 = i12 != -2 ? 1073741824 : Integer.MIN_VALUE;
            if (i12 >= 0) {
                paddingLeft = Math.min(i12, paddingLeft);
            }
            int i14 = layoutParams.height;
            int i15 = i14 == -2 ? Integer.MIN_VALUE : 1073741824;
            if (i14 >= 0) {
                i11 = Math.min(i14, i11);
            }
            this.J.measure(View.MeasureSpec.makeMeasureSpec(paddingLeft, i13), View.MeasureSpec.makeMeasureSpec(i11, i15));
        }
        if (this.f833w > 0) {
            setMeasuredDimension(size, i10);
            return;
        }
        int childCount = getChildCount();
        int i16 = 0;
        for (int i17 = 0; i17 < childCount; i17++) {
            int measuredHeight = getChildAt(i17).getMeasuredHeight() + paddingBottom;
            if (measuredHeight > i16) {
                i16 = measuredHeight;
            }
        }
        setMeasuredDimension(size, i16);
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            this.f835y = false;
        }
        if (!this.f835y) {
            boolean onTouchEvent = super.onTouchEvent(motionEvent);
            if (actionMasked == 0 && !onTouchEvent) {
                this.f835y = true;
            }
        }
        if (actionMasked != 1 && actionMasked != 3) {
            return true;
        }
        this.f835y = false;
        return true;
    }

    public void setContentHeight(int i5) {
        this.f833w = i5;
    }

    public void setCustomView(View view) {
        LinearLayout linearLayout;
        View view2 = this.J;
        if (view2 != null) {
            removeView(view2);
        }
        this.J = view;
        if (view != null && (linearLayout = this.K) != null) {
            removeView(linearLayout);
            this.K = null;
        }
        if (view != null) {
            addView(view);
        }
        requestLayout();
    }

    public void setSubtitle(CharSequence charSequence) {
        this.G = charSequence;
        d();
    }

    public void setTitle(CharSequence charSequence) {
        this.F = charSequence;
        d();
        androidx.core.view.s0.q(this, charSequence);
    }

    public void setTitleOptional(boolean z5) {
        if (z5 != this.P) {
            requestLayout();
        }
        this.P = z5;
    }

    @Override // android.view.ViewGroup
    public final boolean shouldDelayChildPressedState() {
        return false;
    }
}
