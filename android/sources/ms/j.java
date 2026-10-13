package ms;

import com.facebook.react.uimanager.ViewProps;
import java.util.Locale;
import java.util.MissingResourceException;
import ls.i0;
import ls.r0;
import ls.z;

/* loaded from: classes3.dex */
public final class j implements r0 {
    public static String A(char c6, int i5, String str) {
        int length = str.length();
        int i6 = length - 2;
        for (int i10 = 0; i10 < i6; i10++) {
            if (str.charAt(i10) == '{') {
                int i11 = i10 + 1;
                if (str.charAt(i11) == c6) {
                    int i12 = i10 + 2;
                    if (str.charAt(i12) == '}') {
                        StringBuilder sb2 = new StringBuilder(length + 8);
                        sb2.append(str);
                        sb2.replace(i11, i12, String.valueOf(i5));
                        return sb2.toString();
                    }
                } else {
                    continue;
                }
            }
        }
        return str;
    }

    public static String t(char c6, i0 i0Var, z zVar) {
        StringBuilder sb2 = new StringBuilder(3);
        sb2.append(c6);
        int ordinal = i0Var.ordinal();
        if (ordinal == 0) {
            sb2.append('w');
        } else if (ordinal == 1 || ordinal == 2) {
            sb2.append('s');
        } else {
            if (ordinal != 3) {
                throw new UnsupportedOperationException(i0Var.name());
            }
            sb2.append('n');
        }
        sb2.append(zVar.ordinal());
        return sb2.toString();
    }

    public static String u(char c6, boolean z5, z zVar) {
        StringBuilder sb2 = new StringBuilder(3);
        sb2.append(c6);
        sb2.append(z5 ? '+' : '-');
        sb2.append(zVar.ordinal());
        return sb2.toString();
    }

    public static String v(i0 i0Var, String str) {
        StringBuilder sb2 = new StringBuilder("L");
        int ordinal = i0Var.ordinal();
        if (ordinal == 0) {
            sb2.append('w');
        } else if (ordinal == 1 || ordinal == 2) {
            sb2.append('s');
        } else {
            if (ordinal != 3) {
                throw new UnsupportedOperationException(i0Var.name());
            }
            sb2.append('n');
        }
        sb2.append('-');
        sb2.append(str);
        return sb2.toString();
    }

    public static String w(String str, Locale locale) {
        boolean z5 = true;
        g gVar = null;
        for (Locale locale2 : g.b(locale)) {
            g d6 = (!z5 || gVar == null) ? g.d("i18n/reltime/relpattern", locale2) : gVar;
            if (z5) {
                if (locale2.equals(d6.f14598d)) {
                    z5 = false;
                } else {
                    gVar = d6;
                }
            }
            if (d6.f14596b.keySet().contains(str)) {
                return d6.c(str);
            }
        }
        return "";
    }

    public static String x(Locale locale, String str, String str2, String str3, z zVar) {
        boolean z5 = true;
        g gVar = null;
        for (Locale locale2 : g.b(locale)) {
            g d6 = (!z5 || gVar == null) ? g.d("i18n/".concat(str), locale2) : gVar;
            if (z5) {
                if (locale2.equals(d6.f14598d)) {
                    z5 = false;
                } else {
                    gVar = d6;
                }
            }
            if (d6.f14596b.keySet().contains(str2)) {
                return d6.c(str2);
            }
            if (zVar != z.f14254e && d6.f14596b.keySet().contains(str3)) {
                return d6.c(str3);
            }
        }
        throw new MissingResourceException(a3.e.l("Can't find resource for bundle ", str, ".properties, key ", str2), str.concat(".properties"), str2);
    }

    public static String y(Locale locale, char c6, boolean z5, z zVar) {
        return x(locale, "reltime/relpattern", u(c6, z5, zVar), u(c6, z5, z.f14254e), zVar);
    }

    public static String z(Locale locale, char c6, i0 i0Var, z zVar) {
        return x(locale, "units/upattern", t(c6, i0Var, zVar), t(c6, i0Var, z.f14254e), zVar);
    }

