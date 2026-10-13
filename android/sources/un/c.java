package un;

import android.graphics.Matrix;
import android.graphics.RectF;
import android.widget.TextView;
import com.yalantis.ucrop.UCropActivity;
import com.yalantis.ucrop.view.GestureCropImageView;
import java.util.Locale;
import zn.e;

/* loaded from: classes3.dex */
public final class c implements e, ao.a {

    /* renamed from: c, reason: collision with root package name */
    public static final c f18964c = new c();
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f18965b;

    public /* synthetic */ c() {
        this.a = 4;
    }

    @Override // ao.a
    public void a() {
        switch (this.a) {
            case 1:
                ((UCropActivity) this.f18965b).J.setImageToWrapCropBounds(true);
                break;
            default:
                ((UCropActivity) this.f18965b).J.setImageToWrapCropBounds(true);
                break;
        }
    }

    @Override // ao.a
    public void b(float f2) {
        switch (this.a) {
            case 1:
                GestureCropImageView gestureCropImageView = ((UCropActivity) this.f18965b).J;
                float f10 = f2 / 42.0f;
                RectF rectF = gestureCropImageView.M;
                float centerX = rectF.centerX();
                float centerY = rectF.centerY();
                Matrix matrix = gestureCropImageView.f21319v;
                if (f10 != 0.0f) {
                    matrix.postRotate(f10, centerX, centerY);
                    gestureCropImageView.setImageMatrix(matrix);
                    e eVar = gestureCropImageView.f21322y;
                    if (eVar != null) {
                        float[] fArr = gestureCropImageView.f21318i;
                        matrix.getValues(fArr);
                        double d6 = fArr[1];
                        matrix.getValues(fArr);
                        float f11 = (float) (-(Math.atan2(d6, fArr[0]) * 57.29577951308232d));
                        TextView textView = ((UCropActivity) ((c) eVar).f18965b).S;
                        if (textView != null) {
                            textView.setText(String.format(Locale.getDefault(), "%.1f°", Float.valueOf(f11)));
                            break;
                        }
                    }
                }
                break;
            default:
                UCropActivity uCropActivity = (UCropActivity) this.f18965b;
                if (f2 <= 0.0f) {
                    GestureCropImageView gestureCropImageView2 = uCropActivity.J;
                    float maxScale = (((uCropActivity.J.getMaxScale() - uCropActivity.J.getMinScale()) / 15000.0f) * f2) + gestureCropImageView2.getCurrentScale();
                    RectF rectF2 = gestureCropImageView2.M;
                    float centerX2 = rectF2.centerX();
                    float centerY2 = rectF2.centerY();
                    if (maxScale >= gestureCropImageView2.getMinScale()) {
                        gestureCropImageView2.h(maxScale / gestureCropImageView2.getCurrentScale(), centerX2, centerY2);
                        break;
                    }
                } else {
                    GestureCropImageView gestureCropImageView3 = uCropActivity.J;
                    float maxScale2 = (((uCropActivity.J.getMaxScale() - uCropActivity.J.getMinScale()) / 15000.0f) * f2) + gestureCropImageView3.getCurrentScale();
                    RectF rectF3 = gestureCropImageView3.M;
                    gestureCropImageView3.i(maxScale2, rectF3.centerX(), rectF3.centerY());
                    break;
                }
                break;
        }
    }

    @Override // ao.a
    public void c() {
        switch (this.a) {
            case 1:
                ((UCropActivity) this.f18965b).J.f();
                break;
            default:
                ((UCropActivity) this.f18965b).J.f();
                break;
        }
    }

    public void d(float f2) {
        TextView textView = ((UCropActivity) this.f18965b).T;
        if (textView != null) {
            textView.setText(String.format(Locale.getDefault(), "%d%%", Integer.valueOf((int) (f2 * 100.0f))));
        }
    }

    public /* synthetic */ c(UCropActivity uCropActivity, int i5) {
        this.a = i5;
        this.f18965b = uCropActivity;
    }
}
