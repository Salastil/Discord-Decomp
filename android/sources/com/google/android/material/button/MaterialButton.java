package com.google.android.material.button;

import a5.k0;
import android.R;
import android.annotation.SuppressLint;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.RippleDrawable;
import android.os.Parcelable;
import android.text.Layout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.StateSet;
import android.util.TypedValue;
import android.view.View;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.Button;
import android.widget.Checkable;
import android.widget.CompoundButton;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.s;
import androidx.dynamicanimation.animation.SpringAnimation;
import ch.q;
import gh.l;
import java.util.Iterator;
import java.util.LinkedHashSet;
import lh.a0;
import lh.b0;
import lh.i;
import lh.m;
import lh.w;
import lh.z;
import m3.n;
import rd.u;
import s4.h;
import tg.a;
import tg.b;
import tg.c;
import tg.d;

/* loaded from: classes3.dex */
public class MaterialButton extends s implements Checkable, w {

    /* renamed from: f0, reason: collision with root package name */
    public static final int[] f5983f0 = {R.attr.state_checkable};

    /* renamed from: g0, reason: collision with root package name */
    public static final int[] f5984g0 = {R.attr.state_checked};
    public static final l h0 = new l(1);
    public ColorStateList E;
    public Drawable F;
    public String G;
    public int H;
    public int I;
    public int J;
    public int K;
    public boolean L;
    public boolean M;
    public int N;
    public int O;
    public float P;
    public int Q;
    public int R;
    public LinearLayout.LayoutParams S;
    public boolean T;
    public int U;
    public boolean V;
    public int W;
    public b0 a0;

    /* renamed from: b0, reason: collision with root package name */
    public int f5985b0;

    /* renamed from: c0, reason: collision with root package name */
    public float f5986c0;

    /* renamed from: d0, reason: collision with root package name */
    public float f5987d0;

    /* renamed from: e0, reason: collision with root package name */
    public SpringAnimation f5988e0;

    /* renamed from: v, reason: collision with root package name */
    public final d f5989v;

    /* renamed from: w, reason: collision with root package name */
    public final LinkedHashSet f5990w;

    /* renamed from: x, reason: collision with root package name */
    public a f5991x;

    /* renamed from: y, reason: collision with root package name */
    public PorterDuff.Mode f5992y;

    public MaterialButton(@NonNull Context context, AttributeSet attributeSet) {
        super(ph.a.b(context, attributeSet, com.discord.R.attr.materialButtonStyle, com.discord.R.style.Widget_MaterialComponents_Button, new int[]{com.discord.R.attr.materialSizeOverlay}), attributeSet, com.discord.R.attr.materialButtonStyle);
        this.f5990w = new LinkedHashSet();
        this.L = false;
        this.M = false;
        this.O = -1;
        this.P = -1.0f;
        this.Q = -1;
        this.R = -1;
        this.W = -1;
        Context context2 = getContext();
        TypedArray f2 = q.f(context2, attributeSet, lg.a.f13967r, com.discord.R.attr.materialButtonStyle, com.discord.R.style.Widget_MaterialComponents_Button, new int[0]);
        this.K = f2.getDimensionPixelSize(13, 0);
        int i5 = f2.getInt(16, -1);
        PorterDuff.Mode mode = PorterDuff.Mode.SRC_IN;
        this.f5992y = q.h(i5, mode);
        this.E = k0.u(getContext(), f2, 15);
        this.F = k0.x(getContext(), f2, 11);
        this.N = f2.getInteger(12, 1);
        this.H = f2.getDimensionPixelSize(14, 0);
        z b10 = z.b(context2, f2, 19);
        m c6 = b10 != null ? b10.c() : m.c(context2, attributeSet, com.discord.R.attr.materialButtonStyle, com.discord.R.style.Widget_MaterialComponents_Button).a();
        boolean z5 = f2.getBoolean(17, false);
        d dVar = new d(this, c6);
        this.f5989v = dVar;
        dVar.f18376f = f2.getDimensionPixelOffset(2, 0);
        dVar.f18377g = f2.getDimensionPixelOffset(3, 0);
        dVar.f18378h = f2.getDimensionPixelOffset(4, 0);
        dVar.f18379i = f2.getDimensionPixelOffset(5, 0);
        if (f2.hasValue(9)) {
            int dimensionPixelSize = f2.getDimensionPixelSize(9, -1);
            dVar.j = dimensionPixelSize;
            lh.l g6 = dVar.f18372b.g();
            g6.b(dimensionPixelSize);
            dVar.f18372b = g6.a();
            dVar.f18373c = null;
            dVar.d();
            dVar.f18387s = true;
        }
        dVar.k = f2.getDimensionPixelSize(22, 0);
        dVar.f18380l = q.h(f2.getInt(8, -1), mode);
        dVar.f18381m = k0.u(getContext(), f2, 7);
        dVar.f18382n = k0.u(getContext(), f2, 21);
        dVar.f18383o = k0.u(getContext(), f2, 18);
        dVar.f18388t = f2.getBoolean(6, false);
        dVar.f18391w = f2.getDimensionPixelSize(10, 0);
        dVar.f18389u = f2.getBoolean(23, true);
        int paddingStart = getPaddingStart();
        int paddingTop = getPaddingTop();
        int paddingEnd = getPaddingEnd();
        int paddingBottom = getPaddingBottom();
        if (f2.hasValue(0)) {
            dVar.f18386r = true;
            setSupportBackgroundTintList(dVar.f18381m);
            setSupportBackgroundTintMode(dVar.f18380l);
        } else {
            dVar.c();
        }
        setPaddingRelative(paddingStart + dVar.f18376f, paddingTop + dVar.f18378h, paddingEnd + dVar.f18377g, paddingBottom + dVar.f18379i);
        setCheckedInternal(f2.getBoolean(1, false));
        if (b10 != null) {
            dVar.f18374d = d();
            if (dVar.f18373c != null) {
                dVar.d();
            }
            dVar.f18373c = b10;
            dVar.d();
        }
        setOpticalCenterEnabled(z5);
        f2.recycle();
        setCompoundDrawablePadding(this.K);
        h(this.F != null);
    }

