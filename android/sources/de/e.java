package de;

import android.text.Layout;
import android.text.SpannableStringBuilder;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.RelativeSizeSpan;
import android.text.style.StrikethroughSpan;
import android.text.style.StyleSpan;
import android.text.style.TypefaceSpan;
import android.text.style.UnderlineSpan;
import android.util.Pair;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
import java.util.TreeSet;
import ke.d0;

/* loaded from: classes3.dex */
public final class e {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f7506b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f7507c;

    /* renamed from: d, reason: collision with root package name */
    public final long f7508d;

    /* renamed from: e, reason: collision with root package name */
    public final long f7509e;

    /* renamed from: f, reason: collision with root package name */
    public final g f7510f;

    /* renamed from: g, reason: collision with root package name */
    public final String[] f7511g;

    /* renamed from: h, reason: collision with root package name */
    public final String f7512h;

    /* renamed from: i, reason: collision with root package name */
    public final String f7513i;
    public final e j;
    public final HashMap k;

    /* renamed from: l, reason: collision with root package name */
    public final HashMap f7514l;

    /* renamed from: m, reason: collision with root package name */
    public ArrayList f7515m;

    public e(String str, String str2, long j, long j5, g gVar, String[] strArr, String str3, String str4, e eVar) {
        this.a = str;
        this.f7506b = str2;
        this.f7513i = str4;
        this.f7510f = gVar;
        this.f7511g = strArr;
        this.f7507c = str2 != null;
        this.f7508d = j;
        this.f7509e = j5;
        str3.getClass();
        this.f7512h = str3;
        this.j = eVar;
        this.k = new HashMap();
        this.f7514l = new HashMap();
    }

    public static e a(String str) {
        return new e(null, str.replaceAll("\r\n", ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE).replaceAll(" *\n *", ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE).replaceAll(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, " ").replaceAll("[ \t\\x0B\f\r]+", " "), -9223372036854775807L, -9223372036854775807L, null, null, "", null, null);
    }

    public static SpannableStringBuilder e(String str, TreeMap treeMap) {
        if (!treeMap.containsKey(str)) {
            wd.a aVar = new wd.a();
            aVar.a = new SpannableStringBuilder();
            treeMap.put(str, aVar);
        }
        CharSequence charSequence = ((wd.a) treeMap.get(str)).a;
        charSequence.getClass();
        return (SpannableStringBuilder) charSequence;
    }

    public final e b(int i5) {
        ArrayList arrayList = this.f7515m;
        if (arrayList != null) {
            return (e) arrayList.get(i5);
        }
        throw new IndexOutOfBoundsException();
    }

    public final int c() {
        ArrayList arrayList = this.f7515m;
        if (arrayList == null) {
            return 0;
        }
        return arrayList.size();
    }

    public final void d(TreeSet treeSet, boolean z5) {
        String str = this.a;
        boolean equals = "p".equals(str);
        boolean equals2 = "div".equals(str);
        if (z5 || equals || (equals2 && this.f7513i != null)) {
            long j = this.f7508d;
            if (j != -9223372036854775807L) {
                treeSet.add(Long.valueOf(j));
            }
            long j5 = this.f7509e;
            if (j5 != -9223372036854775807L) {
                treeSet.add(Long.valueOf(j5));
            }
        }
        if (this.f7515m == null) {
            return;
        }
        for (int i5 = 0; i5 < this.f7515m.size(); i5++) {
            ((e) this.f7515m.get(i5)).d(treeSet, z5 || equals);
        }
    }

    public final boolean f(long j) {
        long j5 = this.f7508d;
        long j7 = this.f7509e;
        if (j5 == -9223372036854775807L && j7 == -9223372036854775807L) {
            return true;
        }
        if (j5 <= j && j7 == -9223372036854775807L) {
            return true;
        }
        if (j5 != -9223372036854775807L || j >= j7) {
            return j5 <= j && j < j7;
        }
        return true;
    }

    public final void g(long j, String str, ArrayList arrayList) {
        String str2;
        String str3 = this.f7512h;
        if (!"".equals(str3)) {
            str = str3;
        }
        if (f(j) && "div".equals(this.a) && (str2 = this.f7513i) != null) {
            arrayList.add(new Pair(str, str2));
            return;
        }
        for (int i5 = 0; i5 < c(); i5++) {
            b(i5).g(j, str, arrayList);
        }
    }

