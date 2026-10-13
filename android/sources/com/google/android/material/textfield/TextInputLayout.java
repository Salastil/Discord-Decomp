package com.google.android.material.textfield;

import a3.h;
import a5.h0;
import a5.k0;
import android.R;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.graphics.drawable.RippleDrawable;
import android.graphics.drawable.StateListDrawable;
import android.os.Build;
import android.os.Parcelable;
import android.text.Editable;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewStructure;
import android.view.ViewTreeObserver;
import android.view.animation.LinearInterpolator;
import android.widget.AutoCompleteTextView;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.appcompat.widget.n1;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import ch.c;
import ch.q;
import com.google.android.material.internal.CheckableImageButton;
import java.util.Iterator;
import java.util.LinkedHashSet;
import k0.d;
import lh.g;
import lh.i;
import lh.l;
import lh.m;
import m3.f;
import n1.k;
import oh.a0;
import oh.e;
import oh.n;
import oh.r;
import oh.t;
import oh.v;
import oh.w;
import oh.x;
import oh.y;
import oh.z;
import ph.a;
import y0.b;

/* loaded from: classes3.dex */
public class TextInputLayout extends LinearLayout implements ViewTreeObserver.OnGlobalLayoutListener {

    /* renamed from: a1, reason: collision with root package name */
    public static final int[][] f6113a1 = {new int[]{R.attr.state_pressed}, new int[0]};
    public ColorDrawable A0;
    public int B0;
    public final LinkedHashSet C0;
    public ColorDrawable D0;
    public int E;
    public int E0;
    public int F;
    public Drawable F0;
    public int G;
    public ColorStateList G0;
    public final r H;
    public ColorStateList H0;
    public boolean I;
    public int I0;
    public int J;
    public int J0;
    public boolean K;
    public int K0;
    public z L;
    public ColorStateList L0;
    public AppCompatTextView M;
    public int M0;
    public int N;
    public int N0;
    public int O;
    public int O0;
    public CharSequence P;
    public int P0;
    public boolean Q;
    public int Q0;
    public AppCompatTextView R;
    public int R0;
    public ColorStateList S;
    public boolean S0;
    public int T;
    public final c T0;
    public f U;
    public boolean U0;
    public f V;
    public boolean V0;
    public ColorStateList W;
    public ValueAnimator W0;
    public boolean X0;
    public boolean Y0;
    public boolean Z0;
    public ColorStateList a0;

    /* renamed from: b0, reason: collision with root package name */
    public ColorStateList f6114b0;

    /* renamed from: c0, reason: collision with root package name */
    public ColorStateList f6115c0;

    /* renamed from: d, reason: collision with root package name */
    public final FrameLayout f6116d;

    /* renamed from: d0, reason: collision with root package name */
    public boolean f6117d0;

    /* renamed from: e, reason: collision with root package name */
    public final v f6118e;

    /* renamed from: e0, reason: collision with root package name */
    public CharSequence f6119e0;

    /* renamed from: f0, reason: collision with root package name */
    public boolean f6120f0;

    /* renamed from: g0, reason: collision with root package name */
    public i f6121g0;
    public i h0;

    /* renamed from: i, reason: collision with root package name */
    public final n f6122i;

    /* renamed from: i0, reason: collision with root package name */
    public StateListDrawable f6123i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f6124j0;

    /* renamed from: k0, reason: collision with root package name */
    public i f6125k0;

    /* renamed from: l0, reason: collision with root package name */
    public i f6126l0;

    /* renamed from: m0, reason: collision with root package name */
    public m f6127m0;

    /* renamed from: n0, reason: collision with root package name */
    public boolean f6128n0;

    /* renamed from: o0, reason: collision with root package name */
    public final int f6129o0;

    /* renamed from: p0, reason: collision with root package name */
    public int f6130p0;

    /* renamed from: q0, reason: collision with root package name */
    public int f6131q0;

    /* renamed from: r0, reason: collision with root package name */
    public int f6132r0;

    /* renamed from: s0, reason: collision with root package name */
    public int f6133s0;

    /* renamed from: t0, reason: collision with root package name */
    public int f6134t0;

    /* renamed from: u0, reason: collision with root package name */
    public int f6135u0;

    /* renamed from: v, reason: collision with root package name */
    public final int f6136v;

    /* renamed from: v0, reason: collision with root package name */
    public int f6137v0;

    /* renamed from: w, reason: collision with root package name */
    public EditText f6138w;

    /* renamed from: w0, reason: collision with root package name */
    public final Rect f6139w0;

    /* renamed from: x, reason: collision with root package name */
    public CharSequence f6140x;

    /* renamed from: x0, reason: collision with root package name */
    public final Rect f6141x0;

    /* renamed from: y, reason: collision with root package name */
    public int f6142y;

    /* renamed from: y0, reason: collision with root package name */
    public final RectF f6143y0;

    /* renamed from: z0, reason: collision with root package name */
    public Typeface f6144z0;

    public TextInputLayout(@NonNull Context context, AttributeSet attributeSet) {
        super(a.a(context, attributeSet, com.discord.R.attr.textInputStyle, com.discord.R.style.Widget_Design_TextInputLayout), attributeSet, com.discord.R.attr.textInputStyle);
        this.f6142y = -1;
        this.E = -1;
        this.F = -1;
        this.G = -1;
        this.H = new r(this);
        this.L = new k(13);
        this.f6139w0 = new Rect();
        this.f6141x0 = new Rect();
        this.f6143y0 = new RectF();
        this.C0 = new LinkedHashSet();
        c cVar = new c(this);
        this.T0 = cVar;
        this.Z0 = false;
        Context context2 = getContext();
        setOrientation(1);
        setWillNotDraw(false);
        setAddStatesFromChildren(true);
        FrameLayout frameLayout = new FrameLayout(context2);
        this.f6116d = frameLayout;
        frameLayout.setAddStatesFromChildren(true);
        LinearInterpolator linearInterpolator = mg.a.a;
        cVar.X = linearInterpolator;
        cVar.l(false);
        cVar.W = linearInterpolator;
        cVar.l(false);
        cVar.s(8388659);
        e4.m g6 = q.g(context2, attributeSet, lg.a.O, com.discord.R.attr.textInputStyle, com.discord.R.style.Widget_Design_TextInputLayout, 22, 20, 40, 45, 50);
        v vVar = new v(this, g6);
        this.f6118e = vVar;
        TypedArray typedArray = (TypedArray) g6.f7964i;
        this.f6117d0 = typedArray.getBoolean(48, true);
        setHint(typedArray.getText(4));
        this.V0 = typedArray.getBoolean(47, true);
        this.U0 = typedArray.getBoolean(42, true);
        if (typedArray.hasValue(6)) {
            setMinEms(typedArray.getInt(6, -1));
        } else if (typedArray.hasValue(3)) {
            setMinWidth(typedArray.getDimensionPixelSize(3, -1));
        }
        if (typedArray.hasValue(5)) {
            setMaxEms(typedArray.getInt(5, -1));
        } else if (typedArray.hasValue(2)) {
            setMaxWidth(typedArray.getDimensionPixelSize(2, -1));
        }
        this.f6127m0 = m.c(context2, attributeSet, com.discord.R.attr.textInputStyle, com.discord.R.style.Widget_Design_TextInputLayout).a();
        this.f6129o0 = context2.getResources().getDimensionPixelOffset(com.discord.R.dimen.mtrl_textinput_box_label_cutout_padding);
        this.f6131q0 = typedArray.getDimensionPixelOffset(9, 0);
        this.f6136v = getResources().getDimensionPixelSize(com.discord.R.dimen.m3_multiline_hint_filled_text_extra_space);
        this.f6133s0 = typedArray.getDimensionPixelSize(16, context2.getResources().getDimensionPixelSize(com.discord.R.dimen.mtrl_textinput_box_stroke_width_default));
        this.f6134t0 = typedArray.getDimensionPixelSize(17, context2.getResources().getDimensionPixelSize(com.discord.R.dimen.mtrl_textinput_box_stroke_width_focused));
        this.f6132r0 = this.f6133s0;
        float dimension = typedArray.getDimension(13, -1.0f);
        float dimension2 = typedArray.getDimension(12, -1.0f);
        float dimension3 = typedArray.getDimension(10, -1.0f);
        float dimension4 = typedArray.getDimension(11, -1.0f);
        l g10 = this.f6127m0.g();
        if (dimension >= 0.0f) {
            g10.f14010e = new lh.a(dimension);
        }
        if (dimension2 >= 0.0f) {
            g10.f14011f = new lh.a(dimension2);
        }
        if (dimension3 >= 0.0f) {
            g10.f14012g = new lh.a(dimension3);
        }
        if (dimension4 >= 0.0f) {
            g10.f14013h = new lh.a(dimension4);
        }
        this.f6127m0 = g10.a();
        ColorStateList v5 = k0.v(context2, g6, 7);
        if (v5 != null) {
            int defaultColor = v5.getDefaultColor();
            this.M0 = defaultColor;
            this.f6137v0 = defaultColor;
            if (v5.isStateful()) {
                this.N0 = v5.getColorForState(new int[]{-16842910}, -1);
                this.O0 = v5.getColorForState(new int[]{R.attr.state_focused, R.attr.state_enabled}, -1);
                this.P0 = v5.getColorForState(new int[]{R.attr.state_hovered, R.attr.state_enabled}, -1);
            } else {
                this.O0 = this.M0;
                ColorStateList c6 = b.c(context2, com.discord.R.color.mtrl_filled_background_color);
                this.N0 = c6.getColorForState(new int[]{-16842910}, -1);
                this.P0 = c6.getColorForState(new int[]{R.attr.state_hovered}, -1);
            }
        } else {
            this.f6137v0 = 0;
            this.M0 = 0;
            this.N0 = 0;
            this.O0 = 0;
            this.P0 = 0;
        }
        if (typedArray.hasValue(1)) {
            ColorStateList T = g6.T(1);
            this.H0 = T;
            this.G0 = T;
        }
        ColorStateList v6 = k0.v(context2, g6, 14);
        this.K0 = typedArray.getColor(14, 0);
        this.I0 = context2.getColor(com.discord.R.color.mtrl_textinput_default_box_stroke_color);
        this.Q0 = context2.getColor(com.discord.R.color.mtrl_textinput_disabled_color);
        this.J0 = context2.getColor(com.discord.R.color.mtrl_textinput_hovered_box_stroke_color);
        if (v6 != null) {
            setBoxStrokeColorStateList(v6);
        }
        if (typedArray.hasValue(15)) {
            setBoxStrokeErrorColor(k0.v(context2, g6, 15));
        }
        if (typedArray.getResourceId(50, -1) != -1) {
            setHintTextAppearance(typedArray.getResourceId(50, 0));
        }
        this.f6114b0 = g6.T(24);
        this.f6115c0 = g6.T(25);
        int resourceId = typedArray.getResourceId(40, 0);
        CharSequence text = typedArray.getText(35);
        int i5 = typedArray.getInt(34, 1);
        boolean z5 = typedArray.getBoolean(36, false);
        int resourceId2 = typedArray.getResourceId(45, 0);
        boolean z6 = typedArray.getBoolean(44, false);
        CharSequence text2 = typedArray.getText(43);
        int resourceId3 = typedArray.getResourceId(58, 0);
        CharSequence text3 = typedArray.getText(57);
        boolean z7 = typedArray.getBoolean(18, false);
        setCounterMaxLength(typedArray.getInt(19, -1));
        this.O = typedArray.getResourceId(22, 0);
        this.N = typedArray.getResourceId(20, 0);
        setBoxBackgroundMode(typedArray.getInt(8, 0));
        setErrorContentDescription(text);
        setErrorAccessibilityLiveRegion(i5);
        setCounterOverflowTextAppearance(this.N);
        setHelperTextTextAppearance(resourceId2);
        setErrorTextAppearance(resourceId);
        setCounterTextAppearance(this.O);
        setPlaceholderText(text3);
        setPlaceholderTextAppearance(resourceId3);
        if (typedArray.hasValue(41)) {
            setErrorTextColor(g6.T(41));
        }
        if (typedArray.hasValue(46)) {
            setHelperTextColor(g6.T(46));
        }
        if (typedArray.hasValue(51)) {
            setHintTextColor(g6.T(51));
        }
        if (typedArray.hasValue(23)) {
            setCounterTextColor(g6.T(23));
        }
        if (typedArray.hasValue(21)) {
            setCounterOverflowTextColor(g6.T(21));
        }
        if (typedArray.hasValue(59)) {
            setPlaceholderTextColor(g6.T(59));
        }
        n nVar = new n(this, g6);
        this.f6122i = nVar;
        boolean z8 = typedArray.getBoolean(0, true);
        setHintMaxLines(typedArray.getInt(49, 1));
        g6.e0();
        setImportantForAccessibility(2);
        if (Build.VERSION.SDK_INT >= 26) {
            setImportantForAutofill(1);
        }
        frameLayout.addView(vVar);
        frameLayout.addView(nVar);
        addView(frameLayout);
        setEnabled(z8);
        setHelperTextEnabled(z6);
        setErrorEnabled(z5);
        setCounterEnabled(z7);
        setHelperText(text2);
    }

