package com.facebook.hermes.intl;

import android.icu.text.DateFormat;
import android.icu.text.NumberingSystem;
import android.icu.text.SimpleDateFormat;
import android.icu.util.Calendar;
import android.icu.util.ULocale;
import java.text.AttributedCharacterIterator;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.TimeZone;
import qa.t;
import y9.a0;
import y9.b0;
import y9.d0;
import y9.e;
import y9.f;
import y9.g;
import y9.i;
import y9.j;
import y9.k;
import y9.l;
import y9.m;
import y9.n;
import y9.o;
import y9.p;
import y9.q;
import y9.z;
import ya.a;

@a
/* loaded from: classes3.dex */
public class DateTimeFormat {
    public final t a;

    /* renamed from: b, reason: collision with root package name */
    public final b0 f4525b;

    /* renamed from: c, reason: collision with root package name */
    public final b0 f4526c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f4527d;

    /* renamed from: e, reason: collision with root package name */
    public final String f4528e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f4529f;

    /* renamed from: g, reason: collision with root package name */
    public final String f4530g;

    /* renamed from: h, reason: collision with root package name */
    public final Object f4531h;

    /* renamed from: i, reason: collision with root package name */
    public final j f4532i;
    public final p j;
    public final g k;

    /* renamed from: l, reason: collision with root package name */
    public final q f4533l;

    /* renamed from: m, reason: collision with root package name */
    public final l f4534m;

    /* renamed from: n, reason: collision with root package name */
    public final f f4535n;

    /* renamed from: o, reason: collision with root package name */
    public final i f4536o;

    /* renamed from: p, reason: collision with root package name */
    public final k f4537p;

    /* renamed from: q, reason: collision with root package name */
    public final m f4538q;

    /* renamed from: r, reason: collision with root package name */
    public final o f4539r;

    /* renamed from: s, reason: collision with root package name */
    public final e f4540s;

    /* renamed from: t, reason: collision with root package name */
    public final n f4541t;

    /* renamed from: u, reason: collision with root package name */
    public final String f4542u;

