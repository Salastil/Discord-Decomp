package nh;

import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import ch.q;
import com.discord.R;
import lh.i;
import lh.m;

/* loaded from: classes3.dex */
public abstract class c extends FrameLayout {
    public static final b F = new b(0);
    public PorterDuff.Mode E;

    /* renamed from: d, reason: collision with root package name */
    public final m f15469d;

    /* renamed from: e, reason: collision with root package name */
    public int f15470e;

    /* renamed from: i, reason: collision with root package name */
    public final float f15471i;

    /* renamed from: v, reason: collision with root package name */
    public final float f15472v;

    /* renamed from: w, reason: collision with root package name */
    public final int f15473w;

    /* renamed from: x, reason: collision with root package name */
    public final int f15474x;

    /* renamed from: y, reason: collision with root package name */
    public ColorStateList f15475y;

    /* JADX WARN: Multi-variable type inference failed */
    public c(Context context, AttributeSet attributeSet) {
        super(ph.a.a(context, attributeSet, 0, 0), attributeSet);
        GradientDrawable gradientDrawable;
        Context context2 = getContext();
        TypedArray obtainStyledAttributes = context2.obtainStyledAttributes(attributeSet, lg.a.L);
        if (obtainStyledAttributes.hasValue(6)) {
            setElevation(obtainStyledAttributes.getDimensionPixelSize(6, 0));
        }
        this.f15470e = obtainStyledAttributes.getInt(2, 0);
        if (obtainStyledAttributes.hasValue(8) || obtainStyledAttributes.hasValue(9)) {
            this.f15469d = m.c(context2, attributeSet, 0, 0).a();
        }
        this.f15471i = obtainStyledAttributes.getFloat(3, 1.0f);
        setBackgroundTintList(k0.u(context2, obtainStyledAttributes, 4));
        setBackgroundTintMode(q.h(obtainStyledAttributes.getInt(5, -1), PorterDuff.Mode.SRC_IN));
        this.f15472v = obtainStyledAttributes.getFloat(1, 1.0f);
        this.f15473w = obtainStyledAttributes.getDimensionPixelSize(0, -1);
        this.f15474x = obtainStyledAttributes.getDimensionPixelSize(7, -1);
        obtainStyledAttributes.recycle();
        setOnTouchListener(F);
        setFocusable(true);
        if (getBackground() == null) {
            int Q = com.facebook.imagepipeline.nativecode.c.Q(com.facebook.imagepipeline.nativecode.c.w(R.attr.colorSurface, this), com.facebook.imagepipeline.nativecode.c.w(R.attr.colorOnSurface, this), getBackgroundOverlayColorAlpha());
            m mVar = this.f15469d;
            if (mVar != null) {
                int i5 = d.a;
                i iVar = new i(mVar);
                iVar.q(ColorStateList.valueOf(Q));
                gradientDrawable = iVar;
            } else {
                Resources resources = getResources();
                int i6 = d.a;
                float dimension = resources.getDimension(R.dimen.mtrl_snackbar_background_corner_radius);
                GradientDrawable gradientDrawable2 = new GradientDrawable();
                gradientDrawable2.setShape(0);
                gradientDrawable2.setCornerRadius(dimension);
                gradientDrawable2.setColor(Q);
                gradientDrawable = gradientDrawable2;
            }
            ColorStateList colorStateList = this.f15475y;
            if (colorStateList != null) {
                gradientDrawable.setTintList(colorStateList);
            }
            setBackground(gradientDrawable);
        }
    }

    public float getActionTextColorAlpha() {
        return this.f15472v;
    }

    public int getAnimationMode() {
        return this.f15470e;
    }

    public float getBackgroundOverlayColorAlpha() {
        return this.f15471i;
    }

    public int getMaxInlineActionWidth() {
        return this.f15474x;
    }

    public int getMaxWidth() {
        return this.f15473w;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        requestApplyInsets();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
    }

    @Override // android.widget.FrameLayout, android.view.View
    public void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        int i10 = this.f15473w;
        if (i10 <= 0 || getMeasuredWidth() <= i10) {
            return;
        }
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(i10, 1073741824), i6);
    }

    public void setAnimationMode(int i5) {
        this.f15470e = i5;
    }

    @Override // android.view.View
    public void setBackground(Drawable drawable) {
        setBackgroundDrawable(drawable);
    }

    @Override // android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        if (drawable != null && this.f15475y != null) {
            drawable = drawable.mutate();
            drawable.setTintList(this.f15475y);
            drawable.setTintMode(this.E);
        }
        super.setBackgroundDrawable(drawable);
    }

    @Override // android.view.View
    public void setBackgroundTintList(ColorStateList colorStateList) {
        this.f15475y = colorStateList;
        if (getBackground() != null) {
            Drawable mutate = getBackground().mutate();
            mutate.setTintList(colorStateList);
            mutate.setTintMode(this.E);
            if (mutate != getBackground()) {
                super.setBackgroundDrawable(mutate);
            }
        }
    }

    @Override // android.view.View
    public void setBackgroundTintMode(PorterDuff.Mode mode) {
        this.E = mode;
        if (getBackground() != null) {
            Drawable mutate = getBackground().mutate();
            mutate.setTintMode(mode);
            if (mutate != getBackground()) {
                super.setBackgroundDrawable(mutate);
            }
        }
    }

    @Override // android.view.View
    public void setLayoutParams(ViewGroup.LayoutParams layoutParams) {
        super.setLayoutParams(layoutParams);
        if (layoutParams instanceof ViewGroup.MarginLayoutParams) {
            ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams;
            new Rect(marginLayoutParams.leftMargin, marginLayoutParams.topMargin, marginLayoutParams.rightMargin, marginLayoutParams.bottomMargin);
        }
    }

    @Override // android.view.View
    public void setOnClickListener(View.OnClickListener onClickListener) {
        setOnTouchListener(onClickListener != null ? null : F);
        super.setOnClickListener(onClickListener);
    }

    private void setBaseTransientBottomBar(d dVar) {
    }
}
