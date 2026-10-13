package net.time4j;

import java.util.Collections;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.SortedMap;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class x {

    /* renamed from: d, reason: collision with root package name */
    public static final x f15391d;
    public final transient Locale a;

    /* renamed from: b, reason: collision with root package name */
    public final transient String f15392b;

    /* renamed from: c, reason: collision with root package name */
    public final transient SortedMap f15393c;

    static {
        TreeMap treeMap = new TreeMap();
        treeMap.put(z0.J, "am");
        treeMap.put(z0.x(12), "pm");
        f15391d = new x(Locale.ROOT, "iso8601", Collections.unmodifiableSortedMap(treeMap));
        int i5 = ls.a.f14219b;
        new ls.f0(x.class, "CUSTOM_DAY_PERIOD");
    }

    public x(Locale locale, String str, SortedMap sortedMap) {
        this.a = locale;
        this.f15392b = str;
        this.f15393c = Collections.unmodifiableSortedMap(sortedMap);
    }

    public static String a(z0 z0Var) {
        int intValue = ((Integer) z0Var.d(z0.U)).intValue();
        return (intValue == 0 || intValue == 1440) ? "midnight" : intValue < 720 ? "am" : intValue == 720 ? "noon" : "pm";
    }

    public static String b(Map map, ls.i0 i0Var, ls.y yVar, String str) {
        ls.i0 i0Var2 = ls.i0.f14237i;
        ls.i0 i0Var3 = ls.i0.f14236e;
        if (i0Var == i0Var2) {
            i0Var = i0Var3;
        }
        StringBuilder sb2 = new StringBuilder();
        int ordinal = i0Var.ordinal();
        char c6 = ordinal != 0 ? ordinal != 3 ? 'a' : 'n' : 'w';
        ls.y yVar2 = ls.y.f14251e;
        if (yVar == yVar2) {
            c6 = Character.toUpperCase(c6);
        }
        sb2.append("P(" + c6 + ")_");
        sb2.append(str);
        String sb3 = sb2.toString();
        if (!map.containsKey(sb3)) {
            if (yVar == yVar2) {
                return i0Var == i0Var3 ? b(map, i0Var, ls.y.f14250d, str) : b(map, i0Var3, yVar, str);
            }
            if (i0Var != i0Var3) {
                return b(map, i0Var3, yVar, str);
            }
        }
        return sb3;
    }

    public static Map d(String str, Locale locale) {
        Map map = ls.c.a(str, locale).f14225d;
        return (str.equals("iso8601") || "true".equals(map.get("hasDayPeriods"))) ? map : ls.c.a("iso8601", locale).f14225d;
    }

    public static x e(String str, Locale locale) {
        String language = locale.getLanguage();
        if (language.equals("nn")) {
            locale = new Locale("nb");
        }
        Map d6 = d(str, locale);
        TreeMap treeMap = new TreeMap();
        for (String str2 : d6.keySet()) {
            if (str2.charAt(0) == 'T' && str2.length() == 5 && Character.isDigit(str2.charAt(1))) {
                int parseInt = Integer.parseInt(str2.substring(1, 3));
                int parseInt2 = Integer.parseInt(str2.substring(3, 5));
                z0 z0Var = z0.J;
                if (parseInt != 24) {
                    if (parseInt < 0 || parseInt >= 24 || parseInt2 < 0 || parseInt2 >= 60) {
                        throw new IllegalStateException("Invalid time key: ".concat(str2));
                    }
                    z0Var = (z0) z0Var.l((parseInt * 60) + parseInt2, t.f15315e);
                } else if (parseInt2 != 0) {
                    throw new IllegalStateException("Invalid time key: ".concat(str2));
                }
                treeMap.put(z0Var, d6.get(str2));
            }
        }
        if (treeMap.isEmpty() || language.isEmpty()) {
            return f15391d;
        }
        Iterator it = treeMap.keySet().iterator();
        String str3 = "";
        while (it.hasNext()) {
            String str4 = (String) treeMap.get((z0) it.next());
            if (str4.equals(str3)) {
                it.remove();
            } else {
                str3 = str4;
            }
        }
        return new x(locale, str, treeMap);
    }

    public final boolean c() {
        return this.a != null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof x) {
            x xVar = (x) obj;
            Locale locale = xVar.a;
            Locale locale2 = this.a;
            if (locale2 == null) {
                if (locale != null) {
                    return false;
                }
            } else if (!locale2.equals(locale)) {
                return false;
            }
            if (this.f15393c.equals(xVar.f15393c) && this.f15392b.equals(xVar.f15392b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f15393c.hashCode();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(64);
        sb2.append("DayPeriod[");
        if (c()) {
            sb2.append("locale=");
            sb2.append(this.a);
            sb2.append(',');
            String str = this.f15392b;
            if (!str.equals("iso8601")) {
                sb2.append(",calendar-type=");
                sb2.append(str);
                sb2.append(',');
            }
        }
        sb2.append(this.f15393c);
        sb2.append(']');
        return sb2.toString();
    }
}
