package androidx.core.view;

import android.animation.ValueAnimator;
import android.graphics.drawable.Drawable;
import android.view.View;
import com.discord.chat.databinding.AudioPlayerViewBinding;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerWipeAnimatorManager;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class y0 implements ValueAnimator.AnimatorUpdateListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f1656b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f1657c;

    public /* synthetic */ y0(int i5, Object obj, Object obj2) {
        this.a = i5;
        this.f1656b = obj;
        this.f1657c = obj2;
    }

    @Override // android.animation.ValueAnimator.AnimatorUpdateListener
    public final void onAnimationUpdate(ValueAnimator valueAnimator) {
        switch (this.a) {
            case 0:
                ((View) ((i.j0) ((gj.c) this.f1656b).f9329e).f10328d.getParent()).invalidate();
                return;
            case 1:
                AudioPlayerWipeAnimatorManager.scaleAnimator_delegate$lambda$5$lambda$4$lambda$3((AudioPlayerViewBinding) this.f1656b, (AudioPlayerWipeAnimatorManager) this.f1657c, valueAnimator);
                return;
            case 2:
                gh.m mVar = (gh.m) this.f1656b;
                gh.k kVar = (gh.k) this.f1657c;
                mVar.getClass();
                if (kVar.a(true) && kVar.f9297m != 0 && mVar.isVisible()) {
                    mVar.invalidateSelf();
                    return;
                }
                return;
            case 3:
                hl.b this$0 = (hl.b) this.f1656b;
                hl.d update = (hl.d) this.f1657c;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                Intrinsics.checkNotNullParameter(update, "$update");
                this$0.c(new hl.a(0, update, valueAnimator));
                return;
            default:
                ng.g gVar = (ng.g) this.f1656b;
                lh.i iVar = (lh.i) this.f1657c;
                float floatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                iVar.p(floatValue);
                Drawable drawable = gVar.U;
                if (drawable instanceof lh.i) {
                    ((lh.i) drawable).p(floatValue);
                }
                Iterator it = gVar.O.iterator();
                if (it.hasNext()) {
                    throw s4.h.b(it);
                }
                Iterator it2 = gVar.P.iterator();
                if (it2.hasNext()) {
                    throw s4.h.b(it2);
                }
                return;
        }
    }
}
