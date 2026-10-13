package un;

import android.graphics.Bitmap;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.yalantis.ucrop.UCropActivity;
import com.yalantis.ucrop.view.GestureCropImageView;
import com.yalantis.ucrop.view.widget.AspectRatioTextView;
import java.util.Iterator;
import java.util.Locale;
import zn.e;

/* loaded from: classes3.dex */
public final class d implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18966d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ UCropActivity f18967e;

    public /* synthetic */ d(UCropActivity uCropActivity, int i5) {
        this.f18966d = i5;
        this.f18967e = uCropActivity;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        int i5 = this.f18966d;
        UCropActivity uCropActivity = this.f18967e;
        switch (i5) {
            case 0:
                GestureCropImageView gestureCropImageView = uCropActivity.J;
                AspectRatioTextView aspectRatioTextView = (AspectRatioTextView) ((ViewGroup) view).getChildAt(0);
                if (view.isSelected()) {
                    if (aspectRatioTextView.f6862v != 0.0f) {
                        float f2 = aspectRatioTextView.f6864x;
                        float f10 = aspectRatioTextView.f6865y;
                        aspectRatioTextView.f6864x = f10;
                        aspectRatioTextView.f6865y = f2;
                        aspectRatioTextView.f6862v = f10 / f2;
                    }
                    aspectRatioTextView.e();
                }
                gestureCropImageView.setTargetAspectRatio(aspectRatioTextView.f6862v);
                uCropActivity.J.setImageToWrapCropBounds(true);
                if (!view.isSelected()) {
                    Iterator it = uCropActivity.R.iterator();
                    while (it.hasNext()) {
                        ViewGroup viewGroup = (ViewGroup) it.next();
                        viewGroup.setSelected(viewGroup == view);
                    }
                    break;
                }
                break;
            case 1:
                GestureCropImageView gestureCropImageView2 = uCropActivity.J;
                float f11 = -gestureCropImageView2.getCurrentAngle();
                RectF rectF = gestureCropImageView2.M;
                float centerX = rectF.centerX();
                float centerY = rectF.centerY();
                Matrix matrix = gestureCropImageView2.f21319v;
                if (f11 != 0.0f) {
                    matrix.postRotate(f11, centerX, centerY);
                    gestureCropImageView2.setImageMatrix(matrix);
                    e eVar = gestureCropImageView2.f21322y;
                    if (eVar != null) {
                        float[] fArr = gestureCropImageView2.f21318i;
                        matrix.getValues(fArr);
                        double d6 = fArr[1];
                        matrix.getValues(fArr);
                        float f12 = (float) (-(Math.atan2(d6, fArr[0]) * 57.29577951308232d));
                        TextView textView = ((UCropActivity) ((c) eVar).f18965b).S;
                        if (textView != null) {
                            textView.setText(String.format(Locale.getDefault(), "%.1f°", Float.valueOf(f12)));
                        }
                    }
                }
                uCropActivity.J.setImageToWrapCropBounds(true);
                break;
            case 2:
                GestureCropImageView gestureCropImageView3 = uCropActivity.J;
                float f13 = 90;
                RectF rectF2 = gestureCropImageView3.M;
                float centerX2 = rectF2.centerX();
                float centerY2 = rectF2.centerY();
                Matrix matrix2 = gestureCropImageView3.f21319v;
                if (f13 != 0.0f) {
                    matrix2.postRotate(f13, centerX2, centerY2);
                    gestureCropImageView3.setImageMatrix(matrix2);
                    e eVar2 = gestureCropImageView3.f21322y;
                    if (eVar2 != null) {
                        float[] fArr2 = gestureCropImageView3.f21318i;
                        matrix2.getValues(fArr2);
                        double d7 = fArr2[1];
                        matrix2.getValues(fArr2);
                        float f14 = (float) (-(Math.atan2(d7, fArr2[0]) * 57.29577951308232d));
                        TextView textView2 = ((UCropActivity) ((c) eVar2).f18965b).S;
                        if (textView2 != null) {
                            textView2.setText(String.format(Locale.getDefault(), "%.1f°", Float.valueOf(f14)));
                        }
                    }
                }
                uCropActivity.J.setImageToWrapCropBounds(true);
                break;
            default:
                if (!view.isSelected()) {
                    int id2 = view.getId();
                    Bitmap.CompressFormat compressFormat = UCropActivity.f6821b0;
                    uCropActivity.g(id2);
                    break;
                }
                break;
        }
    }
}
