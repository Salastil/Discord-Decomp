package oh;

import a5.k0;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.SparseArray;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityManager;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import androidx.appcompat.widget.AppCompatTextView;
import com.discord.R;
import com.google.android.gms.internal.play_billing.w1;
import com.google.android.material.internal.CheckableImageButton;
import com.google.android.material.textfield.TextInputLayout;
import java.util.Iterator;
import java.util.LinkedHashSet;

/* loaded from: classes3.dex */
public final class n extends LinearLayout {
    public final w1 E;
    public int F;
    public final LinkedHashSet G;
    public ColorStateList H;
    public PorterDuff.Mode I;
    public int J;
    public ImageView.ScaleType K;
    public View.OnLongClickListener L;
    public CharSequence M;
    public final AppCompatTextView N;
    public boolean O;
    public EditText P;
    public final AccessibilityManager Q;
    public AccessibilityManager.TouchExplorationStateChangeListener R;
    public final l S;

    /* renamed from: d, reason: collision with root package name */
    public final TextInputLayout f15914d;

    /* renamed from: e, reason: collision with root package name */
    public final FrameLayout f15915e;

    /* renamed from: i, reason: collision with root package name */
    public final CheckableImageButton f15916i;

    /* renamed from: v, reason: collision with root package name */
    public ColorStateList f15917v;

    /* renamed from: w, reason: collision with root package name */
    public PorterDuff.Mode f15918w;

    /* renamed from: x, reason: collision with root package name */
    public View.OnLongClickListener f15919x;

    /* renamed from: y, reason: collision with root package name */
    public final CheckableImageButton f15920y;

    public n(TextInputLayout textInputLayout, e4.m mVar) {
        super(textInputLayout.getContext());
        CharSequence text;
        this.F = 0;
        this.G = new LinkedHashSet();
        this.S = new l(this);
        m mVar2 = new m(this);
        this.Q = (AccessibilityManager) getContext().getSystemService("accessibility");
        this.f15914d = textInputLayout;
        setVisibility(8);
        setOrientation(0);
        setLayoutParams(new FrameLayout.LayoutParams(-2, -1, 8388613));
        FrameLayout frameLayout = new FrameLayout(getContext());
        this.f15915e = frameLayout;
        frameLayout.setVisibility(8);
        frameLayout.setLayoutParams(new LinearLayout.LayoutParams(-2, -1));
        LayoutInflater from = LayoutInflater.from(getContext());
        CheckableImageButton a = a(this, from, R.id.text_input_error_icon);
        this.f15916i = a;
        CheckableImageButton a10 = a(frameLayout, from, R.id.text_input_end_icon);
        this.f15920y = a10;
        w1 w1Var = new w1();
        w1Var.f5868v = new SparseArray();
        w1Var.f5865d = this;
        TypedArray typedArray = (TypedArray) mVar.f7964i;
        w1Var.f5866e = typedArray.getResourceId(28, 0);
        w1Var.f5867i = typedArray.getResourceId(53, 0);
        this.E = w1Var;
        AppCompatTextView appCompatTextView = new AppCompatTextView(getContext(), null);
        this.N = appCompatTextView;
        TypedArray typedArray2 = (TypedArray) mVar.f7964i;
        if (typedArray2.hasValue(38)) {
            this.f15917v = k0.v(getContext(), mVar, 38);
        }
        if (typedArray2.hasValue(39)) {
            this.f15918w = ch.q.h(typedArray2.getInt(39, -1), null);
        }
        if (typedArray2.hasValue(37)) {
            i(mVar.U(37));
        }
        a.setContentDescription(getResources().getText(R.string.error_icon_content_description));
        a.setImportantForAccessibility(2);
        a.setClickable(false);
        a.setPressable(false);
        a.setCheckable(false);
        a.setFocusable(false);
        if (!typedArray2.hasValue(54)) {
            if (typedArray2.hasValue(32)) {
                this.H = k0.v(getContext(), mVar, 32);
            }
            if (typedArray2.hasValue(33)) {
                this.I = ch.q.h(typedArray2.getInt(33, -1), null);
            }
        }
        if (typedArray2.hasValue(30)) {
            g(typedArray2.getInt(30, 0));
            if (typedArray2.hasValue(27) && a10.getContentDescription() != (text = typedArray2.getText(27))) {
                a10.setContentDescription(text);
            }
            a10.setCheckable(typedArray2.getBoolean(26, true));
        } else if (typedArray2.hasValue(54)) {
            if (typedArray2.hasValue(55)) {
                this.H = k0.v(getContext(), mVar, 55);
            }
            if (typedArray2.hasValue(56)) {
                this.I = ch.q.h(typedArray2.getInt(56, -1), null);
            }
            g(typedArray2.getBoolean(54, false) ? 1 : 0);
            CharSequence text2 = typedArray2.getText(52);
            if (a10.getContentDescription() != text2) {
                a10.setContentDescription(text2);
            }
        }
        int dimensionPixelSize = typedArray2.getDimensionPixelSize(29, getResources().getDimensionPixelSize(R.dimen.mtrl_min_touch_target_size));
        if (dimensionPixelSize < 0) {
            throw new IllegalArgumentException("endIconSize cannot be less than 0");
        }
        if (dimensionPixelSize != this.J) {
            this.J = dimensionPixelSize;
            a10.setMinimumWidth(dimensionPixelSize);
            a10.setMinimumHeight(dimensionPixelSize);
            a.setMinimumWidth(dimensionPixelSize);
            a.setMinimumHeight(dimensionPixelSize);
        }
        if (typedArray2.hasValue(31)) {
            ImageView.ScaleType j = io.sentry.config.a.j(typedArray2.getInt(31, -1));
            this.K = j;
            a10.setScaleType(j);
            a.setScaleType(j);
        }
        appCompatTextView.setVisibility(8);
        appCompatTextView.setId(R.id.textinput_suffix_text);
        appCompatTextView.setLayoutParams(new LinearLayout.LayoutParams(-2, -2, 80.0f));
        appCompatTextView.setAccessibilityLiveRegion(1);
        appCompatTextView.setTextAppearance(typedArray2.getResourceId(73, 0));
        if (typedArray2.hasValue(74)) {
            appCompatTextView.setTextColor(mVar.T(74));
        }
        CharSequence text3 = typedArray2.getText(72);
        this.M = TextUtils.isEmpty(text3) ? null : text3;
        appCompatTextView.setText(text3);
        n();
        frameLayout.addView(a10);
        addView(appCompatTextView);
        addView(frameLayout);
        addView(a);
        textInputLayout.C0.add(mVar2);
        if (textInputLayout.f6138w != null) {
            mVar2.a(textInputLayout);
        }
        addOnAttachStateChangeListener(new el.i(4, this));
    }

