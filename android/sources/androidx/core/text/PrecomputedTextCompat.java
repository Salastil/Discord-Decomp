package androidx.core.text;

import android.os.Build;
import android.text.PrecomputedText;
import android.text.Spannable;
import android.text.TextDirectionHeuristic;
import android.text.TextPaint;
import android.text.TextUtils;
import android.text.style.MetricAffectingSpan;
import java.util.Objects;

/* loaded from: classes.dex */
public final class PrecomputedTextCompat implements Spannable {
    @Override // java.lang.CharSequence
    public final char charAt(int i5) {
        throw null;
    }

    @Override // android.text.Spanned
    public final int getSpanEnd(Object obj) {
        throw null;
    }

    @Override // android.text.Spanned
    public final int getSpanFlags(Object obj) {
        throw null;
    }

    @Override // android.text.Spanned
    public final int getSpanStart(Object obj) {
        throw null;
    }

    @Override // android.text.Spanned
    public final Object[] getSpans(int i5, int i6, Class cls) {
        if (Build.VERSION.SDK_INT >= 29) {
            throw null;
        }
        throw null;
    }

    @Override // java.lang.CharSequence
    public final int length() {
        throw null;
    }

    @Override // android.text.Spanned
    public final int nextSpanTransition(int i5, int i6, Class cls) {
        throw null;
    }

    @Override // android.text.Spannable
    public final void removeSpan(Object obj) {
        if (obj instanceof MetricAffectingSpan) {
            throw new IllegalArgumentException("MetricAffectingSpan can not be removed from PrecomputedText.");
        }
        if (Build.VERSION.SDK_INT < 29) {
            throw null;
        }
        throw null;
    }

    @Override // android.text.Spannable
    public final void setSpan(Object obj, int i5, int i6, int i10) {
        if (obj instanceof MetricAffectingSpan) {
            throw new IllegalArgumentException("MetricAffectingSpan can not be set to PrecomputedText.");
        }
        if (Build.VERSION.SDK_INT < 29) {
            throw null;
        }
        throw null;
    }

    @Override // java.lang.CharSequence
    public final CharSequence subSequence(int i5, int i6) {
        throw null;
    }

    @Override // java.lang.CharSequence
    public final String toString() {
        throw null;
    }

    public static final class Params {
        public final TextPaint a;

        /* renamed from: b, reason: collision with root package name */
        public final TextDirectionHeuristic f1528b;

        /* renamed from: c, reason: collision with root package name */
        public final int f1529c;

        /* renamed from: d, reason: collision with root package name */
        public final int f1530d;

        public Params(TextPaint textPaint, TextDirectionHeuristic textDirectionHeuristic, int i5, int i6) {
            if (Build.VERSION.SDK_INT >= 29) {
                new PrecomputedText.Params.Builder(textPaint).setBreakStrategy(i5).setHyphenationFrequency(i6).setTextDirection(textDirectionHeuristic).build();
            }
            this.a = textPaint;
            this.f1528b = textDirectionHeuristic;
            this.f1529c = i5;
            this.f1530d = i6;
        }

        public final boolean a(Params params) {
            if (this.f1529c != params.f1529c || this.f1530d != params.f1530d) {
                return false;
            }
            TextPaint textPaint = this.a;
            float textSize = textPaint.getTextSize();
            TextPaint textPaint2 = params.a;
            TextPaint textPaint3 = params.a;
            if (textSize == textPaint2.getTextSize() && textPaint.getTextScaleX() == textPaint3.getTextScaleX() && textPaint.getTextSkewX() == textPaint3.getTextSkewX() && textPaint.getLetterSpacing() == textPaint3.getLetterSpacing() && TextUtils.equals(textPaint.getFontFeatureSettings(), textPaint3.getFontFeatureSettings()) && textPaint.getFlags() == textPaint3.getFlags() && textPaint.getTextLocales().equals(textPaint3.getTextLocales())) {
                return textPaint.getTypeface() == null ? textPaint3.getTypeface() == null : textPaint.getTypeface().equals(textPaint3.getTypeface());
            }
            return false;
        }

        public final boolean equals(Object obj) {
            if (obj == this) {
                return true;
            }
            if (!(obj instanceof Params)) {
                return false;
            }
            Params params = (Params) obj;
            return a(params) && this.f1528b == params.f1528b;
        }

        public final int hashCode() {
            TextPaint textPaint = this.a;
            return Objects.hash(Float.valueOf(textPaint.getTextSize()), Float.valueOf(textPaint.getTextScaleX()), Float.valueOf(textPaint.getTextSkewX()), Float.valueOf(textPaint.getLetterSpacing()), Integer.valueOf(textPaint.getFlags()), textPaint.getTextLocales(), textPaint.getTypeface(), Boolean.valueOf(textPaint.isElegantTextHeight()), this.f1528b, Integer.valueOf(this.f1529c), Integer.valueOf(this.f1530d));
        }

        public final String toString() {
            StringBuilder sb2 = new StringBuilder("{");
            StringBuilder sb3 = new StringBuilder("textSize=");
            TextPaint textPaint = this.a;
            sb3.append(textPaint.getTextSize());
            sb2.append(sb3.toString());
            sb2.append(", textScaleX=" + textPaint.getTextScaleX());
            sb2.append(", textSkewX=" + textPaint.getTextSkewX());
            int i5 = Build.VERSION.SDK_INT;
            sb2.append(", letterSpacing=" + textPaint.getLetterSpacing());
            sb2.append(", elegantTextHeight=" + textPaint.isElegantTextHeight());
            sb2.append(", textLocale=" + textPaint.getTextLocales());
            sb2.append(", typeface=" + textPaint.getTypeface());
            if (i5 >= 26) {
                sb2.append(", variationSettings=" + textPaint.getFontVariationSettings());
            }
            sb2.append(", textDir=" + this.f1528b);
            sb2.append(", breakStrategy=" + this.f1529c);
            sb2.append(", hyphenationFrequency=" + this.f1530d);
            sb2.append("}");
            return sb2.toString();
        }

        public Params(PrecomputedText.Params params) {
            this.a = params.getTextPaint();
            this.f1528b = params.getTextDirection();
            this.f1529c = params.getBreakStrategy();
            this.f1530d = params.getHyphenationFrequency();
        }
    }
}
