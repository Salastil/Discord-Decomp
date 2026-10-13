package k9;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.text.style.ReplacementSpan;
import com.facebook.drawee.view.DraweeHolder;

/* loaded from: classes3.dex */
public final class a extends ReplacementSpan {
    public final DraweeHolder E;

    /* renamed from: d, reason: collision with root package name */
    public int f13233d;

    /* renamed from: e, reason: collision with root package name */
    public int f13234e;

    /* renamed from: i, reason: collision with root package name */
    public Rect f13235i;

    /* renamed from: v, reason: collision with root package name */
    public final int f13236v;

    /* renamed from: w, reason: collision with root package name */
    public final Paint.FontMetricsInt f13237w;

    /* renamed from: x, reason: collision with root package name */
    public final Drawable f13238x;

    /* renamed from: y, reason: collision with root package name */
    public final Rect f13239y;

    public a(DraweeHolder draweeHolder, int i5) {
        Drawable c6 = draweeHolder.c();
        Rect rect = new Rect();
        this.f13237w = new Paint.FontMetricsInt();
        this.f13238x = c6;
        this.f13236v = i5;
        this.f13239y = rect;
        b();
        this.E = draweeHolder;
    }

    public final int a(int i5, int i6) {
        Rect rect = this.f13239y;
        int i10 = this.f13236v;
        if (i10 == 0) {
            return (i6 - this.f13234e) - rect.bottom;
        }
        if (i10 != 2) {
            return (-this.f13234e) - rect.bottom;
        }
        int i11 = (i6 - i5) + rect.top;
        int i12 = rect.bottom;
        return ((((i11 + i12) - this.f13234e) / 2) + i5) - i12;
    }

    public final void b() {
        Rect bounds = this.f13238x.getBounds();
        this.f13235i = bounds;
        int width = bounds.width();
        Rect rect = this.f13239y;
        this.f13233d = width + rect.left + rect.right;
        this.f13234e = this.f13235i.height();
    }

    @Override // android.text.style.ReplacementSpan
    public final void draw(Canvas canvas, CharSequence charSequence, int i5, int i6, float f2, int i10, int i11, int i12, Paint paint) {
        Paint.FontMetricsInt fontMetricsInt = this.f13237w;
        paint.getFontMetricsInt(fontMetricsInt);
        float f10 = f2 + this.f13239y.left;
        canvas.translate(f10, a(fontMetricsInt.ascent, fontMetricsInt.descent) + i11);
        this.f13238x.draw(canvas);
        canvas.translate(-f10, -r2);
    }

    @Override // android.text.style.ReplacementSpan
    public final int getSize(Paint paint, CharSequence charSequence, int i5, int i6, Paint.FontMetricsInt fontMetricsInt) {
        int i10;
        b();
        if (fontMetricsInt == null) {
            return this.f13233d;
        }
        int a = a(fontMetricsInt.ascent, fontMetricsInt.descent);
        int i11 = this.f13234e + a;
        int i12 = this.f13236v;
        Rect rect = this.f13239y;
        if (i12 == 2) {
            i10 = a - rect.top;
            i11 += rect.bottom;
        } else {
            i10 = a - rect.top;
        }
        if (i10 < fontMetricsInt.ascent) {
            fontMetricsInt.ascent = i10;
        }
        if (i10 < fontMetricsInt.top) {
            fontMetricsInt.top = i10;
        }
        if (i11 > fontMetricsInt.descent) {
            fontMetricsInt.descent = i11;
        }
        if (i11 > fontMetricsInt.bottom) {
            fontMetricsInt.bottom = i11;
        }
        return this.f13233d;
    }
}