    @Override // ls.r0
    public final String a(Locale locale, i0 i0Var, z zVar) {
        return z(locale, '3', i0Var, zVar);
    }

    @Override // ls.r0
    public final String b(Locale locale, i0 i0Var, z zVar) {
        return z(locale, '9', i0Var, zVar);
    }

    @Override // ls.r0
    public final String c(Locale locale) {
        return x(locale, "reltime/relpattern", "now", null, z.f14254e);
    }

    @Override // ls.r0
    public final String d(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'D', i0Var, zVar);
    }

    @Override // ls.r0
    public final String e(Locale locale, boolean z5, z zVar) {
        return y(locale, 'H', z5, zVar);
    }

    @Override // ls.r0
    public final String f(Locale locale, boolean z5, z zVar) {
        return y(locale, 'Y', z5, zVar);
    }

    @Override // ls.r0
    public final String g(Locale locale, boolean z5, z zVar) {
        return y(locale, 'M', z5, zVar);
    }

    @Override // ls.r0
    public final String h(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'M', i0Var, zVar);
    }

    @Override // ls.r0
    public final String i(Locale locale, boolean z5, z zVar) {
        return y(locale, 'N', z5, zVar);
    }

    @Override // ls.r0
    public final String j(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'Y', i0Var, zVar);
    }

    @Override // ls.r0
    public final String k(Locale locale, boolean z5, z zVar) {
        return y(locale, 'D', z5, zVar);
    }

    @Override // ls.r0
    public final String l(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'H', i0Var, zVar);
    }

    @Override // ls.r0
    public final String m(Locale locale, i0 i0Var, z zVar) {
        return z(locale, '6', i0Var, zVar);
    }

    @Override // ls.r0
    public final String n(Locale locale, boolean z5, z zVar) {
        return y(locale, 'S', z5, zVar);
    }

    @Override // ls.r0
    public final String o(Locale locale, i0 i0Var, int i5) {
        int i6;
        if (i5 < 2) {
            throw new IllegalArgumentException("Size must be greater than 1.");
        }
        g d6 = g.d("i18n/units/upattern", locale);
        String v5 = v(i0Var, String.valueOf(i5));
        if (d6.a(v5)) {
            return d6.c(v5);
        }
        String c6 = d6.c(v(i0Var, ViewProps.END));
        if (i5 == 2) {
            return c6;
        }
        String c8 = d6.c(v(i0Var, ViewProps.START));
        String c10 = d6.c(v(i0Var, "middle"));
        String A = A('0', i5 - 2, A('1', i5 - 1, c6));
        int i10 = i5 - 3;
        String str = A;
        while (i10 >= 0) {
            String str2 = i10 == 0 ? c8 : c10;
            int length = str2.length();
            int i11 = length - 1;
            while (true) {
                if (i11 < 0) {
                    i6 = -1;
                    break;
                }
                if (i11 >= 2 && str2.charAt(i11) == '}' && str2.charAt(i11 - 1) == '1') {
                    i6 = i11 - 2;
                    if (str2.charAt(i6) == '{') {
                        break;
                    }
                }
                i11--;
            }
            if (i6 > -1) {
                A = str2.substring(0, i6) + str;
                if (i6 < length - 3) {
                    StringBuilder o6 = k0.d.o(A);
                    o6.append(str2.substring(i6 + 3));
                    A = o6.toString();
                }
            }
            if (i10 > 0) {
                str = A('0', i10, A);
            }
            i10--;
        }
        return A;
    }

    @Override // ls.r0
    public final String p(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'W', i0Var, zVar);
    }

    @Override // ls.r0
    public final String q(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'S', i0Var, zVar);
    }

    @Override // ls.r0
    public final String r(Locale locale, i0 i0Var, z zVar) {
        return z(locale, 'N', i0Var, zVar);
    }

    @Override // ls.r0
    public final String s(Locale locale, boolean z5, z zVar) {
        return y(locale, 'W', z5, zVar);
    }
}
