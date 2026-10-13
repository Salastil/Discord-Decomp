package com.yalantis.ucrop.view.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import ao.a;
import com.discord.R;

/* loaded from: classes3.dex */
public class HorizontalProgressWheelView extends View {
    public final int E;
    public boolean F;
    public float G;
    public int H;

    /* renamed from: d, reason: collision with root package name */
    public final Rect f6866d;

    /* renamed from: e, reason: collision with root package name */
    public a f6867e;

    /* renamed from: i, reason: collision with root package name */
    public float f6868i;

    /* renamed from: v, reason: collision with root package name */
    public final Paint f6869v;

    /* renamed from: w, reason: collision with root package name */
    public final Paint f6870w;

    /* renamed from: x, reason: collision with root package name */
    public final int f6871x;

    /* renamed from: y, reason: collision with root package name */
    public final int f6872y;

    public HorizontalProgressWheelView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        this.f6866d = new Rect();
        this.H = getContext().getColor(R.color.ucrop_color_widget_rotate_mid_line);
        this.f6871x = getContext().getResources().getDimensionPixelSize(R.dimen.ucrop_width_horizontal_wheel_progress_line);
        this.f6872y = getContext().getResources().getDimensionPixelSize(R.dimen.ucrop_height_horizontal_wheel_progress_line);
        this.E = getContext().getResources().getDimensionPixelSize(R.dimen.ucrop_margin_horizontal_wheel_progress_line);
        Paint paint = new Paint(1);
        this.f6869v = paint;
        paint.setStyle(Paint.Style.STROKE);
        this.f6869v.setStrokeWidth(this.f6871x);
        this.f6869v.setColor(getResources().getColor(R.color.ucrop_color_progress_wheel_line));
        Paint paint2 = new Paint(this.f6869v);
        this.f6870w = paint2;
        paint2.setColor(this.H);
        this.f6870w.setStrokeCap(Paint.Cap.ROUND);
        this.f6870w.setStrokeWidth(getContext().getResources().getDimensionPixelSize(R.dimen.ucrop_width_middle_wheel_progress_line));
    }

    @Override // android.view.View
    public final void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        Rect rect = this.f6866d;
        canvas.getClipBounds(rect);
        int width = rect.width() / (this.f6871x + this.E);
        float f2 = this.G % (r4 + r3);
        for (int i5 = 0; i5 < width; i5++) {
            int i6 = width / 4;
            if (i5 < i6) {
                this.f6869v.setAlpha((int) ((i5 / i6) * 255.0f));
            } else if (i5 > (width * 3) / 4) {
                this.f6869v.setAlpha((int) (((width - i5) / i6) * 255.0f));
            } else {
                this.f6869v.setAlpha(255);
            }
            float f10 = -f2;
            canvas.drawLine(rect.left + f10 + ((this.f6871x + this.E) * i5), rect.centerY() - (this.f6872y / 4.0f), f10 + rect.left + ((this.f6871x + this.E) * i5), rect.centerY() + (this.f6872y / 4.0f), this.f6869v);
        }
        canvas.drawLine(rect.centerX(), rect.centerY() - (this.f6872y / 2.0f), rect.centerX(), (this.f6872y / 2.0f) + rect.centerY(), this.f6870w);
    }

    @Override // android.view.View
    public final boolean onTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.f6868i = motionEvent.getX();
            return true;
        }
        if (action == 1) {
            a aVar = this.f6867e;
            if (aVar != null) {
                this.F = false;
                aVar.a();
            }
        } else if (action == 2) {
            float x5 = motionEvent.getX() - this.f6868i;
            if (x5 != 0.0f) {
                if (!this.F) {
                    this.F = true;
                    a aVar2 = this.f6867e;
                    if (aVar2 != null) {
                        aVar2.c();
                    }
                }
                this.G -= x5;
                postInvalidate();
                this.f6868i = motionEvent.getX();
                a aVar3 = this.f6867e;
                if (aVar3 != null) {
                    aVar3.b(-x5);
                    return true;
                }
            }
        }
        return true;
    }

    public void setMiddleLineColor(int i5) {
        this.H = i5;
        this.f6870w.setColor(i5);
        invalidate();
    }

    public void setScrollingListener(a aVar) {
        this.f6867e = aVar;
    }
}
