package am;

import android.animation.ValueAnimator;
import android.app.Activity;
import android.view.View;
import android.view.Window;
import com.discord.chat.presentation.message.view.voicemessages.AudioProgressBar;
import com.facebook.react.modules.statusbar.StatusBarModule$setColor$1;
import com.google.android.exoplayer2.ui.DefaultTimeBar;
import gh.m;
import kotlin.jvm.internal.Intrinsics;
import l4.v;
import oh.k;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f671b;

    public /* synthetic */ c(int i5, Object obj) {
        this.a = i5;
        this.f671b = obj;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator animator) {
        int i5 = this.a;
        Object obj = this.f671b;
        switch (i5) {
            case 0:
                Intrinsics.checkNotNullParameter(animator, "animator");
                Object animatedValue = animator.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Int");
                ((Window) obj).setStatusBarColor(((Integer) animatedValue).intValue());
                break;
            case 1:
                AudioProgressBar.animateKnob$lambda$3$lambda$2((AudioProgressBar) obj, animator);
                break;
            case 2:
                StatusBarModule$setColor$1.runGuarded$lambda$0((Activity) obj, animator);
                break;
            case 3:
                m mVar = (m) obj;
                mVar.N.f9314d = mVar.S.getInterpolation(mVar.R.getAnimatedFraction());
                break;
            case 4:
                DefaultTimeBar defaultTimeBar = (DefaultTimeBar) obj;
                int i6 = DefaultTimeBar.f5492n0;
                defaultTimeBar.getClass();
                defaultTimeBar.f5498e0 = ((Float) animator.getAnimatedValue()).floatValue();
                defaultTimeBar.invalidate(defaultTimeBar.f5495d);
                break;
            case 5:
                v vVar = (v) obj;
                l4.a aVar = vVar.f13794i0;
                if (aVar == null) {
                    aVar = l4.a.f13702d;
                }
                if (aVar != l4.a.f13703e) {
                    t4.c cVar = vVar.N;
                    if (cVar != null) {
                        cVar.s(vVar.f13789e.d());
                        break;
                    }
                } else {
                    vVar.invalidateSelf();
                    break;
                }
                break;
            case 6:
                Intrinsics.checkNotNullParameter(animator, "it");
                View view = ((nm.c) obj).f15554b;
                Object animatedValue2 = animator.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue2, "null cannot be cast to non-null type kotlin.Float");
                view.setAlpha(((Float) animatedValue2).floatValue());
                break;
            case 7:
                nm.d dVar = (nm.d) obj;
                Intrinsics.checkNotNullParameter(animator, "animator");
                Object animatedValue3 = animator.getAnimatedValue();
                Float f2 = animatedValue3 instanceof Float ? (Float) animatedValue3 : null;
                if (f2 != null) {
                    dVar.a.setAlpha(f2.floatValue());
                    break;
                }
                break;
            case 8:
                k kVar = (k) obj;
                kVar.getClass();
                kVar.f15923d.setAlpha(((Float) animator.getAnimatedValue()).floatValue());
                break;
            default:
                ug.c cVar2 = (ug.c) obj;
                cVar2.getClass();
                float floatValue = ((Float) animator.getAnimatedValue()).floatValue();
                cVar2.j.setAlpha((int) (255.0f * floatValue));
                cVar2.f18902x = floatValue;
                break;
        }
    }
}