    /* JADX WARN: Code restructure failed: missing block: B:26:0x0083, code lost:
    
        if ((y9.a.c(r43, "timeStyle") instanceof y9.a0) == false) goto L24;
     */
    /* JADX WARN: Type inference failed for: r0v0, types: [com.facebook.hermes.intl.DateTimeFormat, java.lang.Object] */
    @a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public DateTimeFormat(List<String> list, Map<String, Object> map) {
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        boolean z5;
        String str7;
        DateTimeFormat dateTimeFormat;
        char c6;
        j jVar;
        String sb2;
        int i5;
        char c8;
        Calendar calendar;
        b0 b0Var;
        t tVar;
        String str8;
        String str9;
        String str10;
        String str11;
        String str12;
        String str13;
        String str14;
        String str15;
        String str16;
        String str17;
        a0 a0Var = y9.a.f20685e;
        ?? obj = new Object();
        obj.f4525b = null;
        obj.f4526c = null;
        obj.f4542u = null;
        t tVar2 = new t(14);
        tVar2.f16718e = null;
        obj.a = tVar2;
        String str18 = "nu";
        List asList = Arrays.asList("ca", "nu", "hc");
        if (!(map instanceof HashMap)) {
            throw new ap.a("Invalid options object !", 9);
        }
        String[] strArr = {"weekday", "year", "month", "day"};
        boolean z6 = true;
        for (int i6 = 0; i6 < 4; i6++) {
            if (!(y9.a.c(map, strArr[i6]) instanceof a0)) {
                z6 = false;
            }
        }
        String[] strArr2 = {"hour", "minute", "second"};
        for (int i10 = 0; i10 < 3; i10++) {
            if (!(y9.a.c(map, strArr2[i10]) instanceof a0)) {
                z6 = false;
            }
        }
        if (y9.a.c(map, "dateStyle") instanceof a0) {
            str = "dateStyle";
        } else {
            str = "dateStyle";
        }
        z6 = false;
        if (z6) {
            String[] strArr3 = {"year", "month", "day"};
            str2 = "second";
            str3 = "timeStyle";
            for (int i11 = 0; i11 < 3; i11++) {
                ((HashMap) map).put(strArr3[i11], "numeric");
            }
        } else {
            str2 = "second";
            str3 = "timeStyle";
        }
        HashMap hashMap = new HashMap();
        hashMap.put("localeMatcher", y9.a.d(map, "localeMatcher", 2, y9.a.a, "best fit"));
        Object d6 = y9.a.d(map, "calendar", 2, a0Var, a0Var);
        if (d6 instanceof a0) {
            str4 = "numeric";
            str5 = "year";
            str6 = "month";
        } else {
            str6 = "month";
            str4 = "numeric";
            str5 = "year";
            if (!y9.a.i(0, r15.length() - 1, (String) d6, 3, 8)) {
                throw new ap.a("Invalid calendar option !", 9);
            }
        }
        hashMap.put("ca", d6);
        Object d7 = y9.a.d(map, "numberingSystem", 2, a0Var, a0Var);
        if (!(d7 instanceof a0)) {
            if (!y9.a.i(0, r10.length() - 1, (String) d7, 3, 8)) {
                throw new ap.a("Invalid numbering system !", 9);
            }
        }
        hashMap.put("nu", d7);
        Object d8 = y9.a.d(map, "hour12", 1, a0Var, a0Var);
        String str19 = "h23";
        String str20 = "weekday";
        boolean z7 = d8 instanceof a0;
        hashMap.put("hc", z7 ? y9.a.d(map, "hourCycle", 2, new String[]{"h11", "h12", "h23", "h24"}, a0Var) : y9.a.f20686f);
        HashMap k = y9.a.k(list, hashMap, asList);
        b0 b0Var2 = (b0) k.get("locale");
        obj.f4525b = b0Var2;
        obj.f4526c = b0Var2.a();
        Object c10 = y9.a.c(k, "ca");
        if (c10 instanceof z) {
            obj.f4527d = true;
            String type = DateFormat.getDateInstance(3, (ULocale) obj.f4525b.c()).getCalendar().getType();
            gk.i iVar = d0.f20705d;
            obj.f4528e = iVar.containsKey(type) ? (String) iVar.get(type) : type;
        } else {
            obj.f4527d = false;
            obj.f4528e = (String) c10;
        }
        Object c11 = y9.a.c(k, "nu");
        if (c11 instanceof z) {
            obj.f4529f = true;
            obj.f4530g = NumberingSystem.getInstance((ULocale) obj.f4525b.c()).getName();
        } else {
            obj.f4529f = false;
            obj.f4530g = (String) c11;
        }
        Object c12 = y9.a.c(k, "hc");
        Object c13 = y9.a.c(map, "timeZone");
        if (!(c13 instanceof a0)) {
            String obj2 = c13.toString();
            String[] availableIDs = TimeZone.getAvailableIDs();
            int length = availableIDs.length;
            int i12 = 0;
            DateTimeFormat dateTimeFormat2 = obj;
            while (i12 < length) {
                String str21 = availableIDs[i12];
                int i13 = i12;
                z5 = z7;
                if (a(str21).equals(a(obj2))) {
                    str7 = str21;
                    dateTimeFormat = dateTimeFormat2;
                } else {
                    dateTimeFormat2 = this;
                    i12 = i13 + 1;
                    str19 = str19;
                    z7 = z5;
                    str20 = str20;
                    str18 = str18;
                }
            }
            throw new ap.a("Invalid timezone name!", 9);
        }
        str7 = Calendar.getInstance((ULocale) obj.f4525b.c()).getTimeZone().getID();
        z5 = z7;
        dateTimeFormat = obj;
        dateTimeFormat.f4542u = str7;
        String str22 = str18;
        dateTimeFormat.j = (p) y9.a.l(p.class, y9.a.d(map, str20, 2, new String[]{"long", "short", "narrow"}, a0Var));
        dateTimeFormat.k = (g) y9.a.l(g.class, y9.a.d(map, "era", 2, new String[]{"long", "short", "narrow"}, a0Var));
        String str23 = str4;
        String str24 = str19;
        dateTimeFormat.f4533l = (q) y9.a.l(q.class, y9.a.d(map, str5, 2, new String[]{str23, "2-digit"}, a0Var));
        dateTimeFormat.f4534m = (l) y9.a.l(l.class, y9.a.d(map, str6, 2, new String[]{str23, "2-digit", "long", "short", "narrow"}, a0Var));
        dateTimeFormat.f4535n = (f) y9.a.l(f.class, y9.a.d(map, "day", 2, new String[]{str23, "2-digit"}, a0Var));
        Object d10 = y9.a.d(map, "hour", 2, new String[]{str23, "2-digit"}, a0Var);
        dateTimeFormat.f4536o = (i) y9.a.l(i.class, d10);
        dateTimeFormat.f4537p = (k) y9.a.l(k.class, y9.a.d(map, "minute", 2, new String[]{str23, "2-digit"}, a0Var));
        dateTimeFormat.f4538q = (m) y9.a.l(m.class, y9.a.d(map, str2, 2, new String[]{str23, "2-digit"}, a0Var));
        dateTimeFormat.f4539r = (o) y9.a.l(o.class, y9.a.d(map, "timeZoneName", 2, new String[]{"long", "longOffset", "longGeneric", "short", "shortOffset", "shortGeneric"}, a0Var));
        dateTimeFormat.f4540s = (e) y9.a.l(e.class, y9.a.d(map, str, 2, new String[]{"full", "long", "medium", "short"}, a0Var));
        Object d11 = y9.a.d(map, str3, 2, new String[]{"full", "long", "medium", "short"}, a0Var);
        dateTimeFormat.f4541t = (n) y9.a.l(n.class, d11);
        boolean z8 = d10 instanceof a0;
        j jVar2 = j.f20717e;
        j jVar3 = j.f20719v;
        j jVar4 = j.f20716d;
        j jVar5 = j.f20718i;
        if (z8 && (d11 instanceof a0)) {
            dateTimeFormat.f4532i = j.f20720w;
            c6 = 'h';
        } else {
            try {
                boolean z10 = false;
                String pattern = ((SimpleDateFormat) DateFormat.getTimeInstance(0, (ULocale) dateTimeFormat.f4525b.c())).toPattern();
                StringBuilder sb3 = new StringBuilder();
                for (int i14 = 0; i14 < pattern.length(); i14++) {
                    char charAt = pattern.charAt(i14);
                    c6 = 'h';
                    if (charAt == '\'') {
                        z10 = !z10;
                    } else if (!z10 && ((charAt >= 'A' && charAt <= 'Z') || (charAt >= 'a' && charAt <= 'z'))) {
                        try {
                            sb3.append(pattern.charAt(i14));
                        } catch (ClassCastException unused) {
                        }
                    }
                }
                c6 = 'h';
                sb2 = sb3.toString();
            } catch (ClassCastException unused2) {
                c6 = 'h';
            }
            if (sb2.contains(String.valueOf('h'))) {
                jVar = jVar2;
            } else if (sb2.contains(String.valueOf('K'))) {
                jVar = jVar4;
            } else {
                if (sb2.contains(String.valueOf('H'))) {
                    jVar = jVar5;
                }
                jVar = jVar3;
            }
            dateTimeFormat.f4532i = z5 ? c12 instanceof z ? jVar : (j) y9.a.l(j.class, c12) : ((Boolean) d8).booleanValue() ? (jVar == jVar4 || jVar == jVar5) ? jVar4 : jVar2 : (jVar == jVar4 || jVar == jVar5) ? jVar5 : jVar3;
        }
        dateTimeFormat.f4531h = d8;
        t tVar3 = dateTimeFormat.a;
        b0 b0Var3 = dateTimeFormat.f4525b;
        String str25 = dateTimeFormat.f4527d ? "" : dateTimeFormat.f4528e;
        String str26 = dateTimeFormat.f4529f ? "" : dateTimeFormat.f4530g;
        p pVar = dateTimeFormat.j;
        g gVar = dateTimeFormat.k;
        q qVar = dateTimeFormat.f4533l;
        l lVar = dateTimeFormat.f4534m;
        f fVar = dateTimeFormat.f4535n;
        i iVar2 = dateTimeFormat.f4536o;
        k kVar = dateTimeFormat.f4537p;
        m mVar = dateTimeFormat.f4538q;
        o oVar = dateTimeFormat.f4539r;
        j jVar6 = dateTimeFormat.f4532i;
        String str27 = dateTimeFormat.f4542u;
        e eVar = dateTimeFormat.f4540s;
        n nVar = dateTimeFormat.f4541t;
        StringBuilder sb4 = new StringBuilder();
        n nVar2 = n.f20728d;
        e eVar2 = e.f20707d;
        if (eVar == eVar2 && nVar == nVar2) {
            int ordinal = pVar.ordinal();
            if (ordinal == 0) {
                str8 = "EEEE";
            } else if (ordinal == 1) {
                str8 = "EEE";
            } else if (ordinal == 2) {
                str8 = "EEEEE";
            } else {
                if (ordinal != 3) {
                    throw new IllegalArgumentException();
                }
                str8 = "";
            }
            sb4.append(str8);
            int ordinal2 = gVar.ordinal();
            if (ordinal2 == 0) {
                str9 = "GGGG";
            } else if (ordinal2 == 1) {
                str9 = "GGG";
            } else if (ordinal2 == 2) {
                str9 = "G5";
            } else {
                if (ordinal2 != 3) {
                    throw new IllegalArgumentException();
                }
                str9 = "";
            }
            sb4.append(str9);
            int ordinal3 = qVar.ordinal();
            if (ordinal3 == 0) {
                str10 = "yyyy";
            } else if (ordinal3 == 1) {
                str10 = "yy";
            } else {
                if (ordinal3 != 2) {
                    throw new IllegalArgumentException();
                }
                str10 = "";
            }
            sb4.append(str10);
            int ordinal4 = lVar.ordinal();
            if (ordinal4 == 0) {
                str11 = "M";
            } else if (ordinal4 == 1) {
                str11 = "MM";
            } else if (ordinal4 == 2) {
                str11 = "MMMM";
            } else if (ordinal4 == 3) {
                str11 = "MMM";
            } else if (ordinal4 == 4) {
                str11 = "MMMMM";
            } else {
                if (ordinal4 != 5) {
                    throw new IllegalArgumentException();
                }
                str11 = "";
            }
            sb4.append(str11);
            int ordinal5 = fVar.ordinal();
            if (ordinal5 == 0) {
                str12 = "d";
            } else if (ordinal5 == 1) {
                str12 = "dd";
            } else {
                if (ordinal5 != 2) {
                    throw new IllegalArgumentException();
                }
                str12 = "";
            }
            sb4.append(str12);
            if (jVar6 == jVar4 || jVar6 == jVar2) {
                int ordinal6 = iVar2.ordinal();
                if (ordinal6 == 0) {
                    str13 = "h";
                } else if (ordinal6 == 1) {
                    str13 = "hh";
                } else {
                    if (ordinal6 != 2) {
                        throw new IllegalArgumentException();
                    }
                    str13 = "";
                }
                sb4.append(str13);
            } else {
                int ordinal7 = iVar2.ordinal();
                if (ordinal7 == 0) {
                    str17 = "k";
                } else if (ordinal7 == 1) {
                    str17 = "kk";
                } else {
                    if (ordinal7 != 2) {
                        throw new IllegalArgumentException();
                    }
                    str17 = "";
                }
                sb4.append(str17);
            }
            int ordinal8 = kVar.ordinal();
            if (ordinal8 == 0) {
                str14 = "m";
            } else if (ordinal8 == 1) {
                str14 = "mm";
            } else {
                if (ordinal8 != 2) {
                    throw new IllegalArgumentException();
                }
                str14 = "";
            }
            sb4.append(str14);
            int ordinal9 = mVar.ordinal();
            if (ordinal9 == 0) {
                str15 = "s";
            } else if (ordinal9 == 1) {
                str15 = "ss";
            } else {
                if (ordinal9 != 2) {
                    throw new IllegalArgumentException();
                }
                str15 = "";
            }
            sb4.append(str15);
            switch (oVar.ordinal()) {
                case 0:
                    str16 = "zzzz";
                    break;
                case 1:
                    str16 = "OOOO";
                    break;
                case 2:
                    str16 = "vvvv";
                    break;
                case 3:
                    str16 = "z";
                    break;
                case 4:
                    str16 = "O";
                    break;
                case 5:
                    str16 = "v";
                    break;
                case 6:
                    str16 = "";
                    break;
                default:
                    throw new IllegalArgumentException();
            }
            sb4.append(str16);
        } else {
            sb4.append(eVar == eVar2 ? ((SimpleDateFormat) DateFormat.getTimeInstance(t.f(nVar), (ULocale) b0Var3.c())).toLocalizedPattern() : nVar == nVar2 ? ((SimpleDateFormat) DateFormat.getDateInstance(t.e(eVar), (ULocale) b0Var3.c())).toLocalizedPattern() : ((SimpleDateFormat) DateFormat.getDateTimeInstance(t.e(eVar), t.f(nVar), (ULocale) b0Var3.c())).toLocalizedPattern());
            HashMap d12 = b0Var3.d();
            if (d12.containsKey("hc")) {
                String str28 = (String) d12.get("hc");
                if (str28 == "h11" || str28 == "h12") {
                    t.d(sb4, new char[]{'H', 'K', 'k'}, c6);
                } else if (str28 == str24 || str28 == "h24") {
                    t.d(sb4, new char[]{'h', 'H', 'K'}, 'k');
                }
            }
            if (jVar6 == jVar4 || jVar6 == jVar2) {
                i5 = 3;
                c8 = 'h';
                t.d(sb4, new char[]{'H', 'K', 'k'}, 'h');
            } else {
                if (jVar6 == jVar5 || jVar6 == jVar3) {
                    i5 = 3;
                    t.d(sb4, new char[]{'h', 'H', 'K'}, 'k');
                } else {
                    i5 = 3;
                }
                c8 = 'h';
            }
            if (!z5 && !(d8 instanceof z)) {
                if (((Boolean) d8).booleanValue()) {
                    char[] cArr = new char[i5];
                    // fill-array-data instruction
                    cArr[0] = 'H';
                    cArr[1] = 'K';
                    cArr[2] = 'k';
                    t.d(sb4, cArr, c8);
                } else {
                    char[] cArr2 = new char[i5];
                    // fill-array-data instruction
                    cArr2[0] = 'h';
                    cArr2[1] = 'H';
                    cArr2[2] = 'K';
                    t.d(sb4, cArr2, 'k');
                }
            }
        }
        String sb5 = sb4.toString();
        if (str25.isEmpty()) {
            calendar = null;
        } else {
            ArrayList arrayList = new ArrayList();
            arrayList.add(str25);
            b0 a = b0Var3.a();
            a.e("ca", arrayList);
            calendar = Calendar.getInstance((ULocale) a.c());
        }
        if (str26.isEmpty()) {
            b0Var = b0Var3;
        } else {
            try {
                if (NumberingSystem.getInstanceByName(str26) == null) {
                    throw new ap.a("Invalid numbering system: ".concat(str26), 9);
                }
                ArrayList arrayList2 = new ArrayList();
                arrayList2.add(str26);
                b0Var = b0Var3;
                b0Var.e(str22, arrayList2);
            } catch (RuntimeException unused3) {
                throw new ap.a("Invalid numbering system: ".concat(str26), 9);
            }
        }
        if (calendar != null) {
            tVar = tVar3;
            tVar.f16718e = DateFormat.getPatternInstance(calendar, sb5, (ULocale) b0Var.c());
        } else {
            tVar = tVar3;
            tVar.f16718e = DateFormat.getPatternInstance(sb5, (ULocale) b0Var.c());
        }
        ((DateFormat) tVar.f16718e).setTimeZone(android.icu.util.TimeZone.getTimeZone(str27));
    }

