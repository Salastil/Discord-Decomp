package js;

import a3.e;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.MissingResourceException;
import java.util.Set;
import ls.c;
import ls.h0;
import ls.i0;
import ls.y;
import ms.d;
import ms.g;

/* loaded from: classes3.dex */
public final class a implements h0 {
    public static final String[] a = new String[0];

    /* renamed from: b, reason: collision with root package name */
    public static final Set f13097b;

    /* renamed from: c, reason: collision with root package name */
    public static final Set f13098c;

    static {
        String[] split = g.d("calendar/names/generic/generic", Locale.ROOT).c("languages").split(" ");
        HashSet hashSet = new HashSet();
        Collections.addAll(hashSet, split);
        hashSet.add("");
        Set<String> unmodifiableSet = Collections.unmodifiableSet(hashSet);
        f13098c = unmodifiableSet;
        HashSet hashSet2 = new HashSet();
        for (String str : unmodifiableSet) {
            if (str.isEmpty()) {
                hashSet2.add(Locale.ROOT);
            } else {
                hashSet2.add(new Locale(str));
            }
        }
        Collections.unmodifiableSet(hashSet2);
        HashSet hashSet3 = new HashSet();
        hashSet3.add("buddhist");
        hashSet3.add("chinese");
        hashSet3.add("coptic");
        hashSet3.add("dangi");
        hashSet3.add("ethiopic");
        hashSet3.add("frenchrev");
        hashSet3.add("hindu");
        hashSet3.add("generic");
        hashSet3.add("hebrew");
        hashSet3.add("indian");
        hashSet3.add("islamic");
        hashSet3.add("japanese");
        hashSet3.add("juche");
        hashSet3.add("persian");
        hashSet3.add("roc");
        hashSet3.add("vietnam");
        f13097b = Collections.unmodifiableSet(hashSet3);
    }

    public static g h(String str, Locale locale) {
        String l6 = e.l("calendar/names/", str, "/", str);
        if (!f13098c.contains(d.a(locale))) {
            locale = Locale.ROOT;
        }
        return g.d(l6, locale);
    }

