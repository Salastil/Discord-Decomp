package com.google.android.material.chip;

import a5.h0;
import a5.k0;
import android.R;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.InsetDrawable;
import android.graphics.drawable.RippleDrawable;
import android.text.TextPaint;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.PointerIcon;
import android.view.View;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.Checkable;
import android.widget.CompoundButton;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.t;
import androidx.core.view.s0;
import ch.f;
import ch.k;
import ch.m;
import ch.q;
import com.facebook.react.modules.appstate.AppStateModule;
import com.google.android.material.chip.Chip;
import com.reactnativecommunity.webview.RNCWebViewManager;
import java.lang.ref.WeakReference;
import lh.w;
import m3.n;
import ph.a;
import xg.b;
import xg.c;
import xg.d;
import xg.e;

/* loaded from: classes3.dex */
public class Chip extends t implements d, w, Checkable {
    public static final Rect T = new Rect();
    public static final int[] U = {R.attr.state_selected};
    public static final int[] V = {R.attr.state_checkable};
    public View.OnClickListener E;
    public CompoundButton.OnCheckedChangeListener F;
    public boolean G;
    public boolean H;
    public boolean I;
    public boolean J;
    public boolean K;
    public int L;
    public int M;
    public CharSequence N;
    public final c O;
    public boolean P;
    public final Rect Q;
    public final RectF R;
    public final k S;

    /* renamed from: w, reason: collision with root package name */
    public e f6003w;

    /* renamed from: x, reason: collision with root package name */
    public InsetDrawable f6004x;

    /* renamed from: y, reason: collision with root package name */
    public RippleDrawable f6005y;

