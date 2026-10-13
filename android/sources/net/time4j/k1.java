package net.time4j;

import java.util.Locale;

/* loaded from: classes3.dex */
public final class k1 implements ls.r0 {
    public static String t(String str, String str2, String str3, ls.i0 i0Var, ls.z zVar) {
        int ordinal = i0Var.ordinal();
        ls.z zVar2 = ls.z.f14253d;
        if (ordinal == 0) {
            return s4.h.f("{0} ", str, zVar == zVar2 ? "" : "s");
        }
        if (ordinal == 1 || ordinal == 2) {
            return s4.h.f("{0} ", str2, zVar == zVar2 ? "" : "s");
        }
        if (ordinal == 3) {
            return "{0}".concat(str3);
        }
        throw new UnsupportedOperationException(i0Var.name());
    }

    public static String u(String str, boolean z5, ls.z zVar) {
        String str2 = zVar == ls.z.f14253d ? "" : "s";
        return z5 ? s4.h.f("in {0} ", str, str2) : a3.e.l("{0} ", str, str2, " ago");
    }

    public static String v(String str, boolean z5) {
        return a3.e.n(new StringBuilder(), z5 ? "+" : "-", "{0} ", str);
    }

    @Override // ls.r0
    public final String a(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("millisecond", "msec", "ms", i0Var, zVar) : "{0} ".concat("ms");
    }

    @Override // ls.r0
    public final String b(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("nanosecond", "nsec", "ns", i0Var, zVar) : "{0} ".concat("ns");
    }

    @Override // ls.r0
    public final String c(Locale locale) {
        return "now";
    }

    @Override // ls.r0
    public final String d(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("day", "day", "d", i0Var, zVar) : "{0} ".concat("d");
    }

    @Override // ls.r0
    public final String e(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("hour", z5, zVar) : v("h", z5);
    }

    @Override // ls.r0
    public final String f(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("year", z5, zVar) : v("y", z5);
    }

    @Override // ls.r0
    public final String g(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("month", z5, zVar) : v("m", z5);
    }

    @Override // ls.r0
    public final String h(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("month", "mth", "m", i0Var, zVar) : "{0} ".concat("m");
    }

    @Override // ls.r0
    public final String i(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("minute", z5, zVar) : v("min", z5);
    }

    @Override // ls.r0
    public final String j(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("year", "yr", "y", i0Var, zVar) : "{0} ".concat("y");
    }

    @Override // ls.r0
    public final String k(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("day", z5, zVar) : v("d", z5);
    }

    @Override // ls.r0
    public final String l(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("hour", "hr", "h", i0Var, zVar) : "{0} ".concat("h");
    }

    @Override // ls.r0
    public final String m(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("microsecond", "µsec", "µs", i0Var, zVar) : "{0} ".concat("µs");
    }

    @Override // ls.r0
    public final String n(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("second", z5, zVar) : v("s", z5);
    }

    @Override // ls.r0
    public final String o(Locale locale, ls.i0 i0Var, int i5) {
        if (i5 < 2) {
            throw new IllegalArgumentException("Size must be greater than 1.");
        }
        StringBuilder sb2 = new StringBuilder(i5 * 5);
        for (int i6 = 0; i6 < i5; i6++) {
            sb2.append('{');
            sb2.append(i6);
            sb2.append('}');
            if (i6 < i5 - 1) {
                sb2.append(", ");
            }
        }
        return sb2.toString();
    }

    @Override // ls.r0
    public final String p(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("week", "wk", "w", i0Var, zVar) : "{0} ".concat("w");
    }

    @Override // ls.r0
    public final String q(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("second", "sec", "s", i0Var, zVar) : "{0} ".concat("s");
    }

    @Override // ls.r0
    public final String r(Locale locale, ls.i0 i0Var, ls.z zVar) {
        return locale.getLanguage().equals("en") ? t("minute", "min", "m", i0Var, zVar) : "{0} ".concat("min");
    }

    @Override // ls.r0
    public final String s(Locale locale, boolean z5, ls.z zVar) {
        return locale.getLanguage().equals("en") ? u("week", z5, zVar) : v("w", z5);
    }
}
