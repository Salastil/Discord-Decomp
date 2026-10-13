package wm;

import android.animation.ValueAnimator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ qa.t f19895b;

    public /* synthetic */ a(qa.t tVar, int i5) {
        this.a = i5;
        this.f19895b = tVar;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator animation) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(animation, "animation");
                hc.b bVar = (hc.b) this.f19895b.f16718e;
                Object animatedValue = animation.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue, "null cannot be cast to non-null type kotlin.Float");
                ((vm.a) bVar.f9625c).setAlpha(((Float) animatedValue).floatValue());
                break;
            default:
                Intrinsics.checkNotNullParameter(animation, "animation");
                hc.b bVar2 = (hc.b) this.f19895b.f16718e;
                Object animatedValue2 = animation.getAnimatedValue();
                Intrinsics.checkNotNull(animatedValue2, "null cannot be cast to non-null type kotlin.Float");
                ((vm.a) bVar2.f9625c).setAlpha(((Float) animatedValue2).floatValue());
                break;
        }
    }
}
