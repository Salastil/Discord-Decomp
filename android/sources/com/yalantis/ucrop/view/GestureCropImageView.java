package com.yalantis.ucrop.view;

import android.content.Context;
import android.graphics.Matrix;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.view.ScaleGestureDetector;
import android.widget.TextView;
import com.yalantis.ucrop.UCropActivity;
import java.util.Locale;
import zn.c;
import zn.e;

/* loaded from: classes3.dex */
public class GestureCropImageView extends c {

    /* renamed from: b0, reason: collision with root package name */
    public ScaleGestureDetector f6842b0;

    /* renamed from: c0, reason: collision with root package name */
    public yn.c f6843c0;

    /* renamed from: d0, reason: collision with root package name */
    public GestureDetector f6844d0;

    /* renamed from: e0, reason: collision with root package name */
    public float f6845e0;

    /* renamed from: f0, reason: collision with root package name */
    public float f6846f0;

    /* renamed from: g0, reason: collision with root package name */
    public boolean f6847g0;
    public boolean h0;

    /* renamed from: i0, reason: collision with root package name */
    public boolean f6848i0;

    /* renamed from: j0, reason: collision with root package name */
    public int f6849j0;

    public GestureCropImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f6847g0 = true;
        this.h0 = true;
        this.f6848i0 = true;
        this.f6849j0 = 5;
    }

    public int getDoubleTapScaleSteps() {
        return this.f6849j0;
    }

    public float getDoubleTapTargetScale() {
        return getCurrentScale() * ((float) Math.pow(getMaxScale() / getMinScale(), 1.0f / this.f6849j0));
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        if ((motionEvent.getAction() & 255) == 0) {
            f();
        }
        if (motionEvent.getPointerCount() > 1) {
            this.f6845e0 = (motionEvent.getX(1) + motionEvent.getX(0)) / 2.0f;
            this.f6846f0 = (motionEvent.getY(1) + motionEvent.getY(0)) / 2.0f;
        }
        if (this.f6848i0) {
            this.f6844d0.onTouchEvent(motionEvent);
        }
        if (this.h0) {
            this.f6842b0.onTouchEvent(motionEvent);
        }
        if (this.f6847g0) {
            yn.c cVar = this.f6843c0;
            cVar.getClass();
            int actionMasked = motionEvent.getActionMasked();
            if (actionMasked == 0) {
                cVar.f20984c = motionEvent.getX();
                cVar.f20985d = motionEvent.getY();
                cVar.f20986e = motionEvent.findPointerIndex(motionEvent.getPointerId(0));
                cVar.f20988g = 0.0f;
                cVar.f20989h = true;
            } else if (actionMasked == 1) {
                cVar.f20986e = -1;
            } else if (actionMasked != 2) {
                if (actionMasked == 5) {
                    cVar.a = motionEvent.getX();
                    cVar.f20983b = motionEvent.getY();
                    cVar.f20987f = motionEvent.findPointerIndex(motionEvent.getPointerId(motionEvent.getActionIndex()));
                    cVar.f20988g = 0.0f;
                    cVar.f20989h = true;
                } else if (actionMasked == 6) {
                    cVar.f20987f = -1;
                }
            } else if (cVar.f20986e != -1 && cVar.f20987f != -1 && motionEvent.getPointerCount() > cVar.f20987f) {
                float x5 = motionEvent.getX(cVar.f20986e);
                float y5 = motionEvent.getY(cVar.f20986e);
                float x10 = motionEvent.getX(cVar.f20987f);
                float y6 = motionEvent.getY(cVar.f20987f);
                if (cVar.f20989h) {
                    cVar.f20988g = 0.0f;
                    cVar.f20989h = false;
                } else {
                    float f2 = cVar.a;
                    float degrees = (((float) Math.toDegrees((float) Math.atan2(y6 - y5, x10 - x5))) % 360.0f) - (((float) Math.toDegrees((float) Math.atan2(cVar.f20983b - cVar.f20985d, f2 - cVar.f20984c))) % 360.0f);
                    cVar.f20988g = degrees;
                    if (degrees < -180.0f) {
                        cVar.f20988g = degrees + 360.0f;
                    } else if (degrees > 180.0f) {
                        cVar.f20988g = degrees - 360.0f;
                    }
                }
                GestureCropImageView gestureCropImageView = (GestureCropImageView) cVar.f20990i.f17126e;
                float f10 = cVar.f20988g;
                float f11 = gestureCropImageView.f6845e0;
                float f12 = gestureCropImageView.f6846f0;
                Matrix matrix = gestureCropImageView.f21319v;
                if (f10 != 0.0f) {
                    matrix.postRotate(f10, f11, f12);
                    gestureCropImageView.setImageMatrix(matrix);
                    e eVar = gestureCropImageView.f21322y;
                    if (eVar != null) {
                        float[] fArr = gestureCropImageView.f21318i;
                        matrix.getValues(fArr);
                        double d6 = fArr[1];
                        matrix.getValues(fArr);
                        float f13 = (float) (-(Math.atan2(d6, fArr[0]) * 57.29577951308232d));
                        TextView textView = ((UCropActivity) ((un.c) eVar).f18965b).S;
                        if (textView != null) {
                            textView.setText(String.format(Locale.getDefault(), "%.1f°", Float.valueOf(f13)));
                        }
                    }
                }
                cVar.a = x10;
                cVar.f20983b = y6;
                cVar.f20984c = x5;
                cVar.f20985d = y5;
            }
        }
        if ((motionEvent.getAction() & 255) == 1) {
            setImageToWrapCropBounds(true);
        }
        return true;
    }

    public void setDoubleTapScaleSteps(int i5) {
        this.f6849j0 = i5;
    }

    public void setGestureEnabled(boolean z5) {
        this.f6848i0 = z5;
    }

    public void setRotateEnabled(boolean z5) {
        this.f6847g0 = z5;
    }

    public void setScaleEnabled(boolean z5) {
        this.h0 = z5;
    }
}