    public static /* synthetic */ void a(MaterialButton materialButton) {
        materialButton.U = materialButton.getOpticalCenterShift();
        materialButton.j();
        materialButton.invalidate();
    }

    private Layout.Alignment getActualTextAlignment() {
        int textAlignment = getTextAlignment();
        return textAlignment != 1 ? (textAlignment == 6 || textAlignment == 3) ? Layout.Alignment.ALIGN_OPPOSITE : textAlignment != 4 ? Layout.Alignment.ALIGN_NORMAL : Layout.Alignment.ALIGN_CENTER : getGravityTextAlignment();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public float getDisplayedWidthIncrease() {
        return this.f5986c0;
    }

    private Layout.Alignment getGravityTextAlignment() {
        int gravity = getGravity() & 8388615;
        return gravity != 1 ? (gravity == 5 || gravity == 8388613) ? Layout.Alignment.ALIGN_OPPOSITE : Layout.Alignment.ALIGN_NORMAL : Layout.Alignment.ALIGN_CENTER;
    }

    private int getOpticalCenterShift() {
        i a;
        if (this.T && this.V && (a = this.f5989v.a(false)) != null) {
            return (int) (a.i() * 0.11f);
        }
        return 0;
    }

    private int getTextHeight() {
        if (getLineCount() > 1) {
            return getLayout().getHeight();
        }
        TextPaint paint = getPaint();
        String charSequence = getText().toString();
        if (getTransformationMethod() != null) {
            charSequence = getTransformationMethod().getTransformation(charSequence, this).toString();
        }
        Rect rect = new Rect();
        paint.getTextBounds(charSequence, 0, charSequence.length(), rect);
        return Math.min(rect.height(), getLayout().getHeight());
    }

    private int getTextLayoutWidth() {
        int lineCount = getLineCount();
        float f2 = 0.0f;
        for (int i5 = 0; i5 < lineCount; i5++) {
            f2 = Math.max(f2, getLayout().getLineWidth(i5));
        }
        return (int) Math.ceil(f2);
    }

    private void setCheckedInternal(boolean z5) {
        d dVar = this.f5989v;
        if (dVar == null || !dVar.f18388t || this.L == z5) {
            return;
        }
        this.L = z5;
        refreshDrawableState();
        if (getParent() instanceof MaterialButtonToggleGroup) {
            MaterialButtonToggleGroup materialButtonToggleGroup = (MaterialButtonToggleGroup) getParent();
            boolean z6 = this.L;
            if (!materialButtonToggleGroup.I) {
                materialButtonToggleGroup.f(getId(), z6);
            }
        }
        if (this.M) {
            return;
        }
        this.M = true;
        Iterator it = this.f5990w.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
        this.M = false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setDisplayedWidthIncrease(float f2) {
        MaterialButton materialButton;
        MaterialButton materialButton2;
        if (this.f5986c0 != f2) {
            this.f5986c0 = f2;
            j();
            invalidate();
            if (getParent() instanceof c) {
                c cVar = (c) getParent();
                int i5 = (int) this.f5986c0;
                int indexOfChild = cVar.indexOfChild(this);
                if (indexOfChild < 0) {
                    return;
                }
                int i6 = indexOfChild - 1;
                while (true) {
                    materialButton = null;
                    if (i6 < 0) {
                        materialButton2 = null;
                        break;
                    } else {
                        if (cVar.c(i6)) {
                            materialButton2 = (MaterialButton) cVar.getChildAt(i6);
                            break;
                        }
                        i6--;
                    }
                }
                int childCount = cVar.getChildCount();
                while (true) {
                    indexOfChild++;
                    if (indexOfChild >= childCount) {
                        break;
                    } else if (cVar.c(indexOfChild)) {
                        materialButton = (MaterialButton) cVar.getChildAt(indexOfChild);
                        break;
                    }
                }
                if (materialButton2 == null && materialButton == null) {
                    return;
                }
                if (materialButton2 == null) {
                    materialButton.setDisplayedWidthDecrease(i5);
                }
                if (materialButton == null) {
                    materialButton2.setDisplayedWidthDecrease(i5);
                }
                if (materialButton2 == null || materialButton == null) {
                    return;
                }
                materialButton2.setDisplayedWidthDecrease(i5 / 2);
                materialButton.setDisplayedWidthDecrease((i5 + 1) / 2);
            }
        }
    }

    public final j2.i d() {
        Context context = getContext();
        TypedValue I0 = n.I0(context, com.discord.R.attr.motionSpringFastSpatial);
        int[] iArr = lg.a.B;
        TypedArray obtainStyledAttributes = I0 == null ? context.obtainStyledAttributes(null, iArr, 0, com.discord.R.style.Motion_Material3_Spring_Standard_Fast_Spatial) : context.obtainStyledAttributes(I0.resourceId, iArr);
        j2.i iVar = new j2.i();
        try {
            float f2 = obtainStyledAttributes.getFloat(1, Float.MIN_VALUE);
            if (f2 == Float.MIN_VALUE) {
                throw new IllegalArgumentException("A MaterialSpring style must have stiffness value.");
            }
            float f10 = obtainStyledAttributes.getFloat(0, Float.MIN_VALUE);
            if (f10 == Float.MIN_VALUE) {
                throw new IllegalArgumentException("A MaterialSpring style must have a damping value.");
            }
            iVar.b(f2);
            iVar.a(f10);
            return iVar;
        } finally {
            obtainStyledAttributes.recycle();
        }
    }

    public final boolean e() {
        d dVar = this.f5989v;
        return (dVar == null || dVar.f18386r) ? false : true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:39:0x0071, code lost:
    
        if (r1 == 2) goto L33;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(boolean z5) {
        int i5;
        if (this.a0 == null) {
            return;
        }
        if (this.f5988e0 == null) {
            SpringAnimation springAnimation = new SpringAnimation(this, h0);
            this.f5988e0 = springAnimation;
            springAnimation.f1884m = d();
        }
        if (this.V) {
            int i6 = this.f5985b0;
            b0 b0Var = this.a0;
            int[] drawableState = getDrawableState();
            int[][] iArr = b0Var.f13979c;
            int i10 = 0;
            int i11 = 0;
            while (true) {
                i5 = -1;
                if (i11 >= b0Var.a) {
                    i11 = -1;
                    break;
                } else if (StateSet.stateSetMatches(iArr[i11], drawableState)) {
                    break;
                } else {
                    i11++;
                }
            }
            if (i11 < 0) {
                int[] iArr2 = StateSet.WILD_CARD;
                int[][] iArr3 = b0Var.f13979c;
                int i12 = 0;
                while (true) {
                    if (i12 >= b0Var.a) {
                        break;
                    }
                    if (StateSet.stateSetMatches(iArr3[i12], iArr2)) {
                        i5 = i12;
                        break;
                    }
                    i12++;
                }
                i11 = i5;
            }
            a0 a0Var = (a0) (i11 < 0 ? b0Var.f13978b : b0Var.f13980d[i11]).f18811d;
            int width = getWidth();
            float f2 = a0Var.f13976b;
            int i13 = a0Var.a;
            if (i13 == 1) {
                f2 *= width;
            }
            i10 = (int) f2;
            this.f5988e0.a(Math.min(i6, i10));
            if (z5) {
                this.f5988e0.f();
            }
        }
    }

    public final void g() {
        int i5 = this.N;
        if (i5 == 1 || i5 == 2) {
            setCompoundDrawablesRelative(this.F, null, null, null);
            return;
        }
        if (i5 == 3 || i5 == 4) {
            setCompoundDrawablesRelative(null, null, this.F, null);
        } else if (i5 == 16 || i5 == 32) {
            setCompoundDrawablesRelative(null, this.F, null, null);
        }
    }

    @NonNull
    @SuppressLint({"KotlinPropertyAccess"})
    public String getA11yClassName() {
        if (!TextUtils.isEmpty(this.G)) {
            return this.G;
        }
        d dVar = this.f5989v;
        return ((dVar == null || !dVar.f18388t) ? Button.class : CompoundButton.class).getName();
    }

    public int getAllowedWidthDecrease() {
        return this.W;
    }

    @Override // android.view.View
    public ColorStateList getBackgroundTintList() {
        return getSupportBackgroundTintList();
    }

    @Override // android.view.View
    public PorterDuff.Mode getBackgroundTintMode() {
        return getSupportBackgroundTintMode();
    }

    public int getCornerRadius() {
        if (e()) {
            return this.f5989v.j;
        }
        return 0;
    }

    public j2.i getCornerSpringForce() {
        return this.f5989v.f18374d;
    }

    public Drawable getIcon() {
        return this.F;
    }

    public int getIconGravity() {
        return this.N;
    }

    public int getIconPadding() {
        return this.K;
    }

    public int getIconSize() {
        return this.H;
    }

    public ColorStateList getIconTint() {
        return this.E;
    }

    public PorterDuff.Mode getIconTintMode() {
        return this.f5992y;
    }

    public int getInsetBottom() {
        return this.f5989v.f18379i;
    }

    public int getInsetTop() {
        return this.f5989v.f18378h;
    }

    public ColorStateList getRippleColor() {
        if (e()) {
            return this.f5989v.f18383o;
        }
        return null;
    }

    @NonNull
    public m getShapeAppearanceModel() {
        if (e()) {
            return this.f5989v.f18372b;
        }
        throw new IllegalStateException("Attempted to get ShapeAppearanceModel from a MaterialButton which has an overwritten background.");
    }

    public z getStateListShapeAppearanceModel() {
        if (e()) {
            return this.f5989v.f18373c;
        }
        throw new IllegalStateException("Attempted to get StateListShapeAppearanceModel from a MaterialButton which has an overwritten background.");
    }

    public ColorStateList getStrokeColor() {
        if (e()) {
            return this.f5989v.f18382n;
        }
        return null;
    }

    public int getStrokeWidth() {
        if (e()) {
            return this.f5989v.k;
        }
        return 0;
    }

    @Override // androidx.appcompat.widget.s
    public ColorStateList getSupportBackgroundTintList() {
        return e() ? this.f5989v.f18381m : super.getSupportBackgroundTintList();
    }

    @Override // androidx.appcompat.widget.s
    public PorterDuff.Mode getSupportBackgroundTintMode() {
        return e() ? this.f5989v.f18380l : super.getSupportBackgroundTintMode();
    }

    public final void h(boolean z5) {
        Drawable drawable = this.F;
        if (drawable != null) {
            Drawable mutate = drawable.mutate();
            this.F = mutate;
            mutate.setTintList(this.E);
            PorterDuff.Mode mode = this.f5992y;
            if (mode != null) {
                this.F.setTintMode(mode);
            }
            int i5 = this.H;
            if (i5 == 0) {
                i5 = this.F.getIntrinsicWidth();
            }
            int i6 = this.H;
            if (i6 == 0) {
                i6 = this.F.getIntrinsicHeight();
            }
            Drawable drawable2 = this.F;
            int i10 = this.I;
            int i11 = this.J;
            drawable2.setBounds(i10, i11, i5 + i10, i6 + i11);
            this.F.setVisible(true, z5);
        }
        if (z5) {
            g();
            return;
        }
        Drawable[] compoundDrawablesRelative = getCompoundDrawablesRelative();
        Drawable drawable3 = compoundDrawablesRelative[0];
        Drawable drawable4 = compoundDrawablesRelative[1];
        Drawable drawable5 = compoundDrawablesRelative[2];
        int i12 = this.N;
        if (((i12 == 1 || i12 == 2) && drawable3 != this.F) || (((i12 == 3 || i12 == 4) && drawable5 != this.F) || ((i12 == 16 || i12 == 32) && drawable4 != this.F))) {
            g();
        }
    }

    public final void i(int i5, int i6) {
        if (this.F == null || getLayout() == null) {
            return;
        }
        int i10 = this.N;
        if (i10 != 1 && i10 != 2 && i10 != 3 && i10 != 4) {
            if (i10 == 16 || i10 == 32) {
                this.I = 0;
                if (i10 == 16) {
                    this.J = 0;
                    h(false);
                    return;
                }
                int i11 = this.H;
                if (i11 == 0) {
                    i11 = this.F.getIntrinsicHeight();
                }
                int max = Math.max(0, (((((i6 - getTextHeight()) - getPaddingTop()) - i11) - this.K) - getPaddingBottom()) / 2);
                if (this.J != max) {
                    this.J = max;
                    h(false);
                    return;
                }
                return;
            }
            return;
        }
        this.J = 0;
        Layout.Alignment actualTextAlignment = getActualTextAlignment();
        int i12 = this.N;
        if (i12 == 1 || i12 == 3 || ((i12 == 2 && actualTextAlignment == Layout.Alignment.ALIGN_NORMAL) || (i12 == 4 && actualTextAlignment == Layout.Alignment.ALIGN_OPPOSITE))) {
            this.I = 0;
            h(false);
            return;
        }
        int i13 = this.H;
        if (i13 == 0) {
            i13 = this.F.getIntrinsicWidth();
        }
        int textLayoutWidth = ((((i5 - getTextLayoutWidth()) - getPaddingEnd()) - i13) - this.K) - getPaddingStart();
        if (actualTextAlignment == Layout.Alignment.ALIGN_CENTER) {
            textLayoutWidth /= 2;
        }
        if ((getLayoutDirection() == 1) != (this.N == 4)) {
            textLayoutWidth = -textLayoutWidth;
        }
        if (this.I != textLayoutWidth) {
            this.I = textLayoutWidth;
            h(false);
        }
    }

    @Override // android.widget.Checkable
    public final boolean isChecked() {
        return this.L;
    }

    public final void j() {
        int i5 = (int) (this.f5986c0 - this.f5987d0);
        int i6 = (i5 / 2) + this.U;
        getLayoutParams().width = (int) (this.P + i5);
        setPaddingRelative(this.Q + i6, getPaddingTop(), (this.R + i5) - i6, getPaddingBottom());
    }

    @Override // android.widget.TextView, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (e()) {
            jb.a.I(this, this.f5989v.a(false));
        }
    }

    @Override // android.widget.TextView, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 2);
        d dVar = this.f5989v;
        if (dVar != null && dVar.f18388t) {
            View.mergeDrawableStates(onCreateDrawableState, f5983f0);
        }
        if (this.L) {
            View.mergeDrawableStates(onCreateDrawableState, f5984g0);
        }
        return onCreateDrawableState;
    }

