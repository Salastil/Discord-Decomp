package h9;

import a3.e;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.drawable.Drawable;
import com.facebook.drawee.drawable.ScalingUtils$ScaleType;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import k0.d;

/* loaded from: classes3.dex */
public final class a extends Drawable {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public int f9570b;

    /* renamed from: c, reason: collision with root package name */
    public int f9571c;

    /* renamed from: d, reason: collision with root package name */
    public int f9572d;

    /* renamed from: e, reason: collision with root package name */
    public ScalingUtils$ScaleType f9573e;

    /* renamed from: g, reason: collision with root package name */
    public int f9575g;

    /* renamed from: h, reason: collision with root package name */
    public int f9576h;

    /* renamed from: n, reason: collision with root package name */
    public int f9580n;

    /* renamed from: o, reason: collision with root package name */
    public int f9581o;

    /* renamed from: p, reason: collision with root package name */
    public int f9582p;

    /* renamed from: q, reason: collision with root package name */
    public int f9583q;

    /* renamed from: r, reason: collision with root package name */
    public int f9584r;

    /* renamed from: s, reason: collision with root package name */
    public long f9585s;

    /* renamed from: f, reason: collision with root package name */
    public HashMap f9574f = new HashMap();

    /* renamed from: i, reason: collision with root package name */
    public final int f9577i = 80;
    public final Paint j = new Paint(1);
    public final Matrix k = new Matrix();

    /* renamed from: l, reason: collision with root package name */
    public final Rect f9578l = new Rect();

    /* renamed from: m, reason: collision with root package name */
    public final RectF f9579m = new RectF();

    public a() {
        b();
    }

    public final void a(Canvas canvas, String str, String str2, int i5) {
        String k = d.k(str, ": ");
        Paint paint = this.j;
        float measureText = paint.measureText(k);
        float measureText2 = paint.measureText(str2);
        paint.setColor(1711276032);
        int i6 = this.f9583q;
        int i10 = this.f9584r;
        canvas.drawRect(i6 - 4, i10 + 8, i6 + measureText + measureText2 + 4.0f, i10 + this.f9582p + 8, paint);
        paint.setColor(-1);
        canvas.drawText(k, this.f9583q, this.f9584r, paint);
        paint.setColor(i5);
        canvas.drawText(str2, this.f9583q + measureText, this.f9584r, paint);
        this.f9584r += this.f9582p;
    }

    public final void b() {
        this.f9570b = -1;
        this.f9571c = -1;
        this.f9572d = -1;
        this.f9574f = new HashMap();
        this.f9575g = -1;
        this.f9576h = -1;
        this.a = "none";
        invalidateSelf();
        this.f9585s = -1L;
        invalidateSelf();
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Rect bounds = getBounds();
        Paint.Style style = Paint.Style.STROKE;
        Paint paint = this.j;
        paint.setStyle(style);
        paint.setStrokeWidth(2.0f);
        paint.setColor(-26624);
        canvas.drawRect(bounds.left, bounds.top, bounds.right, bounds.bottom, paint);
        Paint.Style style2 = Paint.Style.FILL;
        paint.setStyle(style2);
        paint.setColor(0);
        canvas.drawRect(bounds.left, bounds.top, bounds.right, bounds.bottom, paint);
        paint.setStyle(style2);
        paint.setStrokeWidth(0.0f);
        paint.setColor(-1);
        this.f9583q = this.f9580n;
        this.f9584r = this.f9581o;
        a(canvas, "ID", this.a, -1);
        int width = bounds.width();
        int height = bounds.height();
        Locale locale = Locale.US;
        a(canvas, "D", width + "x" + height, -1);
        if (bounds.height() > 0) {
            a(canvas, "DAR", String.valueOf(Float.valueOf(bounds.width() / bounds.height())), -1);
        }
        int i5 = this.f9570b;
        int i6 = this.f9571c;
        ScalingUtils$ScaleType scalingUtils$ScaleType = this.f9573e;
        int width2 = getBounds().width();
        int height2 = getBounds().height();
        int i10 = -65536;
        if (width2 > 0 && height2 > 0 && i5 > 0 && i6 > 0) {
            if (scalingUtils$ScaleType != null) {
                Rect rect = this.f9578l;
                rect.top = 0;
                rect.left = 0;
                rect.right = width2;
                rect.bottom = height2;
                Matrix matrix = this.k;
                matrix.reset();
                scalingUtils$ScaleType.getTransform(matrix, this.f9578l, i5, i6, 0.0f, 0.0f);
                RectF rectF = this.f9579m;
                rectF.top = 0.0f;
                rectF.left = 0.0f;
                rectF.right = i5;
                rectF.bottom = i6;
                matrix.mapRect(rectF);
                int width3 = (int) rectF.width();
                int height3 = (int) rectF.height();
                width2 = Math.min(width2, width3);
                height2 = Math.min(height2, height3);
            }
            float f2 = width2;
            float f10 = f2 * 0.1f;
            float f11 = f2 * 0.5f;
            float f12 = height2;
            float f13 = 0.1f * f12;
            float f14 = f12 * 0.5f;
            int abs = Math.abs(i5 - width2);
            int abs2 = Math.abs(i6 - height2);
            float f15 = abs;
            if (f15 < f10 && abs2 < f13) {
                i10 = -16711936;
            } else if (f15 < f11 && abs2 < f14) {
                i10 = -256;
            }
        }
        a(canvas, "I", this.f9570b + "x" + this.f9571c, i10);
        int i11 = this.f9571c;
        if (i11 > 0) {
            a(canvas, "IAR", String.valueOf(Float.valueOf(this.f9570b / i11)), -1);
        }
        a(canvas, "I", (this.f9572d / IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) + " KiB", -1);
        int i12 = this.f9575g;
        if (i12 > 0) {
            a(canvas, "anim", e.f(i12, this.f9576h, "f ", ", l "), -1);
        }
        ScalingUtils$ScaleType scalingUtils$ScaleType2 = this.f9573e;
        if (scalingUtils$ScaleType2 != null) {
            a(canvas, "scale", String.valueOf(scalingUtils$ScaleType2), -1);
        }
        long j = this.f9585s;
        if (j >= 0) {
            a(canvas, "t", j + " ms", -1);
        }
        for (Map.Entry entry : this.f9574f.entrySet()) {
            a(canvas, (String) entry.getKey(), (String) entry.getValue(), -1);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        return -3;
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        super.onBoundsChange(rect);
        int min = Math.min(40, Math.max(10, Math.min(rect.width() / 8, rect.height() / 9)));
        this.j.setTextSize(min);
        int i5 = min + 8;
        this.f9582p = i5;
        int i6 = this.f9577i;
        if (i6 == 80) {
            this.f9582p = i5 * (-1);
        }
        this.f9580n = rect.left + 10;
        this.f9581o = i6 == 80 ? rect.bottom - 10 : rect.top + 20;
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
    }
}
