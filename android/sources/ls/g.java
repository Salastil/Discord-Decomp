package ls;

import java.text.DecimalFormatSymbols;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class g implements h {
    @Override // ls.h
    public final String a(Locale locale) {
        return locale.getLanguage().equals("ar") ? "\u200f-" : String.valueOf(DecimalFormatSymbols.getInstance(locale).getMinusSign());
    }

    @Override // ls.h
    public final Locale[] b() {
        return DecimalFormatSymbols.getAvailableLocales();
    }

    @Override // ls.h
    public final char c(Locale locale) {
        return DecimalFormatSymbols.getInstance(locale).getZeroDigit();
    }
}
