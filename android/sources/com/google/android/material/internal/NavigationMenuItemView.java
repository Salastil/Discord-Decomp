package com.google.android.material.internal;

import a1.n;
import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStub;
import android.widget.CheckedTextView;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.x1;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import ch.a;
import ch.e;
import n.l;
import n.w;

/* loaded from: classes3.dex */
public class NavigationMenuItemView extends e implements w {

    /* renamed from: g0, reason: collision with root package name */
    public static final int[] f6079g0 = {R.attr.state_checked};
    public int S;
    public boolean T;
    public boolean U;
    public final boolean V;
    public final CheckedTextView W;
    public FrameLayout a0;

    /* renamed from: b0, reason: collision with root package name */
    public l f6080b0;

    /* renamed from: c0, reason: collision with root package name */
    public ColorStateList f6081c0;

    /* renamed from: d0, reason: collision with root package name */
    public boolean f6082d0;

    /* renamed from: e0, reason: collision with root package name */
    public Drawable f6083e0;

    /* renamed from: f0, reason: collision with root package name */
    public final a f6084f0;

    public NavigationMenuItemView(@NonNull Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.V = true;
        a aVar = new a(1, this);
        this.f6084f0 = aVar;
        setOrientation(0);
        LayoutInflater.from(context).inflate(com.discord.R.layout.design_navigation_menu_item, (ViewGroup) this, true);
        setIconSize(context.getResources().getDimensionPixelSize(com.discord.R.dimen.design_navigation_icon_size));
        CheckedTextView checkedTextView = (CheckedTextView) findViewById(com.discord.R.id.design_menu_item_text);
        this.W = checkedTextView;
        s0.p(checkedTextView, aVar);
    }

    private void setActionView(View view) {
        if (view != null) {
            if (this.a0 == null) {
                this.a0 = (FrameLayout) ((ViewStub) findViewById(com.discord.R.id.design_menu_item_action_area_stub)).inflate();
            }
            if (view.getParent() != null) {
                ((ViewGroup) view.getParent()).removeView(view);
            }
            this.a0.removeAllViews();
            this.a0.addView(view);
        }
    }

    @Override // n.w
    public final void a(l lVar) {
        StateListDrawable stateListDrawable;
        this.f6080b0 = lVar;
        int i5 = lVar.a;
        if (i5 > 0) {
            setId(i5);
        }
        setVisibility(lVar.isVisible() ? 0 : 8);
        if (getBackground() == null) {
            TypedValue typedValue = new TypedValue();
            if (getContext().getTheme().resolveAttribute(com.discord.R.attr.colorControlHighlight, typedValue, true)) {
                stateListDrawable = new StateListDrawable();
                stateListDrawable.addState(f6079g0, new ColorDrawable(typedValue.data));
                stateListDrawable.addState(ViewGroup.EMPTY_STATE_SET, new ColorDrawable(0));
            } else {
                stateListDrawable = null;
            }
            setBackground(stateListDrawable);
        }
        setCheckable(lVar.isCheckable());
        setChecked(lVar.isChecked());
        setEnabled(lVar.isEnabled());
        setTitle(lVar.f14674e);
        setIcon(lVar.getIcon());
        setActionView(lVar.getActionView());
        setContentDescription(lVar.f14684q);
        nt.a.I(this, lVar.f14685r);
        l lVar2 = this.f6080b0;
        CharSequence charSequence = lVar2.f14674e;
        CheckedTextView checkedTextView = this.W;
        if (charSequence == null && lVar2.getIcon() == null && this.f6080b0.getActionView() != null) {
            checkedTextView.setVisibility(8);
            FrameLayout frameLayout = this.a0;
            if (frameLayout != null) {
                x1 x1Var = (x1) frameLayout.getLayoutParams();
                ((LinearLayout.LayoutParams) x1Var).width = -1;
                this.a0.setLayoutParams(x1Var);
                return;
            }
            return;
        }
        checkedTextView.setVisibility(0);
        FrameLayout frameLayout2 = this.a0;
        if (frameLayout2 != null) {
            x1 x1Var2 = (x1) frameLayout2.getLayoutParams();
            ((LinearLayout.LayoutParams) x1Var2).width = -2;
            this.a0.setLayoutParams(x1Var2);
        }
    }

    @Override // n.w
    public l getItemData() {
        return this.f6080b0;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 1);
        l lVar = this.f6080b0;
        if (lVar != null && lVar.isCheckable() && this.f6080b0.isChecked()) {
            View.mergeDrawableStates(onCreateDrawableState, f6079g0);
        }
        return onCreateDrawableState;
    }

    public void setCheckable(boolean z5) {
        refreshDrawableState();
        if (this.U != z5) {
            this.U = z5;
            this.f6084f0.sendAccessibilityEvent(this.W, RecyclerView.ItemAnimator.FLAG_MOVED);
        }
    }

    public void setChecked(boolean z5) {
        refreshDrawableState();
        CheckedTextView checkedTextView = this.W;
        checkedTextView.setChecked(z5);
        checkedTextView.setTypeface(checkedTextView.getTypeface(), (z5 && this.V) ? 1 : 0);
    }

    public void setHorizontalPadding(int i5) {
        setPadding(i5, getPaddingTop(), i5, getPaddingBottom());
    }

    public void setIcon(Drawable drawable) {
        if (drawable != null) {
            if (this.f6082d0) {
                Drawable.ConstantState constantState = drawable.getConstantState();
                if (constantState != null) {
                    drawable = constantState.newDrawable();
                }
                drawable = drawable.mutate();
                drawable.setTintList(this.f6081c0);
            }
            int i5 = this.S;
            drawable.setBounds(0, 0, i5, i5);
        } else if (this.T) {
            if (this.f6083e0 == null) {
                Resources resources = getResources();
                Resources.Theme theme = getContext().getTheme();
                ThreadLocal threadLocal = n.a;
                Drawable drawable2 = resources.getDrawable(com.discord.R.drawable.navigation_empty_icon, theme);
                this.f6083e0 = drawable2;
                if (drawable2 != null) {
                    int i6 = this.S;
                    drawable2.setBounds(0, 0, i6, i6);
                }
            }
            drawable = this.f6083e0;
        }
        this.W.setCompoundDrawablesRelative(drawable, null, null, null);
    }

    public void setIconPadding(int i5) {
        this.W.setCompoundDrawablePadding(i5);
    }

    public void setIconSize(int i5) {
        this.S = i5;
    }

    public void setIconTintList(ColorStateList colorStateList) {
        this.f6081c0 = colorStateList;
        this.f6082d0 = colorStateList != null;
        l lVar = this.f6080b0;
        if (lVar != null) {
            setIcon(lVar.getIcon());
        }
    }

    public void setMaxLines(int i5) {
        this.W.setMaxLines(i5);
    }

    public void setNeedsEmptyIcon(boolean z5) {
        this.T = z5;
    }

    public void setTextAppearance(int i5) {
        this.W.setTextAppearance(i5);
    }

    public void setTextColor(ColorStateList colorStateList) {
        this.W.setTextColor(colorStateList);
    }

    public void setTitle(CharSequence charSequence) {
        this.W.setText(charSequence);
    }
}
