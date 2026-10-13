package oh;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.widget.TextView;
import androidx.appcompat.widget.AppCompatTextView;

/* loaded from: classes3.dex */
public final class p extends AnimatorListenerAdapter {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ TextView f15924b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f15925c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ TextView f15926d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ r f15927e;

    public p(r rVar, int i5, TextView textView, int i6, TextView textView2) {
        this.f15927e = rVar;
        this.a = i5;
        this.f15924b = textView;
        this.f15925c = i6;
        this.f15926d = textView2;
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationEnd(Animator animator) {
        AppCompatTextView appCompatTextView;
        int i5 = this.a;
        r rVar = this.f15927e;
        rVar.f15938n = i5;
        rVar.f15936l = null;
        TextView textView = this.f15924b;
        if (textView != null) {
            textView.setVisibility(4);
            if (this.f15925c == 1 && (appCompatTextView = rVar.f15942r) != null) {
                appCompatTextView.setText((CharSequence) null);
            }
        }
        TextView textView2 = this.f15926d;
        if (textView2 != null) {
            textView2.setTranslationY(0.0f);
            textView2.setAlpha(1.0f);
        }
    }

    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
    public final void onAnimationStart(Animator animator) {
        TextView textView = this.f15926d;
        if (textView != null) {
            textView.setVisibility(0);
            textView.setAlpha(0.0f);
        }
    }
}
