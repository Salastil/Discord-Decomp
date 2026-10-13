package com.facebook.hermes.intl;

import a3.e;
import android.icu.text.CompactDecimalFormat;
import android.icu.text.DecimalFormat;
import android.icu.text.DecimalFormatSymbols;
import android.icu.text.MeasureFormat;
import android.icu.text.NumberFormat;
import android.icu.text.NumberingSystem;
import android.icu.text.UFormat;
import android.icu.util.Currency;
import android.icu.util.Measure;
import android.icu.util.MeasureUnit;
import android.icu.util.ULocale;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.views.scroll.ReactScrollViewHelper;
import java.text.AttributedCharacterIterator;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import y9.a0;
import y9.b0;
import y9.c0;
import y9.r;
import y9.s;
import y9.t;
import y9.u;
import y9.v;
import y9.w;
import y9.x;
import y9.z;
import ya.a;

@a
/* loaded from: classes3.dex */
public class NumberFormat {

    /* renamed from: v, reason: collision with root package name */
    public static final String[] f4543v = {"acre", "bit", "byte", "celsius", "centimeter", "day", "degree", "fahrenheit", "fluid-ounce", "foot", "gallon", "gigabit", "gigabyte", "gram", "hectare", "hour", "inch", "kilobit", "kilobyte", "kilogram", "kilometer", "liter", "megabit", "megabyte", "meter", "mile", "mile-scandinavian", "milliliter", "millimeter", "millisecond", "minute", "month", "ounce", "percent", "petabyte", "pound", "second", "stone", "terabit", "terabyte", "week", "yard", "year"};
    public final w a;

    /* renamed from: b, reason: collision with root package name */
    public final String f4544b;

    /* renamed from: c, reason: collision with root package name */
    public final s f4545c;

    /* renamed from: d, reason: collision with root package name */
    public final t f4546d;

    /* renamed from: e, reason: collision with root package name */
    public final String f4547e;

    /* renamed from: f, reason: collision with root package name */
    public final x f4548f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f4549g;

    /* renamed from: h, reason: collision with root package name */
    public final int f4550h;

    /* renamed from: i, reason: collision with root package name */
    public final int f4551i;
    public final int j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final int f4552l;

    /* renamed from: m, reason: collision with root package name */
    public final int f4553m;

    /* renamed from: n, reason: collision with root package name */
    public final v f4554n;

    /* renamed from: o, reason: collision with root package name */
    public final c0 f4555o;

    /* renamed from: p, reason: collision with root package name */
    public final boolean f4556p;

    /* renamed from: q, reason: collision with root package name */
    public final String f4557q;

    /* renamed from: r, reason: collision with root package name */
    public final u f4558r;

    /* renamed from: s, reason: collision with root package name */
    public final r f4559s;

    /* renamed from: t, reason: collision with root package name */
    public final b0 f4560t;

    /* renamed from: u, reason: collision with root package name */
    public final b0 f4561u;

