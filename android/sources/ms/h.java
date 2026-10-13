package ms;

import java.text.DecimalFormatSymbols;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Locale;
import java.util.Set;
import ls.x;

/* loaded from: classes3.dex */
public final class h implements ls.h {

    /* renamed from: b, reason: collision with root package name */
    public static final Locale[] f14599b = new Locale[0];

    /* renamed from: c, reason: collision with root package name */
    public static final Set f14600c;

    /* renamed from: d, reason: collision with root package name */
    public static final h f14601d;

    static {
        String[] split = g.d("i18n/numbers/symbol", Locale.ROOT).c("locales").split(" ");
        HashSet hashSet = new HashSet();
        Collections.addAll(hashSet, split);
        f14600c = Collections.unmodifiableSet(hashSet);
        f14601d = new h();
        HashMap hashMap = new HashMap();
        for (x xVar : x.values()) {
            hashMap.put(xVar.a(), xVar);
        }
        Collections.unmodifiableMap(hashMap);
    }

    @Override // ls.h
    public final String a(Locale locale) {
        String valueOf = locale.getLanguage().equals("ar") ? "\u200f-" : String.valueOf(DecimalFormatSymbols.getInstance(locale).getMinusSign());
        g d6 = f14600c.contains(d.a(locale)) ? g.d("i18n/numbers/symbol", locale) : null;
        return (d6 == null || !d6.a("minus")) ? valueOf : d6.c("minus");
    }

    @Override // ls.h
    public final Locale[] b() {
        return f14599b;
    }

    @Override // ls.h
    public final char c(Locale locale) {
        char zeroDigit = DecimalFormatSymbols.getInstance(locale).getZeroDigit();
        g d6 = f14600c.contains(d.a(locale)) ? g.d("i18n/numbers/symbol", locale) : null;
        return (d6 == null || !d6.a("zero")) ? zeroDigit : d6.c("zero").charAt(0);
    }

    public final String toString() {
        return "SymbolProviderSPI";
    }
}
