package net.time4j;

import java.util.ArrayList;
import java.util.Collections;
import java.util.EnumMap;
import java.util.List;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class z {
    public final List a;

    /* JADX WARN: Code restructure failed: missing block: B:136:0x024e, code lost:
    
        throw new java.lang.IllegalArgumentException("Plural information has wrong format: ".concat(r5));
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v1 */
    /* JADX WARN: Type inference failed for: r4v16 */
    /* JADX WARN: Type inference failed for: r4v2, types: [boolean, int] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public z(Class cls, String str) {
        char c6;
        Locale locale;
        int length = str.length();
        ArrayList arrayList = new ArrayList();
        arrayList.add(new ArrayList());
        ?? r42 = 0;
        int i5 = 0;
        int i6 = 0;
        while (true) {
            ls.n0 n0Var = ls.n0.a;
            if (i5 >= length) {
                if (arrayList.size() > 1) {
                    throw new IllegalArgumentException("Open square bracket without closing one.");
                }
                if (arrayList.isEmpty()) {
                    throw new IllegalArgumentException("Empty or invalid pattern.");
                }
                List list = (List) arrayList.get(0);
                if (list.isEmpty()) {
                    throw new IllegalArgumentException("Missing format pattern.");
                }
                if (list.get(0) == n0Var || k0.d.g(1, list) == n0Var) {
                    throw new IllegalArgumentException("Pattern must not start or end with an or-operator.");
                }
                int size = list.size();
                int a = ((ls.j0) list.get(size - 1)).a();
                for (int i10 = size - 2; i10 >= 0; i10--) {
                    ls.j0 j0Var = (ls.j0) list.get(i10);
                    if (j0Var == n0Var) {
                        a = 0;
                    } else {
                        list.set(i10, j0Var.b(a));
                        a += j0Var.a();
                    }
                }
                this.a = Collections.unmodifiableList(list);
                return;
            }
            char charAt = str.charAt(i5);
            if (charAt == '#') {
                i6++;
            } else if ((charAt >= 'A' && charAt <= 'Z') || (charAt >= 'a' && charAt <= 'z')) {
                int i11 = i5 + 1;
                while (i11 < length && str.charAt(i11) == charAt) {
                    i11++;
                }
                int i12 = i11 - i5;
                Enum a10 = a(charAt);
                List list2 = (List) k0.d.f(1, arrayList);
                if (charAt != 'f') {
                    list2.add(new ls.m0(i12, i6 + i12, a10));
                } else {
                    if (i6 > 0) {
                        throw new IllegalArgumentException("Combination of # and f-symbol not allowed.");
                    }
                    list2.add(new ls.k0(i12, a(charAt)));
                }
                i5 = i11 - 1;
                i6 = r42;
            } else {
                if (i6 > 0) {
                    throw new IllegalArgumentException("Char # must be followed by unit symbol.");
                }
                if (charAt == '\'') {
                    int i13 = i5 + 1;
                    int i14 = i13;
                    while (i14 < length) {
                        if (str.charAt(i14) == '\'') {
                            int i15 = i14 + 1;
                            if (i15 >= length || str.charAt(i15) != '\'') {
                                break;
                            } else {
                                i14 = i15;
                            }
                        }
                        i14++;
                    }
                    if (i14 >= length) {
                        throw new IllegalArgumentException("String literal in pattern not closed: ".concat(str));
                    }
                    if (i13 == i14) {
                        b(arrayList).add(new ls.l0(String.valueOf('\''), r42));
                    } else {
                        b(arrayList).add(new ls.l0(str.substring(i13, i14).replace("''", "'"), r42));
                    }
                    i5 = i14;
                } else if (charAt == '[') {
                    arrayList.add(new ArrayList());
                } else if (charAt == ']') {
                    int size2 = arrayList.size();
                    int i16 = size2 - 1;
                    if (i16 < 1) {
                        throw new IllegalArgumentException("Closing square bracket without open one.");
                    }
                    ((List) arrayList.get(size2 - 2)).add(new ls.l0((List) arrayList.remove(i16)));
                } else if (charAt == '.') {
                    b(arrayList).add(new ls.p0('.', ','));
                } else if (charAt == ',') {
                    b(arrayList).add(new ls.p0(',', '.'));
                } else if (charAt == '-') {
                    b(arrayList).add(new ls.q0(r42, r42));
                } else if (charAt == '+') {
                    b(arrayList).add(new ls.q0(true, r42));
                } else {
                    if (charAt == '{') {
                        int i17 = i5 + 1;
                        int i18 = i17;
                        while (i18 < length && str.charAt(i18) != '}') {
                            i18++;
                        }
                        String substring = str.substring(i17, i18);
                        String[] split = substring.split(":");
                        if (split.length > 9 || split.length < 4) {
                            break;
                        }
                        if (split[r42].length() != 1) {
                            throw new IllegalArgumentException("Plural information has wrong symbol: ".concat(substring));
                        }
                        Enum a11 = a(split[r42].charAt(r42));
                        String[] split2 = split[2].split("-|_");
                        String str2 = split2[r42];
                        char c8 = r42;
                        if (split2.length > 1) {
                            String str3 = split2[1];
                            c6 = 1;
                            if (split2.length > 2) {
                                String str4 = split2[2];
                                if (split2.length > 3) {
                                    throw new IllegalArgumentException("Plural information has wrong locale: ".concat(substring));
                                }
                                locale = new Locale(str2, str3, str4);
                            } else {
                                locale = new Locale(str2, str3);
                            }
                        } else {
                            c6 = 1;
                            locale = new Locale(str2);
                        }
                        EnumMap enumMap = new EnumMap(ls.z.class);
                        ls.e0 a12 = ls.e0.a(locale);
                        for (int i19 = 3; i19 < split.length; i19++) {
                            String[] split3 = split[i19].split("=");
                            if (split3.length != 2) {
                                throw new IllegalArgumentException("Plural information has wrong format: ".concat(substring));
                            }
                            enumMap.put((EnumMap) ls.z.valueOf(split3[c8]), (ls.z) split3[c6]);
                        }
                        if (enumMap.isEmpty()) {
                            throw new IllegalArgumentException("Missing plural forms: ".concat(substring));
                        }
                        if (!enumMap.containsKey(ls.z.f14254e)) {
                            throw new IllegalArgumentException("Missing plural category OTHER: ".concat(substring));
                        }
                        b(arrayList).add(new ls.o0(a11, split[c6], a12, enumMap));
                        i5 = i18;
                    } else {
                        boolean z5 = r42;
                        if (charAt == '|') {
                            b(arrayList).add(n0Var);
                        } else {
                            b(arrayList).add(new ls.l0(String.valueOf(charAt), z5));
                        }
                    }
                    i5++;
                    r42 = 0;
                }
            }
            i5++;
            r42 = 0;
        }
    }

    public static List b(ArrayList arrayList) {
        return (List) k0.d.f(1, arrayList);
    }

    public final Enum a(char c6) {
        if (c6 == 'I') {
            return m.f15275d;
        }
        if (c6 == 'M') {
            return m.f15280x;
        }
        if (c6 == 'Q') {
            return m.f15279w;
        }
        if (c6 == 'W') {
            return m.f15281y;
        }
        if (c6 == 'Y') {
            return m.f15278v;
        }
        if (c6 == 'f') {
            return t.f15319x;
        }
        if (c6 == 'h') {
            return t.f15314d;
        }
        if (c6 == 'm') {
            return t.f15315e;
        }
        if (c6 == 's') {
            return t.f15316i;
        }
        switch (c6) {
            case 'C':
                return m.f15276e;
            case 'D':
                return m.E;
            case 'E':
                return m.f15277i;
            default:
                throw new IllegalArgumentException("Unsupported pattern symbol: " + c6);
        }
    }
}