    public final void h(long j, Map map, HashMap hashMap, String str, TreeMap treeMap) {
        int i5;
        e eVar;
        g F;
        int i6;
        int i10;
        Map map2 = map;
        if (f(j)) {
            String str2 = this.f7512h;
            String str3 = "".equals(str2) ? str : str2;
            for (Map.Entry entry : this.f7514l.entrySet()) {
                String str4 = (String) entry.getKey();
                HashMap hashMap2 = this.k;
                int intValue = hashMap2.containsKey(str4) ? ((Integer) hashMap2.get(str4)).intValue() : 0;
                int intValue2 = ((Integer) entry.getValue()).intValue();
                if (intValue != intValue2) {
                    wd.a aVar = (wd.a) treeMap.get(str4);
                    aVar.getClass();
                    f fVar = (f) hashMap.get(str3);
                    fVar.getClass();
                    int i11 = fVar.j;
                    g F2 = ta.a.F(this.f7510f, this.f7511g, map2);
                    SpannableStringBuilder spannableStringBuilder = (SpannableStringBuilder) aVar.a;
                    if (spannableStringBuilder == null) {
                        spannableStringBuilder = new SpannableStringBuilder();
                        aVar.a = spannableStringBuilder;
                    }
                    if (F2 != null) {
                        int i12 = F2.f7530h;
                        int i13 = 1;
                        if (((i12 == -1 && F2.f7531i == -1) ? -1 : (i12 == 1 ? (char) 1 : (char) 0) | (F2.f7531i == 1 ? (char) 2 : (char) 0)) != -1) {
                            int i14 = F2.f7530h;
                            if (i14 == -1) {
                                if (F2.f7531i == -1) {
                                    i10 = -1;
                                    i13 = 1;
                                    StyleSpan styleSpan = new StyleSpan(i10);
                                    i5 = 33;
                                    spannableStringBuilder.setSpan(styleSpan, intValue, intValue2, 33);
                                } else {
                                    i13 = 1;
                                }
                            }
                            i10 = (i14 == i13 ? i13 : 0) | (F2.f7531i == i13 ? 2 : 0);
                            StyleSpan styleSpan2 = new StyleSpan(i10);
                            i5 = 33;
                            spannableStringBuilder.setSpan(styleSpan2, intValue, intValue2, 33);
                        } else {
                            i5 = 33;
                        }
                        if (F2.f7528f == i13) {
                            spannableStringBuilder.setSpan(new StrikethroughSpan(), intValue, intValue2, i5);
                        }
                        if (F2.f7529g == i13) {
                            spannableStringBuilder.setSpan(new UnderlineSpan(), intValue, intValue2, i5);
                        }
                        if (F2.f7525c) {
                            if (!F2.f7525c) {
                                throw new IllegalStateException("Font color has not been defined.");
                            }
                            ki.b.b(spannableStringBuilder, new ForegroundColorSpan(F2.f7524b), intValue, intValue2);
                        }
                        if (F2.f7527e) {
                            if (!F2.f7527e) {
                                throw new IllegalStateException("Background color has not been defined.");
                            }
                            ki.b.b(spannableStringBuilder, new BackgroundColorSpan(F2.f7526d), intValue, intValue2);
                        }
                        if (F2.a != null) {
                            ki.b.b(spannableStringBuilder, new TypefaceSpan(F2.a), intValue, intValue2);
                        }
                        b bVar = F2.f7538r;
                        if (bVar != null) {
                            int i15 = bVar.a;
                            if (i15 == -1) {
                                i15 = (i11 == 2 || i11 == 1) ? 3 : 1;
                                i6 = 1;
                            } else {
                                i6 = bVar.f7492b;
                            }
                            int i16 = bVar.f7493c;
                            if (i16 == -2) {
                                i16 = 1;
                            }
                            ki.b.b(spannableStringBuilder, new ae.d(i15, i6, i16), intValue, intValue2);
                        }
                        int i17 = F2.f7533m;
                        if (i17 == 2) {
                            e eVar2 = this.j;
                            while (true) {
                                if (eVar2 == null) {
                                    eVar2 = null;
                                    break;
                                }
                                g F3 = ta.a.F(eVar2.f7510f, eVar2.f7511g, map2);
                                if (F3 != null && F3.f7533m == 1) {
                                    break;
                                } else {
                                    eVar2 = eVar2.j;
                                }
                            }
                            if (eVar2 != null) {
                                ArrayDeque arrayDeque = new ArrayDeque();
                                arrayDeque.push(eVar2);
                                while (true) {
                                    if (arrayDeque.isEmpty()) {
                                        eVar = null;
                                        break;
                                    }
                                    e eVar3 = (e) arrayDeque.pop();
                                    g F4 = ta.a.F(eVar3.f7510f, eVar3.f7511g, map2);
                                    if (F4 != null && F4.f7533m == 3) {
                                        eVar = eVar3;
                                        break;
                                    }
                                    for (int c6 = eVar3.c() - 1; c6 >= 0; c6--) {
                                        arrayDeque.push(eVar3.b(c6));
                                    }
                                }
                                if (eVar != null) {
                                    if (eVar.c() != 1 || eVar.b(0).f7506b == null) {
                                        ke.b.y("TtmlRenderUtil", "Skipping rubyText node without exactly one text child.");
                                    } else {
                                        String str5 = eVar.b(0).f7506b;
                                        int i18 = d0.a;
                                        g F5 = ta.a.F(eVar.f7510f, eVar.f7511g, map2);
                                        int i19 = F5 != null ? F5.f7534n : -1;
                                        if (i19 == -1 && (F = ta.a.F(eVar2.f7510f, eVar2.f7511g, map2)) != null) {
                                            i19 = F.f7534n;
                                        }
                                        spannableStringBuilder.setSpan(new ae.c(str5, i19), intValue, intValue2, 33);
                                    }
                                }
                            }
                        } else if (i17 == 3 || i17 == 4) {
                            spannableStringBuilder.setSpan(new a(), intValue, intValue2, 33);
                        }
                        if (F2.f7537q == 1) {
                            ki.b.b(spannableStringBuilder, new ae.a(), intValue, intValue2);
                        }
                        int i20 = F2.j;
                        if (i20 == 1) {
                            ki.b.b(spannableStringBuilder, new AbsoluteSizeSpan((int) F2.k, true), intValue, intValue2);
                        } else if (i20 == 2) {
                            ki.b.b(spannableStringBuilder, new RelativeSizeSpan(F2.k), intValue, intValue2);
                        } else if (i20 == 3) {
                            ki.b.b(spannableStringBuilder, new RelativeSizeSpan(F2.k / 100.0f), intValue, intValue2);
                        }
                        if ("p".equals(this.a)) {
                            float f2 = F2.f7539s;
                            if (f2 != Float.MAX_VALUE) {
                                aVar.f19795q = (f2 * (-90.0f)) / 100.0f;
                            }
                            Layout.Alignment alignment = F2.f7535o;
                            if (alignment != null) {
                                aVar.f19783c = alignment;
                            }
                            Layout.Alignment alignment2 = F2.f7536p;
                            if (alignment2 != null) {
                                aVar.f19784d = alignment2;
                            }
                        }
                    } else {
                        continue;
                    }
                }
            }
            int i21 = 0;
            while (i21 < c()) {
                b(i21).h(j, map2, hashMap, str3, treeMap);
                i21++;
                map2 = map;
            }
        }
    }