    public static String[] i(g gVar, String str, String str2, int i5, String str3, i0 i0Var, y yVar, boolean z5, int i6) {
        String[] strArr = new String[i5];
        boolean z6 = str3.length() == 1;
        for (int i10 = 0; i10 < i5; i10++) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(str3);
            sb2.append('(');
            y yVar2 = y.f14251e;
            if (z6) {
                char charAt = i0Var.name().charAt(0);
                if (yVar != yVar2) {
                    charAt = Character.toLowerCase(charAt);
                }
                sb2.append(charAt);
            } else {
                sb2.append(i0Var.name());
                if (yVar == yVar2) {
                    sb2.append('|');
                    sb2.append(yVar.name());
                }
                if (z5) {
                    sb2.append("|LEAP");
                }
            }
            sb2.append(")_");
            sb2.append(i10 + i6);
            if (z5 && i10 == 6 && str.equals("hebrew")) {
                sb2.append('L');
            }
            String sb3 = sb2.toString();
            if (!gVar.a(sb3)) {
                return null;
            }
            String c6 = gVar.c(sb3);
            if (z5 && str.equals("chinese")) {
                boolean equals = str2.equals("en");
                i0 i0Var2 = i0.f14238v;
                if (equals) {
                    c6 = i0Var == i0Var2 ? "i".concat(c6) : "(leap) ".concat(c6);
                } else if (str2.equals("de") || str2.equals("es") || str2.equals("fr") || str2.equals("it") || str2.equals("pt") || str2.equals("ro")) {
                    c6 = i0Var == i0Var2 ? "i".concat(c6) : "(i) ".concat(c6);
                } else if (str2.equals("ja")) {
                    c6 = "閏".concat(c6);
                } else if (str2.equals("ko")) {
                    c6 = "윤".concat(c6);
                } else if (str2.equals("zh")) {
                    c6 = "閏".concat(c6);
                } else if (!str2.equals("vi")) {
                    c6 = "*".concat(c6);
                } else if (i0Var == i0Var2) {
                    c6 = c6.concat("n");
                } else {
                    c6 = c6.concat(yVar == yVar2 ? " Nhuận" : " nhuận");
                }
            }
            strArr[i10] = c6;
        }
        return strArr;
    }

    @Override // ls.h0
    public final String[] a(Locale locale, i0 i0Var, y yVar) {
        return a;
    }

    @Override // ls.h0
    public final String[] b(String str, Locale locale, i0 i0Var) {
        i0 i0Var2 = i0Var;
        if (str.equals("chinese") || str.equals("vietnam")) {
            return a;
        }
        if (str.equals("japanese")) {
            return i0Var2 == i0.f14238v ? new String[]{"M", "T", "S", "H"} : new String[]{"Meiji", "Taishō", "Shōwa", "Heisei"};
        }
        int i5 = 1;
        if (str.equals("dangi") || str.equals("juche")) {
            String[] b10 = b("korean", locale, i0Var);
            return new String[]{str.equals("dangi") ? b10[0] : b10[1]};
        }
        g h6 = h(str, locale);
        i0 i0Var3 = i0.f14237i;
        i0 i0Var4 = i0.f14236e;
        if (i0Var2 == i0Var3) {
            i0Var2 = i0Var4;
        }
        String language = locale.getLanguage();
        if (str.equals("hindu")) {
            i5 = 6;
        } else if (str.equals("ethiopic") || str.equals("generic") || str.equals("roc") || str.equals("buddhist") || str.equals("korean")) {
            i5 = 2;
        }
        i0 i0Var5 = i0Var2;
        String[] i6 = i(h6, str, language, i5, (h6.a("useShortKeys") && "true".equals(h6.c("useShortKeys"))) ? "E" : "ERA", i0Var5, y.f14250d, false, 0);
        if (i6 == null && i0Var5 != i0Var4) {
            i6 = b(str, locale, i0Var4);
        }
        if (i6 != null) {
            return i6;
        }
        throw new MissingResourceException("Cannot find calendar resource for era.", a.class.getName(), locale.toString());
    }

    @Override // ls.h0
    public final String[] c(String str, Locale locale, i0 i0Var, y yVar, boolean z5) {
        String str2 = str;
        Locale locale2 = locale;
        if (str2.equals("roc") || str2.equals("buddhist")) {
            List list = c.a("iso8601", locale2).c(i0Var, yVar, false).a;
            return (String[]) list.toArray(new String[list.size()]);
        }
        if (str2.equals("japanese")) {
            return new String[]{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};
        }
        if (str2.equals("dangi") || str2.equals("vietnam")) {
            str2 = "chinese";
        } else if (str2.equals("hindu")) {
            str2 = "indian";
        } else if (str2.equals("juche")) {
            return (String[]) c.a("iso8601", locale2).c(i0Var, yVar, false).a.toArray(new String[12]);
        }
        String str3 = str2;
        g h6 = h(str3, locale2);
        i0 i0Var2 = i0.f14237i;
        i0 i0Var3 = i0.f14236e;
        i0 i0Var4 = i0Var == i0Var2 ? i0Var3 : i0Var;
        String[] i5 = i(h6, str3, locale2.getLanguage(), (str3.equals("coptic") || str3.equals("ethiopic") || str3.equals("generic") || str3.equals("hebrew")) ? 13 : 12, (h6.a("useShortKeys") && "true".equals(h6.c("useShortKeys"))) ? "M" : "MONTH_OF_YEAR", i0Var4, yVar, z5, 1);
        i0 i0Var5 = i0Var4;
        if (i5 == null) {
            y yVar2 = y.f14250d;
            i0 i0Var6 = i0.f14238v;
            y yVar3 = y.f14251e;
            if (yVar == yVar3) {
                if (i0Var5 != i0Var6) {
                    i5 = c(str3, locale2, i0Var5, yVar2, z5);
                }
            } else if (i0Var5 == i0Var3) {
                locale2 = locale;
                i5 = c(str3, locale2, i0.f14235d, yVar2, z5);
            } else if (i0Var5 == i0Var6) {
                locale2 = locale;
                i5 = c(str3, locale2, i0Var5, yVar3, z5);
            }
            locale2 = locale;
        }
        if (i5 != null) {
            return i5;
        }
        throw new MissingResourceException("Cannot find calendar month.", a.class.getName(), locale2.toString());
    }

    @Override // ls.h0
    public final boolean d(Locale locale) {
        return true;
    }

    @Override // ls.h0
    public final boolean e(String str) {
        return f13097b.contains(str);
    }

    @Override // ls.h0
    public final String[] f(Locale locale, i0 i0Var, y yVar) {
        return a;
    }

    @Override // ls.h0
    public final String[] g(Locale locale, i0 i0Var, y yVar) {
        return a;
    }

    public final String toString() {
        return "GenericTextProviderSPI";
    }
}