    public final CheckableImageButton a(ViewGroup viewGroup, LayoutInflater layoutInflater, int i5) {
        CheckableImageButton checkableImageButton = (CheckableImageButton) layoutInflater.inflate(R.layout.design_text_input_end_icon, viewGroup, false);
        checkableImageButton.setId(i5);
        if (k0.C(getContext())) {
            ((ViewGroup.MarginLayoutParams) checkableImageButton.getLayoutParams()).setMarginStart(0);
        }
        return checkableImageButton;
    }

    public final o b() {
        o dVar;
        int i5 = this.F;
        w1 w1Var = this.E;
        SparseArray sparseArray = (SparseArray) w1Var.f5868v;
        o oVar = (o) sparseArray.get(i5);
        if (oVar != null) {
            return oVar;
        }
        n nVar = (n) w1Var.f5865d;
        if (i5 == -1) {
            dVar = new d(nVar, 0);
        } else if (i5 == 0) {
            dVar = new d(nVar, 1);
        } else if (i5 == 1) {
            dVar = new u(nVar, w1Var.f5867i);
        } else if (i5 == 2) {
            dVar = new c(nVar);
        } else {
            if (i5 != 3) {
                throw new IllegalArgumentException(k0.d.i(i5, "Invalid end icon mode: "));
            }
            dVar = new k(nVar);
        }
        sparseArray.append(i5, dVar);
        return dVar;
    }

    public final int c() {
        int marginStart;
        if (d() || e()) {
            CheckableImageButton checkableImageButton = this.f15920y;
            marginStart = ((ViewGroup.MarginLayoutParams) checkableImageButton.getLayoutParams()).getMarginStart() + checkableImageButton.getMeasuredWidth();
        } else {
            marginStart = 0;
        }
        return this.N.getPaddingEnd() + getPaddingEnd() + marginStart;
    }

    public final boolean d() {
        return this.f15915e.getVisibility() == 0 && this.f15920y.getVisibility() == 0;
    }

    public final boolean e() {
        return this.f15916i.getVisibility() == 0;
    }

    public final void f(boolean z5) {
        boolean z6;
        boolean isActivated;
        boolean z7;
        o b10 = b();
        boolean j = b10.j();
        CheckableImageButton checkableImageButton = this.f15920y;
        boolean z8 = true;
        if (!j || (z7 = checkableImageButton.f6075v) == b10.k()) {
            z6 = false;
        } else {
            checkableImageButton.setChecked(!z7);
            z6 = true;
        }
        if (!(b10 instanceof k) || (isActivated = checkableImageButton.isActivated()) == ((k) b10).f15906l) {
            z8 = z6;
        } else {
            checkableImageButton.setActivated(!isActivated);
        }
        if (z5 || z8) {
            io.sentry.config.a.G(this.f15914d, checkableImageButton, this.H);
        }
    }

