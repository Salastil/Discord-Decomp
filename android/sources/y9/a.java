package y9;

import android.icu.util.ULocale;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/* loaded from: classes3.dex */
public abstract class a {
    public static final String[] a = {"best fit", "lookup"};

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f20682b = {"base", "accent", "case", "variant"};

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f20683c = {"upper", "lower", "false"};

    /* renamed from: d, reason: collision with root package name */
    public static final String[] f20684d = {"sort", "search"};

    /* renamed from: e, reason: collision with root package name */
    public static final a0 f20685e = new a0();

    /* renamed from: f, reason: collision with root package name */
    public static final z f20686f = new z();

    public static String a(String str, String[] strArr) {
        while (Arrays.asList(strArr).indexOf(str) <= -1) {
            int lastIndexOf = str.lastIndexOf("-");
            if (lastIndexOf < 0) {
                return "";
            }
            if (lastIndexOf >= 2 && str.charAt(lastIndexOf - 2) == '-') {
                lastIndexOf -= 2;
            }
            str = str.substring(0, lastIndexOf);
        }
        return str;
    }

    public static Object b(String str, Object obj, Object obj2, Double d6, Object obj3) {
        if (obj instanceof a0) {
            return obj3;
        }
        if (!(obj instanceof Double)) {
            throw new ap.a(str.concat(" value is invalid."), 9);
        }
        double doubleValue = ((Double) obj).doubleValue();
        if (Double.isNaN(doubleValue) || doubleValue > d6.doubleValue() || doubleValue < ((Double) obj2).doubleValue()) {
            throw new ap.a(str.concat(" value is invalid."), 9);
        }
        return obj;
    }

    public static Object c(Object obj, String str) {
        HashMap hashMap = (HashMap) obj;
        if (!hashMap.containsKey(str)) {
            return f20685e;
        }
        Object obj2 = hashMap.get(str);
        return obj2 == null ? f20686f : obj2;
    }

    public static Object d(Map map, String str, int i5, Object obj, Object obj2) {
        Object c6 = c(map, str);
        if (c6 instanceof a0) {
            return obj2;
        }
        if (c6 instanceof z) {
            c6 = "";
        }
        if (i5 == 1 && !(c6 instanceof Boolean)) {
            throw new ap.a("Boolean option expected but not found", 9);
        }
        if (i5 == 2 && !(c6 instanceof String)) {
            throw new ap.a("String option expected but not found", 9);
        }
        if (obj instanceof a0) {
            return c6;
        }
        if (Arrays.asList((Object[]) obj).contains(c6)) {
            return c6;
        }
        throw new ap.a("String option expected but not found", 9);
    }

    public static e4.l e(String[] strArr) {
        e4.l lVar = new e4.l();
        for (String str : strArr) {
            b0 g6 = g(str);
            ULocale[] availableLocales = ULocale.getAvailableLocales();
            g6.b();
            ULocale.Builder builder = new ULocale.Builder();
            builder.setLocale(g6.a);
            builder.clearExtensions();
            boolean[] zArr = new boolean[1];
            ULocale acceptLanguage = ULocale.acceptLanguage(new ULocale[]{builder.build()}, availableLocales, zArr);
            if (zArr[0] || acceptLanguage == null) {
                acceptLanguage = null;
            }
            if (acceptLanguage != null) {
                lVar.f7959e = new b0(acceptLanguage);
                lVar.f7960i = g6.d();
                return lVar;
            }
        }
        lVar.f7959e = new b0(ULocale.getDefault(ULocale.Category.FORMAT));
        return lVar;
    }

