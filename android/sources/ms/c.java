package ms;

import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Locale;
import java.util.MissingResourceException;
import java.util.Set;
import ls.h0;
import ls.i0;
import ls.y;

/* loaded from: classes3.dex */
public final class c implements h0, ls.e {
    public static final Set a;

    static {
        String[] split = g.d("calendar/names/iso8601/iso8601", Locale.ROOT).c("languages").split(" ");
        HashSet hashSet = new HashSet();
        Collections.addAll(hashSet, split);
        Set unmodifiableSet = Collections.unmodifiableSet(hashSet);
        a = unmodifiableSet;
        HashSet hashSet2 = new HashSet();
        Iterator it = unmodifiableSet.iterator();
        while (it.hasNext()) {
            hashSet2.add(new Locale((String) it.next()));
        }
        for (d dVar : d.values()) {
            hashSet2.add(new Locale(dVar.name()));
        }
        Collections.unmodifiableSet(hashSet2);
    }

    public static String[] h(Locale locale, i0 i0Var) {
        g d6 = g.d("calendar/names/iso8601/iso8601", locale);
        String[] strArr = null;
        if (d6 != null) {
            i0 i0Var2 = i0.f14237i;
            i0 i0Var3 = i0.f14236e;
            i0 i0Var4 = i0Var == i0Var2 ? i0Var3 : i0Var;
            strArr = j(d6, 5, i(d6, "ERA"), i0Var4, i0Var4 == i0.f14238v ? i0Var3 : null, y.f14250d, 0);
            if (strArr == null && i0Var4 != i0Var3) {
                strArr = h(locale, i0Var3);
            }
        }
        if (strArr != null) {
            return strArr;
        }
        throw new MissingResourceException("Cannot find ISO-8601-resource for era and locale: " + locale, c.class.getName(), locale.toString());
    }

    public static String i(g gVar, String str) {
        return (gVar.a("useShortKeys") && "true".equals(gVar.c("useShortKeys"))) ? str.substring(0, 1) : str;
    }