    /* JADX WARN: Code restructure failed: missing block: B:198:0x0177, code lost:
    
        if (java.util.Arrays.binarySearch(r14, r15.substring(r4 + 5)) >= 0) goto L40;
     */
    /* JADX WARN: Code restructure failed: missing block: B:55:0x03ed, code lost:
    
        if (r3 == r5) goto L109;
     */
    /* JADX WARN: Removed duplicated region for block: B:102:0x04eb  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x0512  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x0584 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:71:0x046a  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x04ad  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x04c5  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x04ca  */
    @a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NumberFormat(List<String> list, Map<String, Object> map) {
        Object obj;
        Object obj2;
        Object obj3;
        Double valueOf;
        Double d6;
        w wVar;
        c0 c0Var;
        int i5;
        int i6;
        int i10;
        android.icu.text.NumberFormat numberFormat;
        int i11;
        int i12;
        this.f4544b = null;
        this.f4545c = s.f20738d;
        t tVar = t.f20741d;
        this.f4546d = tVar;
        this.f4547e = null;
        this.f4549g = true;
        this.f4550h = -1;
        this.f4551i = -1;
        this.j = -1;
        this.k = -1;
        this.f4552l = -1;
        this.f4554n = v.f20748d;
        this.f4557q = null;
        this.f4558r = null;
        this.f4560t = null;
        this.f4561u = null;
        c0 c0Var2 = new c0();
        this.f4555o = c0Var2;
        Double valueOf2 = Double.valueOf(0.0d);
        HashMap hashMap = new HashMap();
        hashMap.put("localeMatcher", y9.a.d(map, "localeMatcher", 2, y9.a.a, "best fit"));
        a0 a0Var = y9.a.f20685e;
        Object d7 = y9.a.d(map, "numberingSystem", 2, a0Var, a0Var);
        if (!(d7 instanceof a0)) {
            String str = (String) d7;
            if (!y9.a.i(0, str.length() - 1, str, 3, 8)) {
                throw new ap.a("Invalid numbering system !", 9);
            }
        }
        hashMap.put("nu", d7);
        HashMap k = y9.a.k(list, hashMap, Collections.singletonList("nu"));
        b0 b0Var = (b0) k.get("locale");
        this.f4560t = b0Var;
        this.f4561u = b0Var.a();
        Object c6 = y9.a.c(k, "nu");
        if (c6 instanceof z) {
            this.f4556p = true;
            this.f4557q = NumberingSystem.getInstance((ULocale) this.f4560t.c()).getName();
        } else {
            this.f4556p = false;
            this.f4557q = (String) c6;
        }
        this.a = (w) y9.a.l(w.class, (String) y9.a.d(map, "style", 2, new String[]{"decimal", "percent", "currency", "unit"}, "decimal"));
        Object d8 = y9.a.d(map, "currency", 2, a0Var, a0Var);
        boolean z5 = d8 instanceof a0;
        w wVar2 = w.f20752i;
        if (z5) {
            if (this.a == wVar2) {
                throw new ap.a("Expected currency style !", 9);
            }
        } else if (!a((String) d8).matches("^[A-Z][A-Z][A-Z]$")) {
            throw new ap.a("Malformed currency code !", 9);
        }
        Object d10 = y9.a.d(map, "currencyDisplay", 2, new String[]{"symbol", "narrowSymbol", "code", StackTraceHelper.NAME_KEY}, "symbol");
        Object d11 = y9.a.d(map, "currencySign", 2, new String[]{"accounting", "standard"}, "standard");
        Object d12 = y9.a.d(map, "unit", 2, a0Var, a0Var);
        boolean z6 = d12 instanceof a0;
        w wVar3 = w.f20753v;
        if (!z6) {
            String str2 = (String) d12;
            String[] strArr = f4543v;
            if (Arrays.binarySearch(strArr, str2) < 0) {
                obj = d8;
                obj2 = d10;
                int indexOf = str2.indexOf("-per-");
                if (indexOf >= 0) {
                    obj3 = d11;
                    if (str2.indexOf("-per-", indexOf + 1) < 0) {
                        if (Arrays.binarySearch(strArr, str2.substring(0, indexOf)) >= 0) {
                        }
                    }
                }
                throw new ap.a("Malformed unit identifier !", 9);
            }
        } else if (this.a == wVar3) {
            throw new ap.a("Expected unit !", 9);
        }
        obj = d8;
        obj2 = d10;
        obj3 = d11;
        Object d13 = y9.a.d(map, "unitDisplay", 2, new String[]{"long", "short", "narrow"}, "short");
        w wVar4 = this.a;
        if (wVar4 == wVar2) {
            this.f4544b = a((String) obj);
            this.f4545c = (s) y9.a.l(s.class, (String) obj2);
            this.f4546d = (t) y9.a.l(t.class, (String) obj3);
        } else if (wVar4 == wVar3) {
            this.f4547e = (String) d12;
            this.f4548f = (x) y9.a.l(x.class, (String) d13);
        }
        w wVar5 = this.a;
        if (wVar5 == wVar2) {
            try {
                double defaultFractionDigits = Currency.getInstance(this.f4544b).getDefaultFractionDigits();
                d6 = Double.valueOf(defaultFractionDigits);
                valueOf = Double.valueOf(defaultFractionDigits);
            } catch (IllegalArgumentException unused) {
                throw new ap.a("Invalid currency code !", 9);
            }
        } else if (wVar5 == w.f20751e) {
            d6 = valueOf2;
            valueOf = d6;
        } else {
            valueOf = Double.valueOf(3.0d);
            d6 = valueOf2;
        }
        Double d14 = d6;
        this.f4558r = (u) y9.a.l(u.class, (String) y9.a.d(map, "notation", 2, new String[]{"standard", "scientific", "engineering", "compact"}, "standard"));
        Double valueOf3 = Double.valueOf(20.0d);
        Double valueOf4 = Double.valueOf(1.0d);
        Double valueOf5 = Double.valueOf(21.0d);
        Double d15 = valueOf;
        Object b10 = y9.a.b("minimumIntegerDigits", y9.a.c(map, "minimumIntegerDigits"), valueOf4, valueOf5, valueOf4);
        Object c8 = y9.a.c(map, "minimumFractionDigits");
        Object c10 = y9.a.c(map, "maximumFractionDigits");
        Object c11 = y9.a.c(map, "minimumSignificantDigits");
        Object c12 = y9.a.c(map, "maximumSignificantDigits");
        this.f4550h = (int) Math.floor(((Double) b10).doubleValue());
        boolean z7 = c11 instanceof a0;
        u uVar = u.f20745e;
        u uVar2 = u.f20746i;
        if (!z7 || !(c12 instanceof a0)) {
            this.f4553m = 1;
            Object b11 = y9.a.b("minimumSignificantDigits", c11, valueOf4, valueOf5, valueOf4);
            Object b12 = y9.a.b("maximumSignificantDigits", c12, b11, valueOf5, valueOf5);
            this.k = (int) Math.floor(((Double) b11).doubleValue());
            this.f4552l = (int) Math.floor(((Double) b12).doubleValue());
        } else if ((c8 instanceof a0) && (c10 instanceof a0)) {
            u uVar3 = this.f4558r;
            if (uVar3 == uVar2) {
                this.f4553m = 3;
            } else if (uVar3 == uVar) {
                this.f4553m = 2;
                this.j = 5;
            } else {
                this.f4553m = 2;
                this.f4551i = (int) Math.floor(d14.doubleValue());
                this.j = (int) Math.floor(d15.doubleValue());
            }
        } else {
            this.f4553m = 2;
            Object b13 = y9.a.b("minimumFractionDigits", c8, valueOf2, valueOf3, a0Var);
            Object b14 = y9.a.b("maximumFractionDigits", c10, valueOf2, valueOf3, a0Var);
            if (b13 instanceof a0) {
                b13 = Double.valueOf(Math.min(d14.doubleValue(), ((Double) b14).doubleValue()));
            } else if (b14 instanceof a0) {
                b14 = Double.valueOf(Math.max(d15.doubleValue(), ((Double) b13).doubleValue()));
            } else if (((Double) b13).doubleValue() > ((Double) b14).doubleValue()) {
                throw new ap.a("minimumFractionDigits is greater than maximumFractionDigits", 9);
            }
            this.f4551i = (int) Math.floor(((Double) b13).doubleValue());
            this.j = (int) Math.floor(((Double) b14).doubleValue());
        }
        Object d16 = y9.a.d(map, "compactDisplay", 2, new String[]{"short", "long"}, "short");
        if (this.f4558r == uVar2) {
            this.f4559s = (r) y9.a.l(r.class, (String) d16);
        }
        this.f4549g = ((Boolean) y9.a.d(map, "useGrouping", 1, a0Var, Boolean.TRUE)).booleanValue();
        this.f4554n = (v) y9.a.l(v.class, (String) y9.a.d(map, "signDisplay", 2, new String[]{"auto", ReactScrollViewHelper.OVER_SCROLL_NEVER, ReactScrollViewHelper.OVER_SCROLL_ALWAYS, "exceptZero"}, "auto"));
        b0 b0Var2 = this.f4560t;
        String str3 = this.f4556p ? "" : this.f4557q;
        w wVar6 = this.a;
        t tVar2 = this.f4546d;
        u uVar4 = this.f4558r;
        r rVar = this.f4559s;
        if (!str3.isEmpty()) {
            try {
                if (NumberingSystem.getInstanceByName(str3) == null) {
                    throw new ap.a("Invalid numbering system: ".concat(str3), 9);
                }
                ArrayList arrayList = new ArrayList();
                arrayList.add(str3);
                b0Var2.e("nu", arrayList);
            } catch (RuntimeException unused2) {
                throw new ap.a("Invalid numbering system: ".concat(str3), 9);
            }
        }
        if (uVar4 == uVar2) {
            if (wVar6 != w.f20750d) {
                wVar = wVar3;
            } else {
                wVar = wVar3;
            }
            CompactDecimalFormat compactDecimalFormat = CompactDecimalFormat.getInstance((ULocale) b0Var2.c(), rVar == r.f20736d ? CompactDecimalFormat.CompactStyle.SHORT : CompactDecimalFormat.CompactStyle.LONG);
            c0Var = c0Var2;
            c0Var.f20696b = compactDecimalFormat;
            c0Var.a = compactDecimalFormat;
            c0Var.f20697c = b0Var2;
            c0Var.f20698d = wVar6;
            compactDecimalFormat.setRoundingMode(4);
            String str4 = this.f4544b;
            s sVar = this.f4545c;
            if (c0Var.f20698d == wVar2) {
                Currency currency = Currency.getInstance(str4);
                c0Var.f20696b.setCurrency(currency);
                if (sVar != s.f20739e) {
                    b0 b0Var3 = c0Var.f20697c;
                    b0Var3.b();
                    str4 = currency.getName(b0Var3.a, sVar.ordinal() != 3 ? 0 : 1, (boolean[]) null);
                }
                android.icu.text.NumberFormat numberFormat2 = c0Var.f20696b;
                if (numberFormat2 instanceof DecimalFormat) {
                    DecimalFormat decimalFormat = (DecimalFormat) numberFormat2;
                    DecimalFormatSymbols decimalFormatSymbols = decimalFormat.getDecimalFormatSymbols();
                    decimalFormatSymbols.setCurrencySymbol(str4);
                    decimalFormat.setDecimalFormatSymbols(decimalFormatSymbols);
                }
            }
            c0Var.f20696b.setGroupingUsed(this.f4549g);
            i5 = this.f4550h;
            if (i5 != -1) {
                c0Var.f20696b.setMinimumIntegerDigits(i5);
            }
            int i13 = this.f4553m;
            i6 = this.k;
            i10 = this.f4552l;
            numberFormat = c0Var.f20696b;
            if ((numberFormat instanceof DecimalFormat) && i13 == 1) {
                DecimalFormat decimalFormat2 = (DecimalFormat) numberFormat;
                if (i6 >= 0) {
                    decimalFormat2.setMinimumSignificantDigits(i6);
                }
                if (i10 >= 0) {
                    if (i10 < decimalFormat2.getMinimumSignificantDigits()) {
                        throw new ap.a("maximumSignificantDigits should be at least equal to minimumSignificantDigits", 9);
                    }
                    decimalFormat2.setMaximumSignificantDigits(i10);
                }
                decimalFormat2.setSignificantDigitsUsed(true);
            }
            i11 = this.f4553m;
            int i14 = this.f4551i;
            int i15 = this.j;
            if (i11 == 2) {
                if (i14 >= 0) {
                    c0Var.f20696b.setMinimumFractionDigits(i14);
                }
                if (i15 >= 0) {
                    c0Var.f20696b.setMaximumFractionDigits(i15);
                }
                android.icu.text.NumberFormat numberFormat3 = c0Var.f20696b;
                if (numberFormat3 instanceof DecimalFormat) {
                    ((DecimalFormat) numberFormat3).setSignificantDigitsUsed(false);
                }
            }
            c0Var.a(this.f4554n);
            String str5 = this.f4547e;
            x xVar = this.f4548f;
            if (c0Var.f20698d != wVar) {
                for (MeasureUnit measureUnit : MeasureUnit.getAvailable()) {
                    if (!measureUnit.getSubtype().equals(str5)) {
                        if (measureUnit.getSubtype().equals(measureUnit.getType() + "-" + str5)) {
                        }
                    }
                    c0Var.f20699e = measureUnit;
                    b0 b0Var4 = c0Var.f20697c;
                    b0Var4.b();
                    ULocale uLocale = b0Var4.a;
                    int ordinal = xVar.ordinal();
                    c0Var.a = MeasureFormat.getInstance(uLocale, ordinal != 1 ? ordinal != 2 ? MeasureFormat.FormatWidth.SHORT : MeasureFormat.FormatWidth.WIDE : MeasureFormat.FormatWidth.NARROW, c0Var.f20696b);
                    return;
                }
                throw new ap.a(e.k("Unknown unit: ", str5), 9);
            }
            return;
        }
        wVar = wVar3;
        c0Var = c0Var2;
        int ordinal2 = wVar6.ordinal();
        if (ordinal2 == 1) {
            i12 = 2;
        } else if (ordinal2 != 2) {
            i12 = (uVar4 == u.f20744d || uVar4 == uVar) ? 3 : 0;
        } else if (tVar2 == t.f20742e) {
            i12 = 7;
        } else {
            if (tVar2 != tVar) {
                throw new ap.a("Unrecognized formatting style requested.", 9);
            }
            i12 = 1;
        }
        android.icu.text.NumberFormat numberFormat4 = android.icu.text.NumberFormat.getInstance((ULocale) b0Var2.c(), i12);
        if (uVar4 == uVar) {
            numberFormat4.setMaximumIntegerDigits(3);
        }
        c0Var.f20696b = numberFormat4;
        c0Var.a = numberFormat4;
        c0Var.f20697c = b0Var2;
        c0Var.f20698d = wVar6;
        numberFormat4.setRoundingMode(4);
        String str42 = this.f4544b;
        s sVar2 = this.f4545c;
        if (c0Var.f20698d == wVar2) {
        }
        c0Var.f20696b.setGroupingUsed(this.f4549g);
        i5 = this.f4550h;
        if (i5 != -1) {
        }
        int i132 = this.f4553m;
        i6 = this.k;
        i10 = this.f4552l;
        numberFormat = c0Var.f20696b;
        if (numberFormat instanceof DecimalFormat) {
            DecimalFormat decimalFormat22 = (DecimalFormat) numberFormat;
            if (i6 >= 0) {
            }
            if (i10 >= 0) {
            }
            decimalFormat22.setSignificantDigitsUsed(true);
        }
        i11 = this.f4553m;
        int i142 = this.f4551i;
        int i152 = this.j;
        if (i11 == 2) {
        }
        c0Var.a(this.f4554n);
        String str52 = this.f4547e;
        x xVar2 = this.f4548f;
        if (c0Var.f20698d != wVar) {
        }
    }

