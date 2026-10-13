package oh;

import android.animation.AnimatorSet;
import android.animation.TimeInterpolator;
import android.animation.ValueAnimator;
import android.view.View;
import android.widget.EditText;
import com.discord.R;
import com.google.android.material.internal.CheckableImageButton;
import io.sentry.android.core.h1;

/* loaded from: classes3.dex */
public final class c extends o {

    /* renamed from: e, reason: collision with root package name */
    public final int f15889e;

    /* renamed from: f, reason: collision with root package name */
    public final int f15890f;

    /* renamed from: g, reason: collision with root package name */
    public final TimeInterpolator f15891g;

    /* renamed from: h, reason: collision with root package name */
    public final TimeInterpolator f15892h;

    /* renamed from: i, reason: collision with root package name */
    public EditText f15893i;
    public final com.discord.chat.presentation.list.delegate.b j;
    public final com.discord.chat.input.views.b k;

    /* renamed from: l, reason: collision with root package name */
    public AnimatorSet f15894l;

    /* renamed from: m, reason: collision with root package name */
    public ValueAnimator f15895m;

    public c(n nVar) {
        super(nVar);
        this.j = new com.discord.chat.presentation.list.delegate.b(11, this);
        this.k = new com.discord.chat.input.views.b(2, this);
        this.f15889e = ta.a.G(nVar.getContext(), R.attr.motionDurationShort3, 100);
        this.f15890f = ta.a.G(nVar.getContext(), R.attr.motionDurationShort3, 150);
        this.f15891g = ta.a.H(nVar.getContext(), R.attr.motionEasingLinearInterpolator, mg.a.a);
        this.f15892h = ta.a.H(nVar.getContext(), R.attr.motionEasingEmphasizedInterpolator, mg.a.f14495d);
    }

    @Override // oh.o
    public final void a() {
        if (this.f15921b.M != null) {
            return;
        }
        s(t());
    }

    @Override // oh.o
    public final int c() {
        return R.string.clear_text_end_icon_content_description;
    }

    @Override // oh.o
    public final int d() {
        return R.drawable.mtrl_ic_cancel;
    }

    @Override // oh.o
    public final View.OnFocusChangeListener e() {
        return this.k;
    }

    @Override // oh.o
    public final View.OnClickListener f() {
        return this.j;
    }

    @Override // oh.o
    public final View.OnFocusChangeListener g() {
        return this.k;
    }

    @Override // oh.o
    public final void l(EditText editText) {
        this.f15893i = editText;
        this.a.setEndIconVisible(t());
    }

    @Override // oh.o
    public final void o(boolean z5) {
        if (this.f15921b.M == null) {
            return;
        }
        s(z5);
    }

    @Override // oh.o
    public final void q() {
        ValueAnimator ofFloat = ValueAnimator.ofFloat(0.8f, 1.0f);
        ofFloat.setInterpolator(this.f15892h);
        ofFloat.setDuration(this.f15890f);
        final int i5 = 1;
        ofFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener(this) { // from class: oh.a

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ c f15885b;

            {
                this.f15885b = this;
            }

            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                switch (i5) {
                    case 0:
                        c cVar = this.f15885b;
                        cVar.getClass();
                        cVar.f15923d.setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
                        break;
                    default:
                        c cVar2 = this.f15885b;
                        cVar2.getClass();
                        float floatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                        CheckableImageButton checkableImageButton = cVar2.f15923d;
                        checkableImageButton.setScaleX(floatValue);
                        checkableImageButton.setScaleY(floatValue);
                        break;
                }
            }
        });
        ValueAnimator ofFloat2 = ValueAnimator.ofFloat(0.0f, 1.0f);
        TimeInterpolator timeInterpolator = this.f15891g;
        ofFloat2.setInterpolator(timeInterpolator);
        int i6 = this.f15889e;
        ofFloat2.setDuration(i6);
        final int i10 = 0;
        ofFloat2.addUpdateListener(new ValueAnimator.AnimatorUpdateListener(this) { // from class: oh.a

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ c f15885b;

            {
                this.f15885b = this;
            }

            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                switch (i10) {
                    case 0:
                        c cVar = this.f15885b;
                        cVar.getClass();
                        cVar.f15923d.setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
                        break;
                    default:
                        c cVar2 = this.f15885b;
                        cVar2.getClass();
                        float floatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                        CheckableImageButton checkableImageButton = cVar2.f15923d;
                        checkableImageButton.setScaleX(floatValue);
                        checkableImageButton.setScaleY(floatValue);
                        break;
                }
            }
        });
        AnimatorSet animatorSet = new AnimatorSet();
        this.f15894l = animatorSet;
        animatorSet.playTogether(ofFloat, ofFloat2);
        this.f15894l.addListener(new b(this, i10));
        ValueAnimator ofFloat3 = ValueAnimator.ofFloat(1.0f, 0.0f);
        ofFloat3.setInterpolator(timeInterpolator);
        ofFloat3.setDuration(i6);
        ofFloat3.addUpdateListener(new ValueAnimator.AnimatorUpdateListener(this) { // from class: oh.a

            /* renamed from: b, reason: collision with root package name */
            public final /* synthetic */ c f15885b;

            {
                this.f15885b = this;
            }

            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                switch (i10) {
                    case 0:
                        c cVar = this.f15885b;
                        cVar.getClass();
                        cVar.f15923d.setAlpha(((Float) valueAnimator.getAnimatedValue()).floatValue());
                        break;
                    default:
                        c cVar2 = this.f15885b;
                        cVar2.getClass();
                        float floatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                        CheckableImageButton checkableImageButton = cVar2.f15923d;
                        checkableImageButton.setScaleX(floatValue);
                        checkableImageButton.setScaleY(floatValue);
                        break;
                }
            }
        });
        this.f15895m = ofFloat3;
        ofFloat3.addListener(new b(this, i5));
    }

    @Override // oh.o
    public final void r() {
        EditText editText = this.f15893i;
        if (editText != null) {
            editText.post(new h1(28, this));
        }
    }

    public final void s(boolean z5) {
        boolean z6 = this.f15921b.d() == z5;
        if (z5 && !this.f15894l.isRunning()) {
            this.f15895m.cancel();
            this.f15894l.start();
            if (z6) {
                this.f15894l.end();
                return;
            }
            return;
        }
        if (z5) {
            return;
        }
        this.f15894l.cancel();
        this.f15895m.start();
        if (z6) {
            this.f15895m.end();
        }
    }

    public final boolean t() {
        EditText editText = this.f15893i;
        if (editText != null) {
            return (editText.hasFocus() || this.f15923d.hasFocus()) && this.f15893i.getText().length() > 0;
        }
        return false;
    }
}
