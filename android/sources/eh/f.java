package eh;

import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.content.res.Resources;
import android.util.Property;
import android.view.View;
import android.view.ViewGroup;
import com.discord.R;

/* loaded from: classes3.dex */
public final class f extends a {

    /* renamed from: g, reason: collision with root package name */
    public final float f8090g;

    /* renamed from: h, reason: collision with root package name */
    public final float f8091h;

    public f(View view) {
        super(view);
        Resources resources = view.getResources();
        this.f8090g = resources.getDimension(R.dimen.m3_back_progress_bottom_container_max_scale_x_distance);
        this.f8091h = resources.getDimension(R.dimen.m3_back_progress_bottom_container_max_scale_y_distance);
    }

    public final AnimatorSet a() {
        AnimatorSet animatorSet = new AnimatorSet();
        View view = this.f8084b;
        animatorSet.playTogether(ObjectAnimator.ofFloat(view, (Property<View, Float>) View.SCALE_X, 1.0f), ObjectAnimator.ofFloat(view, (Property<View, Float>) View.SCALE_Y, 1.0f));
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                animatorSet.playTogether(ObjectAnimator.ofFloat(viewGroup.getChildAt(i5), (Property<View, Float>) View.SCALE_Y, 1.0f));
            }
        }
        animatorSet.setInterpolator(new q2.a(1));
        return animatorSet;
    }

    public final void b(float f2) {
        float interpolation = this.a.getInterpolation(f2);
        View view = this.f8084b;
        float width = view.getWidth();
        float height = view.getHeight();
        if (width <= 0.0f || height <= 0.0f) {
            return;
        }
        float f10 = this.f8090g / width;
        float f11 = this.f8091h / height;
        float a = 1.0f - mg.a.a(0.0f, f10, interpolation);
        float a10 = 1.0f - mg.a.a(0.0f, f11, interpolation);
        if (Float.isNaN(a) || Float.isNaN(a10)) {
            return;
        }
        view.setScaleX(a);
        view.setPivotY(height);
        view.setScaleY(a10);
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i5 = 0; i5 < viewGroup.getChildCount(); i5++) {
                View childAt = viewGroup.getChildAt(i5);
                childAt.setPivotY(-childAt.getTop());
                childAt.setScaleY(a10 != 0.0f ? a / a10 : 1.0f);
            }
        }
    }
}