    @Override // androidx.appcompat.widget.s, android.view.View
    public final void onInitializeAccessibilityEvent(AccessibilityEvent accessibilityEvent) {
        super.onInitializeAccessibilityEvent(accessibilityEvent);
        accessibilityEvent.setClassName(getA11yClassName());
        accessibilityEvent.setChecked(this.L);
    }

    @Override // androidx.appcompat.widget.s, android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName(getA11yClassName());
        d dVar = this.f5989v;
        accessibilityNodeInfo.setCheckable(dVar != null && dVar.f18388t);
        accessibilityNodeInfo.setChecked(this.L);
        accessibilityNodeInfo.setClickable(isClickable());
    }

    @Override // androidx.appcompat.widget.s, android.widget.TextView, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        int i12;
        super.onLayout(z5, i5, i6, i10, i11);
        i(getMeasuredWidth(), getMeasuredHeight());
        int i13 = getResources().getConfiguration().orientation;
        if (this.O != i13) {
            this.O = i13;
            this.P = -1.0f;
        }
        if (this.P == -1.0f) {
            this.P = getMeasuredWidth();
            if (this.S == null && (getParent() instanceof c) && ((c) getParent()).getButtonSizeChange() != null) {
                this.S = (LinearLayout.LayoutParams) getLayoutParams();
                LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(this.S);
                layoutParams.width = (int) this.P;
                setLayoutParams(layoutParams);
            }
        }
        boolean z6 = false;
        if (this.W == -1) {
            if (this.F == null) {
                i12 = 0;
            } else {
                int iconPadding = getIconPadding();
                int i14 = this.H;
                if (i14 == 0) {
                    i14 = this.F.getIntrinsicWidth();
                }
                i12 = iconPadding + i14;
            }
            this.W = (getMeasuredWidth() - getTextLayoutWidth()) - i12;
        }
        if (this.Q == -1) {
            this.Q = getPaddingStart();
        }
        if (this.R == -1) {
            this.R = getPaddingEnd();
        }
        if ((getParent() instanceof c) && ((c) getParent()).getOrientation() == 0) {
            z6 = true;
        }
        this.V = z6;
    }

    @Override // android.widget.TextView, android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof b)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        b bVar = (b) parcelable;
        super.onRestoreInstanceState(bVar.f7399d);
        setChecked(bVar.f18364i);
    }

    @Override // android.widget.TextView, android.view.View
    public final Parcelable onSaveInstanceState() {
        b bVar = new b(super.onSaveInstanceState());
        bVar.f18364i = this.L;
        return bVar;
    }

    @Override // androidx.appcompat.widget.s, android.widget.TextView
    public final void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        super.onTextChanged(charSequence, i5, i6, i10);
        i(getMeasuredWidth(), getMeasuredHeight());
    }

    @Override // android.view.View
    public final boolean performClick() {
        if (isEnabled() && this.f5989v.f18389u) {
            toggle();
        }
        return super.performClick();
    }

    @Override // android.view.View
    public final void refreshDrawableState() {
        super.refreshDrawableState();
        if (this.F != null) {
            if (this.F.setState(getDrawableState())) {
                invalidate();
            }
        }
    }

    public void setA11yClassName(String str) {
        this.G = str;
    }

    @Override // android.view.View
    public void setBackground(@NonNull Drawable drawable) {
        setBackgroundDrawable(drawable);
    }

    @Override // android.view.View
    public void setBackgroundColor(int i5) {
        if (!e()) {
            super.setBackgroundColor(i5);
            return;
        }
        d dVar = this.f5989v;
        if (dVar.a(false) != null) {
            dVar.a(false).setTint(i5);
        }
    }

    @Override // androidx.appcompat.widget.s, android.view.View
    public void setBackgroundDrawable(@NonNull Drawable drawable) {
        if (!e()) {
            super.setBackgroundDrawable(drawable);
            return;
        }
        if (drawable == getBackground()) {
            getBackground().setState(drawable.getState());
            return;
        }
        Log.w("MaterialButton", "MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled");
        d dVar = this.f5989v;
        dVar.f18386r = true;
        MaterialButton materialButton = dVar.a;
        materialButton.setSupportBackgroundTintList(dVar.f18381m);
        materialButton.setSupportBackgroundTintMode(dVar.f18380l);
        super.setBackgroundDrawable(drawable);
    }

    @Override // androidx.appcompat.widget.s, android.view.View
    public void setBackgroundResource(int i5) {
        setBackgroundDrawable(i5 != 0 ? ys.d.J(getContext(), i5) : null);
    }

    @Override // android.view.View
    public void setBackgroundTintList(ColorStateList colorStateList) {
        setSupportBackgroundTintList(colorStateList);
    }

    @Override // android.view.View
    public void setBackgroundTintMode(PorterDuff.Mode mode) {
        setSupportBackgroundTintMode(mode);
    }

    public void setCheckable(boolean z5) {
        if (e()) {
            this.f5989v.f18388t = z5;
        }
    }

    @Override // android.widget.Checkable
    public void setChecked(boolean z5) {
        setCheckedInternal(z5);
    }

    public void setCornerRadius(int i5) {
        if (e()) {
            d dVar = this.f5989v;
            if (dVar.f18387s && dVar.j == i5) {
                return;
            }
            dVar.j = i5;
            dVar.f18387s = true;
            lh.l g6 = dVar.f18372b.g();
            g6.b(i5);
            dVar.f18372b = g6.a();
            dVar.f18373c = null;
            dVar.d();
        }
    }

    public void setCornerRadiusResource(int i5) {
        if (e()) {
            setCornerRadius(getResources().getDimensionPixelSize(i5));
        }
    }

    public void setCornerSpringForce(@NonNull j2.i iVar) {
        d dVar = this.f5989v;
        dVar.f18374d = iVar;
        if (dVar.f18373c != null) {
            dVar.d();
        }
    }

    public void setDisplayedWidthDecrease(int i5) {
        this.f5987d0 = Math.min(i5, this.W);
        j();
        invalidate();
    }

    @Override // android.view.View
    public void setElevation(float f2) {
        super.setElevation(f2);
        if (e()) {
            this.f5989v.a(false).p(f2);
        }
    }

    public void setIcon(Drawable drawable) {
        if (this.F != drawable) {
            this.F = drawable;
            h(true);
            i(getMeasuredWidth(), getMeasuredHeight());
        }
    }

    public void setIconGravity(int i5) {
        if (this.N != i5) {
            this.N = i5;
            i(getMeasuredWidth(), getMeasuredHeight());
        }
    }

    public void setIconPadding(int i5) {
        if (this.K != i5) {
            this.K = i5;
            setCompoundDrawablePadding(i5);
        }
    }

    public void setIconResource(int i5) {
        setIcon(i5 != 0 ? ys.d.J(getContext(), i5) : null);
    }

    public void setIconSize(int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException("iconSize cannot be less than 0");
        }
        if (this.H != i5) {
            this.H = i5;
            h(true);
        }
    }

    public void setIconTint(ColorStateList colorStateList) {
        if (this.E != colorStateList) {
            this.E = colorStateList;
            h(false);
        }
    }

    public void setIconTintMode(PorterDuff.Mode mode) {
        if (this.f5992y != mode) {
            this.f5992y = mode;
            h(false);
        }
    }

    public void setIconTintResource(int i5) {
        setIconTint(y0.b.c(getContext(), i5));
    }

    public void setInsetBottom(int i5) {
        d dVar = this.f5989v;
        dVar.b(dVar.f18378h, i5);
    }

    public void setInsetTop(int i5) {
        d dVar = this.f5989v;
        dVar.b(i5, dVar.f18379i);
    }

    public void setInternalBackground(Drawable drawable) {
        super.setBackgroundDrawable(drawable);
    }

    public void setOnPressedChangeListenerInternal(a aVar) {
        this.f5991x = aVar;
    }

    public void setOpticalCenterEnabled(boolean z5) {
        if (this.T != z5) {
            this.T = z5;
            d dVar = this.f5989v;
            if (z5) {
                ni.a aVar = new ni.a(5, this);
                dVar.f18375e = aVar;
                i a = dVar.a(false);
                if (a != null) {
                    a.f13999b0 = aVar;
                }
            } else {
                dVar.f18375e = null;
                i a10 = dVar.a(false);
                if (a10 != null) {
                    a10.f13999b0 = null;
                }
            }
            post(new oh.w(3, this));
        }
    }

    @Override // android.view.View
    public void setPressed(boolean z5) {
        a aVar = this.f5991x;
        if (aVar != null) {
            ((MaterialButtonToggleGroup) ((u) aVar).f17275e).invalidate();
        }
        super.setPressed(z5);
        f(false);
    }

    public void setRippleColor(ColorStateList colorStateList) {
        if (e()) {
            d dVar = this.f5989v;
            MaterialButton materialButton = dVar.a;
            if (dVar.f18383o != colorStateList) {
                dVar.f18383o = colorStateList;
                if (materialButton.getBackground() instanceof RippleDrawable) {
                    ((RippleDrawable) materialButton.getBackground()).setColor(jh.a.b(colorStateList));
                }
            }
        }
    }

    public void setRippleColorResource(int i5) {
        if (e()) {
            setRippleColor(y0.b.c(getContext(), i5));
        }
    }

    @Override // lh.w
    public void setShapeAppearanceModel(@NonNull m mVar) {
        if (!e()) {
            throw new IllegalStateException("Attempted to set ShapeAppearanceModel on a MaterialButton which has an overwritten background.");
        }
        d dVar = this.f5989v;
        dVar.f18372b = mVar;
        dVar.f18373c = null;
        dVar.d();
    }

    public void setShouldDrawSurfaceColorStroke(boolean z5) {
        if (e()) {
            d dVar = this.f5989v;
            dVar.f18385q = z5;
            dVar.e();
        }
    }

    public void setSizeChange(@NonNull b0 b0Var) {
        if (this.a0 != b0Var) {
            this.a0 = b0Var;
            f(true);
        }
    }

    public void setStateListShapeAppearanceModel(@NonNull z zVar) {
        if (!e()) {
            throw new IllegalStateException("Attempted to set StateListShapeAppearanceModel on a MaterialButton which has an overwritten background.");
        }
        d dVar = this.f5989v;
        if (dVar.f18374d == null && zVar.d()) {
            dVar.f18374d = d();
            if (dVar.f18373c != null) {
                dVar.d();
            }
        }
        dVar.f18373c = zVar;
        dVar.d();
    }

    public void setStrokeColor(ColorStateList colorStateList) {
        if (e()) {
            d dVar = this.f5989v;
            if (dVar.f18382n != colorStateList) {
                dVar.f18382n = colorStateList;
                dVar.e();
            }
        }
    }

    public void setStrokeColorResource(int i5) {
        if (e()) {
            setStrokeColor(y0.b.c(getContext(), i5));
        }
    }

    public void setStrokeWidth(int i5) {
        if (e()) {
            d dVar = this.f5989v;
            if (dVar.k != i5) {
                dVar.k = i5;
                dVar.e();
            }
        }
    }

    public void setStrokeWidthResource(int i5) {
        if (e()) {
            setStrokeWidth(getResources().getDimensionPixelSize(i5));
        }
    }

    @Override // androidx.appcompat.widget.s
    public void setSupportBackgroundTintList(ColorStateList colorStateList) {
        if (!e()) {
            super.setSupportBackgroundTintList(colorStateList);
            return;
        }
        d dVar = this.f5989v;
        if (dVar.f18381m != colorStateList) {
            dVar.f18381m = colorStateList;
            if (dVar.a(false) != null) {
                dVar.a(false).setTintList(dVar.f18381m);
            }
        }
    }

    @Override // androidx.appcompat.widget.s
    public void setSupportBackgroundTintMode(PorterDuff.Mode mode) {
        if (!e()) {
            super.setSupportBackgroundTintMode(mode);
            return;
        }
        d dVar = this.f5989v;
        if (dVar.f18380l != mode) {
            dVar.f18380l = mode;
            if (dVar.a(false) == null || dVar.f18380l == null) {
                return;
            }
            dVar.a(false).setTintMode(dVar.f18380l);
        }
    }

    @Override // android.view.View
    public void setTextAlignment(int i5) {
        super.setTextAlignment(i5);
        i(getMeasuredWidth(), getMeasuredHeight());
    }

    public void setToggleCheckedStateOnClick(boolean z5) {
        this.f5989v.f18389u = z5;
    }

    @Override // android.widget.TextView
    public void setWidth(int i5) {
        this.P = -1.0f;
        super.setWidth(i5);
    }

    public void setWidthChangeMax(int i5) {
        if (this.f5985b0 != i5) {
            this.f5985b0 = i5;
            f(true);
        }
    }

    @Override // android.widget.Checkable
    public final void toggle() {
        setChecked(!this.L);
    }
}
