package com.google.android.material.timepicker;

import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import androidx.recyclerview.widget.h0;
import com.discord.R;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes3.dex */
class ClockHandView extends View {
    public static final /* synthetic */ int K = 0;
    public final int E;
    public float F;
    public boolean G;
    public double H;
    public int I;
    public int J;

    /* renamed from: d, reason: collision with root package name */
    public final ValueAnimator f6152d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f6153e;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f6154i;

    /* renamed from: v, reason: collision with root package name */
    public final int f6155v;

    /* renamed from: w, reason: collision with root package name */
    public final float f6156w;

    /* renamed from: x, reason: collision with root package name */
    public final Paint f6157x;

    /* renamed from: y, reason: collision with root package name */
    public final RectF f6158y;

    public ClockHandView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.materialClockStyle);
        ValueAnimator valueAnimator = new ValueAnimator();
        this.f6152d = valueAnimator;
        this.f6154i = new ArrayList();
        Paint paint = new Paint();
        this.f6157x = paint;
        this.f6158y = new RectF();
        this.J = 1;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.k, R.attr.materialClockStyle, R.style.Widget_MaterialComponents_TimePicker_Clock);
        ta.a.G(context, R.attr.motionDurationLong2, h0.DEFAULT_DRAG_ANIMATION_DURATION);
        ta.a.H(context, R.attr.motionEasingEmphasizedInterpolator, mg.a.f14493b);
        this.I = obtainStyledAttributes.getDimensionPixelSize(1, 0);
        this.f6155v = obtainStyledAttributes.getDimensionPixelSize(2, 0);
        this.E = getResources().getDimensionPixelSize(R.dimen.material_clock_hand_stroke_width);
        this.f6156w = r5.getDimensionPixelSize(R.dimen.material_clock_hand_center_dot_radius);
        int color = obtainStyledAttributes.getColor(0, 0);
        paint.setAntiAlias(true);
        paint.setColor(color);
        b(0.0f);
        ViewConfiguration.get(context).getScaledTouchSlop();
        setImportantForAccessibility(2);
        obtainStyledAttributes.recycle();
        valueAnimator.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.google.android.material.timepicker.d
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator2) {
                int i5 = ClockHandView.K;
                ClockHandView.this.c(((Float) valueAnimator2.getAnimatedValue()).floatValue());
            }
        });
        valueAnimator.addListener(new e());
    }

    public final int a(int i5) {
        return i5 == 2 ? Math.round(this.I * 0.66f) : this.I;
    }

    public final void b(float f2) {
        this.f6152d.cancel();
        c(f2);
    }

    public final void c(float f2) {
        float f10 = f2 % 360.0f;
        this.F = f10;
        this.H = Math.toRadians(f10 - 90.0f);
        int height = getHeight() / 2;
        int width = getWidth() / 2;
        float a = a(this.J);
        float cos = (((float) Math.cos(this.H)) * a) + width;
        float sin = (a * ((float) Math.sin(this.H))) + height;
        float f11 = this.f6155v;
        this.f6158y.set(cos - f11, sin - f11, cos + f11, sin + f11);
        Iterator it = this.f6154i.iterator();
        while (it.hasNext()) {
            ClockFaceView clockFaceView = (ClockFaceView) ((f) it.next());
            if (Math.abs(clockFaceView.N - f10) > 0.001f) {
                clockFaceView.N = f10;
                clockFaceView.d();
            }
        }
        invalidate();
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        int height = getHeight() / 2;
        int width = getWidth() / 2;
        float f2 = width;
        float a = a(this.J);
        float cos = (((float) Math.cos(this.H)) * a) + f2;
        float f10 = height;
        float sin = (a * ((float) Math.sin(this.H))) + f10;
        Paint paint = this.f6157x;
        paint.setStrokeWidth(0.0f);
        canvas.drawCircle(cos, sin, this.f6155v, paint);
        double sin2 = Math.sin(this.H);
        paint.setStrokeWidth(this.E);
        canvas.drawLine(f2, f10, width + ((int) (Math.cos(this.H) * r2)), height + ((int) (r2 * sin2)), paint);
        canvas.drawCircle(f2, f10, this.f6156w, paint);
    }

    @Override // android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (this.f6152d.isRunning()) {
            return;
        }
        b(this.F);
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        boolean z5;
        boolean z6;
        int actionMasked = motionEvent.getActionMasked();
        float x5 = motionEvent.getX();
        float y5 = motionEvent.getY();
        boolean z7 = false;
        if (actionMasked == 0) {
            this.G = false;
            z5 = true;
            z6 = false;
        } else if (actionMasked == 1 || actionMasked == 2) {
            z6 = this.G;
            if (this.f6153e) {
                this.J = ((float) Math.hypot((double) (x5 - ((float) (getWidth() / 2))), (double) (y5 - ((float) (getHeight() / 2))))) <= ((float) a(2)) + TypedValue.applyDimension(1, (float) 12, getContext().getResources().getDisplayMetrics()) ? 2 : 1;
            }
            z5 = false;
        } else {
            z6 = false;
            z5 = false;
        }
        boolean z8 = this.G;
        int degrees = (int) Math.toDegrees(Math.atan2(y5 - (getHeight() / 2), x5 - (getWidth() / 2)));
        int i5 = degrees + 90;
        if (i5 < 0) {
            i5 = degrees + 450;
        }
        float f2 = i5;
        boolean z10 = this.F != f2;
        if (!z5 || !z10) {
            if (z10 || z6) {
                b(f2);
            }
            this.G = z8 | z7;
            return true;
        }
        z7 = true;
        this.G = z8 | z7;
        return true;
    }
}
