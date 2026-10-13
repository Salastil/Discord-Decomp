package gh;

import android.animation.ValueAnimator;
import android.content.Context;
import android.view.animation.LinearInterpolator;
import com.discord.R;
import com.google.android.material.button.MaterialButton;

/* loaded from: classes3.dex */
public final class l extends zk.a {
    public final /* synthetic */ int j;

    public /* synthetic */ l(int i5) {
        this.j = i5;
    }

    @Override // zk.a
    public final void K(Object obj, float f2) {
        switch (this.j) {
            case 0:
                m mVar = (m) obj;
                mVar.N.f9312b = f2 / 10000.0f;
                mVar.invalidateSelf();
                int i5 = (int) f2;
                if (mVar.f9306e.a(true)) {
                    Context context = mVar.f9305d;
                    if (mVar.R == null) {
                        LinearInterpolator linearInterpolator = mg.a.a;
                        mVar.T = ta.a.H(context, R.attr.motionEasingStandardInterpolator, linearInterpolator);
                        mVar.U = ta.a.H(context, R.attr.motionEasingEmphasizedAccelerateInterpolator, linearInterpolator);
                        ValueAnimator valueAnimator = new ValueAnimator();
                        mVar.R = valueAnimator;
                        valueAnimator.setDuration(500L);
                        mVar.R.setFloatValues(0.0f, 1.0f);
                        mVar.R.setInterpolator(null);
                        mVar.R.addUpdateListener(new am.c(3, mVar));
                    }
                    float f10 = i5;
                    float f11 = (f10 < 1000.0f || f10 > 9000.0f) ? 0.0f : 1.0f;
                    if (f11 == mVar.O) {
                        if (!mVar.R.isRunning()) {
                            mVar.N.f9314d = f11;
                            mVar.invalidateSelf();
                            break;
                        }
                    } else {
                        if (mVar.R.isRunning()) {
                            mVar.R.cancel();
                        }
                        mVar.O = f11;
                        if (f11 != 1.0f) {
                            mVar.S = mVar.U;
                            mVar.R.reverse();
                            break;
                        } else {
                            mVar.S = mVar.T;
                            mVar.R.start();
                            break;
                        }
                    }
                }
                break;
            default:
                ((MaterialButton) obj).setDisplayedWidthIncrease(f2);
                break;
        }
    }

    @Override // zk.a
    public final float t(Object obj) {
        float displayedWidthIncrease;
        switch (this.j) {
            case 0:
                return ((m) obj).N.f9312b * 10000.0f;
            default:
                displayedWidthIncrease = ((MaterialButton) obj).getDisplayedWidthIncrease();
                return displayedWidthIncrease;
        }
    }
}
