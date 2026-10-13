package nn;

import android.view.View;
import android.view.animation.Animation;
import android.view.animation.Transformation;
import com.swmansion.rnscreens.v;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends Animation {

    /* renamed from: d, reason: collision with root package name */
    public final v f15580d;

    public b(v mFragment) {
        Intrinsics.checkNotNullParameter(mFragment, "mFragment");
        this.f15580d = mFragment;
    }

    @Override // android.view.animation.Animation
    public final void applyTransformation(final float f2, Transformation t5) {
        Intrinsics.checkNotNullParameter(t5, "t");
        super.applyTransformation(f2, t5);
        View view = this.f15580d.getView();
        if (view != null) {
            view.post(new Runnable() { // from class: nn.a
                @Override // java.lang.Runnable
                public final void run() {
                    b.this.f15580d.v(f2, !r0.isResumed());
                }
            });
        }
    }
}