    public static String[] j(g gVar, int i5, String str, i0 i0Var, i0 i0Var2, y yVar, int i6) {
        String[] j;
        y yVar2 = yVar;
        String[] strArr = new String[i5];
        boolean z5 = str.length() == 1;
        int i10 = 0;
        while (i10 < i5) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(str);
            sb2.append('(');
            y yVar3 = y.f14251e;
            if (z5) {
                char charAt = i0Var.name().charAt(0);
                if (yVar2 != yVar3) {
                    charAt = Character.toLowerCase(charAt);
                }
                sb2.append(charAt);
            } else {
                sb2.append(i0Var.name());
                if (yVar2 == yVar3) {
                    sb2.append('|');
                    sb2.append(yVar2.name());
                }
            }
            sb2.append(")_");
            sb2.append(i10 + i6);
            String sb3 = sb2.toString();
            if (gVar.a(sb3)) {
                strArr[i10] = gVar.c(sb3);
            } else {
                if (i0Var2 == null || (j = j(gVar, i5, str, i0Var2, null, yVar2, i6)) == null) {
                    return null;
                }
                strArr[i10] = j[i10];
            }
            i10++;
            yVar2 = yVar;
        }
        return strArr;
    }

    public static String k(String str, i0 i0Var, y yVar) {
        char charAt = i0Var.name().charAt(0);
        if (yVar == y.f14250d) {
            charAt = Character.toLowerCase(charAt);
        }
        return "P(" + String.valueOf(charAt) + ")_" + str;
    }

    public static String[] l(Locale locale, i0 i0Var, y yVar) {
        g d6 = g.d("calendar/names/iso8601/iso8601", locale);
        if (d6 != null) {
            i0 i0Var2 = i0.f14237i;
            i0 i0Var3 = i0.f14236e;
            if (i0Var == i0Var2) {
                i0Var = i0Var3;
            }
            String k = k("am", i0Var, yVar);
            String k5 = k("pm", i0Var, yVar);
            if (d6.a(k) && d6.a(k5)) {
                return new String[]{d6.c(k), d6.c(k5)};
            }
            if (yVar == y.f14251e) {
                return i0Var == i0Var3 ? l(locale, i0Var, y.f14250d) : l(locale, i0Var3, yVar);
            }
            if (i0Var != i0Var3) {
                return l(locale, i0Var3, yVar);
            }
        }
        throw new MissingResourceException("Cannot find ISO-8601-resource for am/pm and locale: " + locale, c.class.getName(), locale.toString());
    }

    public static String[] m(Locale locale, i0 i0Var, y yVar) {
        String[] strArr;
        g d6 = g.d("calendar/names/iso8601/iso8601", locale);
        if (d6 != null) {
            i0 i0Var2 = i0.f14237i;
            i0 i0Var3 = i0.f14236e;
            i0 i0Var4 = i0Var == i0Var2 ? i0Var3 : i0Var;
            strArr = j(d6, 12, i(d6, "MONTH_OF_YEAR"), i0Var4, null, yVar, 1);
            if (strArr == null) {
                y yVar2 = y.f14250d;
                i0 i0Var5 = i0.f14238v;
                y yVar3 = y.f14251e;
                if (yVar == yVar3) {
                    if (i0Var4 != i0Var5) {
                        strArr = m(locale, i0Var4, yVar2);
                    }
                } else if (i0Var4 == i0Var3) {
                    strArr = m(locale, i0.f14235d, yVar2);
                } else if (i0Var4 == i0Var5) {
                    strArr = m(locale, i0Var4, yVar3);
                }
            }
        } else {
            strArr = null;
        }
        if (strArr != null) {
            return strArr;
        }
        throw new MissingResourceException("Cannot find ISO-8601-month for locale: " + locale, c.class.getName(), locale.toString());
    }

    public static String[] n(Locale locale, i0 i0Var, y yVar) {
        String[] strArr;
        g d6 = g.d("calendar/names/iso8601/iso8601", locale);
        if (d6 != null) {
            i0 i0Var2 = i0.f14237i;
            i0 i0Var3 = i0.f14236e;
            i0 i0Var4 = i0Var == i0Var2 ? i0Var3 : i0Var;
            strArr = j(d6, 4, i(d6, "QUARTER_OF_YEAR"), i0Var4, null, yVar, 1);
            if (strArr == null) {
                y yVar2 = y.f14250d;
                i0 i0Var5 = i0.f14238v;
                y yVar3 = y.f14251e;
                if (yVar == yVar3) {
                    if (i0Var4 != i0Var5) {
                        strArr = n(locale, i0Var4, yVar2);
                    }
                } else if (i0Var4 == i0Var3) {
                    strArr = n(locale, i0.f14235d, yVar2);
                } else if (i0Var4 == i0Var5) {
                    strArr = n(locale, i0Var4, yVar3);
                }
            }
        } else {
            strArr = null;
        }
        if (strArr != null) {
            return strArr;
        }
        throw new MissingResourceException("Cannot find ISO-8601-quarter-of-year for locale: " + locale, c.class.getName(), locale.toString());
    }

    public static String[] o(Locale locale, i0 i0Var, y yVar) {
        String[] strArr;
        g d6 = g.d("calendar/names/iso8601/iso8601", locale);
        if (d6 != null) {
            strArr = j(d6, 7, i(d6, "DAY_OF_WEEK"), i0Var, null, yVar, 1);
            if (strArr == null) {
                i0 i0Var2 = i0.f14238v;
                y yVar2 = y.f14250d;
                y yVar3 = y.f14251e;
                if (yVar != yVar3) {
                    i0 i0Var3 = i0.f14236e;
                    if (i0Var == i0Var3) {
                        strArr = o(locale, i0.f14235d, yVar2);
                    } else if (i0Var == i0.f14237i) {
                        strArr = o(locale, i0Var3, yVar2);
                    } else if (i0Var == i0Var2) {
                        strArr = o(locale, i0Var, yVar3);
                    }
                } else if (i0Var != i0Var2) {
                    strArr = o(locale, i0Var, yVar2);
                }
            }
        } else {
            strArr = null;
        }
        if (strArr != null) {
            return strArr;
        }
        throw new MissingResourceException("Cannot find ISO-8601-day-of-week for locale: " + locale, c.class.getName(), locale.toString());
    }

    @Override // ls.h0
    public final String[] a(Locale locale, i0 i0Var, y yVar) {
        return l(locale, i0Var, yVar);
    }

    @Override // ls.h0
    public final String[] b(String str, Locale locale, i0 i0Var) {
        return h(locale, i0Var);
    }

    @Override // ls.h0
    public final String[] c(String str, Locale locale, i0 i0Var, y yVar, boolean z5) {
        return m(locale, i0Var, yVar);
    }

    @Override // ls.h0
    public final boolean d(Locale locale) {
        return a.contains(d.a(locale));
    }

    @Override // ls.h0
    public final boolean e(String str) {
        return "iso8601".equals(str);
    }

    @Override // ls.h0
    public final String[] f(Locale locale, i0 i0Var, y yVar) {
        return o(locale, i0Var, yVar);
    }

    @Override // ls.h0
    public final String[] g(Locale locale, i0 i0Var, y yVar) {
        return n(locale, i0Var, yVar);
    }

    public final String toString() {
        return "IsoTextProviderSPI";
    }
}
