package zn;

import android.view.ScaleGestureDetector;
import com.yalantis.ucrop.view.GestureCropImageView;

/* loaded from: classes3.dex */
public final class d extends ScaleGestureDetector.SimpleOnScaleGestureListener {
    public final /* synthetic */ GestureCropImageView a;

    public d(GestureCropImageView gestureCropImageView) {
        this.a = gestureCropImageView;
    }

    @Override // android.view.ScaleGestureDetector.SimpleOnScaleGestureListener, android.view.ScaleGestureDetector.OnScaleGestureListener
    public final boolean onScale(ScaleGestureDetector scaleGestureDetector) {
        float scaleFactor = scaleGestureDetector.getScaleFactor();
        GestureCropImageView gestureCropImageView = this.a;
        gestureCropImageView.h(scaleFactor, gestureCropImageView.f6845e0, gestureCropImageView.f6846f0);
        return true;
    }
}
