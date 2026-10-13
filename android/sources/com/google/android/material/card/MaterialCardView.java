package com.google.android.material.card;

import a5.k0;
import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.RippleDrawable;
import android.os.Build;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.Checkable;
import androidx.annotation.NonNull;
import androidx.cardview.widget.CardView;
import ch.q;
import lh.g;
import lh.i;
import lh.l;
import lh.m;
import lh.w;
import ph.a;
import ug.c;
import y0.b;
import ys.d;

/* loaded from: classes3.dex */
public class MaterialCardView extends CardView implements Checkable, w {

    /* renamed from: w, reason: collision with root package name */
    public static final int[] f5993w = {R.attr.state_checkable};

    /* renamed from: x, reason: collision with root package name */
    public static final int[] f5994x = {R.attr.state_checked};

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f5995y = {com.discord.R.attr.state_dragged};

    /* renamed from: d, reason: collision with root package name */
    public final c f5996d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f5997e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f5998i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f5999v;

    public MaterialCardView(Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, com.discord.R.attr.materialCardViewStyle, com.discord.R.style.Widget_MaterialComponents_CardView), attributeSet, com.discord.R.attr.materialCardViewStyle);
        this.f5998i = false;
        this.f5999v = false;
        this.f5997e = true;
        TypedArray f2 = q.f(getContext(), attributeSet, lg.a.f13972w, com.discord.R.attr.materialCardViewStyle, com.discord.R.style.Widget_MaterialComponents_CardView, new int[0]);
        c cVar = new c(this, attributeSet);
        this.f5996d = cVar;
        ColorStateList cardBackgroundColor = super.getCardBackgroundColor();
        i iVar = cVar.f18883c;
        iVar.q(cardBackgroundColor);
        cVar.f18882b.set(super.getContentPaddingLeft(), super.getContentPaddingTop(), super.getContentPaddingRight(), super.getContentPaddingBottom());
        cVar.l();
        MaterialCardView materialCardView = cVar.a;
        ColorStateList u5 = k0.u(materialCardView.getContext(), f2, 11);
        cVar.f18892n = u5;
        if (u5 == null) {
            cVar.f18892n = ColorStateList.valueOf(-1);
        }
        cVar.f18888h = f2.getDimensionPixelSize(12, 0);
        boolean z5 = f2.getBoolean(0, false);
        cVar.f18897s = z5;
        materialCardView.setLongClickable(z5);
        cVar.f18890l = k0.u(materialCardView.getContext(), f2, 6);
        cVar.g(k0.x(materialCardView.getContext(), f2, 2));
        cVar.f18886f = f2.getDimensionPixelSize(5, 0);
        cVar.f18885e = f2.getDimensionPixelSize(4, 0);
        cVar.f18887g = f2.getInteger(3, 8388661);
        ColorStateList u6 = k0.u(materialCardView.getContext(), f2, 7);
        cVar.k = u6;
        if (u6 == null) {
            cVar.k = ColorStateList.valueOf(com.facebook.imagepipeline.nativecode.c.w(com.discord.R.attr.colorControlHighlight, materialCardView));
        }
        ColorStateList u10 = k0.u(materialCardView.getContext(), f2, 1);
        u10 = u10 == null ? ColorStateList.valueOf(0) : u10;
        i iVar2 = cVar.f18884d;
        iVar2.q(u10);
        RippleDrawable rippleDrawable = cVar.f18893o;
        if (rippleDrawable != null) {
            rippleDrawable.setColor(cVar.k);
        }
        iVar.p(materialCardView.getCardElevation());
        float f10 = cVar.f18888h;
        ColorStateList colorStateList = cVar.f18892n;
        iVar2.f14001e.k = f10;
        iVar2.invalidateSelf();
        g gVar = iVar2.f14001e;
        if (gVar.f13986e != colorStateList) {
            gVar.f13986e = colorStateList;
            iVar2.onStateChange(iVar2.getState());
        }
        materialCardView.setBackgroundInternal(cVar.d(iVar));
        Drawable c6 = cVar.j() ? cVar.c() : iVar2;
        cVar.f18889i = c6;
        materialCardView.setForeground(cVar.d(c6));
        f2.recycle();
    }

    @NonNull
    private RectF getBoundsAsRectF() {
        RectF rectF = new RectF();
        rectF.set(this.f5996d.f18883c.getBounds());
        return rectF;
    }

    public final void a() {
        c cVar;
        RippleDrawable rippleDrawable;
        if (Build.VERSION.SDK_INT <= 26 || (rippleDrawable = (cVar = this.f5996d).f18893o) == null) {
            return;
        }
        Rect bounds = rippleDrawable.getBounds();
        int i5 = bounds.bottom;
        cVar.f18893o.setBounds(bounds.left, bounds.top, bounds.right, i5 - 1);
        cVar.f18893o.setBounds(bounds.left, bounds.top, bounds.right, i5);
    }

    public final void b(int i5, int i6, int i10, int i11) {
        super.setContentPadding(i5, i6, i10, i11);
    }

    @Override // androidx.cardview.widget.CardView
    @NonNull
    public ColorStateList getCardBackgroundColor() {
        return this.f5996d.f18883c.f14001e.f13985d;
    }

    @NonNull
    public ColorStateList getCardForegroundColor() {
        return this.f5996d.f18884d.f14001e.f13985d;
    }

    public float getCardViewRadius() {
        return super.getRadius();
    }

    public Drawable getCheckedIcon() {
        return this.f5996d.j;
    }

    public int getCheckedIconGravity() {
        return this.f5996d.f18887g;
    }

    public int getCheckedIconMargin() {
        return this.f5996d.f18885e;
    }

    public int getCheckedIconSize() {
        return this.f5996d.f18886f;
    }

    public ColorStateList getCheckedIconTint() {
        return this.f5996d.f18890l;
    }

    @Override // androidx.cardview.widget.CardView
    public int getContentPaddingBottom() {
        return this.f5996d.f18882b.bottom;
    }

    @Override // androidx.cardview.widget.CardView
    public int getContentPaddingLeft() {
        return this.f5996d.f18882b.left;
    }

    @Override // androidx.cardview.widget.CardView
    public int getContentPaddingRight() {
        return this.f5996d.f18882b.right;
    }

    @Override // androidx.cardview.widget.CardView
    public int getContentPaddingTop() {
        return this.f5996d.f18882b.top;
    }

    public float getProgress() {
        return this.f5996d.f18883c.f14001e.j;
    }

    @Override // androidx.cardview.widget.CardView
    public float getRadius() {
        return this.f5996d.f18883c.k();
    }

    public ColorStateList getRippleColor() {
        return this.f5996d.k;
    }

    @NonNull
    public m getShapeAppearanceModel() {
        return this.f5996d.f18891m;
    }

    @Deprecated
    public int getStrokeColor() {
        ColorStateList colorStateList = this.f5996d.f18892n;
        if (colorStateList == null) {
            return -1;
        }
        return colorStateList.getDefaultColor();
    }

    public ColorStateList getStrokeColorStateList() {
        return this.f5996d.f18892n;
    }

    public int getStrokeWidth() {
        return this.f5996d.f18888h;
    }

    @Override // android.widget.Checkable
    public final boolean isChecked() {
        return this.f5998i;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        c cVar = this.f5996d;
        cVar.k();
        jb.a.I(this, cVar.f18883c);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 3);
        c cVar = this.f5996d;
        if (cVar != null && cVar.f18897s) {
            View.mergeDrawableStates(onCreateDrawableState, f5993w);
        }
        if (this.f5998i) {
            View.mergeDrawableStates(onCreateDrawableState, f5994x);
        }
        if (this.f5999v) {
            View.mergeDrawableStates(onCreateDrawableState, f5995y);
        }
        return onCreateDrawableState;
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        accessibilityEvent.setClassName("androidx.cardview.widget.CardView");
        accessibilityEvent.setChecked(this.f5998i);
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName("androidx.cardview.widget.CardView");
        c cVar = this.f5996d;
        accessibilityNodeInfo.setCheckable(cVar != null && cVar.f18897s);
        accessibilityNodeInfo.setClickable(isClickable());
        accessibilityNodeInfo.setChecked(this.f5998i);
    }

    @Override // androidx.cardview.widget.CardView, android.widget.FrameLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        this.f5996d.e(getMeasuredWidth(), getMeasuredHeight());
    }

    @Override // android.view.View
    public void setBackground(Drawable drawable) {
        setBackgroundDrawable(drawable);
    }

    @Override // android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        if (this.f5997e) {
            c cVar = this.f5996d;
            if (!cVar.f18896r) {
                Log.i("MaterialCardView", "Setting a custom background is not supported.");
                cVar.f18896r = true;
            }
            super.setBackgroundDrawable(drawable);
        }
    }

    public void setBackgroundInternal(Drawable drawable) {
        super.setBackgroundDrawable(drawable);
    }

    @Override // androidx.cardview.widget.CardView
    public void setCardBackgroundColor(int i5) {
        this.f5996d.f18883c.q(ColorStateList.valueOf(i5));
    }

    @Override // androidx.cardview.widget.CardView
    public void setCardElevation(float f2) {
        super.setCardElevation(f2);
        c cVar = this.f5996d;
        cVar.f18883c.p(cVar.a.getCardElevation());
    }

    public void setCardForegroundColor(ColorStateList colorStateList) {
        i iVar = this.f5996d.f18884d;
        if (colorStateList == null) {
            colorStateList = ColorStateList.valueOf(0);
        }
        iVar.q(colorStateList);
    }

    public void setCheckable(boolean z5) {
        this.f5996d.f18897s = z5;
    }

    @Override // android.widget.Checkable
    public void setChecked(boolean z5) {
        if (this.f5998i != z5) {
            toggle();
        }
    }

    public void setCheckedIcon(Drawable drawable) {
        this.f5996d.g(drawable);
    }

    public void setCheckedIconGravity(int i5) {
        c cVar = this.f5996d;
        if (cVar.f18887g != i5) {
            cVar.f18887g = i5;
            MaterialCardView materialCardView = cVar.a;
            cVar.e(materialCardView.getMeasuredWidth(), materialCardView.getMeasuredHeight());
        }
    }

    public void setCheckedIconMargin(int i5) {
        this.f5996d.f18885e = i5;
    }

    public void setCheckedIconMarginResource(int i5) {
        if (i5 != -1) {
            this.f5996d.f18885e = getResources().getDimensionPixelSize(i5);
        }
    }

    public void setCheckedIconResource(int i5) {
        this.f5996d.g(d.J(getContext(), i5));
    }

    public void setCheckedIconSize(int i5) {
        this.f5996d.f18886f = i5;
    }

    public void setCheckedIconSizeResource(int i5) {
        if (i5 != 0) {
            this.f5996d.f18886f = getResources().getDimensionPixelSize(i5);
        }
    }

    public void setCheckedIconTint(ColorStateList colorStateList) {
        c cVar = this.f5996d;
        cVar.f18890l = colorStateList;
        Drawable drawable = cVar.j;
        if (drawable != null) {
            drawable.setTintList(colorStateList);
        }
    }

    @Override // android.view.View
    public void setClickable(boolean z5) {
        super.setClickable(z5);
        c cVar = this.f5996d;
        if (cVar != null) {
            cVar.k();
        }
    }

    @Override // androidx.cardview.widget.CardView
    public final void setContentPadding(int i5, int i6, int i10, int i11) {
        c cVar = this.f5996d;
        cVar.f18882b.set(i5, i6, i10, i11);
        cVar.l();
    }

    public void setDragged(boolean z5) {
        if (this.f5999v != z5) {
            this.f5999v = z5;
            refreshDrawableState();
            a();
            invalidate();
        }
    }

    @Override // androidx.cardview.widget.CardView
    public void setMaxCardElevation(float f2) {
        super.setMaxCardElevation(f2);
        this.f5996d.m();
    }

    @Override // androidx.cardview.widget.CardView
    public void setPreventCornerOverlap(boolean z5) {
        super.setPreventCornerOverlap(z5);
        c cVar = this.f5996d;
        cVar.m();
        cVar.l();
    }

    public void setProgress(float f2) {
        c cVar = this.f5996d;
        cVar.f18883c.r(f2);
        i iVar = cVar.f18884d;
        if (iVar != null) {
            iVar.r(f2);
        }
        i iVar2 = cVar.f18895q;
        if (iVar2 != null) {
            iVar2.r(f2);
        }
    }

    @Override // androidx.cardview.widget.CardView
    public void setRadius(float f2) {
        super.setRadius(f2);
        c cVar = this.f5996d;
        l g6 = cVar.f18891m.g();
        g6.b(f2);
        cVar.h(g6.a());
        cVar.f18889i.invalidateSelf();
        if (cVar.i() || (cVar.a.getPreventCornerOverlap() && !cVar.f18883c.n())) {
            cVar.l();
        }
        if (cVar.i()) {
            cVar.m();
        }
    }

    public void setRippleColor(ColorStateList colorStateList) {
        c cVar = this.f5996d;
        cVar.k = colorStateList;
        RippleDrawable rippleDrawable = cVar.f18893o;
        if (rippleDrawable != null) {
            rippleDrawable.setColor(colorStateList);
        }
    }

    public void setRippleColorResource(int i5) {
        ColorStateList c6 = b.c(getContext(), i5);
        c cVar = this.f5996d;
        cVar.k = c6;
        RippleDrawable rippleDrawable = cVar.f18893o;
        if (rippleDrawable != null) {
            rippleDrawable.setColor(c6);
        }
    }

    @Override // lh.w
    public void setShapeAppearanceModel(@NonNull m mVar) {
        setClipToOutline(mVar.f(getBoundsAsRectF()));
        this.f5996d.h(mVar);
    }

    public void setStrokeColor(int i5) {
        setStrokeColor(ColorStateList.valueOf(i5));
    }

    public void setStrokeWidth(int i5) {
        c cVar = this.f5996d;
        if (i5 != cVar.f18888h) {
            cVar.f18888h = i5;
            i iVar = cVar.f18884d;
            ColorStateList colorStateList = cVar.f18892n;
            iVar.f14001e.k = i5;
            iVar.invalidateSelf();
            g gVar = iVar.f14001e;
            if (gVar.f13986e != colorStateList) {
                gVar.f13986e = colorStateList;
                iVar.onStateChange(iVar.getState());
            }
        }
        invalidate();
    }

    @Override // androidx.cardview.widget.CardView
    public void setUseCompatPadding(boolean z5) {
        super.setUseCompatPadding(z5);
        c cVar = this.f5996d;
        cVar.m();
        cVar.l();
    }

    @Override // android.widget.Checkable
    public final void toggle() {
        c cVar = this.f5996d;
        if (cVar != null && cVar.f18897s && isEnabled()) {
            this.f5998i = !this.f5998i;
            refreshDrawableState();
            a();
            cVar.f(this.f5998i, true);
        }
    }

    public void setStrokeColor(ColorStateList colorStateList) {
        c cVar = this.f5996d;
        if (cVar.f18892n != colorStateList) {
            cVar.f18892n = colorStateList;
            i iVar = cVar.f18884d;
            iVar.f14001e.k = cVar.f18888h;
            iVar.invalidateSelf();
            g gVar = iVar.f14001e;
            if (gVar.f13986e != colorStateList) {
                gVar.f13986e = colorStateList;
                iVar.onStateChange(iVar.getState());
            }
        }
        invalidate();
    }

    @Override // androidx.cardview.widget.CardView
    public void setCardBackgroundColor(ColorStateList colorStateList) {
        this.f5996d.f18883c.q(colorStateList);
    }

    public void setOnCheckedChangeListener(ug.a aVar) {
    }
}