    public static String a(String str) {
        StringBuilder sb2 = new StringBuilder(str.length());
        for (int i5 = 0; i5 < str.length(); i5++) {
            char charAt = str.charAt(i5);
            if (charAt < 'A' || charAt > 'Z') {
                sb2.append(charAt);
            } else {
                sb2.append((char) (charAt + ' '));
            }
        }
        return sb2.toString();
    }

    @a
    public static List<String> supportedLocalesOf(List<String> list, Map<String, Object> map) {
        String str = (String) y9.a.d(map, "localeMatcher", 2, y9.a.a, "best fit");
        String[] strArr = new String[list.size()];
        return str.equals("best fit") ? Arrays.asList(y9.a.f((String[]) list.toArray(strArr))) : Arrays.asList(y9.a.j((String[]) list.toArray(strArr)));
    }

    @a
    public String format(double d6) {
        return ((DateFormat) this.a.f16718e).format(new Date((long) d6));
    }

    @a
    public List<Map<String, String>> formatToParts(double d6) {
        ArrayList arrayList = new ArrayList();
        AttributedCharacterIterator formatToCharacterIterator = ((DateFormat) this.a.f16718e).formatToCharacterIterator(Double.valueOf(d6));
        StringBuilder sb2 = new StringBuilder();
        for (char first = formatToCharacterIterator.first(); first != 65535; first = formatToCharacterIterator.next()) {
            sb2.append(first);
            if (formatToCharacterIterator.getIndex() + 1 == formatToCharacterIterator.getRunLimit()) {
                Iterator<AttributedCharacterIterator.Attribute> it = formatToCharacterIterator.getAttributes().keySet().iterator();
                String str = "literal";
                if (it.hasNext()) {
                    AttributedCharacterIterator.Attribute next = it.next();
                    String sb3 = sb2.toString();
                    if (next == DateFormat.Field.DAY_OF_WEEK) {
                        str = "weekday";
                    } else if (next == DateFormat.Field.ERA) {
                        str = "era";
                    } else if (next == DateFormat.Field.YEAR) {
                        try {
                            Double.parseDouble(sb3);
                            str = "year";
                        } catch (NumberFormatException unused) {
                            str = "yearName";
                        }
                    } else if (next == DateFormat.Field.MONTH) {
                        str = "month";
                    } else if (next == DateFormat.Field.DAY_OF_MONTH) {
                        str = "day";
                    } else if (next == DateFormat.Field.HOUR0 || next == DateFormat.Field.HOUR1 || next == DateFormat.Field.HOUR_OF_DAY0 || next == DateFormat.Field.HOUR_OF_DAY1) {
                        str = "hour";
                    } else if (next == DateFormat.Field.MINUTE) {
                        str = "minute";
                    } else if (next == DateFormat.Field.SECOND) {
                        str = "second";
                    } else if (next == DateFormat.Field.TIME_ZONE) {
                        str = "timeZoneName";
                    } else if (next == DateFormat.Field.AM_PM) {
                        str = "dayPeriod";
                    } else if (next.toString().equals("android.icu.text.DateFormat$Field(related year)")) {
                        str = "relatedYear";
                    }
                }
                String sb4 = sb2.toString();
                sb2.setLength(0);
                HashMap hashMap = new HashMap();
                hashMap.put("type", str);
                hashMap.put("value", sb4);
                arrayList.add(hashMap);
            }
        }
        return arrayList;
    }