    public final void g(int i5) {
        if (this.F == i5) {
            return;
        }
        o b10 = b();
        AccessibilityManager.TouchExplorationStateChangeListener touchExplorationStateChangeListener = this.R;
        AccessibilityManager accessibilityManager = this.Q;
        if (touchExplorationStateChangeListener != null && accessibilityManager != null) {
            accessibilityManager.removeTouchExplorationStateChangeListener(touchExplorationStateChangeListener);
        }
        this.R = null;
        b10.r();
        this.F = i5;
        Iterator it = this.G.iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
        h(i5 != 0);
        o b11 = b();
        int i6 = this.E.f5866e;
        if (i6 == 0) {
            i6 = b11.d();
        }
        Drawable J = i6 != 0 ? ys.d.J(getContext(), i6) : null;
        CheckableImageButton checkableImageButton = this.f15920y;
        checkableImageButton.setImageDrawable(J);
        TextInputLayout textInputLayout = this.f15914d;
        if (J != null) {
            io.sentry.config.a.c(textInputLayout, checkableImageButton, this.H, this.I);
            io.sentry.config.a.G(textInputLayout, checkableImageButton, this.H);
        }
        int c6 = b11.c();
        CharSequence text = c6 != 0 ? getResources().getText(c6) : null;
        if (checkableImageButton.getContentDescription() != text) {
            checkableImageButton.setContentDescription(text);
        }
        checkableImageButton.setCheckable(b11.j());
        if (!b11.i(textInputLayout.getBoxBackgroundMode())) {
            throw new IllegalStateException("The current box background mode " + textInputLayout.getBoxBackgroundMode() + " is not supported by the end icon mode " + i5);
        }
        b11.q();
        AccessibilityManager.TouchExplorationStateChangeListener h6 = b11.h();
        this.R = h6;
        if (h6 != null && accessibilityManager != null && isAttachedToWindow()) {
            accessibilityManager.addTouchExplorationStateChangeListener(this.R);
        }
        View.OnClickListener f2 = b11.f();
        View.OnLongClickListener onLongClickListener = this.L;
        checkableImageButton.setOnClickListener(f2);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
        EditText editText = this.P;
        if (editText != null) {
            b11.l(editText);
            j(b11);
        }
        io.sentry.config.a.c(textInputLayout, checkableImageButton, this.H, this.I);
        f(true);
    }

    public final void h(boolean z5) {
        if (d() != z5) {
            this.f15920y.setVisibility(z5 ? 0 : 8);
            k();
            m();
            this.f15914d.s();
        }
    }

    public final void i(Drawable drawable) {
        CheckableImageButton checkableImageButton = this.f15916i;
        checkableImageButton.setImageDrawable(drawable);
        l();
        io.sentry.config.a.c(this.f15914d, checkableImageButton, this.f15917v, this.f15918w);
    }

    public final void j(o oVar) {
        if (this.P == null) {
            return;
        }
        if (oVar.e() != null) {
            this.P.setOnFocusChangeListener(oVar.e());
        }
        if (oVar.g() != null) {
            this.f15920y.setOnFocusChangeListener(oVar.g());
        }
    }

    public final void k() {
        this.f15915e.setVisibility((this.f15920y.getVisibility() != 0 || e()) ? 8 : 0);
        setVisibility((d() || e() || !((this.M == null || this.O) ? 8 : false)) ? 0 : 8);
    }

    public final void l() {
        CheckableImageButton checkableImageButton = this.f15916i;
        Drawable drawable = checkableImageButton.getDrawable();
        TextInputLayout textInputLayout = this.f15914d;
        checkableImageButton.setVisibility((drawable != null && textInputLayout.H.f15941q && textInputLayout.o()) ? 0 : 8);
        k();
        m();
        if (this.F != 0) {
            return;
        }
        textInputLayout.s();
    }

    public final void m() {
        TextInputLayout textInputLayout = this.f15914d;
        if (textInputLayout.f6138w == null) {
            return;
        }
        this.N.setPaddingRelative(getContext().getResources().getDimensionPixelSize(R.dimen.material_input_text_to_prefix_suffix_padding), textInputLayout.f6138w.getPaddingTop(), (d() || e()) ? 0 : textInputLayout.f6138w.getPaddingEnd(), textInputLayout.f6138w.getPaddingBottom());
    }

    public final void n() {
        AppCompatTextView appCompatTextView = this.N;
        int visibility = appCompatTextView.getVisibility();
        int i5 = (this.M == null || this.O) ? 8 : 0;
        if (visibility != i5) {
            b().o(i5 == 0);
        }
        k();
        appCompatTextView.setVisibility(i5);
        this.f15914d.s();
    }
}
