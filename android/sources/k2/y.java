package k2;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.text.Spanned;
import android.text.TextPaint;
import android.text.style.CharacterStyle;
import android.text.style.ReplacementSpan;
import java.nio.ByteBuffer;

/* loaded from: classes.dex */
public final class y extends ReplacementSpan {

    /* renamed from: e, reason: collision with root package name */
    public final x f13162e;

    /* renamed from: w, reason: collision with root package name */
    public TextPaint f13165w;

    /* renamed from: d, reason: collision with root package name */
    public final Paint.FontMetricsInt f13161d = new Paint.FontMetricsInt();

    /* renamed from: i, reason: collision with root package name */
    public short f13163i = -1;

    /* renamed from: v, reason: collision with root package name */
    public float f13164v = 1.0f;

    public y(x xVar) {
        ta.a.k(xVar, "rasterizer cannot be null");
        this.f13162e = xVar;
    }

    @Override // android.text.style.ReplacementSpan
    public final void draw(Canvas canvas, CharSequence charSequence, int i5, int i6, float f2, int i10, int i11, int i12, Paint paint) {
        TextPaint textPaint = null;
        if (charSequence instanceof Spanned) {
            CharacterStyle[] characterStyleArr = (CharacterStyle[]) ((Spanned) charSequence).getSpans(i5, i6, CharacterStyle.class);
            if (characterStyleArr.length != 0) {
                if (characterStyleArr.length != 1 || characterStyleArr[0] != this) {
                    TextPaint textPaint2 = this.f13165w;
                    if (textPaint2 == null) {
                        textPaint2 = new TextPaint();
                        this.f13165w = textPaint2;
                    }
                    textPaint = textPaint2;
                    textPaint.set(paint);
                    for (CharacterStyle characterStyle : characterStyleArr) {
                        characterStyle.updateDrawState(textPaint);
                    }
                }
            }
            if (paint instanceof TextPaint) {
                textPaint = (TextPaint) paint;
            }
        } else if (paint instanceof TextPaint) {
            textPaint = (TextPaint) paint;
        }
        TextPaint textPaint3 = textPaint;
        if (textPaint3 != null && textPaint3.bgColor != 0) {
            int color = textPaint3.getColor();
            Paint.Style style = textPaint3.getStyle();
            textPaint3.setColor(textPaint3.bgColor);
            textPaint3.setStyle(Paint.Style.FILL);
            canvas.drawRect(f2, i10, f2 + this.f13163i, i12, textPaint3);
            textPaint3.setStyle(style);
            textPaint3.setColor(color);
        }
        j.a().getClass();
        float f10 = i11;
        Paint paint2 = textPaint3;
        if (textPaint3 == null) {
            paint2 = paint;
        }
        x xVar = this.f13162e;
        e4.i iVar = xVar.f13159b;
        Typeface typeface = (Typeface) iVar.f7955v;
        Typeface typeface2 = paint2.getTypeface();
        paint2.setTypeface(typeface);
        canvas.drawText((char[]) iVar.f7953e, xVar.a * 2, 2, f2, f10, paint2);
        paint2.setTypeface(typeface2);
    }

    @Override // android.text.style.ReplacementSpan
    public final int getSize(Paint paint, CharSequence charSequence, int i5, int i6, Paint.FontMetricsInt fontMetricsInt) {
        Paint.FontMetricsInt fontMetricsInt2 = this.f13161d;
        paint.getFontMetricsInt(fontMetricsInt2);
        float abs = Math.abs(fontMetricsInt2.descent - fontMetricsInt2.ascent) * 1.0f;
        x xVar = this.f13162e;
        this.f13164v = abs / (xVar.b().a(14) != 0 ? ((ByteBuffer) r8.f1594v).getShort(r1 + r8.f1591d) : (short) 0);
        l2.a b10 = xVar.b();
        int a = b10.a(14);
        if (a != 0) {
            ((ByteBuffer) b10.f1594v).getShort(a + b10.f1591d);
        }
        short s2 = (short) ((xVar.b().a(12) != 0 ? ((ByteBuffer) r5.f1594v).getShort(r7 + r5.f1591d) : (short) 0) * this.f13164v);
        this.f13163i = s2;
        if (fontMetricsInt != null) {
            fontMetricsInt.ascent = fontMetricsInt2.ascent;
            fontMetricsInt.descent = fontMetricsInt2.descent;
            fontMetricsInt.top = fontMetricsInt2.top;
            fontMetricsInt.bottom = fontMetricsInt2.bottom;
        }
        return s2;
    }
}