    public Chip(Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action), attributeSet, com.discord.R.attr.chipStyle);
        int resourceId;
        int resourceId2;
        int resourceId3;
        this.Q = new Rect();
        this.R = new RectF();
        this.S = new k(1, this);
        Context context2 = getContext();
        if (attributeSet != null) {
            if (attributeSet.getAttributeValue("http://schemas.android.com/apk/res/android", AppStateModule.APP_STATE_BACKGROUND) != null) {
                Log.w("Chip", "Do not set the background; Chip manages its own background drawable.");
            }
            if (attributeSet.getAttributeValue("http://schemas.android.com/apk/res/android", "drawableLeft") != null) {
                throw new UnsupportedOperationException("Please set left drawable using R.attr#chipIcon.");
            }
            if (attributeSet.getAttributeValue("http://schemas.android.com/apk/res/android", "drawableStart") != null) {
                throw new UnsupportedOperationException("Please set start drawable using R.attr#chipIcon.");
            }
            if (attributeSet.getAttributeValue("http://schemas.android.com/apk/res/android", "drawableEnd") != null) {
                throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
            }
            if (attributeSet.getAttributeValue("http://schemas.android.com/apk/res/android", "drawableRight") != null) {
                throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
            }
            if (!attributeSet.getAttributeBooleanValue("http://schemas.android.com/apk/res/android", "singleLine", true) || attributeSet.getAttributeIntValue("http://schemas.android.com/apk/res/android", "lines", 1) != 1 || attributeSet.getAttributeIntValue("http://schemas.android.com/apk/res/android", "minLines", 1) != 1 || attributeSet.getAttributeIntValue("http://schemas.android.com/apk/res/android", "maxLines", 1) != 1) {
                throw new UnsupportedOperationException("Chip does not support multi-line text");
            }
            if (attributeSet.getAttributeIntValue("http://schemas.android.com/apk/res/android", "gravity", 8388627) != 8388627) {
                Log.w("Chip", "Chip text must be vertically center and start aligned");
            }
        }
        e eVar = new e(context2, attributeSet);
        Context context3 = eVar.L0;
        int[] iArr = lg.a.f13959h;
        TypedArray f2 = q.f(context3, attributeSet, iArr, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action, new int[0]);
        eVar.f20443l1 = f2.hasValue(37);
        Context context4 = eVar.L0;
        ColorStateList u5 = k0.u(context4, f2, 24);
        if (eVar.f20430e0 != u5) {
            eVar.f20430e0 = u5;
            eVar.onStateChange(eVar.getState());
        }
        ColorStateList u6 = k0.u(context4, f2, 11);
        if (eVar.f20431f0 != u6) {
            eVar.f20431f0 = u6;
            eVar.onStateChange(eVar.getState());
        }
        float dimension = f2.getDimension(19, 0.0f);
        if (eVar.f20433g0 != dimension) {
            eVar.f20433g0 = dimension;
            eVar.invalidateSelf();
            eVar.F();
        }
        if (f2.hasValue(12)) {
            eVar.L(f2.getDimension(12, 0.0f));
        }
        eVar.Q(k0.u(context4, f2, 22));
        eVar.R(f2.getDimension(23, 0.0f));
        eVar.b0(k0.u(context4, f2, 36));
        String text = f2.getText(5);
        text = text == null ? "" : text;
        boolean equals = TextUtils.equals(eVar.f20442l0, text);
        m mVar = eVar.R0;
        if (!equals) {
            eVar.f20442l0 = text;
            mVar.f3557e = true;
            eVar.invalidateSelf();
            eVar.F();
        }
        ih.e eVar2 = (!f2.hasValue(0) || (resourceId3 = f2.getResourceId(0, 0)) == 0) ? null : new ih.e(context4, resourceId3);
        eVar2.f10810l = f2.getDimension(1, eVar2.f10810l);
        mVar.b(eVar2, context4);
        int i5 = f2.getInt(3, 0);
        if (i5 == 1) {
            eVar.f20437i1 = TextUtils.TruncateAt.START;
        } else if (i5 == 2) {
            eVar.f20437i1 = TextUtils.TruncateAt.MIDDLE;
        } else if (i5 == 3) {
            eVar.f20437i1 = TextUtils.TruncateAt.END;
        }
        eVar.P(f2.getBoolean(18, false));
        if (attributeSet != null && attributeSet.getAttributeValue("http://schemas.android.com/apk/res-auto", "chipIconEnabled") != null && attributeSet.getAttributeValue("http://schemas.android.com/apk/res-auto", "chipIconVisible") == null) {
            eVar.P(f2.getBoolean(15, false));
        }
        eVar.M(k0.x(context4, f2, 14));
        if (f2.hasValue(17)) {
            eVar.O(k0.u(context4, f2, 17));
        }
        eVar.N(f2.getDimension(16, -1.0f));
        eVar.Y(f2.getBoolean(31, false));
        if (attributeSet != null && attributeSet.getAttributeValue("http://schemas.android.com/apk/res-auto", "closeIconEnabled") != null && attributeSet.getAttributeValue("http://schemas.android.com/apk/res-auto", "closeIconVisible") == null) {
            eVar.Y(f2.getBoolean(26, false));
        }
        eVar.S(k0.x(context4, f2, 25));
        eVar.X(k0.u(context4, f2, 30));
        eVar.U(f2.getDimension(28, 0.0f));
        eVar.H(f2.getBoolean(6, false));
        eVar.K(f2.getBoolean(10, false));
        if (attributeSet != null && attributeSet.getAttributeValue("http://schemas.android.com/apk/res-auto", "checkedIconEnabled") != null && attributeSet.getAttributeValue("http://schemas.android.com/apk/res-auto", "checkedIconVisible") == null) {
            eVar.K(f2.getBoolean(8, false));
        }
        eVar.I(k0.x(context4, f2, 7));
        if (f2.hasValue(9)) {
            eVar.J(k0.u(context4, f2, 9));
        }
        eVar.B0 = (!f2.hasValue(39) || (resourceId2 = f2.getResourceId(39, 0)) == 0) ? null : mg.c.a(context4, resourceId2);
        eVar.C0 = (!f2.hasValue(33) || (resourceId = f2.getResourceId(33, 0)) == 0) ? null : mg.c.a(context4, resourceId);
        float dimension2 = f2.getDimension(21, 0.0f);
        if (eVar.D0 != dimension2) {
            eVar.D0 = dimension2;
            eVar.invalidateSelf();
            eVar.F();
        }
        eVar.a0(f2.getDimension(35, 0.0f));
        eVar.Z(f2.getDimension(34, 0.0f));
        float dimension3 = f2.getDimension(41, 0.0f);
        if (eVar.G0 != dimension3) {
            eVar.G0 = dimension3;
            eVar.invalidateSelf();
            eVar.F();
        }
        float dimension4 = f2.getDimension(40, 0.0f);
        if (eVar.H0 != dimension4) {
            eVar.H0 = dimension4;
            eVar.invalidateSelf();
            eVar.F();
        }
        eVar.V(f2.getDimension(29, 0.0f));
        eVar.T(f2.getDimension(27, 0.0f));
        float dimension5 = f2.getDimension(13, 0.0f);
        if (eVar.K0 != dimension5) {
            eVar.K0 = dimension5;
            eVar.invalidateSelf();
            eVar.F();
        }
        eVar.f20441k1 = f2.getDimensionPixelSize(4, Integer.MAX_VALUE);
        f2.recycle();
        q.a(context2, attributeSet, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action);
        q.b(context2, attributeSet, iArr, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action, new int[0]);
        TypedArray obtainStyledAttributes = context2.obtainStyledAttributes(attributeSet, iArr, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action);
        this.K = obtainStyledAttributes.getBoolean(32, false);
        TypedValue I0 = n.I0(context2, com.discord.R.attr.minTouchTargetSize);
        this.M = (int) Math.ceil(obtainStyledAttributes.getDimension(20, (int) ((I0 == null || I0.type != 5) ? context2.getResources().getDimension(com.discord.R.dimen.mtrl_min_touch_target_size) : I0.getDimension(context2.getResources().getDisplayMetrics()))));
        obtainStyledAttributes.recycle();
        setChipDrawable(eVar);
        eVar.p(getElevation());
        q.a(context2, attributeSet, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action);
        q.b(context2, attributeSet, iArr, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action, new int[0]);
        TypedArray obtainStyledAttributes2 = context2.obtainStyledAttributes(attributeSet, iArr, com.discord.R.attr.chipStyle, com.discord.R.style.Widget_MaterialComponents_Chip_Action);
        boolean hasValue = obtainStyledAttributes2.hasValue(37);
        obtainStyledAttributes2.recycle();
        this.O = new c(this, this);
        e();
        if (!hasValue) {
            setOutlineProvider(new b(this));
        }
        setChecked(this.G);
        setText(eVar.f20442l0);
        setEllipsize(eVar.f20437i1);
        h();
        if (!this.f6003w.f20439j1) {
            setLines(1);
            setHorizontallyScrolling(true);
        }
        setGravity(8388627);
        g();
        if (this.K) {
            setMinHeight(this.M);
        }
        this.L = getLayoutDirection();
        super.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: xg.a
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public final void onCheckedChanged(CompoundButton compoundButton, boolean z5) {
                CompoundButton.OnCheckedChangeListener onCheckedChangeListener = Chip.this.F;
                if (onCheckedChangeListener != null) {
                    onCheckedChangeListener.onCheckedChanged(compoundButton, z5);
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    @NonNull
    public RectF getCloseIconTouchBounds() {
        RectF rectF = this.R;
        rectF.setEmpty();
        if (d() && this.E != null) {
            e eVar = this.f6003w;
            Rect bounds = eVar.getBounds();
            rectF.setEmpty();
            if (eVar.e0()) {
                float f2 = eVar.K0 + eVar.J0 + eVar.f20453v0 + eVar.I0 + eVar.H0;
                if (eVar.getLayoutDirection() == 0) {
                    float f10 = bounds.right;
                    rectF.right = f10;
                    rectF.left = f10 - f2;
                } else {
                    float f11 = bounds.left;
                    rectF.left = f11;
                    rectF.right = f11 + f2;
                }
                rectF.top = bounds.top;
                rectF.bottom = bounds.bottom;
            }
        }
        return rectF;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @NonNull
    public Rect getCloseIconTouchBoundsInt() {
        RectF closeIconTouchBounds = getCloseIconTouchBounds();
        int i5 = (int) closeIconTouchBounds.left;
        int i6 = (int) closeIconTouchBounds.top;
        int i10 = (int) closeIconTouchBounds.right;
        int i11 = (int) closeIconTouchBounds.bottom;
        Rect rect = this.Q;
        rect.set(i5, i6, i10, i11);
        return rect;
    }

    private ih.e getTextAppearance() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.R0.f3559g;
        }
        return null;
    }

    private void setCloseIconHovered(boolean z5) {
        if (this.I != z5) {
            this.I = z5;
            refreshDrawableState();
        }
    }

    private void setCloseIconPressed(boolean z5) {
        if (this.H != z5) {
            this.H = z5;
            refreshDrawableState();
        }
    }

    public final void c(int i5) {
        this.M = i5;
        if (!this.K) {
            InsetDrawable insetDrawable = this.f6004x;
            if (insetDrawable == null) {
                f();
                return;
            } else {
                if (insetDrawable != null) {
                    this.f6004x = null;
                    setMinWidth(0);
                    setMinHeight((int) getChipMinHeight());
                    f();
                    return;
                }
                return;
            }
        }
        int max = Math.max(0, i5 - ((int) this.f6003w.f20433g0));
        int max2 = Math.max(0, i5 - this.f6003w.getIntrinsicWidth());
        if (max2 <= 0 && max <= 0) {
            InsetDrawable insetDrawable2 = this.f6004x;
            if (insetDrawable2 == null) {
                f();
                return;
            } else {
                if (insetDrawable2 != null) {
                    this.f6004x = null;
                    setMinWidth(0);
                    setMinHeight((int) getChipMinHeight());
                    f();
                    return;
                }
                return;
            }
        }
        int i6 = max2 > 0 ? max2 / 2 : 0;
        int i10 = max > 0 ? max / 2 : 0;
        if (this.f6004x != null) {
            Rect rect = new Rect();
            this.f6004x.getPadding(rect);
            if (rect.top == i10 && rect.bottom == i10 && rect.left == i6 && rect.right == i6) {
                f();
                return;
            }
        }
        if (getMinHeight() != i5) {
            setMinHeight(i5);
        }
        if (getMinWidth() != i5) {
            setMinWidth(i5);
        }
        this.f6004x = new InsetDrawable((Drawable) this.f6003w, i6, i10, i6, i10);
        f();
    }

    /* JADX WARN: Removed duplicated region for block: B:11:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0011 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean d() {
        e eVar = this.f6003w;
        if (eVar == null) {
            return false;
        }
        Object obj = eVar.f20450s0;
        if (obj != null) {
            if (obj instanceof c1.b) {
            }
            return obj == null;
        }
        obj = null;
        if (obj == null) {
        }
    }

    @Override // android.view.View
    public final boolean dispatchHoverEvent(MotionEvent motionEvent) {
        return !this.P ? super.dispatchHoverEvent(motionEvent) : this.O.dispatchHoverEvent(motionEvent) || super.dispatchHoverEvent(motionEvent);
    }

    @Override // android.view.View
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        if (!this.P) {
            return super.dispatchKeyEvent(keyEvent);
        }
        c cVar = this.O;
        if (!cVar.dispatchKeyEvent(keyEvent) || cVar.getKeyboardFocusedVirtualViewId() == Integer.MIN_VALUE) {
            return super.dispatchKeyEvent(keyEvent);
        }
        return true;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [boolean, int] */
    @Override // androidx.appcompat.widget.t, android.widget.CompoundButton, android.widget.TextView, android.view.View
    public final void drawableStateChanged() {
        super.drawableStateChanged();
        e eVar = this.f6003w;
        boolean z5 = false;
        int i5 = 0;
        z5 = false;
        if (eVar != null && e.E(eVar.f20450s0)) {
            e eVar2 = this.f6003w;
            ?? isEnabled = isEnabled();
            int i6 = isEnabled;
            if (this.J) {
                i6 = isEnabled + 1;
            }
            int i10 = i6;
            if (this.I) {
                i10 = i6 + 1;
            }
            int i11 = i10;
            if (this.H) {
                i11 = i10 + 1;
            }
            int i12 = i11;
            if (isChecked()) {
                i12 = i11 + 1;
            }
            int[] iArr = new int[i12];
            if (isEnabled()) {
                iArr[0] = 16842910;
                i5 = 1;
            }
            if (this.J) {
                iArr[i5] = 16842908;
                i5++;
            }
            if (this.I) {
                iArr[i5] = 16843623;
                i5++;
            }
            if (this.H) {
                iArr[i5] = 16842919;
                i5++;
            }
            if (isChecked()) {
                iArr[i5] = 16842913;
            }
            z5 = eVar2.W(iArr);
        }
        if (z5) {
            invalidate();
        }
    }

    public final void e() {
        e eVar;
        if (!d() || (eVar = this.f6003w) == null || !eVar.f20449r0 || this.E == null) {
            s0.p(this, null);
            this.P = false;
        } else {
            s0.p(this, this.O);
            this.P = true;
        }
    }

    public final void f() {
        this.f6005y = new RippleDrawable(jh.a.b(this.f6003w.f20440k0), getBackgroundDrawable(), null);
        this.f6003w.getClass();
        setBackground(this.f6005y);
        g();
    }

    public final void g() {
        e eVar;
        if (TextUtils.isEmpty(getText()) || (eVar = this.f6003w) == null) {
            return;
        }
        int B = (int) (eVar.B() + eVar.K0 + eVar.H0);
        e eVar2 = this.f6003w;
        int A = (int) (eVar2.A() + eVar2.D0 + eVar2.G0);
        if (this.f6004x != null) {
            Rect rect = new Rect();
            this.f6004x.getPadding(rect);
            A += rect.left;
            B += rect.right;
        }
        setPaddingRelative(A, getPaddingTop(), B, getPaddingBottom());
    }

    @Override // android.widget.CheckBox, android.widget.CompoundButton, android.widget.Button, android.widget.TextView, android.view.View
    @NonNull
    public CharSequence getAccessibilityClassName() {
        if (!TextUtils.isEmpty(this.N)) {
            return this.N;
        }
        e eVar = this.f6003w;
        if (eVar == null || !eVar.f20455x0) {
            return isClickable() ? "android.widget.Button" : "android.view.View";
        }
        getParent();
        return "android.widget.Button";
    }

    public Drawable getBackgroundDrawable() {
        InsetDrawable insetDrawable = this.f6004x;
        return insetDrawable == null ? this.f6003w : insetDrawable;
    }

    public Drawable getCheckedIcon() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20457z0;
        }
        return null;
    }

    public ColorStateList getCheckedIconTint() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.A0;
        }
        return null;
    }

    public ColorStateList getChipBackgroundColor() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20431f0;
        }
        return null;
    }

    public float getChipCornerRadius() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return Math.max(0.0f, eVar.C());
        }
        return 0.0f;
    }

    public Drawable getChipDrawable() {
        return this.f6003w;
    }

    public float getChipEndPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.K0;
        }
        return 0.0f;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Drawable getChipIcon() {
        Drawable drawable;
        e eVar = this.f6003w;
        if (eVar == null || (drawable = eVar.f20445n0) == 0) {
            return null;
        }
        if (!(drawable instanceof c1.b)) {
            return drawable;
        }
        return null;
    }

    public float getChipIconSize() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20447p0;
        }
        return 0.0f;
    }

    public ColorStateList getChipIconTint() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20446o0;
        }
        return null;
    }

    public float getChipMinHeight() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20433g0;
        }
        return 0.0f;
    }

    public float getChipStartPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.D0;
        }
        return 0.0f;
    }

    public ColorStateList getChipStrokeColor() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20436i0;
        }
        return null;
    }

    public float getChipStrokeWidth() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20438j0;
        }
        return 0.0f;
    }

    @Deprecated
    public CharSequence getChipText() {
        return getText();
    }

    /* JADX WARN: Multi-variable type inference failed */
    public Drawable getCloseIcon() {
        Drawable drawable;
        e eVar = this.f6003w;
        if (eVar == null || (drawable = eVar.f20450s0) == 0) {
            return null;
        }
        if (!(drawable instanceof c1.b)) {
            return drawable;
        }
        return null;
    }

    public CharSequence getCloseIconContentDescription() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20454w0;
        }
        return null;
    }

    public float getCloseIconEndPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.J0;
        }
        return 0.0f;
    }

    public float getCloseIconSize() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20453v0;
        }
        return 0.0f;
    }

    public float getCloseIconStartPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.I0;
        }
        return 0.0f;
    }

    public ColorStateList getCloseIconTint() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20452u0;
        }
        return null;
    }

    @Override // android.widget.TextView
    public TextUtils.TruncateAt getEllipsize() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20437i1;
        }
        return null;
    }

    @Override // android.widget.TextView, android.view.View
    public final void getFocusedRect(Rect rect) {
        if (this.P) {
            c cVar = this.O;
            if (cVar.getKeyboardFocusedVirtualViewId() == 1 || cVar.getAccessibilityFocusedVirtualViewId() == 1) {
                rect.set(getCloseIconTouchBoundsInt());
                return;
            }
        }
        super.getFocusedRect(rect);
    }

    public mg.c getHideMotionSpec() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.C0;
        }
        return null;
    }

    public float getIconEndPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.F0;
        }
        return 0.0f;
    }

    public float getIconStartPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.E0;
        }
        return 0.0f;
    }

    public ColorStateList getRippleColor() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.f20440k0;
        }
        return null;
    }

    @NonNull
    public lh.m getShapeAppearanceModel() {
        return this.f6003w.f14001e.a;
    }

    public mg.c getShowMotionSpec() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.B0;
        }
        return null;
    }

    public float getTextEndPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.H0;
        }
        return 0.0f;
    }

    public float getTextStartPadding() {
        e eVar = this.f6003w;
        if (eVar != null) {
            return eVar.G0;
        }
        return 0.0f;
    }

    public final void h() {
        TextPaint paint = getPaint();
        e eVar = this.f6003w;
        if (eVar != null) {
            paint.drawableState = eVar.getState();
        }
        ih.e textAppearance = getTextAppearance();
        if (textAppearance != null) {
            textAppearance.d(getContext(), paint, this.S);
        }
    }

    @Override // android.widget.TextView, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        jb.a.I(this, this.f6003w);
    }

    @Override // android.widget.CompoundButton, android.widget.TextView, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        int[] onCreateDrawableState = super.onCreateDrawableState(i5 + 2);
        if (isChecked()) {
            View.mergeDrawableStates(onCreateDrawableState, U);
        }
        e eVar = this.f6003w;
        if (eVar != null && eVar.f20455x0) {
            View.mergeDrawableStates(onCreateDrawableState, V);
        }
        return onCreateDrawableState;
    }

    @Override // android.widget.TextView, android.view.View
    public final void onFocusChanged(boolean z5, int i5, Rect rect) {
        super.onFocusChanged(z5, i5, rect);
        if (this.P) {
            this.O.onFocusChanged(z5, i5, rect);
        }
    }

    @Override // android.view.View
    public final boolean onHoverEvent(MotionEvent motionEvent) {
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 7) {
            setCloseIconHovered(getCloseIconTouchBounds().contains(motionEvent.getX(), motionEvent.getY()));
        } else if (actionMasked == 10) {
            setCloseIconHovered(false);
        }
        return super.onHoverEvent(motionEvent);
    }

    @Override // android.view.View
    public final void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo accessibilityNodeInfo) {
        super.onInitializeAccessibilityNodeInfo(accessibilityNodeInfo);
        accessibilityNodeInfo.setClassName(getAccessibilityClassName());
        e eVar = this.f6003w;
        accessibilityNodeInfo.setCheckable(eVar != null && eVar.f20455x0);
        accessibilityNodeInfo.setClickable(isClickable());
        getParent();
    }

    @Override // android.widget.Button, android.widget.TextView, android.view.View
    public final PointerIcon onResolvePointerIcon(MotionEvent motionEvent, int i5) {
        return (getCloseIconTouchBounds().contains(motionEvent.getX(), motionEvent.getY()) && isEnabled()) ? PointerIcon.getSystemIcon(getContext(), RNCWebViewManager.COMMAND_CLEAR_HISTORY) : super.onResolvePointerIcon(motionEvent, i5);
    }

    @Override // android.widget.TextView, android.view.View
    public final void onRtlPropertiesChanged(int i5) {
        super.onRtlPropertiesChanged(i5);
        if (this.L != i5) {
            this.L = i5;
            g();
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x001e, code lost:
    
        if (r0 != 3) goto L28;
     */
    @Override // android.widget.TextView, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        int actionMasked = motionEvent.getActionMasked();
        boolean contains = getCloseIconTouchBounds().contains(motionEvent.getX(), motionEvent.getY());
        if (actionMasked != 0) {
            if (actionMasked != 1) {
                if (actionMasked == 2) {
                    if (this.H) {
                        if (!contains) {
                            setCloseIconPressed(false);
                        }
                        z5 = true;
                    }
                }
                z5 = false;
            } else if (this.H) {
                playSoundEffect(0);
                View.OnClickListener onClickListener = this.E;
                if (onClickListener != null) {
                    onClickListener.onClick(this);
                }
                if (this.P) {
                    this.O.sendEventForVirtualView(1, 1);
                }
                z5 = true;
                setCloseIconPressed(false);
            }
            z5 = false;
            setCloseIconPressed(false);
        } else {
            if (contains) {
                setCloseIconPressed(true);
                z5 = true;
            }
            z5 = false;
        }
        return z5 || super.onTouchEvent(motionEvent);
    }

    public void setAccessibilityClassName(CharSequence charSequence) {
        this.N = charSequence;
    }

    @Override // android.view.View
    public void setBackground(Drawable drawable) {
        if (drawable == getBackgroundDrawable() || drawable == this.f6005y) {
            super.setBackground(drawable);
        } else {
            Log.w("Chip", "Do not set the background; Chip manages its own background drawable.");
        }
    }

    @Override // android.view.View
    public void setBackgroundColor(int i5) {
        Log.w("Chip", "Do not set the background color; Chip manages its own background drawable.");
    }

    @Override // androidx.appcompat.widget.t, android.view.View
    public void setBackgroundDrawable(Drawable drawable) {
        if (drawable == getBackgroundDrawable() || drawable == this.f6005y) {
            super.setBackgroundDrawable(drawable);
        } else {
            Log.w("Chip", "Do not set the background drawable; Chip manages its own background drawable.");
        }
    }

    @Override // androidx.appcompat.widget.t, android.view.View
    public void setBackgroundResource(int i5) {
        Log.w("Chip", "Do not set the background resource; Chip manages its own background drawable.");
    }

    @Override // android.view.View
    public void setBackgroundTintList(ColorStateList colorStateList) {
        Log.w("Chip", "Do not set the background tint list; Chip manages its own background drawable.");
    }

    @Override // android.view.View
    public void setBackgroundTintMode(PorterDuff.Mode mode) {
        Log.w("Chip", "Do not set the background tint mode; Chip manages its own background drawable.");
    }

    public void setCheckable(boolean z5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.H(z5);
        }
    }

    public void setCheckableResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.H(eVar.L0.getResources().getBoolean(i5));
        }
    }

    @Override // android.widget.CompoundButton, android.widget.Checkable
    public void setChecked(boolean z5) {
        e eVar = this.f6003w;
        if (eVar == null) {
            this.G = z5;
        } else if (eVar.f20455x0) {
            super.setChecked(z5);
        }
    }

    public void setCheckedIcon(Drawable drawable) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.I(drawable);
        }
    }

    @Deprecated
    public void setCheckedIconEnabled(boolean z5) {
        setCheckedIconVisible(z5);
    }

    @Deprecated
    public void setCheckedIconEnabledResource(int i5) {
        setCheckedIconVisible(i5);
    }

    public void setCheckedIconResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.I(ys.d.J(eVar.L0, i5));
        }
    }

    public void setCheckedIconTint(ColorStateList colorStateList) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.J(colorStateList);
        }
    }

    public void setCheckedIconTintResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.J(y0.b.c(eVar.L0, i5));
        }
    }

    public void setCheckedIconVisible(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.K(eVar.L0.getResources().getBoolean(i5));
        }
    }

    public void setChipBackgroundColor(ColorStateList colorStateList) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.f20431f0 == colorStateList) {
            return;
        }
        eVar.f20431f0 = colorStateList;
        eVar.onStateChange(eVar.getState());
    }

    public void setChipBackgroundColorResource(int i5) {
        ColorStateList c6;
        e eVar = this.f6003w;
        if (eVar == null || eVar.f20431f0 == (c6 = y0.b.c(eVar.L0, i5))) {
            return;
        }
        eVar.f20431f0 = c6;
        eVar.onStateChange(eVar.getState());
    }

    @Deprecated
    public void setChipCornerRadius(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.L(f2);
        }
    }

    @Deprecated
    public void setChipCornerRadiusResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.L(eVar.L0.getResources().getDimension(i5));
        }
    }

    public void setChipDrawable(@NonNull e eVar) {
        e eVar2 = this.f6003w;
        if (eVar2 != eVar) {
            if (eVar2 != null) {
                eVar2.f20435h1 = new WeakReference(null);
            }
            this.f6003w = eVar;
            eVar.f20439j1 = false;
            eVar.f20435h1 = new WeakReference(this);
            c(this.M);
        }
    }

    public void setChipEndPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.K0 == f2) {
            return;
        }
        eVar.K0 = f2;
        eVar.invalidateSelf();
        eVar.F();
    }

    public void setChipEndPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            float dimension = eVar.L0.getResources().getDimension(i5);
            if (eVar.K0 != dimension) {
                eVar.K0 = dimension;
                eVar.invalidateSelf();
                eVar.F();
            }
        }
    }

    public void setChipIcon(Drawable drawable) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.M(drawable);
        }
    }

    @Deprecated
    public void setChipIconEnabled(boolean z5) {
        setChipIconVisible(z5);
    }

    @Deprecated
    public void setChipIconEnabledResource(int i5) {
        setChipIconVisible(i5);
    }

    public void setChipIconResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.M(ys.d.J(eVar.L0, i5));
        }
    }

    public void setChipIconSize(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.N(f2);
        }
    }

    public void setChipIconSizeResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.N(eVar.L0.getResources().getDimension(i5));
        }
    }

    public void setChipIconTint(ColorStateList colorStateList) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.O(colorStateList);
        }
    }

    public void setChipIconTintResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.O(y0.b.c(eVar.L0, i5));
        }
    }

    public void setChipIconVisible(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.P(eVar.L0.getResources().getBoolean(i5));
        }
    }

    public void setChipMinHeight(float f2) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.f20433g0 == f2) {
            return;
        }
        eVar.f20433g0 = f2;
        eVar.invalidateSelf();
        eVar.F();
    }

    public void setChipMinHeightResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            float dimension = eVar.L0.getResources().getDimension(i5);
            if (eVar.f20433g0 != dimension) {
                eVar.f20433g0 = dimension;
                eVar.invalidateSelf();
                eVar.F();
            }
        }
    }

    public void setChipStartPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.D0 == f2) {
            return;
        }
        eVar.D0 = f2;
        eVar.invalidateSelf();
        eVar.F();
    }

    public void setChipStartPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            float dimension = eVar.L0.getResources().getDimension(i5);
            if (eVar.D0 != dimension) {
                eVar.D0 = dimension;
                eVar.invalidateSelf();
                eVar.F();
            }
        }
    }

    public void setChipStrokeColor(ColorStateList colorStateList) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.Q(colorStateList);
        }
    }

    public void setChipStrokeColorResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.Q(y0.b.c(eVar.L0, i5));
        }
    }

    public void setChipStrokeWidth(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.R(f2);
        }
    }

    public void setChipStrokeWidthResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.R(eVar.L0.getResources().getDimension(i5));
        }
    }

    @Deprecated
    public void setChipText(CharSequence charSequence) {
        setText(charSequence);
    }

    @Deprecated
    public void setChipTextResource(int i5) {
        setText(getResources().getString(i5));
    }

    public void setCloseIcon(Drawable drawable) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.S(drawable);
        }
        e();
    }

    public void setCloseIconContentDescription(CharSequence charSequence) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.f20454w0 == charSequence) {
            return;
        }
        j1.b c6 = j1.b.c();
        c6.getClass();
        h0 h0Var = j1.d.a;
        eVar.f20454w0 = c6.d(charSequence);
        eVar.invalidateSelf();
    }

    @Deprecated
    public void setCloseIconEnabled(boolean z5) {
        setCloseIconVisible(z5);
    }

    @Deprecated
    public void setCloseIconEnabledResource(int i5) {
        setCloseIconVisible(i5);
    }

    public void setCloseIconEndPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.T(f2);
        }
    }

    public void setCloseIconEndPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.T(eVar.L0.getResources().getDimension(i5));
        }
    }

    public void setCloseIconResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.S(ys.d.J(eVar.L0, i5));
        }
        e();
    }

    public void setCloseIconSize(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.U(f2);
        }
    }

    public void setCloseIconSizeResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.U(eVar.L0.getResources().getDimension(i5));
        }
    }

    public void setCloseIconStartPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.V(f2);
        }
    }

    public void setCloseIconStartPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.V(eVar.L0.getResources().getDimension(i5));
        }
    }

    public void setCloseIconTint(ColorStateList colorStateList) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.X(colorStateList);
        }
    }

    public void setCloseIconTintResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.X(y0.b.c(eVar.L0, i5));
        }
    }

    public void setCloseIconVisible(int i5) {
        setCloseIconVisible(getResources().getBoolean(i5));
    }

    @Override // androidx.appcompat.widget.t, android.widget.TextView
    public final void setCompoundDrawables(Drawable drawable, Drawable drawable2, Drawable drawable3, Drawable drawable4) {
        if (drawable != null) {
            throw new UnsupportedOperationException("Please set start drawable using R.attr#chipIcon.");
        }
        if (drawable3 != null) {
            throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
        }
        super.setCompoundDrawables(drawable, drawable2, drawable3, drawable4);
    }

    @Override // androidx.appcompat.widget.t, android.widget.TextView
    public final void setCompoundDrawablesRelative(Drawable drawable, Drawable drawable2, Drawable drawable3, Drawable drawable4) {
        if (drawable != null) {
            throw new UnsupportedOperationException("Please set start drawable using R.attr#chipIcon.");
        }
        if (drawable3 != null) {
            throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
        }
        super.setCompoundDrawablesRelative(drawable, drawable2, drawable3, drawable4);
    }

    @Override // android.widget.TextView
    public final void setCompoundDrawablesRelativeWithIntrinsicBounds(int i5, int i6, int i10, int i11) {
        if (i5 != 0) {
            throw new UnsupportedOperationException("Please set start drawable using R.attr#chipIcon.");
        }
        if (i10 != 0) {
            throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
        }
        super.setCompoundDrawablesRelativeWithIntrinsicBounds(i5, i6, i10, i11);
    }

    @Override // android.widget.TextView
    public final void setCompoundDrawablesWithIntrinsicBounds(int i5, int i6, int i10, int i11) {
        if (i5 != 0) {
            throw new UnsupportedOperationException("Please set start drawable using R.attr#chipIcon.");
        }
        if (i10 != 0) {
            throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
        }
        super.setCompoundDrawablesWithIntrinsicBounds(i5, i6, i10, i11);
    }

    @Override // android.view.View
    public void setElevation(float f2) {
        super.setElevation(f2);
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.p(f2);
        }
    }

    @Override // android.widget.TextView
    public void setEllipsize(TextUtils.TruncateAt truncateAt) {
        if (this.f6003w == null) {
            return;
        }
        if (truncateAt == TextUtils.TruncateAt.MARQUEE) {
            throw new UnsupportedOperationException("Text within a chip are not allowed to scroll.");
        }
        super.setEllipsize(truncateAt);
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.f20437i1 = truncateAt;
        }
    }

    public void setEnsureMinTouchTargetSize(boolean z5) {
        this.K = z5;
        c(this.M);
    }

    @Override // android.widget.TextView
    public void setGravity(int i5) {
        if (i5 != 8388627) {
            Log.w("Chip", "Chip text must be vertically center and start aligned");
        } else {
            super.setGravity(i5);
        }
    }

    public void setHideMotionSpec(mg.c cVar) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.C0 = cVar;
        }
    }

    public void setHideMotionSpecResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.C0 = mg.c.a(eVar.L0, i5);
        }
    }

    public void setIconEndPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.Z(f2);
        }
    }

    public void setIconEndPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.Z(eVar.L0.getResources().getDimension(i5));
        }
    }

    public void setIconStartPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.a0(f2);
        }
    }

    public void setIconStartPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.a0(eVar.L0.getResources().getDimension(i5));
        }
    }

    @Override // android.view.View
    public void setLayoutDirection(int i5) {
        if (this.f6003w == null) {
            return;
        }
        super.setLayoutDirection(i5);
    }

    @Override // android.widget.TextView
    public void setLines(int i5) {
        if (i5 > 1) {
            throw new UnsupportedOperationException("Chip does not support multi-line text");
        }
        super.setLines(i5);
    }

    @Override // android.widget.TextView
    public void setMaxLines(int i5) {
        if (i5 > 1) {
            throw new UnsupportedOperationException("Chip does not support multi-line text");
        }
        super.setMaxLines(i5);
    }

    @Override // android.widget.TextView
    public void setMaxWidth(int i5) {
        super.setMaxWidth(i5);
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.f20441k1 = i5;
        }
    }

    @Override // android.widget.TextView
    public void setMinLines(int i5) {
        if (i5 > 1) {
            throw new UnsupportedOperationException("Chip does not support multi-line text");
        }
        super.setMinLines(i5);
    }

    @Override // android.widget.CompoundButton
    public void setOnCheckedChangeListener(CompoundButton.OnCheckedChangeListener onCheckedChangeListener) {
        this.F = onCheckedChangeListener;
    }

    public void setOnCloseIconClickListener(View.OnClickListener onClickListener) {
        this.E = onClickListener;
        e();
    }

    public void setRippleColor(ColorStateList colorStateList) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.b0(colorStateList);
        }
        this.f6003w.getClass();
        f();
    }

    public void setRippleColorResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.b0(y0.b.c(eVar.L0, i5));
            this.f6003w.getClass();
            f();
        }
    }

    @Override // lh.w
    public void setShapeAppearanceModel(@NonNull lh.m mVar) {
        this.f6003w.setShapeAppearanceModel(mVar);
    }

    public void setShowMotionSpec(mg.c cVar) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.B0 = cVar;
        }
    }

    public void setShowMotionSpecResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.B0 = mg.c.a(eVar.L0, i5);
        }
    }

    @Override // android.widget.TextView
    public void setSingleLine(boolean z5) {
        if (!z5) {
            throw new UnsupportedOperationException("Chip does not support multi-line text");
        }
        super.setSingleLine(z5);
    }

    @Override // android.widget.TextView
    public final void setText(CharSequence charSequence, TextView.BufferType bufferType) {
        e eVar = this.f6003w;
        if (eVar == null) {
            return;
        }
        if (charSequence == null) {
            charSequence = "";
        }
        super.setText(eVar.f20439j1 ? null : charSequence, bufferType);
        e eVar2 = this.f6003w;
        if (eVar2 == null || TextUtils.equals(eVar2.f20442l0, charSequence)) {
            return;
        }
        eVar2.f20442l0 = charSequence;
        eVar2.R0.f3557e = true;
        eVar2.invalidateSelf();
        eVar2.F();
    }

    public void setTextAppearance(ih.e eVar) {
        e eVar2 = this.f6003w;
        if (eVar2 != null) {
            eVar2.R0.b(eVar, eVar2.L0);
        }
        h();
    }

    public void setTextAppearanceResource(int i5) {
        setTextAppearance(getContext(), i5);
    }

    public void setTextEndPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.H0 == f2) {
            return;
        }
        eVar.H0 = f2;
        eVar.invalidateSelf();
        eVar.F();
    }

    public void setTextEndPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            float dimension = eVar.L0.getResources().getDimension(i5);
            if (eVar.H0 != dimension) {
                eVar.H0 = dimension;
                eVar.invalidateSelf();
                eVar.F();
            }
        }
    }

    @Override // android.widget.TextView
    public final void setTextSize(int i5, float f2) {
        super.setTextSize(i5, f2);
        e eVar = this.f6003w;
        if (eVar != null) {
            float applyDimension = TypedValue.applyDimension(i5, f2, getResources().getDisplayMetrics());
            m mVar = eVar.R0;
            ih.e eVar2 = mVar.f3559g;
            if (eVar2 != null) {
                eVar2.f10810l = applyDimension;
                mVar.a.setTextSize(applyDimension);
                eVar.a();
            }
        }
        h();
    }

    public void setTextStartPadding(float f2) {
        e eVar = this.f6003w;
        if (eVar == null || eVar.G0 == f2) {
            return;
        }
        eVar.G0 = f2;
        eVar.invalidateSelf();
        eVar.F();
    }

    public void setTextStartPaddingResource(int i5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            float dimension = eVar.L0.getResources().getDimension(i5);
            if (eVar.G0 != dimension) {
                eVar.G0 = dimension;
                eVar.invalidateSelf();
                eVar.F();
            }
        }
    }

    public void setCloseIconVisible(boolean z5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.Y(z5);
        }
        e();
    }

    public void setCheckedIconVisible(boolean z5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.K(z5);
        }
    }

    public void setChipIconVisible(boolean z5) {
        e eVar = this.f6003w;
        if (eVar != null) {
            eVar.P(z5);
        }
    }

    @Override // android.widget.TextView
    public final void setCompoundDrawablesRelativeWithIntrinsicBounds(Drawable drawable, Drawable drawable2, Drawable drawable3, Drawable drawable4) {
        if (drawable != null) {
            throw new UnsupportedOperationException("Please set start drawable using R.attr#chipIcon.");
        }
        if (drawable3 == null) {
            super.setCompoundDrawablesRelativeWithIntrinsicBounds(drawable, drawable2, drawable3, drawable4);
            return;
        }
        throw new UnsupportedOperationException("Please set end drawable using R.attr#closeIcon.");
    }

    @Override // android.widget.TextView
    public final void setCompoundDrawablesWithIntrinsicBounds(Drawable drawable, Drawable drawable2, Drawable drawable3, Drawable drawable4) {
        if (drawable != null) {
            throw new UnsupportedOperationException("Please set left drawable using R.attr#chipIcon.");
        }
        if (drawable3 == null) {
            super.setCompoundDrawablesWithIntrinsicBounds(drawable, drawable2, drawable3, drawable4);
            return;
        }
        throw new UnsupportedOperationException("Please set right drawable using R.attr#closeIcon.");
    }

    @Override // android.widget.TextView
    public final void setTextAppearance(Context context, int i5) {
        super.setTextAppearance(context, i5);
        e eVar = this.f6003w;
        if (eVar != null) {
            Context context2 = eVar.L0;
            eVar.R0.b(new ih.e(context2, i5), context2);
        }
        h();
    }

    @Override // android.widget.TextView
    public void setTextAppearance(int i5) {
        super.setTextAppearance(i5);
        e eVar = this.f6003w;
        if (eVar != null) {
            Context context = eVar.L0;
            eVar.R0.b(new ih.e(context, i5), context);
        }
        h();
    }

    public void setInternalOnCheckedChangeListener(f fVar) {
    }
}