    private Drawable getEditTextBoxBackground() {
        EditText editText = this.f6138w;
        if (!(editText instanceof AutoCompleteTextView) || editText.getInputType() != 0) {
            return this.f6121g0;
        }
        int w5 = com.facebook.imagepipeline.nativecode.c.w(com.discord.R.attr.colorControlHighlight, this.f6138w);
        int i5 = this.f6130p0;
        int[][] iArr = f6113a1;
        if (i5 != 2) {
            if (i5 != 1) {
                return null;
            }
            i iVar = this.f6121g0;
            int i6 = this.f6137v0;
            return new RippleDrawable(new ColorStateList(iArr, new int[]{com.facebook.imagepipeline.nativecode.c.Q(w5, i6, 0.1f), i6}), iVar, iVar);
        }
        Context context = getContext();
        i iVar2 = this.f6121g0;
        TypedValue L0 = m3.n.L0(context, "TextInputLayout", com.discord.R.attr.colorSurface);
        int i10 = L0.resourceId;
        int color = i10 != 0 ? context.getColor(i10) : L0.data;
        i iVar3 = new i(iVar2.f14001e.a);
        int Q = com.facebook.imagepipeline.nativecode.c.Q(w5, color, 0.1f);
        iVar3.q(new ColorStateList(iArr, new int[]{Q, 0}));
        iVar3.setTint(color);
        ColorStateList colorStateList = new ColorStateList(iArr, new int[]{Q, color});
        i iVar4 = new i(iVar2.f14001e.a);
        iVar4.setTint(-1);
        return new LayerDrawable(new Drawable[]{new RippleDrawable(colorStateList, iVar3, iVar4), iVar2});
    }

    private Drawable getOrCreateFilledDropDownMenuBackground() {
        if (this.f6123i0 == null) {
            StateListDrawable stateListDrawable = new StateListDrawable();
            this.f6123i0 = stateListDrawable;
            stateListDrawable.addState(new int[]{R.attr.state_above_anchor}, getOrCreateOutlinedDropDownMenuBackground());
            this.f6123i0.addState(new int[0], h(false));
        }
        return this.f6123i0;
    }

    private Drawable getOrCreateOutlinedDropDownMenuBackground() {
        if (this.h0 == null) {
            this.h0 = h(true);
        }
        return this.h0;
    }

    public static void m(ViewGroup viewGroup, boolean z5) {
        int childCount = viewGroup.getChildCount();
        for (int i5 = 0; i5 < childCount; i5++) {
            View childAt = viewGroup.getChildAt(i5);
            childAt.setEnabled(z5);
            if (childAt instanceof ViewGroup) {
                m((ViewGroup) childAt, z5);
            }
        }
    }

    private void setEditText(EditText editText) {
        if (this.f6138w != null) {
            throw new IllegalArgumentException("We already have an EditText, can only have one");
        }
        if (getEndIconMode() != 3 && !(editText instanceof TextInputEditText)) {
            Log.i("TextInputLayout", "EditText added is not a TextInputEditText. Please switch to using that class instead.");
        }
        this.f6138w = editText;
        int i5 = this.f6142y;
        if (i5 != -1) {
            setMinEms(i5);
        } else {
            setMinWidth(this.F);
        }
        int i6 = this.E;
        if (i6 != -1) {
            setMaxEms(i6);
        } else {
            setMaxWidth(this.G);
        }
        this.f6124j0 = false;
        k();
        setTextInputAccessibilityDelegate(new y(this));
        Typeface typeface = this.f6138w.getTypeface();
        c cVar = this.T0;
        boolean t5 = cVar.t(typeface);
        boolean z5 = cVar.z(typeface);
        if (t5 || z5) {
            cVar.l(false);
        }
        cVar.y(this.f6138w.getTextSize());
        float letterSpacing = this.f6138w.getLetterSpacing();
        if (cVar.h0 != letterSpacing) {
            cVar.h0 = letterSpacing;
            cVar.l(false);
        }
        int gravity = this.f6138w.getGravity();
        cVar.s((gravity & (-113)) | 48);
        cVar.x(gravity);
        this.R0 = editText.getMinimumHeight();
        this.f6138w.addTextChangedListener(new x(this, editText));
        if (this.G0 == null) {
            this.G0 = this.f6138w.getHintTextColors();
        }
        if (this.f6117d0) {
            if (TextUtils.isEmpty(this.f6119e0)) {
                CharSequence hint = this.f6138w.getHint();
                this.f6140x = hint;
                setHint(hint);
                this.f6138w.setHint((CharSequence) null);
            }
            this.f6120f0 = true;
        }
        if (Build.VERSION.SDK_INT >= 29) {
            r();
        }
        if (this.M != null) {
            p(this.f6138w.getText());
        }
        t();
        this.H.b();
        this.f6118e.bringToFront();
        n nVar = this.f6122i;
        nVar.bringToFront();
        Iterator it = this.C0.iterator();
        while (it.hasNext()) {
            ((oh.m) it.next()).a(this);
        }
        nVar.m();
        if (!isEnabled()) {
            editText.setEnabled(false);
        }
        w(false, true);
    }

    private void setHintInternal(CharSequence charSequence) {
        if (TextUtils.equals(charSequence, this.f6119e0)) {
            return;
        }
        this.f6119e0 = charSequence;
        this.T0.B(charSequence);
        if (this.S0) {
            return;
        }
        l();
    }

    private void setPlaceholderTextEnabled(boolean z5) {
        if (this.Q == z5) {
            return;
        }
        if (z5) {
            AppCompatTextView appCompatTextView = this.R;
            if (appCompatTextView != null) {
                this.f6116d.addView(appCompatTextView);
                this.R.setVisibility(0);
            }
        } else {
            AppCompatTextView appCompatTextView2 = this.R;
            if (appCompatTextView2 != null) {
                appCompatTextView2.setVisibility(8);
            }
            this.R = null;
        }
        this.Q = z5;
    }

    public final void a() {
        if (this.f6138w == null || this.f6130p0 != 1) {
            return;
        }
        if (getHintMaxLines() != 1) {
            EditText editText = this.f6138w;
            editText.setPaddingRelative(editText.getPaddingStart(), (int) (this.T0.g() + this.f6136v), this.f6138w.getPaddingEnd(), getResources().getDimensionPixelSize(com.discord.R.dimen.material_filled_edittext_font_1_3_padding_bottom));
        } else if (getContext().getResources().getConfiguration().fontScale >= 2.0f) {
            EditText editText2 = this.f6138w;
            editText2.setPaddingRelative(editText2.getPaddingStart(), getResources().getDimensionPixelSize(com.discord.R.dimen.material_filled_edittext_font_2_0_padding_top), this.f6138w.getPaddingEnd(), getResources().getDimensionPixelSize(com.discord.R.dimen.material_filled_edittext_font_2_0_padding_bottom));
        } else if (k0.C(getContext())) {
            EditText editText3 = this.f6138w;
            editText3.setPaddingRelative(editText3.getPaddingStart(), getResources().getDimensionPixelSize(com.discord.R.dimen.material_filled_edittext_font_1_3_padding_top), this.f6138w.getPaddingEnd(), getResources().getDimensionPixelSize(com.discord.R.dimen.material_filled_edittext_font_1_3_padding_bottom));
        }
    }

    @Override // android.view.ViewGroup
    public final void addView(View view, int i5, ViewGroup.LayoutParams layoutParams) {
        if (!(view instanceof EditText)) {
            super.addView(view, i5, layoutParams);
            return;
        }
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(layoutParams);
        layoutParams2.gravity = (layoutParams2.gravity & (-113)) | 16;
        FrameLayout frameLayout = this.f6116d;
        frameLayout.addView(view, layoutParams2);
        frameLayout.setLayoutParams(layoutParams);
        v();
        setEditText((EditText) view);
    }

    public final void b(float f2) {
        c cVar = this.T0;
        if (cVar.f3498b == f2) {
            return;
        }
        int i5 = 2;
        if (this.W0 == null) {
            ValueAnimator valueAnimator = new ValueAnimator();
            this.W0 = valueAnimator;
            valueAnimator.setInterpolator(ta.a.H(getContext(), com.discord.R.attr.motionEasingEmphasizedInterpolator, mg.a.f14493b));
            this.W0.setDuration(ta.a.G(getContext(), com.discord.R.attr.motionDurationMedium4, 167));
            this.W0.addUpdateListener(new ch.n(i5, this));
        }
        this.W0.setFloatValues(cVar.f3498b, f2);
        this.W0.start();
    }

    public final void c() {
        int i5;
        int i6;
        i iVar = this.f6121g0;
        if (iVar == null) {
            return;
        }
        m mVar = iVar.f14001e.a;
        m mVar2 = this.f6127m0;
        if (mVar != mVar2) {
            iVar.setShapeAppearanceModel(mVar2);
        }
        if (this.f6130p0 == 2 && (i5 = this.f6132r0) > -1 && (i6 = this.f6135u0) != 0) {
            i iVar2 = this.f6121g0;
            iVar2.f14001e.k = i5;
            iVar2.invalidateSelf();
            ColorStateList valueOf = ColorStateList.valueOf(i6);
            g gVar = iVar2.f14001e;
            if (gVar.f13986e != valueOf) {
                gVar.f13986e = valueOf;
                iVar2.onStateChange(iVar2.getState());
            }
        }
        int i10 = this.f6137v0;
        if (this.f6130p0 == 1) {
            i10 = b1.c.c(this.f6137v0, com.facebook.imagepipeline.nativecode.c.x(getContext(), com.discord.R.attr.colorSurface, 0));
        }
        this.f6137v0 = i10;
        this.f6121g0.q(ColorStateList.valueOf(i10));
        i iVar3 = this.f6125k0;
        if (iVar3 != null && this.f6126l0 != null) {
            if (this.f6132r0 > -1 && this.f6135u0 != 0) {
                iVar3.q(this.f6138w.isFocused() ? ColorStateList.valueOf(this.I0) : ColorStateList.valueOf(this.f6135u0));
                this.f6126l0.q(ColorStateList.valueOf(this.f6135u0));
            }
            invalidate();
        }
        u();
    }

