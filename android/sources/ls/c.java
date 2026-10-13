package ls;

import java.util.Arrays;
import java.util.Collections;
import java.util.EnumMap;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.MissingResourceException;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: g, reason: collision with root package name */
    public static final b f14220g;

    /* renamed from: h, reason: collision with root package name */
    public static final b f14221h;

    /* renamed from: i, reason: collision with root package name */
    public static final ConcurrentHashMap f14222i;
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f14223b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f14224c;

    /* renamed from: d, reason: collision with root package name */
    public final Map f14225d;

    /* renamed from: e, reason: collision with root package name */
    public final String f14226e;

    /* renamed from: f, reason: collision with root package name */
    public final Locale f14227f;

    static {
        HashSet hashSet = new HashSet();
        hashSet.add("ar");
        hashSet.add("dv");
        hashSet.add("fa");
        hashSet.add("ha");
        hashSet.add("he");
        hashSet.add("iw");
        hashSet.add("ji");
        hashSet.add("ps");
        hashSet.add("sd");
        hashSet.add("ug");
        hashSet.add("ur");
        hashSet.add("yi");
        Collections.unmodifiableSet(hashSet);
        Iterator it = is.c.f12272b.d(e.class).iterator();
        new hs.a(it.hasNext() ? (e) it.next() : new ms.c());
        f14220g = new b(1);
        f14221h = new b(0);
        f14222i = new ConcurrentHashMap();
    }

    public c(String str, Locale locale, h0 h0Var) {
        this.a = h0Var.toString();
        int i5 = 0;
        Map unmodifiableMap = Collections.unmodifiableMap(b(str, locale, h0Var, false));
        this.f14223b = unmodifiableMap;
        EnumMap b10 = b(str, locale, h0Var, true);
        if (b10 == null) {
            this.f14224c = unmodifiableMap;
        } else {
            this.f14224c = Collections.unmodifiableMap(b10);
        }
        EnumMap enumMap = new EnumMap(i0.class);
        i0[] values = i0.values();
        int length = values.length;
        int i6 = 0;
        while (i6 < length) {
            i0 i0Var = values[i6];
            EnumMap enumMap2 = new EnumMap(y.class);
            y[] values2 = y.values();
            int length2 = values2.length;
            int i10 = i5;
            while (i10 < length2) {
                y yVar = values2[i10];
                enumMap2.put((EnumMap) yVar, (y) new g0(h0Var.g(locale, i0Var, yVar)));
                i10++;
                values = values;
            }
            enumMap.put((EnumMap) i0Var, (i0) enumMap2);
            i6++;
            i5 = 0;
        }
        Collections.unmodifiableMap(enumMap);
        EnumMap enumMap3 = new EnumMap(i0.class);
        i0[] values3 = i0.values();
        int length3 = values3.length;
        for (int i11 = 0; i11 < length3; i11++) {
            i0 i0Var2 = values3[i11];
            EnumMap enumMap4 = new EnumMap(y.class);
            y[] values4 = y.values();
            int length4 = values4.length;
            int i12 = 0;
            while (i12 < length4) {
                y yVar2 = values4[i12];
                enumMap4.put((EnumMap) yVar2, (y) new g0(h0Var.f(locale, i0Var2, yVar2)));
                i12++;
                values3 = values3;
                length3 = length3;
            }
            enumMap3.put((EnumMap) i0Var2, (i0) enumMap4);
        }
        Collections.unmodifiableMap(enumMap3);
        EnumMap enumMap5 = new EnumMap(i0.class);
        for (i0 i0Var3 : i0.values()) {
            enumMap5.put((EnumMap) i0Var3, (i0) new g0(h0Var.b(str, locale, i0Var3)));
        }
        Collections.unmodifiableMap(enumMap5);
        EnumMap enumMap6 = new EnumMap(i0.class);
        i0[] values5 = i0.values();
        int length5 = values5.length;
        for (int i13 = 0; i13 < length5; i13++) {
            i0 i0Var4 = values5[i13];
            EnumMap enumMap7 = new EnumMap(y.class);
            y[] values6 = y.values();
            int length6 = values6.length;
            int i14 = 0;
            while (i14 < length6) {
                y yVar3 = values6[i14];
                enumMap7.put((EnumMap) yVar3, (y) new g0(h0Var.a(locale, i0Var4, yVar3)));
                i14++;
                values5 = values5;
            }
            enumMap6.put((EnumMap) i0Var4, (i0) enumMap7);
        }
        Collections.unmodifiableMap(enumMap6);
        HashMap hashMap = new HashMap();
        try {
            ms.g d6 = ms.g.d("calendar/names/" + str + "/" + str, locale);
            d6.getClass();
            HashSet hashSet = new HashSet(d6.f14596b.keySet());
            ms.g gVar = d6;
            while (true) {
                gVar = gVar.a;
                if (gVar == null) {
                    break;
                } else {
                    hashSet.addAll(gVar.f14596b.keySet());
                }
            }
            for (String str2 : Collections.unmodifiableSet(hashSet)) {
                hashMap.put(str2, d6.c(str2));
            }
        } catch (MissingResourceException unused) {
        }
        this.f14225d = Collections.unmodifiableMap(hashMap);
        this.f14226e = str;
        this.f14227f = locale;
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0085, code lost:
    
        if (r5 == 0) goto L31;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v10 */
    /* JADX WARN: Type inference failed for: r5v2 */
    /* JADX WARN: Type inference failed for: r5v3 */
    /* JADX WARN: Type inference failed for: r5v4 */
    /* JADX WARN: Type inference failed for: r5v5 */
    /* JADX WARN: Type inference failed for: r5v6 */
    /* JADX WARN: Type inference failed for: r5v8, types: [ls.h0] */
    /* JADX WARN: Type inference failed for: r5v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static c a(String str, Locale locale) {
        ?? r5;
        if (str == null) {
            throw new NullPointerException("Missing calendar type.");
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(':');
        sb2.append(locale.getLanguage());
        String country = locale.getCountry();
        if (!country.isEmpty()) {
            sb2.append('-');
            sb2.append(country);
        }
        String sb3 = sb2.toString();
        ConcurrentHashMap concurrentHashMap = f14222i;
        c cVar = (c) concurrentHashMap.get(sb3);
        if (cVar == null) {
            boolean isEmpty = locale.getLanguage().isEmpty();
            b bVar = f14221h;
            if (!isEmpty || !str.equals("iso8601")) {
                Iterator it = is.c.f12272b.d(h0.class).iterator();
                while (true) {
                    if (!it.hasNext()) {
                        r5 = 0;
                        break;
                    }
                    r5 = (h0) it.next();
                    if (r5.e(str) && r5.d(locale)) {
                        break;
                    }
                }
                if (r5 == 0) {
                    b bVar2 = f14220g;
                    bVar2.getClass();
                    r5 = r5;
                    if ("iso8601".equals(str)) {
                        r5 = r5;
                        if (bVar2.d(locale)) {
                            r5 = bVar2;
                        }
                    }
                }
                bVar = r5;
            }
            cVar = new c(str, locale, bVar);
            c cVar2 = (c) concurrentHashMap.putIfAbsent(sb3, cVar);
            if (cVar2 != null) {
                return cVar2;
            }
        }
        return cVar;
    }

    public static EnumMap b(String str, Locale locale, h0 h0Var, boolean z5) {
        EnumMap enumMap = new EnumMap(i0.class);
        boolean z6 = false;
        for (i0 i0Var : i0.values()) {
            EnumMap enumMap2 = new EnumMap(y.class);
            for (y yVar : y.values()) {
                String[] c6 = h0Var.c(str, locale, i0Var, yVar, z5);
                if (z5 && !z6) {
                    z6 = !Arrays.equals(h0Var.c(str, locale, i0Var, yVar, false), c6);
                }
                enumMap2.put((EnumMap) yVar, (y) new g0(c6));
            }
            enumMap.put((EnumMap) i0Var, (i0) enumMap2);
        }
        if (!z5 || z6) {
            return enumMap;
        }
        return null;
    }

    public final g0 c(i0 i0Var, y yVar, boolean z5) {
        return z5 ? (g0) ((Map) this.f14224c.get(i0Var)).get(yVar) : (g0) ((Map) this.f14223b.get(i0Var)).get(yVar);
    }

    public final String toString() {
        return this.a + "(" + this.f14226e + "/" + this.f14227f + ")";
    }
}
