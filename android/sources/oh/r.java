package oh;

import a5.k0;
import android.animation.Animator;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.Typeface;
import android.text.TextUtils;
import android.util.Property;
import android.view.View;
import android.view.animation.LinearInterpolator;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.appcompat.widget.AppCompatTextView;
import com.discord.R;
import com.facebook.imageutils.JfifUtil;
import com.google.android.material.textfield.TextInputLayout;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class r {
    public ColorStateList A;
    public Typeface B;
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f15928b;

    /* renamed from: c, reason: collision with root package name */
    public final int f15929c;

    /* renamed from: d, reason: collision with root package name */
    public final TimeInterpolator f15930d;

    /* renamed from: e, reason: collision with root package name */
    public final TimeInterpolator f15931e;

    /* renamed from: f, reason: collision with root package name */
    public final TimeInterpolator f15932f;

    /* renamed from: g, reason: collision with root package name */
    public final Context f15933g;

    /* renamed from: h, reason: collision with root package name */
    public final TextInputLayout f15934h;

    /* renamed from: i, reason: collision with root package name */
    public LinearLayout f15935i;
    public int j;
    public FrameLayout k;

    /* renamed from: l, reason: collision with root package name */
    public AnimatorSet f15936l;

    /* renamed from: m, reason: collision with root package name */
    public final float f15937m;

    /* renamed from: n, reason: collision with root package name */
    public int f15938n;

    /* renamed from: o, reason: collision with root package name */
    public int f15939o;

    /* renamed from: p, reason: collision with root package name */
    public CharSequence f15940p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f15941q;

    /* renamed from: r, reason: collision with root package name */
    public AppCompatTextView f15942r;

    /* renamed from: s, reason: collision with root package name */
    public CharSequence f15943s;

    /* renamed from: t, reason: collision with root package name */
    public int f15944t;

    /* renamed from: u, reason: collision with root package name */
    public int f15945u;

    /* renamed from: v, reason: collision with root package name */
    public ColorStateList f15946v;

    /* renamed from: w, reason: collision with root package name */
    public CharSequence f15947w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f15948x;

    /* renamed from: y, reason: collision with root package name */
    public AppCompatTextView f15949y;

    /* renamed from: z, reason: collision with root package name */
    public int f15950z;

    public r(TextInputLayout textInputLayout) {
        Context context = textInputLayout.getContext();
        this.f15933g = context;
        this.f15934h = textInputLayout;
        this.f15937m = context.getResources().getDimensionPixelSize(R.dimen.design_textinput_caption_translate_y);
        this.a = ta.a.G(context, R.attr.motionDurationShort4, JfifUtil.MARKER_EOI);
        this.f15928b = ta.a.G(context, R.attr.motionDurationMedium4, 167);
        this.f15929c = ta.a.G(context, R.attr.motionDurationShort4, 167);
        this.f15930d = ta.a.H(context, R.attr.motionEasingEmphasizedDecelerateInterpolator, mg.a.f14495d);
        LinearInterpolator linearInterpolator = mg.a.a;
        this.f15931e = ta.a.H(context, R.attr.motionEasingEmphasizedDecelerateInterpolator, linearInterpolator);
        this.f15932f = ta.a.H(context, R.attr.motionEasingLinearInterpolator, linearInterpolator);
    }

    public final void a(AppCompatTextView appCompatTextView, int i5) {
        if (this.f15935i == null && this.k == null) {
            Context context = this.f15933g;
            LinearLayout linearLayout = new LinearLayout(context);
            this.f15935i = linearLayout;
            linearLayout.setOrientation(0);
            LinearLayout linearLayout2 = this.f15935i;
            TextInputLayout textInputLayout = this.f15934h;
            textInputLayout.addView(linearLayout2, -1, -2);
            this.k = new FrameLayout(context);
            this.f15935i.addView(this.k, new LinearLayout.LayoutParams(0, -2, 1.0f));
            if (textInputLayout.getEditText() != null) {
                b();
            }
        }
        if (i5 == 0 || i5 == 1) {
            this.k.setVisibility(0);
            this.k.addView(appCompatTextView);
        } else {
            this.f15935i.addView(appCompatTextView, new LinearLayout.LayoutParams(-2, -2));
        }
        this.f15935i.setVisibility(0);
        this.j++;
    }

    public final void b() {
        if (this.f15935i != null) {
            TextInputLayout textInputLayout = this.f15934h;
            if (textInputLayout.getEditText() != null) {
                EditText editText = textInputLayout.getEditText();
                Context context = this.f15933g;
                boolean C = k0.C(context);
                LinearLayout linearLayout = this.f15935i;
                int paddingStart = editText.getPaddingStart();
                if (C) {
                    paddingStart = context.getResources().getDimensionPixelSize(R.dimen.material_helper_text_font_1_3_padding_horizontal);
                }
                int dimensionPixelSize = context.getResources().getDimensionPixelSize(R.dimen.material_helper_text_default_padding_top);
                if (C) {
                    dimensionPixelSize = context.getResources().getDimensionPixelSize(R.dimen.material_helper_text_font_1_3_padding_top);
                }
                int paddingEnd = editText.getPaddingEnd();
                if (C) {
                    paddingEnd = context.getResources().getDimensionPixelSize(R.dimen.material_helper_text_font_1_3_padding_horizontal);
                }
                linearLayout.setPaddingRelative(paddingStart, dimensionPixelSize, paddingEnd, 0);
            }
        }
    }

    public final void c() {
        AnimatorSet animatorSet = this.f15936l;
        if (animatorSet != null) {
            animatorSet.cancel();
        }
    }

    public final void d(ArrayList arrayList, boolean z5, AppCompatTextView appCompatTextView, int i5, int i6, int i10) {
        if (appCompatTextView == null || !z5) {
            return;
        }
        if (i5 == i10 || i5 == i6) {
            boolean z6 = i10 == i5;
            ObjectAnimator ofFloat = ObjectAnimator.ofFloat(appCompatTextView, (Property<AppCompatTextView, Float>) View.ALPHA, z6 ? 1.0f : 0.0f);
            int i11 = this.f15929c;
            ofFloat.setDuration(z6 ? this.f15928b : i11);
            ofFloat.setInterpolator(z6 ? this.f15931e : this.f15932f);
            if (i5 == i10 && i6 != 0) {
                ofFloat.setStartDelay(i11);
            }
            arrayList.add(ofFloat);
            if (i10 != i5 || i6 == 0) {
                return;
            }
            ObjectAnimator ofFloat2 = ObjectAnimator.ofFloat(appCompatTextView, (Property<AppCompatTextView, Float>) View.TRANSLATION_Y, -this.f15937m, 0.0f);
            ofFloat2.setDuration(this.a);
            ofFloat2.setInterpolator(this.f15930d);
            ofFloat2.setStartDelay(i11);
            arrayList.add(ofFloat2);
        }
    }

    public final TextView e(int i5) {
        if (i5 == 1) {
            return this.f15942r;
        }
        if (i5 != 2) {
            return null;
        }
        return this.f15949y;
    }

    public final void f() {
        this.f15940p = null;
        c();
        if (this.f15938n == 1) {
            if (!this.f15948x || TextUtils.isEmpty(this.f15947w)) {
                this.f15939o = 0;
            } else {
                this.f15939o = 2;
            }
        }
        i(this.f15938n, this.f15939o, h(this.f15942r, ""));
    }

    public final void g(AppCompatTextView appCompatTextView, int i5) {
        FrameLayout frameLayout;
        LinearLayout linearLayout = this.f15935i;
        if (linearLayout == null) {
            return;
        }
        if ((i5 == 0 || i5 == 1) && (frameLayout = this.k) != null) {
            frameLayout.removeView(appCompatTextView);
        } else {
            linearLayout.removeView(appCompatTextView);
        }
        int i6 = this.j - 1;
        this.j = i6;
        LinearLayout linearLayout2 = this.f15935i;
        if (i6 == 0) {
            linearLayout2.setVisibility(8);
        }
    }

    public final boolean h(AppCompatTextView appCompatTextView, CharSequence charSequence) {
        TextInputLayout textInputLayout = this.f15934h;
        if (textInputLayout.isLaidOut() && textInputLayout.isEnabled()) {
            return (this.f15939o == this.f15938n && appCompatTextView != null && TextUtils.equals(appCompatTextView.getText(), charSequence)) ? false : true;
        }
        return false;
    }

    public final void i(int i5, int i6, boolean z5) {
        TextView e9;
        TextView e10;
        r rVar = this;
        if (i5 == i6) {
            return;
        }
        if (z5) {
            AnimatorSet animatorSet = new AnimatorSet();
            rVar.f15936l = animatorSet;
            ArrayList arrayList = new ArrayList();
            rVar.d(arrayList, rVar.f15948x, rVar.f15949y, 2, i5, i6);
            rVar.d(arrayList, rVar.f15941q, rVar.f15942r, 1, i5, i6);
            int size = arrayList.size();
            long j = 0;
            for (int i10 = 0; i10 < size; i10++) {
                Animator animator = (Animator) arrayList.get(i10);
                j = Math.max(j, animator.getDuration() + animator.getStartDelay());
            }
            ValueAnimator ofInt = ValueAnimator.ofInt(0, 0);
            ofInt.setDuration(j);
            arrayList.add(0, ofInt);
            animatorSet.playTogether(arrayList);
            p pVar = new p(this, i6, e(i5), i5, rVar.e(i6));
            rVar = this;
            animatorSet.addListener(pVar);
            animatorSet.start();
        } else if (i5 != i6) {
            if (i6 != 0 && (e10 = rVar.e(i6)) != null) {
                e10.setVisibility(0);
                e10.setAlpha(1.0f);
            }
            if (i5 != 0 && (e9 = e(i5)) != null) {
                e9.setVisibility(4);
                if (i5 == 1) {
                    e9.setText((CharSequence) null);
                }
            }
            rVar.f15938n = i6;
        }
        TextInputLayout textInputLayout = rVar.f15934h;
        textInputLayout.t();
        textInputLayout.w(z5, false);
        textInputLayout.z();
    }
}