    public static String a(String str) {
        StringBuilder sb2 = new StringBuilder(str.length());
        for (int i5 = 0; i5 < str.length(); i5++) {
            char charAt = str.charAt(i5);
            if (charAt < 'a' || charAt > 'z') {
                sb2.append(charAt);
            } else {
                sb2.append((char) (charAt - ' '));
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
        c0 c0Var = this.f4555o;
        try {
            try {
                UFormat uFormat = c0Var.a;
                return (!(uFormat instanceof MeasureFormat) || c0Var.f20699e == null) ? uFormat.format(Double.valueOf(d6)) : uFormat.format(new Measure(Double.valueOf(d6), c0Var.f20699e));
            } catch (NumberFormatException unused) {
                return android.icu.text.NumberFormat.getInstance(ULocale.getDefault()).format(d6);
            }
        } catch (RuntimeException unused2) {
            return android.icu.text.NumberFormat.getInstance(ULocale.forLanguageTag("en")).format(d6);
        }
    }

    @a
    public List<Map<String, String>> formatToParts(double d6) {
        AttributedCharacterIterator formatToCharacterIterator;
        ArrayList arrayList = new ArrayList();
        c0 c0Var = this.f4555o;
        try {
            try {
                UFormat uFormat = c0Var.a;
                formatToCharacterIterator = (!(uFormat instanceof MeasureFormat) || c0Var.f20699e == null) ? uFormat.formatToCharacterIterator(Double.valueOf(d6)) : uFormat.formatToCharacterIterator(new Measure(Double.valueOf(d6), c0Var.f20699e));
            } catch (RuntimeException unused) {
                formatToCharacterIterator = android.icu.text.NumberFormat.getInstance(ULocale.forLanguageTag("en")).formatToCharacterIterator(Double.valueOf(d6));
            }
        } catch (NumberFormatException unused2) {
            formatToCharacterIterator = android.icu.text.NumberFormat.getInstance(ULocale.getDefault()).formatToCharacterIterator(Double.valueOf(d6));
        } catch (Exception unused3) {
            formatToCharacterIterator = android.icu.text.NumberFormat.getInstance(ULocale.forLanguageTag("en")).formatToCharacterIterator(Double.valueOf(d6));
        }
        StringBuilder sb2 = new StringBuilder();
        for (char first = formatToCharacterIterator.first(); first != 65535; first = formatToCharacterIterator.next()) {
            sb2.append(first);
            if (formatToCharacterIterator.getIndex() + 1 == formatToCharacterIterator.getRunLimit()) {
                Iterator<AttributedCharacterIterator.Attribute> it = formatToCharacterIterator.getAttributes().keySet().iterator();
                String str = "literal";
                if (it.hasNext()) {
                    AttributedCharacterIterator.Attribute next = it.next();
                    if (next == NumberFormat.Field.SIGN) {
                        str = Double.compare(d6, 0.0d) >= 0 ? "plusSign" : "minusSign";
                    } else if (next == NumberFormat.Field.INTEGER) {
                        str = Double.isNaN(d6) ? "nan" : Double.isInfinite(d6) ? "infinity" : "integer";
                    } else if (next == NumberFormat.Field.FRACTION) {
                        str = "fraction";
                    } else if (next == NumberFormat.Field.EXPONENT) {
                        str = "exponentInteger";
                    } else if (next == NumberFormat.Field.EXPONENT_SIGN) {
                        str = "exponentMinusSign";
                    } else if (next == NumberFormat.Field.EXPONENT_SYMBOL) {
                        str = "exponentSeparator";
                    } else if (next == NumberFormat.Field.DECIMAL_SEPARATOR) {
                        str = "decimal";
                    } else if (next == NumberFormat.Field.GROUPING_SEPARATOR) {
                        str = "group";
                    } else if (next == NumberFormat.Field.PERCENT) {
                        str = "percentSign";
                    } else if (next == NumberFormat.Field.PERMILLE) {
                        str = "permilleSign";
                    } else if (next == NumberFormat.Field.CURRENCY) {
                        str = "currency";
                    } else if (next.toString().equals("android.icu.text.NumberFormat$Field(compact)")) {
                        str = "compact";
                    }
                }
                String sb3 = sb2.toString();
                sb2.setLength(0);
                HashMap hashMap = new HashMap();
                hashMap.put("type", str);
                hashMap.put("value", sb3);
                arrayList.add(hashMap);
            }
        }
        return arrayList;
    }

    @a
    public Map<String, Object> resolvedOptions() {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        linkedHashMap.put("locale", this.f4561u.f());
        linkedHashMap.put("numberingSystem", this.f4557q);
        linkedHashMap.put("style", this.a.toString());
        w wVar = w.f20752i;
        w wVar2 = this.a;
        if (wVar2 == wVar) {
            linkedHashMap.put("currency", this.f4544b);
            linkedHashMap.put("currencyDisplay", this.f4545c.toString());
            linkedHashMap.put("currencySign", this.f4546d.toString());
        } else if (wVar2 == w.f20753v) {
            linkedHashMap.put("unit", this.f4547e);
            linkedHashMap.put("unitDisplay", this.f4548f.toString());
        }
        int i5 = this.f4550h;
        if (i5 != -1) {
            linkedHashMap.put("minimumIntegerDigits", Integer.valueOf(i5));
        }
        int i6 = this.f4553m;
        if (i6 == 1) {
            int i10 = this.f4552l;
            if (i10 != -1) {
                linkedHashMap.put("maximumSignificantDigits", Integer.valueOf(i10));
            }
            int i11 = this.k;
            if (i11 != -1) {
                linkedHashMap.put("minimumSignificantDigits", Integer.valueOf(i11));
            }
        } else if (i6 == 2) {
            int i12 = this.f4551i;
            if (i12 != -1) {
                linkedHashMap.put("minimumFractionDigits", Integer.valueOf(i12));
            }
            int i13 = this.j;
            if (i13 != -1) {
                linkedHashMap.put("maximumFractionDigits", Integer.valueOf(i13));
            }
        }
        linkedHashMap.put("useGrouping", Boolean.valueOf(this.f4549g));
        linkedHashMap.put("notation", this.f4558r.toString());
        if (this.f4558r == u.f20746i) {
            linkedHashMap.put("compactDisplay", this.f4559s.toString());
        }
        linkedHashMap.put("signDisplay", this.f4554n.toString());
        return linkedHashMap;
    }
}