    public final Rect d(Rect rect) {
        if (this.f6138w == null) {
            throw new IllegalStateException();
        }
        boolean z5 = getLayoutDirection() == 1;
        int i5 = rect.bottom;
        Rect rect2 = this.f6141x0;
        rect2.bottom = i5;
        int i6 = this.f6130p0;
        if (i6 == 1) {
            rect2.left = i(rect.left, z5);
            rect2.top = rect.top + this.f6131q0;
            rect2.right = j(rect.right, z5);
            return rect2;
        }
        if (i6 != 2) {
            rect2.left = i(rect.left, z5);
            rect2.top = getPaddingTop();
            rect2.right = j(rect.right, z5);
            return rect2;
        }
        rect2.left = this.f6138w.getPaddingLeft() + rect.left;
        rect2.top = rect.top - e();
        rect2.right = rect.right - this.f6138w.getPaddingRight();
        return rect2;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void dispatchProvideAutofillStructure(ViewStructure viewStructure, int i5) {
        EditText editText = this.f6138w;
        if (editText == null) {
            super.dispatchProvideAutofillStructure(viewStructure, i5);
            return;
        }
        if (this.f6140x != null) {
            boolean z5 = this.f6120f0;
            this.f6120f0 = false;
            CharSequence hint = editText.getHint();
            this.f6138w.setHint(this.f6140x);
            try {
                super.dispatchProvideAutofillStructure(viewStructure, i5);
                return;
            } finally {
                this.f6138w.setHint(hint);
                this.f6120f0 = z5;
            }
        }
        viewStructure.setAutofillId(getAutofillId());
        onProvideAutofillStructure(viewStructure, i5);
        onProvideAutofillVirtualStructure(viewStructure, i5);
        FrameLayout frameLayout = this.f6116d;
        viewStructure.setChildCount(frameLayout.getChildCount());
        for (int i6 = 0; i6 < frameLayout.getChildCount(); i6++) {
            View childAt = frameLayout.getChildAt(i6);
            ViewStructure newChild = viewStructure.newChild(i6);
            childAt.dispatchProvideAutofillStructure(newChild, i5);
            if (childAt == this.f6138w) {
                newChild.setHint(getHint());
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void dispatchRestoreInstanceState(SparseArray sparseArray) {
        this.Y0 = true;
        super.dispatchRestoreInstanceState(sparseArray);
        this.Y0 = false;
    }

    @Override // android.view.View
    public final void draw(Canvas canvas) {
        i iVar;
        super.draw(canvas);
        boolean z5 = this.f6117d0;
        c cVar = this.T0;
        if (z5) {
            cVar.f(canvas);
        }
        if (this.f6126l0 == null || (iVar = this.f6125k0) == null) {
            return;
        }
        iVar.draw(canvas);
        if (this.f6138w.isFocused()) {
            Rect bounds = this.f6126l0.getBounds();
            Rect bounds2 = this.f6125k0.getBounds();
            float f2 = cVar.f3498b;
            int centerX = bounds2.centerX();
            bounds.left = mg.a.c(centerX, bounds2.left, f2);
            bounds.right = mg.a.c(centerX, bounds2.right, f2);
            this.f6126l0.draw(canvas);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0034  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x004d  */
    @Override // android.view.ViewGroup, android.view.View
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void drawableStateChanged() {
        boolean z5;
        ColorStateList colorStateList;
        if (this.X0) {
            return;
        }
        this.X0 = true;
        super.drawableStateChanged();
        int[] drawableState = getDrawableState();
        c cVar = this.T0;
        if (cVar != null) {
            cVar.S = drawableState;
            ColorStateList colorStateList2 = cVar.f3523p;
            if ((colorStateList2 != null && colorStateList2.isStateful()) || ((colorStateList = cVar.f3521o) != null && colorStateList.isStateful())) {
                cVar.l(false);
                z5 = true;
                if (this.f6138w != null) {
                    w(isLaidOut() && isEnabled(), false);
                }
                t();
                z();
                if (z5) {
                    invalidate();
                }
                this.X0 = false;
            }
        }
        z5 = false;
        if (this.f6138w != null) {
        }
        t();
        z();
        if (z5) {
        }
        this.X0 = false;
    }

    public final int e() {
        if (this.f6117d0) {
            int i5 = this.f6130p0;
            c cVar = this.T0;
            if (i5 == 0) {
                return (int) cVar.g();
            }
            if (i5 == 2) {
                if (getHintMaxLines() == 1) {
                    return (int) (cVar.g() / 2.0f);
                }
                float g6 = cVar.g();
                TextPaint textPaint = cVar.V;
                textPaint.setTextSize(cVar.f3519n);
                textPaint.setTypeface(cVar.f3538x);
                textPaint.setLetterSpacing(cVar.f3509g0);
                return Math.max(0, (int) (g6 - ((-textPaint.ascent()) / 2.0f)));
            }
        }
        return 0;
    }

    public final f f() {
        f fVar = new f();
        fVar.f2539i = ta.a.G(getContext(), com.discord.R.attr.motionDurationShort2, 87);
        fVar.f2540v = ta.a.H(getContext(), com.discord.R.attr.motionEasingLinearInterpolator, mg.a.a);
        return fVar;
    }

    public final boolean g() {
        return this.f6117d0 && !TextUtils.isEmpty(this.f6119e0) && (this.f6121g0 instanceof oh.g);
    }

    @Override // android.widget.LinearLayout, android.view.View
    public int getBaseline() {
        EditText editText = this.f6138w;
        if (editText == null) {
            return super.getBaseline();
        }
        return e() + getPaddingTop() + editText.getBaseline();
    }

    @NonNull
    public i getBoxBackground() {
        int i5 = this.f6130p0;
        if (i5 == 1 || i5 == 2) {
            return this.f6121g0;
        }
        throw new IllegalStateException();
    }

    public int getBoxBackgroundColor() {
        return this.f6137v0;
    }

    public int getBoxBackgroundMode() {
        return this.f6130p0;
    }

    public int getBoxCollapsedPaddingTop() {
        return this.f6131q0;
    }

    public float getBoxCornerRadiusBottomEnd() {
        int layoutDirection = getLayoutDirection();
        RectF rectF = this.f6143y0;
        return layoutDirection == 1 ? this.f6127m0.f14022h.a(rectF) : this.f6127m0.f14021g.a(rectF);
    }

    public float getBoxCornerRadiusBottomStart() {
        int layoutDirection = getLayoutDirection();
        RectF rectF = this.f6143y0;
        return layoutDirection == 1 ? this.f6127m0.f14021g.a(rectF) : this.f6127m0.f14022h.a(rectF);
    }

    public float getBoxCornerRadiusTopEnd() {
        int layoutDirection = getLayoutDirection();
        RectF rectF = this.f6143y0;
        return layoutDirection == 1 ? this.f6127m0.f14019e.a(rectF) : this.f6127m0.f14020f.a(rectF);
    }

    public float getBoxCornerRadiusTopStart() {
        int layoutDirection = getLayoutDirection();
        RectF rectF = this.f6143y0;
        return layoutDirection == 1 ? this.f6127m0.f14020f.a(rectF) : this.f6127m0.f14019e.a(rectF);
    }

    public int getBoxStrokeColor() {
        return this.K0;
    }

    public ColorStateList getBoxStrokeErrorColor() {
        return this.L0;
    }

    public int getBoxStrokeWidth() {
        return this.f6133s0;
    }

    public int getBoxStrokeWidthFocused() {
        return this.f6134t0;
    }

    public int getCounterMaxLength() {
        return this.J;
    }

    public CharSequence getCounterOverflowDescription() {
        AppCompatTextView appCompatTextView;
        if (this.I && this.K && (appCompatTextView = this.M) != null) {
            return appCompatTextView.getContentDescription();
        }
        return null;
    }

    public ColorStateList getCounterOverflowTextColor() {
        return this.a0;
    }

    public ColorStateList getCounterTextColor() {
        return this.W;
    }

    public ColorStateList getCursorColor() {
        return this.f6114b0;
    }

    public ColorStateList getCursorErrorColor() {
        return this.f6115c0;
    }

    public ColorStateList getDefaultHintTextColor() {
        return this.G0;
    }

    public EditText getEditText() {
        return this.f6138w;
    }

    public CharSequence getEndIconContentDescription() {
        return this.f6122i.f15920y.getContentDescription();
    }

    public Drawable getEndIconDrawable() {
        return this.f6122i.f15920y.getDrawable();
    }

    public int getEndIconMinSize() {
        return this.f6122i.J;
    }

    public int getEndIconMode() {
        return this.f6122i.F;
    }

    @NonNull
    public ImageView.ScaleType getEndIconScaleType() {
        return this.f6122i.K;
    }

    @NonNull
    public CheckableImageButton getEndIconView() {
        return this.f6122i.f15920y;
    }

    public CharSequence getError() {
        r rVar = this.H;
        if (rVar.f15941q) {
            return rVar.f15940p;
        }
        return null;
    }

    public int getErrorAccessibilityLiveRegion() {
        return this.H.f15944t;
    }

    public CharSequence getErrorContentDescription() {
        return this.H.f15943s;
    }

    public int getErrorCurrentTextColors() {
        AppCompatTextView appCompatTextView = this.H.f15942r;
        if (appCompatTextView != null) {
            return appCompatTextView.getCurrentTextColor();
        }
        return -1;
    }

    public Drawable getErrorIconDrawable() {
        return this.f6122i.f15916i.getDrawable();
    }

    public CharSequence getHelperText() {
        r rVar = this.H;
        if (rVar.f15948x) {
            return rVar.f15947w;
        }
        return null;
    }

    public int getHelperTextCurrentTextColor() {
        AppCompatTextView appCompatTextView = this.H.f15949y;
        if (appCompatTextView != null) {
            return appCompatTextView.getCurrentTextColor();
        }
        return -1;
    }

    public CharSequence getHint() {
        if (this.f6117d0) {
            return this.f6119e0;
        }
        return null;
    }

    public final float getHintCollapsedTextHeight() {
        return this.T0.g();
    }

    public final int getHintCurrentCollapsedTextColor() {
        c cVar = this.T0;
        return cVar.h(cVar.f3523p);
    }

    public int getHintMaxLines() {
        return this.T0.f3522o0;
    }

    public ColorStateList getHintTextColor() {
        return this.H0;
    }

    @NonNull
    public z getLengthCounter() {
        return this.L;
    }

    public int getMaxEms() {
        return this.E;
    }

    public int getMaxWidth() {
        return this.G;
    }

    public int getMinEms() {
        return this.f6142y;
    }

    public int getMinWidth() {
        return this.F;
    }

    @Deprecated
    public CharSequence getPasswordVisibilityToggleContentDescription() {
        return this.f6122i.f15920y.getContentDescription();
    }

    @Deprecated
    public Drawable getPasswordVisibilityToggleDrawable() {
        return this.f6122i.f15920y.getDrawable();
    }

    public CharSequence getPlaceholderText() {
        if (this.Q) {
            return this.P;
        }
        return null;
    }

    public int getPlaceholderTextAppearance() {
        return this.T;
    }

    public ColorStateList getPlaceholderTextColor() {
        return this.S;
    }

    public CharSequence getPrefixText() {
        return this.f6118e.f15962i;
    }

    public ColorStateList getPrefixTextColor() {
        return this.f6118e.f15961e.getTextColors();
    }

    @NonNull
    public TextView getPrefixTextView() {
        return this.f6118e.f15961e;
    }

    @NonNull
    public m getShapeAppearanceModel() {
        return this.f6127m0;
    }

    public CharSequence getStartIconContentDescription() {
        return this.f6118e.f15963v.getContentDescription();
    }

    public Drawable getStartIconDrawable() {
        return this.f6118e.f15963v.getDrawable();
    }

    public int getStartIconMinSize() {
        return this.f6118e.f15966y;
    }

    @NonNull
    public ImageView.ScaleType getStartIconScaleType() {
        return this.f6118e.E;
    }

    public CharSequence getSuffixText() {
        return this.f6122i.M;
    }

    public ColorStateList getSuffixTextColor() {
        return this.f6122i.N.getTextColors();
    }

    @NonNull
    public TextView getSuffixTextView() {
        return this.f6122i.N;
    }

    public Typeface getTypeface() {
        return this.f6144z0;
    }

    public final i h(boolean z5) {
        float dimensionPixelOffset = getResources().getDimensionPixelOffset(com.discord.R.dimen.mtrl_shape_corner_size_small_component);
        float f2 = z5 ? dimensionPixelOffset : 0.0f;
        EditText editText = this.f6138w;
        float popupElevation = editText instanceof t ? ((t) editText).getPopupElevation() : getResources().getDimensionPixelOffset(com.discord.R.dimen.m3_comp_outlined_autocomplete_menu_container_elevation);
        int dimensionPixelOffset2 = getResources().getDimensionPixelOffset(com.discord.R.dimen.mtrl_exposed_dropdown_menu_popup_vertical_padding);
        lh.k kVar = new lh.k();
        lh.k kVar2 = new lh.k();
        lh.k kVar3 = new lh.k();
        lh.k kVar4 = new lh.k();
        int i5 = 0;
        lh.f fVar = new lh.f(i5);
        lh.f fVar2 = new lh.f(i5);
        lh.f fVar3 = new lh.f(i5);
        lh.f fVar4 = new lh.f(i5);
        lh.a aVar = new lh.a(f2);
        lh.a aVar2 = new lh.a(f2);
        lh.a aVar3 = new lh.a(dimensionPixelOffset);
        lh.a aVar4 = new lh.a(dimensionPixelOffset);
        m mVar = new m();
        mVar.a = kVar;
        mVar.f14016b = kVar2;
        mVar.f14017c = kVar3;
        mVar.f14018d = kVar4;
        mVar.f14019e = aVar;
        mVar.f14020f = aVar2;
        mVar.f14021g = aVar4;
        mVar.f14022h = aVar3;
        mVar.f14023i = fVar;
        mVar.j = fVar2;
        mVar.k = fVar3;
        mVar.f14024l = fVar4;
        EditText editText2 = this.f6138w;
        ColorStateList dropDownBackgroundTintList = editText2 instanceof t ? ((t) editText2).getDropDownBackgroundTintList() : null;
        Context context = getContext();
        if (dropDownBackgroundTintList == null) {
            Paint paint = i.f13997c0;
            TypedValue L0 = m3.n.L0(context, i.class.getSimpleName(), com.discord.R.attr.colorSurface);
            int i6 = L0.resourceId;
            dropDownBackgroundTintList = ColorStateList.valueOf(i6 != 0 ? context.getColor(i6) : L0.data);
        }
        i iVar = new i();
        iVar.m(context);
        iVar.q(dropDownBackgroundTintList);
        iVar.p(popupElevation);
        iVar.setShapeAppearanceModel(mVar);
        g gVar = iVar.f14001e;
        if (gVar.f13989h == null) {
            gVar.f13989h = new Rect();
        }
        iVar.f14001e.f13989h.set(0, dimensionPixelOffset2, 0, dimensionPixelOffset2);
        iVar.invalidateSelf();
        return iVar;
    }

    public final int i(int i5, boolean z5) {
        return ((z5 || getPrefixText() == null) ? (!z5 || getSuffixText() == null) ? this.f6138w.getCompoundPaddingLeft() : this.f6122i.c() : this.f6118e.a()) + i5;
    }

    public final int j(int i5, boolean z5) {
        return i5 - ((z5 || getSuffixText() == null) ? (!z5 || getPrefixText() == null) ? this.f6138w.getCompoundPaddingRight() : this.f6118e.a() : this.f6122i.c());
    }

    public final void k() {
        int i5 = this.f6130p0;
        if (i5 == 0) {
            this.f6121g0 = null;
            this.f6125k0 = null;
            this.f6126l0 = null;
        } else if (i5 == 1) {
            this.f6121g0 = new i(this.f6127m0);
            this.f6125k0 = new i();
            this.f6126l0 = new i();
        } else {
            if (i5 != 2) {
                throw new IllegalArgumentException(d.m(new StringBuilder(), this.f6130p0, " is illegal; only @BoxBackgroundMode constants are supported."));
            }
            if (!this.f6117d0 || (this.f6121g0 instanceof oh.g)) {
                this.f6121g0 = new i(this.f6127m0);
            } else {
                m mVar = this.f6127m0;
                int i6 = oh.g.f15898f0;
                if (mVar == null) {
                    mVar = new m();
                }
                e eVar = new e(mVar, new RectF());
                oh.f fVar = new oh.f(eVar);
                fVar.f15899e0 = eVar;
                this.f6121g0 = fVar;
            }
            this.f6125k0 = null;
            this.f6126l0 = null;
        }
        u();
        z();
        if (this.f6130p0 == 1) {
            if (getContext().getResources().getConfiguration().fontScale >= 2.0f) {
                this.f6131q0 = getResources().getDimensionPixelSize(com.discord.R.dimen.material_font_2_0_box_collapsed_padding_top);
            } else if (k0.C(getContext())) {
                this.f6131q0 = getResources().getDimensionPixelSize(com.discord.R.dimen.material_font_1_3_box_collapsed_padding_top);
            }
        }
        a();
        if (this.f6130p0 != 0) {
            v();
        }
        EditText editText = this.f6138w;
        if (editText instanceof AutoCompleteTextView) {
            AutoCompleteTextView autoCompleteTextView = (AutoCompleteTextView) editText;
            if (autoCompleteTextView.getDropDownBackground() == null) {
                int i10 = this.f6130p0;
                if (i10 == 2) {
                    autoCompleteTextView.setDropDownBackgroundDrawable(getOrCreateOutlinedDropDownMenuBackground());
                } else if (i10 == 1) {
                    autoCompleteTextView.setDropDownBackgroundDrawable(getOrCreateFilledDropDownMenuBackground());
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x00c5  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00cb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l() {
        float f2;
        float f10;
        float f11;
        RectF rectF;
        float f12;
        int i5;
        float f13;
        int i6;
        if (g()) {
            int width = this.f6138w.getWidth();
            int gravity = this.f6138w.getGravity();
            c cVar = this.T0;
            boolean c6 = cVar.c(cVar.H);
            cVar.J = c6;
            Rect rect = cVar.f3510h;
            if (gravity != 17 && (gravity & 7) != 1) {
                if ((gravity & 8388613) == 8388613 || (gravity & 5) == 5) {
                    if (c6) {
                        i6 = rect.left;
                        f11 = i6;
                    } else {
                        f2 = rect.right;
                        f10 = cVar.f3514k0;
                    }
                } else if (c6) {
                    f2 = rect.right;
                    f10 = cVar.f3514k0;
                } else {
                    i6 = rect.left;
                    f11 = i6;
                }
                float max = Math.max(f11, rect.left);
                rectF = this.f6143y0;
                rectF.left = max;
                rectF.top = rect.top;
                if (gravity != 17 || (gravity & 7) == 1) {
                    f12 = (width / 2.0f) + (cVar.f3514k0 / 2.0f);
                } else if ((gravity & 8388613) == 8388613 || (gravity & 5) == 5) {
                    if (cVar.J) {
                        f13 = cVar.f3514k0;
                        f12 = f13 + max;
                    } else {
                        i5 = rect.right;
                        f12 = i5;
                    }
                } else if (cVar.J) {
                    i5 = rect.right;
                    f12 = i5;
                } else {
                    f13 = cVar.f3514k0;
                    f12 = f13 + max;
                }
                rectF.right = Math.min(f12, rect.right);
                rectF.bottom = cVar.g() + rect.top;
                if (cVar.f3513j0 != null && !cVar.C()) {
                    StaticLayout staticLayout = cVar.f3513j0;
                    float lineWidth = (cVar.f3519n / cVar.f3517m) * staticLayout.getLineWidth(staticLayout.getLineCount() - 1);
                    if (cVar.J) {
                        rectF.right = rectF.left + lineWidth;
                    } else {
                        rectF.left = rectF.right - lineWidth;
                    }
                }
                if (rectF.width() > 0.0f || rectF.height() <= 0.0f) {
                }
                float f14 = rectF.left;
                float f15 = this.f6129o0;
                rectF.left = f14 - f15;
                rectF.right += f15;
                rectF.offset(-getPaddingLeft(), ((-getPaddingTop()) - (rectF.height() / 2.0f)) + this.f6132r0);
                rectF.top = 0.0f;
                oh.g gVar = (oh.g) this.f6121g0;
                gVar.getClass();
                gVar.y(rectF.left, rectF.top, rectF.right, rectF.bottom);
                return;
            }
            f2 = width / 2.0f;
            f10 = cVar.f3514k0 / 2.0f;
            f11 = f2 - f10;
            float max2 = Math.max(f11, rect.left);
            rectF = this.f6143y0;
            rectF.left = max2;
            rectF.top = rect.top;
            if (gravity != 17) {
            }
            f12 = (width / 2.0f) + (cVar.f3514k0 / 2.0f);
            rectF.right = Math.min(f12, rect.right);
            rectF.bottom = cVar.g() + rect.top;
            if (cVar.f3513j0 != null) {
                StaticLayout staticLayout2 = cVar.f3513j0;
                float lineWidth2 = (cVar.f3519n / cVar.f3517m) * staticLayout2.getLineWidth(staticLayout2.getLineCount() - 1);
                if (cVar.J) {
                }
            }
            if (rectF.width() > 0.0f) {
            }
        }
    }

    public final void n(AppCompatTextView appCompatTextView, int i5) {
        try {
            appCompatTextView.setTextAppearance(i5);
            if (appCompatTextView.getTextColors().getDefaultColor() != -65281) {
                return;
            }
        } catch (Exception unused) {
        }
        appCompatTextView.setTextAppearance(com.discord.R.style.TextAppearance_AppCompat_Caption);
        appCompatTextView.setTextColor(getContext().getColor(com.discord.R.color.design_error));
    }

    public final boolean o() {
        r rVar = this.H;
        return (rVar.f15939o != 1 || rVar.f15942r == null || TextUtils.isEmpty(rVar.f15940p)) ? false : true;
    }

    @Override // android.view.View
    public final void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        this.T0.k(configuration);
    }

    @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
    public final void onGlobalLayout() {
        int max;
        n nVar = this.f6122i;
        nVar.getViewTreeObserver().removeOnGlobalLayoutListener(this);
        boolean z5 = false;
        this.Z0 = false;
        if (this.f6138w != null && this.f6138w.getMeasuredHeight() < (max = Math.max(nVar.getMeasuredHeight(), this.f6118e.getMeasuredHeight()))) {
            this.f6138w.setMinimumHeight(max);
            z5 = true;
        }
        boolean s2 = s();
        if (z5 || s2) {
            this.f6138w.post(new w(0, this));
        }
    }

    @Override // android.widget.LinearLayout, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        float i12;
        int i13;
        int compoundPaddingTop;
        super.onLayout(z5, i5, i6, i10, i11);
        EditText editText = this.f6138w;
        if (editText != null) {
            Rect rect = this.f6139w0;
            ch.d.a(this, editText, rect);
            i iVar = this.f6125k0;
            if (iVar != null) {
                int i14 = rect.bottom;
                iVar.setBounds(rect.left, i14 - this.f6133s0, rect.right, i14);
            }
            i iVar2 = this.f6126l0;
            if (iVar2 != null) {
                int i15 = rect.bottom;
                iVar2.setBounds(rect.left, i15 - this.f6134t0, rect.right, i15);
            }
            if (this.f6117d0) {
                float textSize = this.f6138w.getTextSize();
                c cVar = this.T0;
                cVar.y(textSize);
                TextPaint textPaint = cVar.V;
                int gravity = this.f6138w.getGravity();
                cVar.s((gravity & (-113)) | 48);
                cVar.x(gravity);
                Rect d6 = d(rect);
                cVar.o(d6.left, d6.top, d6.right, d6.bottom);
                if (this.f6138w == null) {
                    throw new IllegalStateException();
                }
                if (getHintMaxLines() == 1) {
                    textPaint.setTextSize(cVar.f3517m);
                    textPaint.setTypeface(cVar.A);
                    textPaint.setLetterSpacing(cVar.h0);
                    i12 = -textPaint.ascent();
                } else {
                    i12 = cVar.i() * cVar.f3525q;
                }
                int compoundPaddingLeft = this.f6138w.getCompoundPaddingLeft() + rect.left;
                Rect rect2 = this.f6141x0;
                rect2.left = compoundPaddingLeft;
                if (this.f6130p0 != 1 || this.f6138w.getMinLines() > 1) {
                    if (this.f6130p0 != 0 || getHintMaxLines() == 1) {
                        i13 = 0;
                    } else {
                        textPaint.setTextSize(cVar.f3517m);
                        textPaint.setTypeface(cVar.A);
                        textPaint.setLetterSpacing(cVar.h0);
                        i13 = (int) ((-textPaint.ascent()) / 2.0f);
                    }
                    compoundPaddingTop = (this.f6138w.getCompoundPaddingTop() + rect.top) - i13;
                } else {
                    compoundPaddingTop = (int) (rect.centerY() - (i12 / 2.0f));
                }
                rect2.top = compoundPaddingTop;
                rect2.right = rect.right - this.f6138w.getCompoundPaddingRight();
                int compoundPaddingBottom = (this.f6130p0 != 1 || this.f6138w.getMinLines() > 1) ? rect.bottom - this.f6138w.getCompoundPaddingBottom() : (int) (rect2.top + i12);
                rect2.bottom = compoundPaddingBottom;
                cVar.u(rect2.left, rect2.top, rect2.right, compoundPaddingBottom, true);
                cVar.l(false);
                if (!g() || this.S0) {
                    return;
                }
                l();
            }
        }
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        float f2;
        EditText editText;
        super.onMeasure(i5, i6);
        boolean z5 = this.Z0;
        n nVar = this.f6122i;
        if (!z5) {
            nVar.getViewTreeObserver().addOnGlobalLayoutListener(this);
            this.Z0 = true;
        }
        if (this.R != null && (editText = this.f6138w) != null) {
            this.R.setGravity(editText.getGravity());
            this.R.setPadding(this.f6138w.getCompoundPaddingLeft(), this.f6138w.getCompoundPaddingTop(), this.f6138w.getCompoundPaddingRight(), this.f6138w.getCompoundPaddingBottom());
        }
        nVar.m();
        if (getHintMaxLines() == 1) {
            return;
        }
        int measuredWidth = (this.f6138w.getMeasuredWidth() - this.f6138w.getCompoundPaddingLeft()) - this.f6138w.getCompoundPaddingRight();
        c cVar = this.T0;
        TextPaint textPaint = cVar.V;
        textPaint.setTextSize(cVar.f3519n);
        textPaint.setTypeface(cVar.f3538x);
        textPaint.setLetterSpacing(cVar.f3509g0);
        float f10 = measuredWidth;
        cVar.f3532t0 = cVar.e(cVar.f3524p0, textPaint, cVar.H, (cVar.f3519n / cVar.f3517m) * f10, cVar.J).getHeight();
        textPaint.setTextSize(cVar.f3517m);
        textPaint.setTypeface(cVar.A);
        textPaint.setLetterSpacing(cVar.h0);
        cVar.f3534u0 = cVar.e(cVar.f3522o0, textPaint, cVar.H, f10, cVar.J).getHeight();
        EditText editText2 = this.f6138w;
        Rect rect = this.f6139w0;
        ch.d.a(this, editText2, rect);
        Rect d6 = d(rect);
        cVar.o(d6.left, d6.top, d6.right, d6.bottom);
        v();
        a();
        if (this.f6138w == null) {
            return;
        }
        int i10 = cVar.f3534u0;
        if (i10 != -1) {
            f2 = i10;
        } else {
            TextPaint textPaint2 = cVar.V;
            textPaint2.setTextSize(cVar.f3517m);
            textPaint2.setTypeface(cVar.A);
            textPaint2.setLetterSpacing(cVar.h0);
            f2 = -textPaint2.ascent();
        }
        if (this.P != null) {
            TextPaint textPaint3 = new TextPaint(129);
            textPaint3.set(this.R.getPaint());
            textPaint3.setTextSize(this.R.getTextSize());
            textPaint3.setTypeface(this.R.getTypeface());
            textPaint3.setLetterSpacing(this.R.getLetterSpacing());
            ch.i iVar = new ch.i(this.P, textPaint3, measuredWidth);
            iVar.k = getLayoutDirection() == 1;
            iVar.j = true;
            float lineSpacingExtra = this.R.getLineSpacingExtra();
            float lineSpacingMultiplier = this.R.getLineSpacingMultiplier();
            iVar.f3547g = lineSpacingExtra;
            iVar.f3548h = lineSpacingMultiplier;
            iVar.f3551m = new ni.a(1, this);
            r3 = (this.f6130p0 == 1 ? cVar.g() + this.f6131q0 + this.f6136v : 0.0f) + iVar.a().getHeight();
        }
        float max = Math.max(f2, r3);
        if (this.f6138w.getMeasuredHeight() < max) {
            this.f6138w.setMinimumHeight(Math.round(max));
        }
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof a0)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        a0 a0Var = (a0) parcelable;
        super.onRestoreInstanceState(a0Var.f7399d);
        setError(a0Var.f15886i);
        if (a0Var.f15887v) {
            post(new h(29, this));
        }
        requestLayout();
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onRtlPropertiesChanged(int i5) {
        super.onRtlPropertiesChanged(i5);
        boolean z5 = i5 == 1;
        if (z5 != this.f6128n0) {
            lh.d dVar = this.f6127m0.f14019e;
            RectF rectF = this.f6143y0;
            float a = dVar.a(rectF);
            float a10 = this.f6127m0.f14020f.a(rectF);
            float a11 = this.f6127m0.f14022h.a(rectF);
            float a12 = this.f6127m0.f14021g.a(rectF);
            m mVar = this.f6127m0;
            io.sentry.config.a aVar = mVar.a;
            io.sentry.config.a aVar2 = mVar.f14016b;
            io.sentry.config.a aVar3 = mVar.f14018d;
            io.sentry.config.a aVar4 = mVar.f14017c;
            lh.f fVar = new lh.f(0);
            lh.f fVar2 = new lh.f(0);
            lh.f fVar3 = new lh.f(0);
            lh.f fVar4 = new lh.f(0);
            lh.a aVar5 = new lh.a(a10);
            lh.a aVar6 = new lh.a(a);
            lh.a aVar7 = new lh.a(a12);
            lh.a aVar8 = new lh.a(a11);
            m mVar2 = new m();
            mVar2.a = aVar2;
            mVar2.f14016b = aVar;
            mVar2.f14017c = aVar3;
            mVar2.f14018d = aVar4;
            mVar2.f14019e = aVar5;
            mVar2.f14020f = aVar6;
            mVar2.f14021g = aVar8;
            mVar2.f14022h = aVar7;
            mVar2.f14023i = fVar;
            mVar2.j = fVar2;
            mVar2.k = fVar3;
            mVar2.f14024l = fVar4;
            this.f6128n0 = z5;
            setShapeAppearanceModel(mVar2);
        }
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        a0 a0Var = new a0(super.onSaveInstanceState());
        if (o()) {
            a0Var.f15886i = getError();
        }
        n nVar = this.f6122i;
        a0Var.f15887v = nVar.F != 0 && nVar.f15920y.f6075v;
        return a0Var;
    }

    public final void p(Editable editable) {
        ((k) this.L).getClass();
        int length = editable != null ? editable.length() : 0;
        boolean z5 = this.K;
        int i5 = this.J;
        if (i5 == -1) {
            this.M.setText(String.valueOf(length));
            this.M.setContentDescription(null);
            this.K = false;
        } else {
            this.K = length > i5;
            Context context = getContext();
            this.M.setContentDescription(context.getString(this.K ? com.discord.R.string.character_counter_overflowed_content_description : com.discord.R.string.character_counter_content_description, Integer.valueOf(length), Integer.valueOf(this.J)));
            if (z5 != this.K) {
                q();
            }
            j1.b c6 = j1.b.c();
            AppCompatTextView appCompatTextView = this.M;
            String string = getContext().getString(com.discord.R.string.character_counter_pattern, Integer.valueOf(length), Integer.valueOf(this.J));
            c6.getClass();
            h0 h0Var = j1.d.a;
            appCompatTextView.setText(string != null ? c6.d(string).toString() : null);
        }
        if (this.f6138w == null || z5 == this.K) {
            return;
        }
        w(false, false);
        z();
        t();
    }

    public final void q() {
        ColorStateList colorStateList;
        ColorStateList colorStateList2;
        AppCompatTextView appCompatTextView = this.M;
        if (appCompatTextView != null) {
            n(appCompatTextView, this.K ? this.N : this.O);
            if (!this.K && (colorStateList2 = this.W) != null) {
                this.M.setTextColor(colorStateList2);
            }
            if (!this.K || (colorStateList = this.a0) == null) {
                return;
            }
            this.M.setTextColor(colorStateList);
        }
    }

    public final void r() {
        ColorStateList colorStateList;
        ColorStateList colorStateList2 = this.f6114b0;
        if (colorStateList2 == null) {
            Context context = getContext();
            TypedValue I0 = m3.n.I0(context, com.discord.R.attr.colorControlActivated);
            if (I0 != null) {
                int i5 = I0.resourceId;
                if (i5 != 0) {
                    colorStateList2 = b.c(context, i5);
                } else {
                    int i6 = I0.data;
                    if (i6 != 0) {
                        colorStateList2 = ColorStateList.valueOf(i6);
                    }
                }
            }
            colorStateList2 = null;
        }
        EditText editText = this.f6138w;
        if (editText == null || editText.getTextCursorDrawable() == null) {
            return;
        }
        Drawable mutate = this.f6138w.getTextCursorDrawable().mutate();
        if ((o() || (this.M != null && this.K)) && (colorStateList = this.f6115c0) != null) {
            colorStateList2 = colorStateList;
        }
        mutate.setTintList(colorStateList2);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0081  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00a8  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00b9  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00d4  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00ed  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00ff  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x00ab  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean s() {
        boolean z5;
        n nVar;
        Drawable[] compoundDrawablesRelative;
        ColorDrawable colorDrawable;
        Drawable drawable;
        ColorDrawable colorDrawable2;
        if (this.f6138w == null) {
            return false;
        }
        CheckableImageButton checkableImageButton = null;
        boolean z6 = true;
        if (getStartIconDrawable() != null || (getPrefixText() != null && getPrefixTextView().getVisibility() == 0)) {
            v vVar = this.f6118e;
            if (vVar.getMeasuredWidth() > 0) {
                int measuredWidth = vVar.getMeasuredWidth() - this.f6138w.getPaddingLeft();
                if (this.A0 == null || this.B0 != measuredWidth) {
                    ColorDrawable colorDrawable3 = new ColorDrawable();
                    this.A0 = colorDrawable3;
                    this.B0 = measuredWidth;
                    colorDrawable3.setBounds(0, 0, measuredWidth, 1);
                }
                Drawable[] compoundDrawablesRelative2 = this.f6138w.getCompoundDrawablesRelative();
                Drawable drawable2 = compoundDrawablesRelative2[0];
                ColorDrawable colorDrawable4 = this.A0;
                if (drawable2 != colorDrawable4) {
                    this.f6138w.setCompoundDrawablesRelative(colorDrawable4, compoundDrawablesRelative2[1], compoundDrawablesRelative2[2], compoundDrawablesRelative2[3]);
                    z5 = true;
                    nVar = this.f6122i;
                    if ((!nVar.e() || ((nVar.F != 0 && nVar.d()) || nVar.M != null)) && nVar.getMeasuredWidth() > 0) {
                        int measuredWidth2 = nVar.N.getMeasuredWidth() - this.f6138w.getPaddingRight();
                        if (!nVar.e()) {
                            checkableImageButton = nVar.f15916i;
                        } else if (nVar.F != 0 && nVar.d()) {
                            checkableImageButton = nVar.f15920y;
                        }
                        if (checkableImageButton != null) {
                            measuredWidth2 = ((ViewGroup.MarginLayoutParams) checkableImageButton.getLayoutParams()).getMarginStart() + checkableImageButton.getMeasuredWidth() + measuredWidth2;
                        }
                        compoundDrawablesRelative = this.f6138w.getCompoundDrawablesRelative();
                        colorDrawable = this.D0;
                        if (colorDrawable == null && this.E0 != measuredWidth2) {
                            this.E0 = measuredWidth2;
                            colorDrawable.setBounds(0, 0, measuredWidth2, 1);
                            this.f6138w.setCompoundDrawablesRelative(compoundDrawablesRelative[0], compoundDrawablesRelative[1], this.D0, compoundDrawablesRelative[3]);
                            return true;
                        }
                        if (colorDrawable == null) {
                            ColorDrawable colorDrawable5 = new ColorDrawable();
                            this.D0 = colorDrawable5;
                            this.E0 = measuredWidth2;
                            colorDrawable5.setBounds(0, 0, measuredWidth2, 1);
                        }
                        drawable = compoundDrawablesRelative[2];
                        colorDrawable2 = this.D0;
                        if (drawable != colorDrawable2) {
                            this.F0 = drawable;
                            this.f6138w.setCompoundDrawablesRelative(compoundDrawablesRelative[0], compoundDrawablesRelative[1], colorDrawable2, compoundDrawablesRelative[3]);
                            return true;
                        }
                    } else if (this.D0 != null) {
                        Drawable[] compoundDrawablesRelative3 = this.f6138w.getCompoundDrawablesRelative();
                        if (compoundDrawablesRelative3[2] == this.D0) {
                            this.f6138w.setCompoundDrawablesRelative(compoundDrawablesRelative3[0], compoundDrawablesRelative3[1], this.F0, compoundDrawablesRelative3[3]);
                        } else {
                            z6 = z5;
                        }
                        this.D0 = null;
                        return z6;
                    }
                    return z5;
                }
                z5 = false;
                nVar = this.f6122i;
                if (nVar.e()) {
                }
                int measuredWidth22 = nVar.N.getMeasuredWidth() - this.f6138w.getPaddingRight();
                if (!nVar.e()) {
                }
                if (checkableImageButton != null) {
                }
                compoundDrawablesRelative = this.f6138w.getCompoundDrawablesRelative();
                colorDrawable = this.D0;
                if (colorDrawable == null) {
                }
                if (colorDrawable == null) {
                }
                drawable = compoundDrawablesRelative[2];
                colorDrawable2 = this.D0;
                if (drawable != colorDrawable2) {
                }
                return z5;
            }
        }
        if (this.A0 != null) {
            Drawable[] compoundDrawablesRelative4 = this.f6138w.getCompoundDrawablesRelative();
            this.f6138w.setCompoundDrawablesRelative(null, compoundDrawablesRelative4[1], compoundDrawablesRelative4[2], compoundDrawablesRelative4[3]);
            this.A0 = null;
            z5 = true;
            nVar = this.f6122i;
            if (nVar.e()) {
            }
            int measuredWidth222 = nVar.N.getMeasuredWidth() - this.f6138w.getPaddingRight();
            if (!nVar.e()) {
            }
            if (checkableImageButton != null) {
            }
            compoundDrawablesRelative = this.f6138w.getCompoundDrawablesRelative();
            colorDrawable = this.D0;
            if (colorDrawable == null) {
            }
            if (colorDrawable == null) {
            }
            drawable = compoundDrawablesRelative[2];
            colorDrawable2 = this.D0;
            if (drawable != colorDrawable2) {
            }
            return z5;
        }
        z5 = false;
        nVar = this.f6122i;
        if (nVar.e()) {
        }
        int measuredWidth2222 = nVar.N.getMeasuredWidth() - this.f6138w.getPaddingRight();
        if (!nVar.e()) {
        }
        if (checkableImageButton != null) {
        }
        compoundDrawablesRelative = this.f6138w.getCompoundDrawablesRelative();
        colorDrawable = this.D0;
        if (colorDrawable == null) {
        }
        if (colorDrawable == null) {
        }
        drawable = compoundDrawablesRelative[2];
        colorDrawable2 = this.D0;
        if (drawable != colorDrawable2) {
        }
        return z5;
    }

    public void setBoxBackgroundColor(int i5) {
        if (this.f6137v0 != i5) {
            this.f6137v0 = i5;
            this.M0 = i5;
            this.O0 = i5;
            this.P0 = i5;
            c();
        }
    }

    public void setBoxBackgroundColorResource(int i5) {
        setBoxBackgroundColor(getContext().getColor(i5));
    }

    public void setBoxBackgroundColorStateList(@NonNull ColorStateList colorStateList) {
        int defaultColor = colorStateList.getDefaultColor();
        this.M0 = defaultColor;
        this.f6137v0 = defaultColor;
        this.N0 = colorStateList.getColorForState(new int[]{-16842910}, -1);
        this.O0 = colorStateList.getColorForState(new int[]{R.attr.state_focused, R.attr.state_enabled}, -1);
        this.P0 = colorStateList.getColorForState(new int[]{R.attr.state_hovered, R.attr.state_enabled}, -1);
        c();
    }

    public void setBoxBackgroundMode(int i5) {
        if (i5 == this.f6130p0) {
            return;
        }
        this.f6130p0 = i5;
        if (this.f6138w != null) {
            k();
        }
    }

    public void setBoxCollapsedPaddingTop(int i5) {
        this.f6131q0 = i5;
    }

    public void setBoxCornerFamily(int i5) {
        l g6 = this.f6127m0.g();
        lh.d dVar = this.f6127m0.f14019e;
        g6.a = jb.a.f(i5);
        g6.f14010e = dVar;
        lh.d dVar2 = this.f6127m0.f14020f;
        g6.f14007b = jb.a.f(i5);
        g6.f14011f = dVar2;
        lh.d dVar3 = this.f6127m0.f14022h;
        g6.f14009d = jb.a.f(i5);
        g6.f14013h = dVar3;
        lh.d dVar4 = this.f6127m0.f14021g;
        g6.f14008c = jb.a.f(i5);
        g6.f14012g = dVar4;
        this.f6127m0 = g6.a();
        c();
    }

    public void setBoxStrokeColor(int i5) {
        if (this.K0 != i5) {
            this.K0 = i5;
            z();
        }
    }

    public void setBoxStrokeColorStateList(@NonNull ColorStateList colorStateList) {
        if (colorStateList.isStateful()) {
            this.I0 = colorStateList.getDefaultColor();
            this.Q0 = colorStateList.getColorForState(new int[]{-16842910}, -1);
            this.J0 = colorStateList.getColorForState(new int[]{R.attr.state_hovered, R.attr.state_enabled}, -1);
            this.K0 = colorStateList.getColorForState(new int[]{R.attr.state_focused, R.attr.state_enabled}, -1);
        } else if (this.K0 != colorStateList.getDefaultColor()) {
            this.K0 = colorStateList.getDefaultColor();
        }
        z();
    }

    public void setBoxStrokeErrorColor(ColorStateList colorStateList) {
        if (this.L0 != colorStateList) {
            this.L0 = colorStateList;
            z();
        }
    }

    public void setBoxStrokeWidth(int i5) {
        this.f6133s0 = i5;
        z();
    }

    public void setBoxStrokeWidthFocused(int i5) {
        this.f6134t0 = i5;
        z();
    }

    public void setBoxStrokeWidthFocusedResource(int i5) {
        setBoxStrokeWidthFocused(getResources().getDimensionPixelSize(i5));
    }

    public void setBoxStrokeWidthResource(int i5) {
        setBoxStrokeWidth(getResources().getDimensionPixelSize(i5));
    }

    public void setCounterEnabled(boolean z5) {
        if (this.I != z5) {
            r rVar = this.H;
            if (z5) {
                AppCompatTextView appCompatTextView = new AppCompatTextView(getContext(), null);
                this.M = appCompatTextView;
                appCompatTextView.setId(com.discord.R.id.textinput_counter);
                Typeface typeface = this.f6144z0;
                if (typeface != null) {
                    this.M.setTypeface(typeface);
                }
                this.M.setMaxLines(1);
                rVar.a(this.M, 2);
                ((ViewGroup.MarginLayoutParams) this.M.getLayoutParams()).setMarginStart(getResources().getDimensionPixelOffset(com.discord.R.dimen.mtrl_textinput_counter_margin_start));
                q();
                if (this.M != null) {
                    EditText editText = this.f6138w;
                    p(editText != null ? editText.getText() : null);
                }
            } else {
                rVar.g(this.M, 2);
                this.M = null;
            }
            this.I = z5;
        }
    }

    public void setCounterMaxLength(int i5) {
        if (this.J != i5) {
            if (i5 > 0) {
                this.J = i5;
            } else {
                this.J = -1;
            }
            if (!this.I || this.M == null) {
                return;
            }
            EditText editText = this.f6138w;
            p(editText == null ? null : editText.getText());
        }
    }

    public void setCounterOverflowTextAppearance(int i5) {
        if (this.N != i5) {
            this.N = i5;
            q();
        }
    }

    public void setCounterOverflowTextColor(ColorStateList colorStateList) {
        if (this.a0 != colorStateList) {
            this.a0 = colorStateList;
            q();
        }
    }

    public void setCounterTextAppearance(int i5) {
        if (this.O != i5) {
            this.O = i5;
            q();
        }
    }

    public void setCounterTextColor(ColorStateList colorStateList) {
        if (this.W != colorStateList) {
            this.W = colorStateList;
            q();
        }
    }

    public void setCursorColor(ColorStateList colorStateList) {
        if (this.f6114b0 != colorStateList) {
            this.f6114b0 = colorStateList;
            r();
        }
    }

    public void setCursorErrorColor(ColorStateList colorStateList) {
        if (this.f6115c0 != colorStateList) {
            this.f6115c0 = colorStateList;
            if (o() || (this.M != null && this.K)) {
                r();
            }
        }
    }

    public void setDefaultHintTextColor(ColorStateList colorStateList) {
        this.G0 = colorStateList;
        this.H0 = colorStateList;
        if (this.f6138w != null) {
            w(false, false);
        }
    }

    @Override // android.view.View
    public void setEnabled(boolean z5) {
        m(this, z5);
        super.setEnabled(z5);
    }

    public void setEndIconActivated(boolean z5) {
        this.f6122i.f15920y.setActivated(z5);
    }

    public void setEndIconCheckable(boolean z5) {
        this.f6122i.f15920y.setCheckable(z5);
    }

    public void setEndIconContentDescription(int i5) {
        n nVar = this.f6122i;
        CharSequence text = i5 != 0 ? nVar.getResources().getText(i5) : null;
        CheckableImageButton checkableImageButton = nVar.f15920y;
        if (checkableImageButton.getContentDescription() != text) {
            checkableImageButton.setContentDescription(text);
        }
    }

    public void setEndIconDrawable(int i5) {
        n nVar = this.f6122i;
        Drawable J = i5 != 0 ? ys.d.J(nVar.getContext(), i5) : null;
        TextInputLayout textInputLayout = nVar.f15914d;
        CheckableImageButton checkableImageButton = nVar.f15920y;
        checkableImageButton.setImageDrawable(J);
        if (J != null) {
            io.sentry.config.a.c(textInputLayout, checkableImageButton, nVar.H, nVar.I);
            io.sentry.config.a.G(textInputLayout, checkableImageButton, nVar.H);
        }
    }

    public void setEndIconMinSize(int i5) {
        n nVar = this.f6122i;
        if (i5 < 0) {
            nVar.getClass();
            throw new IllegalArgumentException("endIconSize cannot be less than 0");
        }
        if (i5 != nVar.J) {
            nVar.J = i5;
            CheckableImageButton checkableImageButton = nVar.f15920y;
            checkableImageButton.setMinimumWidth(i5);
            checkableImageButton.setMinimumHeight(i5);
            CheckableImageButton checkableImageButton2 = nVar.f15916i;
            checkableImageButton2.setMinimumWidth(i5);
            checkableImageButton2.setMinimumHeight(i5);
        }
    }

    public void setEndIconMode(int i5) {
        this.f6122i.g(i5);
    }

    public void setEndIconOnClickListener(View.OnClickListener onClickListener) {
        n nVar = this.f6122i;
        CheckableImageButton checkableImageButton = nVar.f15920y;
        View.OnLongClickListener onLongClickListener = nVar.L;
        checkableImageButton.setOnClickListener(onClickListener);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
    }

    public void setEndIconOnLongClickListener(View.OnLongClickListener onLongClickListener) {
        n nVar = this.f6122i;
        nVar.L = onLongClickListener;
        CheckableImageButton checkableImageButton = nVar.f15920y;
        checkableImageButton.setOnLongClickListener(onLongClickListener);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
    }

    public void setEndIconScaleType(@NonNull ImageView.ScaleType scaleType) {
        n nVar = this.f6122i;
        nVar.K = scaleType;
        nVar.f15920y.setScaleType(scaleType);
        nVar.f15916i.setScaleType(scaleType);
    }

    public void setEndIconTintList(ColorStateList colorStateList) {
        n nVar = this.f6122i;
        if (nVar.H != colorStateList) {
            nVar.H = colorStateList;
            io.sentry.config.a.c(nVar.f15914d, nVar.f15920y, colorStateList, nVar.I);
        }
    }

    public void setEndIconTintMode(PorterDuff.Mode mode) {
        n nVar = this.f6122i;
        if (nVar.I != mode) {
            nVar.I = mode;
            io.sentry.config.a.c(nVar.f15914d, nVar.f15920y, nVar.H, mode);
        }
    }

    public void setEndIconVisible(boolean z5) {
        this.f6122i.h(z5);
    }

    public void setError(CharSequence charSequence) {
        r rVar = this.H;
        if (!rVar.f15941q) {
            if (TextUtils.isEmpty(charSequence)) {
                return;
            } else {
                setErrorEnabled(true);
            }
        }
        if (TextUtils.isEmpty(charSequence)) {
            rVar.f();
            return;
        }
        rVar.c();
        rVar.f15940p = charSequence;
        rVar.f15942r.setText(charSequence);
        int i5 = rVar.f15938n;
        if (i5 != 1) {
            rVar.f15939o = 1;
        }
        rVar.i(i5, rVar.f15939o, rVar.h(rVar.f15942r, charSequence));
    }

    public void setErrorAccessibilityLiveRegion(int i5) {
        r rVar = this.H;
        rVar.f15944t = i5;
        AppCompatTextView appCompatTextView = rVar.f15942r;
        if (appCompatTextView != null) {
            appCompatTextView.setAccessibilityLiveRegion(i5);
        }
    }

    public void setErrorContentDescription(CharSequence charSequence) {
        r rVar = this.H;
        rVar.f15943s = charSequence;
        AppCompatTextView appCompatTextView = rVar.f15942r;
        if (appCompatTextView != null) {
            appCompatTextView.setContentDescription(charSequence);
        }
    }

    public void setErrorEnabled(boolean z5) {
        r rVar = this.H;
        TextInputLayout textInputLayout = rVar.f15934h;
        if (rVar.f15941q == z5) {
            return;
        }
        rVar.c();
        if (z5) {
            AppCompatTextView appCompatTextView = new AppCompatTextView(rVar.f15933g, null);
            rVar.f15942r = appCompatTextView;
            appCompatTextView.setId(com.discord.R.id.textinput_error);
            rVar.f15942r.setTextAlignment(5);
            Typeface typeface = rVar.B;
            if (typeface != null) {
                rVar.f15942r.setTypeface(typeface);
            }
            int i5 = rVar.f15945u;
            rVar.f15945u = i5;
            AppCompatTextView appCompatTextView2 = rVar.f15942r;
            if (appCompatTextView2 != null) {
                rVar.f15934h.n(appCompatTextView2, i5);
            }
            ColorStateList colorStateList = rVar.f15946v;
            rVar.f15946v = colorStateList;
            AppCompatTextView appCompatTextView3 = rVar.f15942r;
            if (appCompatTextView3 != null && colorStateList != null) {
                appCompatTextView3.setTextColor(colorStateList);
            }
            CharSequence charSequence = rVar.f15943s;
            rVar.f15943s = charSequence;
            AppCompatTextView appCompatTextView4 = rVar.f15942r;
            if (appCompatTextView4 != null) {
                appCompatTextView4.setContentDescription(charSequence);
            }
            int i6 = rVar.f15944t;
            rVar.f15944t = i6;
            AppCompatTextView appCompatTextView5 = rVar.f15942r;
            if (appCompatTextView5 != null) {
                appCompatTextView5.setAccessibilityLiveRegion(i6);
            }
            rVar.f15942r.setVisibility(4);
            rVar.a(rVar.f15942r, 0);
        } else {
            rVar.f();
            rVar.g(rVar.f15942r, 0);
            rVar.f15942r = null;
            textInputLayout.t();
            textInputLayout.z();
        }
        rVar.f15941q = z5;
    }

    public void setErrorIconDrawable(int i5) {
        n nVar = this.f6122i;
        nVar.i(i5 != 0 ? ys.d.J(nVar.getContext(), i5) : null);
        io.sentry.config.a.G(nVar.f15914d, nVar.f15916i, nVar.f15917v);
    }

    public void setErrorIconOnClickListener(View.OnClickListener onClickListener) {
        n nVar = this.f6122i;
        CheckableImageButton checkableImageButton = nVar.f15916i;
        View.OnLongClickListener onLongClickListener = nVar.f15919x;
        checkableImageButton.setOnClickListener(onClickListener);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
    }

    public void setErrorIconOnLongClickListener(View.OnLongClickListener onLongClickListener) {
        n nVar = this.f6122i;
        nVar.f15919x = onLongClickListener;
        CheckableImageButton checkableImageButton = nVar.f15916i;
        checkableImageButton.setOnLongClickListener(onLongClickListener);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
    }

    public void setErrorIconTintList(ColorStateList colorStateList) {
        n nVar = this.f6122i;
        if (nVar.f15917v != colorStateList) {
            nVar.f15917v = colorStateList;
            io.sentry.config.a.c(nVar.f15914d, nVar.f15916i, colorStateList, nVar.f15918w);
        }
    }

    public void setErrorIconTintMode(PorterDuff.Mode mode) {
        n nVar = this.f6122i;
        if (nVar.f15918w != mode) {
            nVar.f15918w = mode;
            io.sentry.config.a.c(nVar.f15914d, nVar.f15916i, nVar.f15917v, mode);
        }
    }

    public void setErrorTextAppearance(int i5) {
        r rVar = this.H;
        rVar.f15945u = i5;
        AppCompatTextView appCompatTextView = rVar.f15942r;
        if (appCompatTextView != null) {
            rVar.f15934h.n(appCompatTextView, i5);
        }
    }

    public void setErrorTextColor(ColorStateList colorStateList) {
        r rVar = this.H;
        rVar.f15946v = colorStateList;
        AppCompatTextView appCompatTextView = rVar.f15942r;
        if (appCompatTextView == null || colorStateList == null) {
            return;
        }
        appCompatTextView.setTextColor(colorStateList);
    }

    public void setExpandedHintEnabled(boolean z5) {
        if (this.U0 != z5) {
            this.U0 = z5;
            w(false, false);
        }
    }

    public void setHelperText(CharSequence charSequence) {
        boolean isEmpty = TextUtils.isEmpty(charSequence);
        r rVar = this.H;
        if (isEmpty) {
            if (rVar.f15948x) {
                setHelperTextEnabled(false);
                return;
            }
            return;
        }
        if (!rVar.f15948x) {
            setHelperTextEnabled(true);
        }
        rVar.c();
        rVar.f15947w = charSequence;
        rVar.f15949y.setText(charSequence);
        int i5 = rVar.f15938n;
        if (i5 != 2) {
            rVar.f15939o = 2;
        }
        rVar.i(i5, rVar.f15939o, rVar.h(rVar.f15949y, charSequence));
    }

    public void setHelperTextColor(ColorStateList colorStateList) {
        r rVar = this.H;
        rVar.A = colorStateList;
        AppCompatTextView appCompatTextView = rVar.f15949y;
        if (appCompatTextView == null || colorStateList == null) {
            return;
        }
        appCompatTextView.setTextColor(colorStateList);
    }

    public void setHelperTextEnabled(boolean z5) {
        r rVar = this.H;
        TextInputLayout textInputLayout = rVar.f15934h;
        if (rVar.f15948x == z5) {
            return;
        }
        rVar.c();
        if (z5) {
            AppCompatTextView appCompatTextView = new AppCompatTextView(rVar.f15933g, null);
            rVar.f15949y = appCompatTextView;
            appCompatTextView.setId(com.discord.R.id.textinput_helper_text);
            rVar.f15949y.setTextAlignment(5);
            Typeface typeface = rVar.B;
            if (typeface != null) {
                rVar.f15949y.setTypeface(typeface);
            }
            rVar.f15949y.setVisibility(4);
            rVar.f15949y.setAccessibilityLiveRegion(1);
            int i5 = rVar.f15950z;
            rVar.f15950z = i5;
            AppCompatTextView appCompatTextView2 = rVar.f15949y;
            if (appCompatTextView2 != null) {
                appCompatTextView2.setTextAppearance(i5);
            }
            ColorStateList colorStateList = rVar.A;
            rVar.A = colorStateList;
            AppCompatTextView appCompatTextView3 = rVar.f15949y;
            if (appCompatTextView3 != null && colorStateList != null) {
                appCompatTextView3.setTextColor(colorStateList);
            }
            rVar.a(rVar.f15949y, 1);
            rVar.f15949y.setAccessibilityDelegate(new oh.q(rVar));
        } else {
            rVar.c();
            int i6 = rVar.f15938n;
            if (i6 == 2) {
                rVar.f15939o = 0;
            }
            rVar.i(i6, rVar.f15939o, rVar.h(rVar.f15949y, ""));
            rVar.g(rVar.f15949y, 1);
            rVar.f15949y = null;
            textInputLayout.t();
            textInputLayout.z();
        }
        rVar.f15948x = z5;
    }

    public void setHelperTextTextAppearance(int i5) {
        r rVar = this.H;
        rVar.f15950z = i5;
        AppCompatTextView appCompatTextView = rVar.f15949y;
        if (appCompatTextView != null) {
            appCompatTextView.setTextAppearance(i5);
        }
    }

    public void setHint(CharSequence charSequence) {
        if (this.f6117d0) {
            setHintInternal(charSequence);
            sendAccessibilityEvent(RecyclerView.ItemAnimator.FLAG_MOVED);
        }
    }

    public void setHintAnimationEnabled(boolean z5) {
        this.V0 = z5;
    }

    public void setHintEnabled(boolean z5) {
        if (z5 != this.f6117d0) {
            this.f6117d0 = z5;
            if (z5) {
                CharSequence hint = this.f6138w.getHint();
                if (!TextUtils.isEmpty(hint)) {
                    if (TextUtils.isEmpty(this.f6119e0)) {
                        setHint(hint);
                    }
                    this.f6138w.setHint((CharSequence) null);
                }
                this.f6120f0 = true;
            } else {
                this.f6120f0 = false;
                if (!TextUtils.isEmpty(this.f6119e0) && TextUtils.isEmpty(this.f6138w.getHint())) {
                    this.f6138w.setHint(this.f6119e0);
                }
                setHintInternal(null);
            }
            if (this.f6138w != null) {
                v();
            }
        }
    }

    public void setHintMaxLines(int i5) {
        c cVar = this.T0;
        if (i5 != cVar.f3524p0) {
            cVar.f3524p0 = i5;
            cVar.l(false);
        }
        cVar.v(i5);
        requestLayout();
    }

    public void setHintTextAppearance(int i5) {
        c cVar = this.T0;
        cVar.q(i5);
        this.H0 = cVar.f3523p;
        if (this.f6138w != null) {
            w(false, false);
            v();
        }
    }

    public void setHintTextColor(ColorStateList colorStateList) {
        if (this.H0 != colorStateList) {
            if (this.G0 == null) {
                this.T0.r(colorStateList);
            }
            this.H0 = colorStateList;
            if (this.f6138w != null) {
                w(false, false);
            }
        }
    }

    public void setLengthCounter(@NonNull z zVar) {
        this.L = zVar;
    }

    public void setMaxEms(int i5) {
        this.E = i5;
        EditText editText = this.f6138w;
        if (editText == null || i5 == -1) {
            return;
        }
        editText.setMaxEms(i5);
    }

    public void setMaxWidth(int i5) {
        this.G = i5;
        EditText editText = this.f6138w;
        if (editText == null || i5 == -1) {
            return;
        }
        editText.setMaxWidth(i5);
    }

    public void setMaxWidthResource(int i5) {
        setMaxWidth(getContext().getResources().getDimensionPixelSize(i5));
    }

    public void setMinEms(int i5) {
        this.f6142y = i5;
        EditText editText = this.f6138w;
        if (editText == null || i5 == -1) {
            return;
        }
        editText.setMinEms(i5);
    }

    public void setMinWidth(int i5) {
        this.F = i5;
        EditText editText = this.f6138w;
        if (editText == null || i5 == -1) {
            return;
        }
        editText.setMinWidth(i5);
    }

    public void setMinWidthResource(int i5) {
        setMinWidth(getContext().getResources().getDimensionPixelSize(i5));
    }

    @Deprecated
    public void setPasswordVisibilityToggleContentDescription(int i5) {
        n nVar = this.f6122i;
        nVar.f15920y.setContentDescription(i5 != 0 ? nVar.getResources().getText(i5) : null);
    }

    @Deprecated
    public void setPasswordVisibilityToggleDrawable(int i5) {
        n nVar = this.f6122i;
        nVar.f15920y.setImageDrawable(i5 != 0 ? ys.d.J(nVar.getContext(), i5) : null);
    }

    @Deprecated
    public void setPasswordVisibilityToggleEnabled(boolean z5) {
        n nVar = this.f6122i;
        if (z5 && nVar.F != 1) {
            nVar.g(1);
        } else if (z5) {
            nVar.getClass();
        } else {
            nVar.g(0);
        }
    }

    @Deprecated
    public void setPasswordVisibilityToggleTintList(ColorStateList colorStateList) {
        n nVar = this.f6122i;
        nVar.H = colorStateList;
        io.sentry.config.a.c(nVar.f15914d, nVar.f15920y, colorStateList, nVar.I);
    }

    @Deprecated
    public void setPasswordVisibilityToggleTintMode(PorterDuff.Mode mode) {
        n nVar = this.f6122i;
        nVar.I = mode;
        io.sentry.config.a.c(nVar.f15914d, nVar.f15920y, nVar.H, mode);
    }

    public void setPlaceholderText(CharSequence charSequence) {
        if (this.R == null) {
            AppCompatTextView appCompatTextView = new AppCompatTextView(getContext(), null);
            this.R = appCompatTextView;
            appCompatTextView.setId(com.discord.R.id.textinput_placeholder);
            this.R.setImportantForAccessibility(1);
            this.R.setAccessibilityLiveRegion(1);
            f f2 = f();
            this.U = f2;
            f2.f2538e = 67L;
            this.V = f();
            setPlaceholderTextAppearance(this.T);
            setPlaceholderTextColor(this.S);
            s0.p(this.R, new com.google.android.material.datepicker.g(4));
        }
        if (TextUtils.isEmpty(charSequence)) {
            setPlaceholderTextEnabled(false);
        } else {
            if (!this.Q) {
                setPlaceholderTextEnabled(true);
            }
            this.P = charSequence;
        }
        EditText editText = this.f6138w;
        x(editText != null ? editText.getText() : null);
    }

    public void setPlaceholderTextAppearance(int i5) {
        this.T = i5;
        AppCompatTextView appCompatTextView = this.R;
        if (appCompatTextView != null) {
            appCompatTextView.setTextAppearance(i5);
        }
    }

    public void setPlaceholderTextColor(ColorStateList colorStateList) {
        if (this.S != colorStateList) {
            this.S = colorStateList;
            AppCompatTextView appCompatTextView = this.R;
            if (appCompatTextView == null || colorStateList == null) {
                return;
            }
            appCompatTextView.setTextColor(colorStateList);
        }
    }

    public void setPrefixText(CharSequence charSequence) {
        v vVar = this.f6118e;
        vVar.getClass();
        vVar.f15962i = TextUtils.isEmpty(charSequence) ? null : charSequence;
        vVar.f15961e.setText(charSequence);
        vVar.e();
    }

    public void setPrefixTextAppearance(int i5) {
        this.f6118e.f15961e.setTextAppearance(i5);
    }

    public void setPrefixTextColor(@NonNull ColorStateList colorStateList) {
        this.f6118e.f15961e.setTextColor(colorStateList);
    }

    public void setShapeAppearanceModel(@NonNull m mVar) {
        i iVar = this.f6121g0;
        if (iVar == null || iVar.f14001e.a == mVar) {
            return;
        }
        this.f6127m0 = mVar;
        c();
    }

    public void setStartIconCheckable(boolean z5) {
        this.f6118e.f15963v.setCheckable(z5);
    }

    public void setStartIconContentDescription(int i5) {
        setStartIconContentDescription(i5 != 0 ? getResources().getText(i5) : null);
    }

    public void setStartIconDrawable(int i5) {
        setStartIconDrawable(i5 != 0 ? ys.d.J(getContext(), i5) : null);
    }

    public void setStartIconMinSize(int i5) {
        v vVar = this.f6118e;
        if (i5 < 0) {
            vVar.getClass();
            throw new IllegalArgumentException("startIconSize cannot be less than 0");
        }
        if (i5 != vVar.f15966y) {
            vVar.f15966y = i5;
            CheckableImageButton checkableImageButton = vVar.f15963v;
            checkableImageButton.setMinimumWidth(i5);
            checkableImageButton.setMinimumHeight(i5);
        }
    }

    public void setStartIconOnClickListener(View.OnClickListener onClickListener) {
        v vVar = this.f6118e;
        CheckableImageButton checkableImageButton = vVar.f15963v;
        View.OnLongClickListener onLongClickListener = vVar.F;
        checkableImageButton.setOnClickListener(onClickListener);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
    }

    public void setStartIconOnLongClickListener(View.OnLongClickListener onLongClickListener) {
        v vVar = this.f6118e;
        vVar.F = onLongClickListener;
        CheckableImageButton checkableImageButton = vVar.f15963v;
        checkableImageButton.setOnLongClickListener(onLongClickListener);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
    }

    public void setStartIconScaleType(@NonNull ImageView.ScaleType scaleType) {
        v vVar = this.f6118e;
        vVar.E = scaleType;
        vVar.f15963v.setScaleType(scaleType);
    }

    public void setStartIconTintList(ColorStateList colorStateList) {
        v vVar = this.f6118e;
        if (vVar.f15964w != colorStateList) {
            vVar.f15964w = colorStateList;
            io.sentry.config.a.c(vVar.f15960d, vVar.f15963v, colorStateList, vVar.f15965x);
        }
    }

    public void setStartIconTintMode(PorterDuff.Mode mode) {
        v vVar = this.f6118e;
        if (vVar.f15965x != mode) {
            vVar.f15965x = mode;
            io.sentry.config.a.c(vVar.f15960d, vVar.f15963v, vVar.f15964w, mode);
        }
    }

    public void setStartIconVisible(boolean z5) {
        this.f6118e.c(z5);
    }

    public void setSuffixText(CharSequence charSequence) {
        n nVar = this.f6122i;
        nVar.getClass();
        nVar.M = TextUtils.isEmpty(charSequence) ? null : charSequence;
        nVar.N.setText(charSequence);
        nVar.n();
    }

    public void setSuffixTextAppearance(int i5) {
        this.f6122i.N.setTextAppearance(i5);
    }

    public void setSuffixTextColor(@NonNull ColorStateList colorStateList) {
        this.f6122i.N.setTextColor(colorStateList);
    }

    public void setTextInputAccessibilityDelegate(y yVar) {
        EditText editText = this.f6138w;
        if (editText != null) {
            s0.p(editText, yVar);
        }
    }

    public void setTypeface(Typeface typeface) {
        if (typeface != this.f6144z0) {
            this.f6144z0 = typeface;
            c cVar = this.T0;
            boolean t5 = cVar.t(typeface);
            boolean z5 = cVar.z(typeface);
            if (t5 || z5) {
                cVar.l(false);
            }
            r rVar = this.H;
            if (typeface != rVar.B) {
                rVar.B = typeface;
                AppCompatTextView appCompatTextView = rVar.f15942r;
                if (appCompatTextView != null) {
                    appCompatTextView.setTypeface(typeface);
                }
                AppCompatTextView appCompatTextView2 = rVar.f15949y;
                if (appCompatTextView2 != null) {
                    appCompatTextView2.setTypeface(typeface);
                }
            }
            AppCompatTextView appCompatTextView3 = this.M;
            if (appCompatTextView3 != null) {
                appCompatTextView3.setTypeface(typeface);
            }
        }
    }

    public final void t() {
        Drawable background;
        AppCompatTextView appCompatTextView;
        EditText editText = this.f6138w;
        if (editText == null || this.f6130p0 != 0 || (background = editText.getBackground()) == null) {
            return;
        }
        int[] iArr = n1.a;
        Drawable mutate = background.mutate();
        if (o()) {
            mutate.setColorFilter(androidx.appcompat.widget.x.c(getErrorCurrentTextColors(), PorterDuff.Mode.SRC_IN));
        } else if (this.K && (appCompatTextView = this.M) != null) {
            mutate.setColorFilter(androidx.appcompat.widget.x.c(appCompatTextView.getCurrentTextColor(), PorterDuff.Mode.SRC_IN));
        } else {
            mutate.clearColorFilter();
            this.f6138w.refreshDrawableState();
        }
    }

    public final void u() {
        EditText editText = this.f6138w;
        if (editText == null || this.f6121g0 == null) {
            return;
        }
        if ((this.f6124j0 || editText.getBackground() == null) && this.f6130p0 != 0) {
            this.f6138w.setBackground(getEditTextBoxBackground());
            this.f6124j0 = true;
        }
    }

    public final void v() {
        if (this.f6130p0 != 1) {
            FrameLayout frameLayout = this.f6116d;
            LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) frameLayout.getLayoutParams();
            int e9 = e();
            if (e9 != layoutParams.topMargin) {
                layoutParams.topMargin = e9;
                frameLayout.requestLayout();
            }
        }
    }

    public final void w(boolean z5, boolean z6) {
        ColorStateList colorStateList;
        AppCompatTextView appCompatTextView;
        boolean isEnabled = isEnabled();
        EditText editText = this.f6138w;
        boolean z7 = (editText == null || TextUtils.isEmpty(editText.getText())) ? false : true;
        EditText editText2 = this.f6138w;
        boolean z8 = editText2 != null && editText2.hasFocus();
        ColorStateList colorStateList2 = this.G0;
        c cVar = this.T0;
        if (colorStateList2 != null) {
            cVar.n(colorStateList2);
        }
        if (!isEnabled) {
            ColorStateList colorStateList3 = this.G0;
            cVar.n(ColorStateList.valueOf(colorStateList3 != null ? colorStateList3.getColorForState(new int[]{-16842910}, this.Q0) : this.Q0));
        } else if (o()) {
            AppCompatTextView appCompatTextView2 = this.H.f15942r;
            cVar.n(appCompatTextView2 != null ? appCompatTextView2.getTextColors() : null);
        } else if (this.K && (appCompatTextView = this.M) != null) {
            cVar.n(appCompatTextView.getTextColors());
        } else if (z8 && (colorStateList = this.H0) != null) {
            cVar.r(colorStateList);
        }
        n nVar = this.f6122i;
        v vVar = this.f6118e;
        if (z7 || !this.U0 || (isEnabled() && z8)) {
            if (z6 || this.S0) {
                ValueAnimator valueAnimator = this.W0;
                if (valueAnimator != null && valueAnimator.isRunning()) {
                    this.W0.cancel();
                }
                if (z5 && this.V0) {
                    b(1.0f);
                } else {
                    cVar.A(1.0f);
                }
                this.S0 = false;
                if (g()) {
                    l();
                }
                EditText editText3 = this.f6138w;
                x(editText3 != null ? editText3.getText() : null);
                vVar.G = false;
                vVar.e();
                nVar.O = false;
                nVar.n();
                return;
            }
            return;
        }
        if (z6 || !this.S0) {
            ValueAnimator valueAnimator2 = this.W0;
            if (valueAnimator2 != null && valueAnimator2.isRunning()) {
                this.W0.cancel();
            }
            if (z5 && this.V0) {
                b(0.0f);
            } else {
                cVar.A(0.0f);
            }
            if (g() && !((oh.g) this.f6121g0).f15899e0.f15897r.isEmpty() && g()) {
                ((oh.g) this.f6121g0).y(0.0f, 0.0f, 0.0f, 0.0f);
            }
            this.S0 = true;
            AppCompatTextView appCompatTextView3 = this.R;
            if (appCompatTextView3 != null && this.Q) {
                appCompatTextView3.setText((CharSequence) null);
                m3.x.a(this.f6116d, this.V);
                this.R.setVisibility(4);
            }
            vVar.G = true;
            vVar.e();
            nVar.O = true;
            nVar.n();
        }
    }

    public final void x(Editable editable) {
        ((k) this.L).getClass();
        int length = editable != null ? editable.length() : 0;
        FrameLayout frameLayout = this.f6116d;
        if (length != 0 || this.S0) {
            AppCompatTextView appCompatTextView = this.R;
            if (appCompatTextView == null || !this.Q) {
                return;
            }
            appCompatTextView.setText((CharSequence) null);
            m3.x.a(frameLayout, this.V);
            this.R.setVisibility(4);
            return;
        }
        if (this.R == null || !this.Q || TextUtils.isEmpty(this.P)) {
            return;
        }
        this.R.setText(this.P);
        m3.x.a(frameLayout, this.U);
        this.R.setVisibility(0);
        this.R.bringToFront();
    }

    public final void y(boolean z5, boolean z6) {
        int defaultColor = this.L0.getDefaultColor();
        int colorForState = this.L0.getColorForState(new int[]{R.attr.state_hovered, R.attr.state_enabled}, defaultColor);
        int colorForState2 = this.L0.getColorForState(new int[]{R.attr.state_activated, R.attr.state_enabled}, defaultColor);
        if (z5) {
            this.f6135u0 = colorForState2;
        } else if (z6) {
            this.f6135u0 = colorForState;
        } else {
            this.f6135u0 = defaultColor;
        }
    }

    public final void z() {
        AppCompatTextView appCompatTextView;
        EditText editText;
        EditText editText2;
        if (this.f6121g0 == null || this.f6130p0 == 0) {
            return;
        }
        boolean z5 = false;
        boolean z6 = isFocused() || ((editText2 = this.f6138w) != null && editText2.hasFocus());
        if (isHovered() || ((editText = this.f6138w) != null && editText.isHovered())) {
            z5 = true;
        }
        if (!isEnabled()) {
            this.f6135u0 = this.Q0;
        } else if (o()) {
            if (this.L0 != null) {
                y(z6, z5);
            } else {
                this.f6135u0 = getErrorCurrentTextColors();
            }
        } else if (!this.K || (appCompatTextView = this.M) == null) {
            if (z6) {
                this.f6135u0 = this.K0;
            } else if (z5) {
                this.f6135u0 = this.J0;
            } else {
                this.f6135u0 = this.I0;
            }
        } else if (this.L0 != null) {
            y(z6, z5);
        } else {
            this.f6135u0 = appCompatTextView.getCurrentTextColor();
        }
        if (Build.VERSION.SDK_INT >= 29) {
            r();
        }
        n nVar = this.f6122i;
        TextInputLayout textInputLayout = nVar.f15914d;
        CheckableImageButton checkableImageButton = nVar.f15920y;
        TextInputLayout textInputLayout2 = nVar.f15914d;
        nVar.l();
        io.sentry.config.a.G(textInputLayout2, nVar.f15916i, nVar.f15917v);
        io.sentry.config.a.G(textInputLayout2, checkableImageButton, nVar.H);
        if (nVar.b() instanceof oh.k) {
            if (!textInputLayout.o() || checkableImageButton.getDrawable() == null) {
                io.sentry.config.a.c(textInputLayout, checkableImageButton, nVar.H, nVar.I);
            } else {
                Drawable mutate = checkableImageButton.getDrawable().mutate();
                mutate.setTint(textInputLayout.getErrorCurrentTextColors());
                checkableImageButton.setImageDrawable(mutate);
            }
        }
        v vVar = this.f6118e;
        io.sentry.config.a.G(vVar.f15960d, vVar.f15963v, vVar.f15964w);
        if (this.f6130p0 == 2) {
            int i5 = this.f6132r0;
            if (z6 && isEnabled()) {
                this.f6132r0 = this.f6134t0;
            } else {
                this.f6132r0 = this.f6133s0;
            }
            if (this.f6132r0 != i5 && g() && !this.S0) {
                if (g()) {
                    ((oh.g) this.f6121g0).y(0.0f, 0.0f, 0.0f, 0.0f);
                }
                l();
            }
        }
        if (this.f6130p0 == 1) {
            if (!isEnabled()) {
                this.f6137v0 = this.N0;
            } else if (z5 && !z6) {
                this.f6137v0 = this.P0;
            } else if (z6) {
                this.f6137v0 = this.O0;
            } else {
                this.f6137v0 = this.M0;
            }
        }
        c();
    }

    public void setStartIconContentDescription(CharSequence charSequence) {
        CheckableImageButton checkableImageButton = this.f6118e.f15963v;
        if (checkableImageButton.getContentDescription() != charSequence) {
            checkableImageButton.setContentDescription(charSequence);
        }
    }

    public void setStartIconDrawable(Drawable drawable) {
        this.f6118e.b(drawable);
    }

    public void setHint(int i5) {
        setHint(i5 != 0 ? getResources().getText(i5) : null);
    }

    @Deprecated
    public void setPasswordVisibilityToggleContentDescription(CharSequence charSequence) {
        this.f6122i.f15920y.setContentDescription(charSequence);
    }

    @Deprecated
    public void setPasswordVisibilityToggleDrawable(Drawable drawable) {
        this.f6122i.f15920y.setImageDrawable(drawable);
    }

    public void setErrorIconDrawable(Drawable drawable) {
        this.f6122i.i(drawable);
    }

    public void setEndIconContentDescription(CharSequence charSequence) {
        CheckableImageButton checkableImageButton = this.f6122i.f15920y;
        if (checkableImageButton.getContentDescription() != charSequence) {
            checkableImageButton.setContentDescription(charSequence);
        }
    }

    public void setEndIconDrawable(Drawable drawable) {
        n nVar = this.f6122i;
        TextInputLayout textInputLayout = nVar.f15914d;
        CheckableImageButton checkableImageButton = nVar.f15920y;
        checkableImageButton.setImageDrawable(drawable);
        if (drawable != null) {
            io.sentry.config.a.c(textInputLayout, checkableImageButton, nVar.H, nVar.I);
            io.sentry.config.a.G(textInputLayout, checkableImageButton, nVar.H);
        }
    }
}