    public static String[] f(String[] strArr) {
        ArrayList arrayList = new ArrayList();
        for (String str : strArr) {
            b0 g6 = g(str);
            ULocale[] availableLocales = ULocale.getAvailableLocales();
            g6.b();
            ULocale.Builder builder = new ULocale.Builder();
            builder.setLocale(g6.a);
            builder.clearExtensions();
            ULocale[] uLocaleArr = {builder.build()};
            boolean[] zArr = new boolean[1];
            ULocale acceptLanguage = ULocale.acceptLanguage(uLocaleArr, availableLocales, zArr);
            if (zArr[0] || acceptLanguage == null) {
                acceptLanguage = null;
            }
            if (acceptLanguage != null) {
                arrayList.add(str);
            }
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    public static b0 g(String str) {
        b0 b0Var = new b0();
        b0Var.a = null;
        b0Var.f20688b = null;
        b0Var.f20689c = false;
        ULocale.Builder builder = new ULocale.Builder();
        b0Var.f20688b = builder;
        try {
            builder.setLanguageTag(str);
            b0Var.f20689c = true;
            return b0Var;
        } catch (RuntimeException e9) {
            throw new ap.a(e9.getMessage(), 9);
        }
    }

    public static String[] h() {
        ArrayList arrayList = new ArrayList();
        for (Locale locale : Locale.getAvailableLocales()) {
            arrayList.add(locale.toLanguageTag());
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    public static boolean i(int i5, int i6, CharSequence charSequence, int i10, int i11) {
        int i12;
        if (i6 >= charSequence.length() || (i12 = (i6 - i5) + 1) < i10 || i12 > i11) {
            return false;
        }
        while (i5 <= i6) {
            char charAt = charSequence.charAt(i5);
            if (!((charAt >= 'a' && charAt <= 'z') || (charAt >= 'A' && charAt <= 'Z')) && (charAt < '0' || charAt > '9')) {
                return false;
            }
            i5++;
        }
        return true;
    }

    public static String[] j(String[] strArr) {
        ArrayList arrayList = new ArrayList();
        String[] h6 = h();
        for (String str : strArr) {
            b0 g6 = g(str);
            g6.b();
            ULocale.Builder builder = new ULocale.Builder();
            builder.setLocale(g6.a);
            builder.clearExtensions();
            String a10 = a(builder.build().toLanguageTag(), h6);
            if (a10 != null && !a10.isEmpty()) {
                arrayList.add(str);
            }
        }
        return (String[]) arrayList.toArray(new String[arrayList.size()]);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v10, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r3v18, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r3v20, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r5v6, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r5v8, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r9v0, types: [java.lang.Object, java.util.HashMap, java.util.Map] */
    public static HashMap k(List list, HashMap hashMap, List list2) {
        e4.l e9;
        z zVar;
        HashMap hashMap2 = new HashMap();
        if (((String) c(hashMap, "localeMatcher")).equals("lookup")) {
            String[] strArr = (String[]) list.toArray(new String[list.size()]);
            String[] h6 = h();
            e9 = new e4.l();
            int length = strArr.length;
            int i5 = 0;
            while (true) {
                if (i5 >= length) {
                    e9.f7959e = new b0(ULocale.getDefault(ULocale.Category.FORMAT));
                    break;
                }
                b0 g6 = g(strArr[i5]);
                g6.b();
                ULocale.Builder builder = new ULocale.Builder();
                builder.setLocale(g6.a);
                builder.clearExtensions();
                String a10 = a(builder.build().toLanguageTag(), h6);
                if (!a10.isEmpty()) {
                    e9.f7959e = g(a10);
                    e9.f7960i = g6.d();
                    break;
                }
                i5++;
            }
        } else {
            e9 = e((String[]) list.toArray(new String[list.size()]));
        }
        HashSet hashSet = new HashSet();
        Iterator it = list2.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            boolean isEmpty = ((HashMap) e9.f7960i).isEmpty();
            z zVar2 = f20686f;
            if (isEmpty || !((HashMap) e9.f7960i).containsKey(str)) {
                zVar = zVar2;
            } else {
                ?? r32 = (String) ((HashMap) e9.f7960i).get(str);
                boolean isEmpty2 = r32.isEmpty();
                z zVar3 = r32;
                if (isEmpty2) {
                    zVar3 = "true";
                }
                hashSet.add(str);
                zVar = zVar3;
            }
            z zVar4 = zVar;
            if (hashMap.containsKey(str)) {
                ?? c6 = c(hashMap, str);
                boolean z5 = c6 instanceof String;
                z zVar5 = c6;
                if (z5) {
                    boolean isEmpty3 = ((String) c6).isEmpty();
                    zVar5 = c6;
                    if (isEmpty3) {
                        zVar5 = Boolean.TRUE;
                    }
                }
                zVar4 = zVar;
                if (!(zVar5 instanceof a0)) {
                    boolean equals = zVar5.equals(zVar);
                    zVar4 = zVar;
                    if (!equals) {
                        hashSet.remove(str);
                        zVar4 = zVar5;
                    }
                }
            }
            boolean z6 = zVar4 instanceof z;
            z zVar6 = zVar4;
            if (!z6) {
                zVar6 = d0.c(zVar4, str);
            }
            if (!(zVar6 instanceof String) || d0.a(str, (String) zVar6, (b0) e9.f7959e)) {
                hashMap2.put(str, zVar6);
            } else {
                hashMap2.put(str, zVar2);
            }
        }
        Iterator it2 = hashSet.iterator();
        while (it2.hasNext()) {
            String str2 = (String) it2.next();
            ArrayList arrayList = new ArrayList();
            String str3 = (String) d0.c((String) ((HashMap) e9.f7960i).get(str2), str2);
            if (str3 == null || d0.a(str2, str3, (b0) e9.f7959e)) {
                arrayList.add(str3);
                ((b0) e9.f7959e).e(str2, arrayList);
            }
        }
        hashMap2.put("locale", (b0) e9.f7959e);
        return hashMap2;
    }

    public static Enum l(Class cls, Object obj) {
        if (obj instanceof a0) {
            return Enum.valueOf(cls, "UNDEFINED");
        }
        if (obj instanceof z) {
            return null;
        }
        String str = (String) obj;
        if (str.equals("2-digit")) {
            return Enum.valueOf(cls, "DIGIT2");
        }
        for (Enum r32 : (Enum[]) cls.getEnumConstants()) {
            if (r32.name().compareToIgnoreCase(str) == 0) {
                return r32;
            }
        }
        return null;
    }
}
