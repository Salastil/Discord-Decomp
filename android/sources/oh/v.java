package oh;

import a5.k0;
import android.content.res.ColorStateList;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import androidx.appcompat.widget.AppCompatTextView;
import com.discord.R;
import com.google.android.material.internal.CheckableImageButton;
import com.google.android.material.textfield.TextInputLayout;

/* loaded from: classes3.dex */
public final class v extends LinearLayout {
    public ImageView.ScaleType E;
    public View.OnLongClickListener F;
    public boolean G;

    /* renamed from: d, reason: collision with root package name */
    public final TextInputLayout f15960d;

    /* renamed from: e, reason: collision with root package name */
    public final AppCompatTextView f15961e;

    /* renamed from: i, reason: collision with root package name */
    public CharSequence f15962i;

    /* renamed from: v, reason: collision with root package name */
    public final CheckableImageButton f15963v;

    /* renamed from: w, reason: collision with root package name */
    public ColorStateList f15964w;

    /* renamed from: x, reason: collision with root package name */
    public PorterDuff.Mode f15965x;

    /* renamed from: y, reason: collision with root package name */
    public int f15966y;

    public v(TextInputLayout textInputLayout, e4.m mVar) {
        super(textInputLayout.getContext());
        CharSequence text;
        this.f15960d = textInputLayout;
        setVisibility(8);
        setOrientation(0);
        setLayoutParams(new FrameLayout.LayoutParams(-2, -1, 8388611));
        CheckableImageButton checkableImageButton = (CheckableImageButton) LayoutInflater.from(getContext()).inflate(R.layout.design_text_input_start_icon, (ViewGroup) this, false);
        this.f15963v = checkableImageButton;
        AppCompatTextView appCompatTextView = new AppCompatTextView(getContext(), null);
        this.f15961e = appCompatTextView;
        if (k0.C(getContext())) {
            ((ViewGroup.MarginLayoutParams) checkableImageButton.getLayoutParams()).setMarginEnd(0);
        }
        View.OnLongClickListener onLongClickListener = this.F;
        checkableImageButton.setOnClickListener(null);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
        this.F = null;
        checkableImageButton.setOnLongClickListener(null);
        io.sentry.config.a.J(checkableImageButton, null);
        TypedArray typedArray = (TypedArray) mVar.f7964i;
        if (typedArray.hasValue(70)) {
            this.f15964w = k0.v(getContext(), mVar, 70);
        }
        if (typedArray.hasValue(71)) {
            this.f15965x = ch.q.h(typedArray.getInt(71, -1), null);
        }
        if (typedArray.hasValue(67)) {
            b(mVar.U(67));
            if (typedArray.hasValue(66) && checkableImageButton.getContentDescription() != (text = typedArray.getText(66))) {
                checkableImageButton.setContentDescription(text);
            }
            checkableImageButton.setCheckable(typedArray.getBoolean(65, true));
        }
        int dimensionPixelSize = typedArray.getDimensionPixelSize(68, getResources().getDimensionPixelSize(R.dimen.mtrl_min_touch_target_size));
        if (dimensionPixelSize < 0) {
            throw new IllegalArgumentException("startIconSize cannot be less than 0");
        }
        if (dimensionPixelSize != this.f15966y) {
            this.f15966y = dimensionPixelSize;
            checkableImageButton.setMinimumWidth(dimensionPixelSize);
            checkableImageButton.setMinimumHeight(dimensionPixelSize);
        }
        if (typedArray.hasValue(69)) {
            ImageView.ScaleType j = io.sentry.config.a.j(typedArray.getInt(69, -1));
            this.E = j;
            checkableImageButton.setScaleType(j);
        }
        appCompatTextView.setVisibility(8);
        appCompatTextView.setId(R.id.textinput_prefix_text);
        appCompatTextView.setLayoutParams(new LinearLayout.LayoutParams(-2, -2));
        appCompatTextView.setAccessibilityLiveRegion(1);
        appCompatTextView.setTextAppearance(typedArray.getResourceId(61, 0));
        if (typedArray.hasValue(62)) {
            appCompatTextView.setTextColor(mVar.T(62));
        }
        CharSequence text2 = typedArray.getText(60);
        this.f15962i = TextUtils.isEmpty(text2) ? null : text2;
        appCompatTextView.setText(text2);
        e();
        addView(checkableImageButton);
        addView(appCompatTextView);
    }

    public final int a() {
        int i5;
        CheckableImageButton checkableImageButton = this.f15963v;
        if (checkableImageButton.getVisibility() == 0) {
            i5 = ((ViewGroup.MarginLayoutParams) checkableImageButton.getLayoutParams()).getMarginEnd() + checkableImageButton.getMeasuredWidth();
        } else {
            i5 = 0;
        }
        return this.f15961e.getPaddingStart() + getPaddingStart() + i5;
    }

    public final void b(Drawable drawable) {
        CheckableImageButton checkableImageButton = this.f15963v;
        checkableImageButton.setImageDrawable(drawable);
        if (drawable != null) {
            ColorStateList colorStateList = this.f15964w;
            PorterDuff.Mode mode = this.f15965x;
            TextInputLayout textInputLayout = this.f15960d;
            io.sentry.config.a.c(textInputLayout, checkableImageButton, colorStateList, mode);
            c(true);
            io.sentry.config.a.G(textInputLayout, checkableImageButton, this.f15964w);
            return;
        }
        c(false);
        View.OnLongClickListener onLongClickListener = this.F;
        checkableImageButton.setOnClickListener(null);
        io.sentry.config.a.J(checkableImageButton, onLongClickListener);
        this.F = null;
        checkableImageButton.setOnLongClickListener(null);
        io.sentry.config.a.J(checkableImageButton, null);
        if (checkableImageButton.getContentDescription() != null) {
            checkableImageButton.setContentDescription(null);
        }
    }

    public final void c(boolean z5) {
        CheckableImageButton checkableImageButton = this.f15963v;
        if ((checkableImageButton.getVisibility() == 0) != z5) {
            checkableImageButton.setVisibility(z5 ? 0 : 8);
            d();
            e();
        }
    }

    public final void d() {
        EditText editText = this.f15960d.f6138w;
        if (editText == null) {
            return;
        }
        this.f15961e.setPaddingRelative(this.f15963v.getVisibility() == 0 ? 0 : editText.getPaddingStart(), editText.getCompoundPaddingTop(), getContext().getResources().getDimensionPixelSize(R.dimen.material_input_text_to_prefix_suffix_padding), editText.getCompoundPaddingBottom());
    }

    public final void e() {
        int i5 = (this.f15962i == null || this.G) ? 8 : 0;
        setVisibility((this.f15963v.getVisibility() == 0 || i5 == 0) ? 0 : 8);
        this.f15961e.setVisibility(i5);
        this.f15960d.s();
    }

    @Override // android.widget.LinearLayout, android.view.View
    public final void onMeasure(int i5, int i6) {
        super.onMeasure(i5, i6);
        d();
    }
}