    @a
    public Map<String, Object> resolvedOptions() {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("locale", this.f4526c.f());
        linkedHashMap.put("numberingSystem", this.f4530g);
        linkedHashMap.put("calendar", this.f4528e);
        linkedHashMap.put("timeZone", this.f4542u);
        j jVar = j.f20720w;
        j jVar2 = this.f4532i;
        if (jVar2 != jVar) {
            linkedHashMap.put("hourCycle", jVar2.toString());
            j jVar3 = j.f20716d;
            j jVar4 = this.f4532i;
            if (jVar4 == jVar3 || jVar4 == j.f20717e) {
                linkedHashMap.put("hour12", Boolean.TRUE);
            } else {
                linkedHashMap.put("hour12", Boolean.FALSE);
            }
        }
        p pVar = p.f20732d;
        p pVar2 = this.j;
        if (pVar2 != pVar) {
            linkedHashMap.put("weekday", pVar2.toString());
        }
        g gVar = g.f20711d;
        g gVar2 = this.k;
        if (gVar2 != gVar) {
            linkedHashMap.put("era", gVar2.toString());
        }
        q qVar = q.f20734d;
        q qVar2 = this.f4533l;
        if (qVar2 != qVar) {
            linkedHashMap.put("year", qVar2.toString());
        }
        l lVar = l.f20724d;
        l lVar2 = this.f4534m;
        if (lVar2 != lVar) {
            linkedHashMap.put("month", lVar2.toString());
        }
        f fVar = f.f20709d;
        f fVar2 = this.f4535n;
        if (fVar2 != fVar) {
            linkedHashMap.put("day", fVar2.toString());
        }
        i iVar = i.f20714d;
        i iVar2 = this.f4536o;
        if (iVar2 != iVar) {
            linkedHashMap.put("hour", iVar2.toString());
        }
        k kVar = k.f20722d;
        k kVar2 = this.f4537p;
        if (kVar2 != kVar) {
            linkedHashMap.put("minute", kVar2.toString());
        }
        m mVar = m.f20726d;
        m mVar2 = this.f4538q;
        if (mVar2 != mVar) {
            linkedHashMap.put("second", mVar2.toString());
        }
        o oVar = o.f20730d;
        o oVar2 = this.f4539r;
        if (oVar2 != oVar) {
            linkedHashMap.put("timeZoneName", oVar2.toString());
        }
        e eVar = e.f20707d;
        e eVar2 = this.f4540s;
        if (eVar2 != eVar) {
            linkedHashMap.put("dateStyle", eVar2.toString());
        }
        n nVar = n.f20728d;
        n nVar2 = this.f4541t;
        if (nVar2 != nVar) {
            linkedHashMap.put("timeStyle", nVar2.toString());
        }
        return linkedHashMap;
    }
}
