package eh;

import android.content.res.Resources;
import android.view.Gravity;
import android.view.View;
import android.view.ViewGroup;
import com.discord.R;

/* loaded from: classes3.dex */
public final class h extends a {

    /* renamed from: g, reason: collision with root package name */
    public final float f8094g;

    /* renamed from: h, reason: collision with root package name */
    public final float f8095h;

    /* renamed from: i, reason: collision with root package name */
    public final float f8096i;

    public h(View view) {
        super(view);
        Resources resources = view.getResources();
        this.f8094g = resources.getDimension(R.dimen.m3_back_progress_side_container_max_scale_x_distance_shrink);
        this.f8095h = resources.getDimension(R.dimen.m3_back_progress_side_container_max_scale_x_distance_grow);
        this.f8096i = resources.getDimension(R.dimen.m3_back_progress_side_container_max_scale_y_distance);
    }

    public final void a(int i5, float f2, boolean z5) {
        float interpolation = this.a.getInterpolation(f2);
        View view = this.f8084b;
        boolean z6 = (Gravity.getAbsoluteGravity(i5, view.getLayoutDirection()) & 3) == 3;
        boolean z7 = z5 == z6;
        int width = view.getWidth();
        int height = view.getHeight();
        float f10 = width;
        if (f10 > 0.0f) {
            float f11 = height;
            if (f11 <= 0.0f) {
                return;
            }
            float f12 = this.f8094g / f10;
            float f13 = this.f8095h / f10;
            float f14 = this.f8096i / f11;
            if (z6) {
                f10 = 0.0f;
            }
            view.setPivotX(f10);
            if (!z7) {
                f13 = -f12;
            }
            float a = mg.a.a(0.0f, f13, interpolation);
            float f15 = a + 1.0f;
            float a10 = 1.0f - mg.a.a(0.0f, f14, interpolation);
            if (Float.isNaN(f15) || Float.isNaN(a10)) {
                return;
            }
            view.setScaleX(f15);
            view.setScaleY(a10);
            if (view instanceof ViewGroup) {
                ViewGroup viewGroup = (ViewGroup) view;
                for (int i6 = 0; i6 < viewGroup.getChildCount(); i6++) {
                    View childAt = viewGroup.getChildAt(i6);
                    childAt.setPivotX(z6 ? childAt.getWidth() + (width - childAt.getRight()) : -childAt.getLeft());
                    childAt.setPivotY(-childAt.getTop());
                    float f16 = z7 ? 1.0f - a : 1.0f;
                    float f17 = a10 != 0.0f ? (f15 / a10) * f16 : 1.0f;
                    if (!Float.isNaN(f16) && !Float.isNaN(f17)) {
                        childAt.setScaleX(f16);
                        childAt.setScaleY(f17);
                    }
                }
            }
        }
    }
}
