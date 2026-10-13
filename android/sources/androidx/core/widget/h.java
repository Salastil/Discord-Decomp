package androidx.core.widget;

import android.graphics.Paint;
import android.icu.text.DecimalFormatSymbols;
import android.os.Build;
import android.text.TextDirectionHeuristic;
import android.text.TextDirectionHeuristics;
import android.text.TextPaint;
import android.text.method.PasswordTransformationMethod;
import android.view.ActionMode;
import android.widget.TextView;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.core.text.PrecomputedTextCompat;

/* loaded from: classes.dex */
public abstract class h {
    public static PrecomputedTextCompat.Params a(AppCompatTextView appCompatTextView) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 28) {
            return new PrecomputedTextCompat.Params(androidx.core.view.h.n(appCompatTextView));
        }
        TextPaint textPaint = new TextPaint(appCompatTextView.getPaint());
        TextDirectionHeuristic textDirectionHeuristic = TextDirectionHeuristics.FIRSTSTRONG_LTR;
        int breakStrategy = appCompatTextView.getBreakStrategy();
        int hyphenationFrequency = appCompatTextView.getHyphenationFrequency();
        if (appCompatTextView.getTransformationMethod() instanceof PasswordTransformationMethod) {
            textDirectionHeuristic = TextDirectionHeuristics.LTR;
        } else {
            if (i5 < 28 || (appCompatTextView.getInputType() & 15) != 3) {
                boolean z5 = appCompatTextView.getLayoutDirection() == 1;
                switch (appCompatTextView.getTextDirection()) {
                    case 2:
                        textDirectionHeuristic = TextDirectionHeuristics.ANYRTL_LTR;
                        break;
                    case 3:
                        textDirectionHeuristic = TextDirectionHeuristics.LTR;
                        break;
                    case 4:
                        textDirectionHeuristic = TextDirectionHeuristics.RTL;
                        break;
                    case 5:
                        textDirectionHeuristic = TextDirectionHeuristics.LOCALE;
                        break;
                    case 6:
                        break;
                    case 7:
                        textDirectionHeuristic = TextDirectionHeuristics.FIRSTSTRONG_RTL;
                        break;
                    default:
                        if (z5) {
                            textDirectionHeuristic = TextDirectionHeuristics.FIRSTSTRONG_RTL;
                            break;
                        }
                        break;
                }
            } else {
                byte directionality = Character.getDirectionality(androidx.core.view.h.f(DecimalFormatSymbols.getInstance(appCompatTextView.getTextLocale()))[0].codePointAt(0));
                textDirectionHeuristic = (directionality == 1 || directionality == 2) ? TextDirectionHeuristics.RTL : TextDirectionHeuristics.LTR;
            }
        }
        return new PrecomputedTextCompat.Params(textPaint, textDirectionHeuristic, breakStrategy, hyphenationFrequency);
    }

    public static void b(int i5, TextView textView) {
        ta.a.i(i5);
        if (Build.VERSION.SDK_INT >= 28) {
            androidx.core.view.h.v(i5, textView);
            return;
        }
        Paint.FontMetricsInt fontMetricsInt = textView.getPaint().getFontMetricsInt();
        int i6 = textView.getIncludeFontPadding() ? fontMetricsInt.top : fontMetricsInt.ascent;
        if (i5 > Math.abs(i6)) {
            textView.setPadding(textView.getPaddingLeft(), i5 + i6, textView.getPaddingRight(), textView.getPaddingBottom());
        }
    }

    public static void c(int i5, TextView textView) {
        ta.a.i(i5);
        Paint.FontMetricsInt fontMetricsInt = textView.getPaint().getFontMetricsInt();
        int i6 = textView.getIncludeFontPadding() ? fontMetricsInt.bottom : fontMetricsInt.descent;
        if (i5 > Math.abs(i6)) {
            textView.setPadding(textView.getPaddingLeft(), textView.getPaddingTop(), textView.getPaddingRight(), i5 - i6);
        }
    }

    public static void d(int i5, TextView textView) {
        ta.a.i(i5);
        if (i5 != textView.getPaint().getFontMetricsInt(null)) {
            textView.setLineSpacing(i5 - r0, 1.0f);
        }
    }

    public static ActionMode.Callback e(ActionMode.Callback callback) {
        return (!(callback instanceof g) || Build.VERSION.SDK_INT < 26) ? callback : ((g) callback).a;
    }

    public static ActionMode.Callback f(ActionMode.Callback callback, TextView textView) {
        int i5 = Build.VERSION.SDK_INT;
        return (i5 < 26 || i5 > 27 || (callback instanceof g) || callback == null) ? callback : new g(callback, textView);
    }
}
