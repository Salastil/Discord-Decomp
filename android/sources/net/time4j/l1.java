package net.time4j;

import java.util.Collections;
import java.util.EnumMap;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Locale;
import java.util.MissingResourceException;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class l1 {

    /* renamed from: b, reason: collision with root package name */
    public static final ConcurrentHashMap f15271b = new ConcurrentHashMap();

    /* renamed from: c, reason: collision with root package name */
    public static final h0[] f15272c = {m.f15278v, m.f15280x, m.f15281y, m.E, t.f15314d, t.f15315e, t.f15316i, t.f15317v, t.f15318w, t.f15319x};

    /* renamed from: d, reason: collision with root package name */
    public static final ls.r0 f15273d;

    /* renamed from: e, reason: collision with root package name */
    public static final k1 f15274e;
    public final String a;

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v16, types: [ls.r0] */
    static {
        k1 k1Var = new k1();
        f15274e = k1Var;
        Iterator it = is.c.f12272b.d(ls.r0.class).iterator();
        k1 k1Var2 = it.hasNext() ? (ls.r0) it.next() : null;
        if (k1Var2 != null) {
            k1Var = k1Var2;
        }
        f15273d = k1Var;
    }

    public l1(Locale locale) {
        k1 k1Var;
        ls.r0 r0Var;
        String str;
        String o6;
        o oVar;
        int i5;
        String b10;
        char c6;
        o oVar2 = t.f15315e;
        String str2 = "reltime/relpattern";
        HashMap hashMap = new HashMap(10);
        HashMap hashMap2 = new HashMap(10);
        HashMap hashMap3 = new HashMap(10);
        HashMap hashMap4 = new HashMap(10);
        HashMap hashMap5 = new HashMap(10);
        HashMap hashMap6 = new HashMap(10);
        h0[] h0VarArr = f15272c;
        int length = h0VarArr.length;
        int i6 = 0;
        while (true) {
            k1Var = f15274e;
            r0Var = f15273d;
            if (i6 >= length) {
                break;
            }
            h0 h0Var = h0VarArr[i6];
            h0[] h0VarArr2 = h0VarArr;
            EnumMap enumMap = new EnumMap(ls.i0.class);
            ls.i0[] values = ls.i0.values();
            int i10 = length;
            int length2 = values.length;
            int i11 = i6;
            int i12 = 0;
            while (i12 < length2) {
                int i13 = length2;
                ls.i0 i0Var = values[i12];
                int i14 = i12;
                EnumMap enumMap2 = new EnumMap(ls.z.class);
                ls.z[] values2 = ls.z.values();
                String str3 = str2;
                int length3 = values2.length;
                int i15 = 0;
                while (i15 < length3) {
                    int i16 = length3;
                    ls.z zVar = values2[i15];
                    try {
                        char a = h0Var.a();
                        if (h0Var == oVar2) {
                            i5 = i15;
                            c6 = 'N';
                        } else {
                            i5 = i15;
                            c6 = a;
                        }
                    } catch (MissingResourceException unused) {
                        i5 = i15;
                    }
                    try {
                        b10 = b(r0Var, locale, c6, i0Var, zVar);
                    } catch (MissingResourceException unused2) {
                        b10 = b(k1Var, locale, h0Var == oVar2 ? 'N' : h0Var.a(), i0Var, zVar);
                        enumMap2.put((EnumMap) zVar, (ls.z) b10);
                        i15 = i5 + 1;
                        length3 = i16;
                    }
                    enumMap2.put((EnumMap) zVar, (ls.z) b10);
                    i15 = i5 + 1;
                    length3 = i16;
                }
                enumMap.put((EnumMap) i0Var, (ls.i0) Collections.unmodifiableMap(enumMap2));
                i12 = i14 + 1;
                length2 = i13;
                str2 = str3;
            }
            String str4 = str2;
            hashMap.put(h0Var, Collections.unmodifiableMap(enumMap));
            if (Character.isDigit(h0Var.a())) {
                oVar = oVar2;
            } else {
                EnumMap enumMap3 = new EnumMap(ls.z.class);
                ls.z[] values3 = ls.z.values();
                int length4 = values3.length;
                int i17 = 0;
                while (i17 < length4) {
                    ls.z zVar2 = values3[i17];
                    enumMap3.put((EnumMap) zVar2, (ls.z) a(locale, h0Var, false, false, zVar2));
                    i17++;
                    oVar2 = oVar2;
                }
                oVar = oVar2;
                hashMap2.put(h0Var, Collections.unmodifiableMap(enumMap3));
                EnumMap enumMap4 = new EnumMap(ls.z.class);
                for (ls.z zVar3 : ls.z.values()) {
                    enumMap4.put((EnumMap) zVar3, (ls.z) a(locale, h0Var, false, true, zVar3));
                }
                hashMap4.put(h0Var, Collections.unmodifiableMap(enumMap4));
                EnumMap enumMap5 = new EnumMap(ls.z.class);
                ls.z[] values4 = ls.z.values();
                int length5 = values4.length;
                int i18 = 0;
                while (i18 < length5) {
                    ls.z zVar4 = values4[i18];
                    enumMap5.put((EnumMap) zVar4, (ls.z) a(locale, h0Var, true, false, zVar4));
                    i18++;
                    values4 = values4;
                }
                hashMap3.put(h0Var, Collections.unmodifiableMap(enumMap5));
                EnumMap enumMap6 = new EnumMap(ls.z.class);
                for (ls.z zVar5 : ls.z.values()) {
                    enumMap6.put((EnumMap) zVar5, (ls.z) a(locale, h0Var, true, true, zVar5));
                }
                hashMap5.put(h0Var, Collections.unmodifiableMap(enumMap6));
            }
            i6 = i11 + 1;
            h0VarArr = h0VarArr2;
            length = i10;
            oVar2 = oVar;
            str2 = str4;
        }
        String str5 = str2;
        int i19 = 2;
        while (i19 <= 7) {
            Integer valueOf = Integer.valueOf(i19);
            EnumMap enumMap7 = new EnumMap(ls.i0.class);
            ls.i0[] values5 = ls.i0.values();
            int length6 = values5.length;
            int i20 = 0;
            while (i20 < length6) {
                HashMap hashMap7 = hashMap;
                ls.i0 i0Var2 = values5[i20];
                try {
                    o6 = r0Var.o(locale, i0Var2, i19);
                } catch (MissingResourceException unused3) {
                    o6 = k1Var.o(locale, i0Var2, i19);
                }
                int i21 = i19;
                enumMap7.put((EnumMap) i0Var2, (ls.i0) o6);
                i20++;
                hashMap = hashMap7;
                i19 = i21;
            }
            hashMap6.put(valueOf, Collections.unmodifiableMap(enumMap7));
            i19++;
        }
        Collections.unmodifiableMap(hashMap);
        Collections.unmodifiableMap(hashMap2);
        Collections.unmodifiableMap(hashMap3);
        Collections.unmodifiableMap(hashMap4);
        Collections.unmodifiableMap(hashMap5);
        Collections.unmodifiableMap(hashMap6);
        EnumMap enumMap8 = new EnumMap(n1.class);
        EnumMap enumMap9 = new EnumMap(n1.class);
        n1[] values6 = n1.values();
        int length7 = values6.length;
        int i22 = 0;
        while (true) {
            str = "";
            if (i22 < length7) {
                n1 n1Var = values6[i22];
                enumMap8.put((EnumMap) n1Var, (n1) "");
                enumMap9.put((EnumMap) n1Var, (n1) "");
                i22++;
            } else {
                try {
                    break;
                } catch (MissingResourceException unused4) {
                    k1Var.getClass();
                }
            }
        }
        r0Var.c(locale);
        if (r0Var instanceof ms.j) {
            ms.j jVar = (ms.j) ms.j.class.cast(r0Var);
            ls.z zVar6 = ls.z.f14254e;
            jVar.getClass();
            ms.j.x(locale, str5, "yesterday", null, zVar6);
            str = ms.j.x(locale, str5, "today", null, zVar6);
            ms.j.x(locale, str5, "tomorrow", null, zVar6);
            for (n1 n1Var2 : n1.values()) {
                enumMap8.put((EnumMap) n1Var2, (n1) ms.j.w(n1Var2.name().substring(0, 3).toLowerCase() + "-", locale));
                enumMap9.put((EnumMap) n1Var2, (n1) ms.j.w(n1Var2.name().substring(0, 3).toLowerCase() + "+", locale));
            }
        }
        this.a = str;
        Collections.unmodifiableMap(enumMap8);
        Collections.unmodifiableMap(enumMap9);
    }

    public static String a(Locale locale, h0 h0Var, boolean z5, boolean z6, ls.z zVar) {
        Locale locale2;
        boolean z7;
        boolean z8;
        ls.z zVar2;
        char c6;
        boolean z10;
        o oVar = t.f15315e;
        try {
            ls.r0 r0Var = f15273d;
            char a = h0Var.a();
            if (h0Var == oVar) {
                c6 = 'N';
                locale2 = locale;
                z7 = z5;
                z10 = z6;
                zVar2 = zVar;
            } else {
                c6 = a;
                z7 = z5;
                z10 = z6;
                zVar2 = zVar;
                locale2 = locale;
            }
            try {
                return c(r0Var, locale2, c6, z7, z10, zVar2);
            } catch (MissingResourceException unused) {
                z8 = z10;
                return c(f15274e, locale2, h0Var == oVar ? 'N' : h0Var.a(), z7, z8, zVar2);
            }
        } catch (MissingResourceException unused2) {
            locale2 = locale;
            z7 = z5;
            z8 = z6;
            zVar2 = zVar;
        }
    }

    public static String b(ls.r0 r0Var, Locale locale, char c6, ls.i0 i0Var, ls.z zVar) {
        if (c6 == '3') {
            return r0Var.a(locale, i0Var, zVar);
        }
        if (c6 == '6') {
            return r0Var.m(locale, i0Var, zVar);
        }
        if (c6 == '9') {
            return r0Var.b(locale, i0Var, zVar);
        }
        if (c6 == 'D') {
            return r0Var.d(locale, i0Var, zVar);
        }
        if (c6 == 'H') {
            return r0Var.l(locale, i0Var, zVar);
        }
        if (c6 == 'S') {
            return r0Var.q(locale, i0Var, zVar);
        }
        if (c6 == 'W') {
            return r0Var.p(locale, i0Var, zVar);
        }
        if (c6 == 'Y') {
            return r0Var.j(locale, i0Var, zVar);
        }
        if (c6 == 'M') {
            return r0Var.h(locale, i0Var, zVar);
        }
        if (c6 == 'N') {
            return r0Var.r(locale, i0Var, zVar);
        }
        throw new UnsupportedOperationException("Unit-ID: " + c6);
    }

    public static String c(ls.r0 r0Var, Locale locale, char c6, boolean z5, boolean z6, ls.z zVar) {
        if (!z6 || !(r0Var instanceof ms.j)) {
            if (c6 == 'D') {
                return r0Var.k(locale, z5, zVar);
            }
            if (c6 == 'H') {
                return r0Var.e(locale, z5, zVar);
            }
            if (c6 == 'S') {
                return r0Var.n(locale, z5, zVar);
            }
            if (c6 == 'W') {
                return r0Var.s(locale, z5, zVar);
            }
            if (c6 == 'Y') {
                return r0Var.f(locale, z5, zVar);
            }
            if (c6 == 'M') {
                return r0Var.g(locale, z5, zVar);
            }
            if (c6 == 'N') {
                return r0Var.i(locale, z5, zVar);
            }
            throw new UnsupportedOperationException("Unit-ID: " + c6);
        }
        ms.j jVar = (ms.j) ms.j.class.cast(r0Var);
        if (c6 == 'D') {
            jVar.getClass();
            return ms.j.y(locale, 'd', z5, zVar);
        }
        if (c6 == 'H') {
            jVar.getClass();
            return ms.j.y(locale, 'h', z5, zVar);
        }
        if (c6 == 'S') {
            jVar.getClass();
            return ms.j.y(locale, 's', z5, zVar);
        }
        if (c6 == 'W') {
            jVar.getClass();
            return ms.j.y(locale, 'w', z5, zVar);
        }
        if (c6 == 'Y') {
            jVar.getClass();
            return ms.j.y(locale, 'y', z5, zVar);
        }
        if (c6 == 'M') {
            jVar.getClass();
            return ms.j.y(locale, 'm', z5, zVar);
        }
        if (c6 == 'N') {
            jVar.getClass();
            return ms.j.y(locale, 'n', z5, zVar);
        }
        throw new UnsupportedOperationException("Unit-ID: " + c6);
    }
}