    public final void i(long j, boolean z5, String str, TreeMap treeMap) {
        boolean z6;
        TreeMap treeMap2;
        long j5;
        HashMap hashMap = this.k;
        hashMap.clear();
        HashMap hashMap2 = this.f7514l;
        hashMap2.clear();
        String str2 = this.a;
        if ("metadata".equals(str2)) {
            return;
        }
        String str3 = this.f7512h;
        String str4 = "".equals(str3) ? str : str3;
        if (this.f7507c && z5) {
            SpannableStringBuilder e9 = e(str4, treeMap);
            String str5 = this.f7506b;
            str5.getClass();
            e9.append((CharSequence) str5);
            return;
        }
        if ("br".equals(str2) && z5) {
            e(str4, treeMap).append('\n');
            return;
        }
        if (f(j)) {
            for (Map.Entry entry : treeMap.entrySet()) {
                String str6 = (String) entry.getKey();
                CharSequence charSequence = ((wd.a) entry.getValue()).a;
                charSequence.getClass();
                hashMap.put(str6, Integer.valueOf(charSequence.length()));
            }
            boolean equals = "p".equals(str2);
            for (int i5 = 0; i5 < c(); i5++) {
                e b10 = b(i5);
                if (z5 || equals) {
                    z6 = true;
                    treeMap2 = treeMap;
                    j5 = j;
                } else {
                    z6 = false;
                    j5 = j;
                    treeMap2 = treeMap;
                }
                b10.i(j5, z6, str4, treeMap2);
            }
            if (equals) {
                SpannableStringBuilder e10 = e(str4, treeMap);
                int length = e10.length() - 1;
                while (length >= 0 && e10.charAt(length) == ' ') {
                    length--;
                }
                if (length >= 0 && e10.charAt(length) != '\n') {
                    e10.append('\n');
                }
            }
            for (Map.Entry entry2 : treeMap.entrySet()) {
                String str7 = (String) entry2.getKey();
                CharSequence charSequence2 = ((wd.a) entry2.getValue()).a;
                charSequence2.getClass();
                hashMap2.put(str7, Integer.valueOf(charSequence2.length()));
            }
        }
    }
}
