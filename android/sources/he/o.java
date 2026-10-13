package he;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;

/* loaded from: classes3.dex */
public final class o {
    public int A;
    public int B;
    public int C;
    public int D;
    public StaticLayout E;
    public StaticLayout F;
    public int G;
    public int H;
    public int I;
    public Rect J;
    public final float a;

    /* renamed from: b, reason: collision with root package name */
    public final float f9988b;

    /* renamed from: c, reason: collision with root package name */
    public final float f9989c;

    /* renamed from: d, reason: collision with root package name */
    public final float f9990d;

    /* renamed from: e, reason: collision with root package name */
    public final float f9991e;

    /* renamed from: f, reason: collision with root package name */
    public final TextPaint f9992f;

    /* renamed from: g, reason: collision with root package name */
    public final Paint f9993g;

    /* renamed from: h, reason: collision with root package name */
    public final Paint f9994h;

    /* renamed from: i, reason: collision with root package name */
    public CharSequence f9995i;
    public Layout.Alignment j;
    public Bitmap k;

    /* renamed from: l, reason: collision with root package name */
    public float f9996l;

    /* renamed from: m, reason: collision with root package name */
    public int f9997m;

    /* renamed from: n, reason: collision with root package name */
    public int f9998n;

    /* renamed from: o, reason: collision with root package name */
    public float f9999o;

    /* renamed from: p, reason: collision with root package name */
    public int f10000p;

    /* renamed from: q, reason: collision with root package name */
    public float f10001q;

    /* renamed from: r, reason: collision with root package name */
    public float f10002r;

    /* renamed from: s, reason: collision with root package name */
    public int f10003s;

    /* renamed from: t, reason: collision with root package name */
    public int f10004t;

    /* renamed from: u, reason: collision with root package name */
    public int f10005u;

    /* renamed from: v, reason: collision with root package name */
    public int f10006v;

    /* renamed from: w, reason: collision with root package name */
    public int f10007w;

    /* renamed from: x, reason: collision with root package name */
    public float f10008x;

    /* renamed from: y, reason: collision with root package name */
    public float f10009y;

    /* renamed from: z, reason: collision with root package name */
    public float f10010z;

    public o(Context context) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(null, new int[]{R.attr.lineSpacingExtra, R.attr.lineSpacingMultiplier}, 0, 0);
        this.f9991e = obtainStyledAttributes.getDimensionPixelSize(0, 0);
        this.f9990d = obtainStyledAttributes.getFloat(1, 1.0f);
        obtainStyledAttributes.recycle();
        float round = Math.round((context.getResources().getDisplayMetrics().densityDpi * 2.0f) / 160.0f);
        this.a = round;
        this.f9988b = round;
        this.f9989c = round;
        TextPaint textPaint = new TextPaint();
        this.f9992f = textPaint;
        textPaint.setAntiAlias(true);
        textPaint.setSubpixelText(true);
        Paint paint = new Paint();
        this.f9993g = paint;
        paint.setAntiAlias(true);
        paint.setStyle(Paint.Style.FILL);
        Paint paint2 = new Paint();
        this.f9994h = paint2;
        paint2.setAntiAlias(true);
        paint2.setFilterBitmap(true);
    }

    public final void a(Canvas canvas, boolean z5) {
        Canvas canvas2;
        if (!z5) {
            this.J.getClass();
            this.k.getClass();
            canvas.drawBitmap(this.k, (Rect) null, this.J, this.f9994h);
            return;
        }
        StaticLayout staticLayout = this.E;
        StaticLayout staticLayout2 = this.F;
        if (staticLayout == null || staticLayout2 == null) {
            return;
        }
        int save = canvas.save();
        canvas.translate(this.G, this.H);
        if (Color.alpha(this.f10005u) > 0) {
            int i5 = this.f10005u;
            Paint paint = this.f9993g;
            paint.setColor(i5);
            canvas2 = canvas;
            canvas2.drawRect(-this.I, 0.0f, staticLayout.getWidth() + this.I, staticLayout.getHeight(), paint);
        } else {
            canvas2 = canvas;
        }
        int i6 = this.f10007w;
        TextPaint textPaint = this.f9992f;
        if (i6 == 1) {
            textPaint.setStrokeJoin(Paint.Join.ROUND);
            textPaint.setStrokeWidth(this.a);
            textPaint.setColor(this.f10006v);
            textPaint.setStyle(Paint.Style.FILL_AND_STROKE);
            staticLayout2.draw(canvas2);
        } else {
            float f2 = this.f9988b;
            if (i6 == 2) {
                float f10 = this.f9989c;
                textPaint.setShadowLayer(f2, f10, f10, this.f10006v);
            } else if (i6 == 3 || i6 == 4) {
                boolean z6 = i6 == 3;
                int i10 = z6 ? -1 : this.f10006v;
                int i11 = z6 ? this.f10006v : -1;
                float f11 = f2 / 2.0f;
                textPaint.setColor(this.f10003s);
                textPaint.setStyle(Paint.Style.FILL);
                float f12 = -f11;
                textPaint.setShadowLayer(f2, f12, f12, i10);
                staticLayout2.draw(canvas2);
                textPaint.setShadowLayer(f2, f11, f11, i11);
            }
        }
        textPaint.setColor(this.f10003s);
        textPaint.setStyle(Paint.Style.FILL);
        staticLayout.draw(canvas2);
        textPaint.setShadowLayer(0.0f, 0.0f, 0.0f, 0);
        canvas2.restoreToCount(save);
    }
}
