package fe;

import android.graphics.Color;
import android.text.SpannableStringBuilder;
import android.text.SpannedString;
import android.text.TextUtils;
import android.text.style.AbsoluteSizeSpan;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.RelativeSizeSpan;
import android.text.style.StrikethroughSpan;
import android.text.style.StyleSpan;
import android.text.style.TypefaceSpan;
import android.text.style.UnderlineSpan;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import ke.w;

/* loaded from: classes3.dex */
public abstract class j {
    public static final Pattern a = Pattern.compile("^(\\S+)\\s+-->\\s+(\\S+)(.*)?$");

    /* renamed from: b, reason: collision with root package name */
    public static final Pattern f8537b = Pattern.compile("(\\S+?):(\\S+)");

    /* renamed from: c, reason: collision with root package name */
    public static final Map f8538c;

    /* renamed from: d, reason: collision with root package name */
    public static final Map f8539d;

    static {
        HashMap hashMap = new HashMap();
        hashMap.put("white", Integer.valueOf(Color.rgb(255, 255, 255)));
        hashMap.put("lime", Integer.valueOf(Color.rgb(0, 255, 0)));
        hashMap.put("cyan", Integer.valueOf(Color.rgb(0, 255, 255)));
        hashMap.put("red", Integer.valueOf(Color.rgb(255, 0, 0)));
        hashMap.put("yellow", Integer.valueOf(Color.rgb(255, 255, 0)));
        hashMap.put("magenta", Integer.valueOf(Color.rgb(255, 0, 255)));
        hashMap.put("blue", Integer.valueOf(Color.rgb(0, 0, 255)));
        hashMap.put("black", Integer.valueOf(Color.rgb(0, 0, 0)));
        f8538c = Collections.unmodifiableMap(hashMap);
        HashMap hashMap2 = new HashMap();
        hashMap2.put("bg_white", Integer.valueOf(Color.rgb(255, 255, 255)));
        hashMap2.put("bg_lime", Integer.valueOf(Color.rgb(0, 255, 0)));
        hashMap2.put("bg_cyan", Integer.valueOf(Color.rgb(0, 255, 255)));
        hashMap2.put("bg_red", Integer.valueOf(Color.rgb(255, 0, 0)));
        hashMap2.put("bg_yellow", Integer.valueOf(Color.rgb(255, 255, 0)));
        hashMap2.put("bg_magenta", Integer.valueOf(Color.rgb(255, 0, 255)));
        hashMap2.put("bg_blue", Integer.valueOf(Color.rgb(0, 0, 255)));
        hashMap2.put("bg_black", Integer.valueOf(Color.rgb(0, 0, 0)));
        f8539d = Collections.unmodifiableMap(hashMap2);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static void a(String str, g gVar, List list, SpannableStringBuilder spannableStringBuilder, List list2) {
        char c6;
        int i5;
        int i6;
        int i10;
        int i11 = gVar.f8524b;
        int length = spannableStringBuilder.length();
        String str2 = gVar.a;
        str2.getClass();
        int i12 = -1;
        switch (str2.hashCode()) {
            case 0:
                if (str2.equals("")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case 98:
                if (str2.equals("b")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case 99:
                if (str2.equals("c")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case 105:
                if (str2.equals("i")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case 117:
                if (str2.equals("u")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case 118:
                if (str2.equals("v")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case 3314158:
                if (str2.equals("lang")) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case 3511770:
                if (str2.equals("ruby")) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            default:
                c6 = 65535;
                break;
        }
        switch (c6) {
            case 0:
            case 5:
            case 6:
                break;
            case 1:
                spannableStringBuilder.setSpan(new StyleSpan(1), i11, length, 33);
                break;
            case 2:
                for (String str3 : gVar.f8526d) {
                    Map map = f8538c;
                    if (map.containsKey(str3)) {
                        spannableStringBuilder.setSpan(new ForegroundColorSpan(((Integer) map.get(str3)).intValue()), i11, length, 33);
                    } else {
                        Map map2 = f8539d;
                        if (map2.containsKey(str3)) {
                            spannableStringBuilder.setSpan(new BackgroundColorSpan(((Integer) map2.get(str3)).intValue()), i11, length, 33);
                        }
                    }
                }
                break;
            case 3:
                spannableStringBuilder.setSpan(new StyleSpan(2), i11, length, 33);
                break;
            case 4:
                spannableStringBuilder.setSpan(new UnderlineSpan(), i11, length, 33);
                break;
            case 7:
                int c8 = c(list2, str, gVar);
                ArrayList arrayList = new ArrayList(list.size());
                arrayList.addAll(list);
                Collections.sort(arrayList, f.f8522c);
                int i13 = gVar.f8524b;
                int i14 = 0;
                int i15 = 0;
                while (i14 < arrayList.size()) {
                    if ("rt".equals(((f) arrayList.get(i14)).a.a)) {
                        f fVar = (f) arrayList.get(i14);
                        int c10 = c(list2, str, fVar.a);
                        if (c10 == i12) {
                            c10 = c8 != i12 ? c8 : 1;
                        }
                        int i16 = fVar.a.f8524b - i15;
                        int i17 = fVar.f8523b - i15;
                        CharSequence subSequence = spannableStringBuilder.subSequence(i16, i17);
                        spannableStringBuilder.delete(i16, i17);
                        spannableStringBuilder.setSpan(new ae.c(subSequence.toString(), c10), i13, i16, 33);
                        i15 = subSequence.length() + i15;
                        i13 = i16;
                    }
                    i14++;
                    i12 = -1;
                }
                break;
            default:
                return;
        }
        ArrayList b10 = b(list2, str, gVar);
        for (int i18 = 0; i18 < b10.size(); i18++) {
            d dVar = ((h) b10.get(i18)).f8528e;
            int i19 = dVar.f8514l;
            if (i19 == -1 && dVar.f8515m == -1) {
                i5 = -1;
            } else {
                i5 = (dVar.f8515m == 1 ? (char) 2 : (char) 0) | (i19 == 1 ? (char) 1 : (char) 0);
            }
            if (i5 != -1) {
                int i20 = dVar.f8514l;
                if (i20 == -1 && dVar.f8515m == -1) {
                    i10 = -1;
                    i6 = 1;
                } else {
                    i6 = 1;
                    i10 = (i20 == 1 ? 1 : 0) | (dVar.f8515m == 1 ? 2 : 0);
                }
                ki.b.b(spannableStringBuilder, new StyleSpan(i10), i11, length);
            } else {
                i6 = 1;
            }
            if (dVar.j == i6) {
                spannableStringBuilder.setSpan(new StrikethroughSpan(), i11, length, 33);
            }
            if (dVar.k == i6) {
                spannableStringBuilder.setSpan(new UnderlineSpan(), i11, length, 33);
            }
            if (dVar.f8511g) {
                if (!dVar.f8511g) {
                    throw new IllegalStateException("Font color not defined");
                }
                ki.b.b(spannableStringBuilder, new ForegroundColorSpan(dVar.f8510f), i11, length);
            }
            if (dVar.f8513i) {
                if (!dVar.f8513i) {
                    throw new IllegalStateException("Background color not defined.");
                }
                ki.b.b(spannableStringBuilder, new BackgroundColorSpan(dVar.f8512h), i11, length);
            }
            if (dVar.f8509e != null) {
                ki.b.b(spannableStringBuilder, new TypefaceSpan(dVar.f8509e), i11, length);
            }
            int i21 = dVar.f8516n;
            if (i21 == 1) {
                ki.b.b(spannableStringBuilder, new AbsoluteSizeSpan((int) dVar.f8517o, true), i11, length);
            } else if (i21 == 2) {
                ki.b.b(spannableStringBuilder, new RelativeSizeSpan(dVar.f8517o), i11, length);
            } else if (i21 == 3) {
                ki.b.b(spannableStringBuilder, new RelativeSizeSpan(dVar.f8517o / 100.0f), i11, length);
            }
            if (dVar.f8519q) {
                spannableStringBuilder.setSpan(new ae.a(), i11, length, 33);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static ArrayList b(List list, String str, g gVar) {
        int size;
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < list.size(); i5++) {
            d dVar = (d) list.get(i5);
            String str2 = gVar.a;
            Set set = gVar.f8526d;
            String str3 = gVar.f8525c;
            if (dVar.a.isEmpty() && dVar.f8506b.isEmpty() && dVar.f8507c.isEmpty() && dVar.f8508d.isEmpty()) {
                size = TextUtils.isEmpty(str2);
            } else {
                int a10 = d.a(d.a(d.a(0, 1073741824, dVar.a, str), 2, dVar.f8506b, str2), 4, dVar.f8508d, str3);
                size = (a10 == -1 || !set.containsAll(dVar.f8507c)) ? 0 : a10 + (dVar.f8507c.size() * 4);
            }
            if (size > 0) {
                arrayList.add(new h(size, dVar));
            }
        }
        Collections.sort(arrayList);
        return arrayList;
    }

    public static int c(List list, String str, g gVar) {
        ArrayList b10 = b(list, str, gVar);
        for (int i5 = 0; i5 < b10.size(); i5++) {
            int i6 = ((h) b10.get(i5)).f8528e.f8518p;
            if (i6 != -1) {
                return i6;
            }
        }
        return -1;
    }

    public static e d(String str, Matcher matcher, w wVar, ArrayList arrayList) {
        i iVar = new i();
        try {
            String group = matcher.group(1);
            group.getClass();
            iVar.a = l.c(group);
            String group2 = matcher.group(2);
            group2.getClass();
            iVar.f8529b = l.c(group2);
            String group3 = matcher.group(3);
            group3.getClass();
            e(group3, iVar);
            StringBuilder sb2 = new StringBuilder();
            wVar.getClass();
            String h6 = wVar.h(ei.d.f8100c);
            while (!TextUtils.isEmpty(h6)) {
                if (sb2.length() > 0) {
                    sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                }
                sb2.append(h6.trim());
                h6 = wVar.h(ei.d.f8100c);
            }
            iVar.f8530c = f(str, sb2.toString(), arrayList);
            return new e(iVar.a().a(), iVar.a, iVar.f8529b);
        } catch (NumberFormatException unused) {
            ke.b.N("WebvttCueParser", "Skipping cue with bad header: " + matcher.group());
            return null;
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x0081, code lost:
    
        if (r6.equals("center") == false) goto L14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x00c5, code lost:
    
        if (r7.equals(com.facebook.react.uimanager.ViewProps.START) == false) goto L53;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void e(String str, i iVar) {
        int i5;
        int i6;
        int i10;
        Matcher matcher = f8537b.matcher(str);
        while (matcher.find()) {
            String group = matcher.group(1);
            group.getClass();
            String group2 = matcher.group(2);
            group2.getClass();
            try {
                if ("line".equals(group)) {
                    g(group2, iVar);
                } else {
                    char c6 = 5;
                    boolean z5 = false;
                    if ("align".equals(group)) {
                        switch (group2.hashCode()) {
                            case -1364013995:
                                break;
                            case -1074341483:
                                if (group2.equals("middle")) {
                                    z5 = true;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 100571:
                                if (group2.equals(ViewProps.END)) {
                                    z5 = 2;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 3317767:
                                if (group2.equals(ViewProps.LEFT)) {
                                    z5 = 3;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 108511772:
                                if (group2.equals(ViewProps.RIGHT)) {
                                    z5 = 4;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 109757538:
                                if (group2.equals(ViewProps.START)) {
                                    z5 = 5;
                                    break;
                                }
                                z5 = -1;
                                break;
                            default:
                                z5 = -1;
                                break;
                        }
                        switch (z5) {
                            case false:
                            case true:
                                i5 = 2;
                                break;
                            case true:
                                i5 = 3;
                                break;
                            case true:
                                i5 = 4;
                                break;
                            case true:
                                i5 = 5;
                                break;
                            case true:
                                i5 = 1;
                                break;
                            default:
                                ke.b.N("WebvttCueParser", "Invalid alignment value: ".concat(group2));
                                i5 = 2;
                                break;
                        }
                        iVar.f8531d = i5;
                    } else if (ViewProps.POSITION.equals(group)) {
                        int indexOf = group2.indexOf(44);
                        if (indexOf != -1) {
                            String substring = group2.substring(indexOf + 1);
                            substring.getClass();
                            switch (substring.hashCode()) {
                                case -1842484672:
                                    if (substring.equals("line-left")) {
                                        c6 = 0;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case -1364013995:
                                    if (substring.equals("center")) {
                                        c6 = 1;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case -1276788989:
                                    if (substring.equals("line-right")) {
                                        c6 = 2;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case -1074341483:
                                    if (substring.equals("middle")) {
                                        c6 = 3;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case 100571:
                                    if (substring.equals(ViewProps.END)) {
                                        c6 = 4;
                                        break;
                                    }
                                    c6 = 65535;
                                    break;
                                case 109757538:
                                    break;
                                default:
                                    c6 = 65535;
                                    break;
                            }
                            switch (c6) {
                                case 0:
                                case 5:
                                    i6 = 0;
                                    break;
                                case 1:
                                case 3:
                                    i6 = 1;
                                    break;
                                case 2:
                                case 4:
                                    i6 = 2;
                                    break;
                                default:
                                    ke.b.N("WebvttCueParser", "Invalid anchor value: ".concat(substring));
                                    i6 = Integer.MIN_VALUE;
                                    break;
                            }
                            iVar.f8536i = i6;
                            group2 = group2.substring(0, indexOf);
                        }
                        iVar.f8535h = l.b(group2);
                    } else if ("size".equals(group)) {
                        iVar.j = l.b(group2);
                    } else if ("vertical".equals(group)) {
                        if (group2.equals("lr")) {
                            i10 = 2;
                        } else if (group2.equals("rl")) {
                            i10 = 1;
                        } else {
                            ke.b.N("WebvttCueParser", "Invalid 'vertical' value: ".concat(group2));
                            i10 = Integer.MIN_VALUE;
                        }
                        iVar.k = i10;
                    } else {
                        ke.b.N("WebvttCueParser", "Unknown cue setting " + group + ":" + group2);
                    }
                }
            } catch (NumberFormatException unused) {
                ke.b.N("WebvttCueParser", "Skipping bad cue setting: " + matcher.group());
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static SpannedString f(String str, String str2, List list) {
        char c6;
        char c8;
        String substring;
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        ArrayDeque arrayDeque = new ArrayDeque();
        ArrayList arrayList = new ArrayList();
        int i5 = 0;
        while (true) {
            String str3 = "";
            if (i5 >= str2.length()) {
                while (!arrayDeque.isEmpty()) {
                    a(str, (g) arrayDeque.pop(), arrayList, spannableStringBuilder, list);
                }
                a(str, new g("", 0, "", Collections.EMPTY_SET), Collections.EMPTY_LIST, spannableStringBuilder, list);
                return SpannedString.valueOf(spannableStringBuilder);
            }
            char charAt = str2.charAt(i5);
            if (charAt == '&') {
                i5++;
                int indexOf = str2.indexOf(59, i5);
                int indexOf2 = str2.indexOf(32, i5);
                if (indexOf == -1) {
                    indexOf = indexOf2;
                } else if (indexOf2 != -1) {
                    indexOf = Math.min(indexOf, indexOf2);
                }
                if (indexOf != -1) {
                    substring = str2.substring(i5, indexOf);
                    substring.getClass();
                    switch (substring) {
                        case "gt":
                            spannableStringBuilder.append('>');
                            break;
                        case "lt":
                            spannableStringBuilder.append('<');
                            break;
                        case "amp":
                            spannableStringBuilder.append('&');
                            break;
                        case "nbsp":
                            spannableStringBuilder.append(' ');
                            break;
                        default:
                            ke.b.N("WebvttCueParser", "ignoring unsupported entity: '&" + substring + ";'");
                            break;
                    }
                    if (indexOf == indexOf2) {
                        spannableStringBuilder.append((CharSequence) " ");
                    }
                    i5 = indexOf + 1;
                } else {
                    spannableStringBuilder.append(charAt);
                }
            } else if (charAt != '<') {
                spannableStringBuilder.append(charAt);
                i5++;
            } else {
                int i6 = i5 + 1;
                if (i6 < str2.length()) {
                    boolean z5 = str2.charAt(i6) == '/';
                    int indexOf3 = str2.indexOf(62, i6);
                    i6 = indexOf3 == -1 ? str2.length() : indexOf3 + 1;
                    int i10 = i6 - 2;
                    boolean z6 = str2.charAt(i10) == '/';
                    int i11 = i5 + (z5 ? 2 : 1);
                    if (!z6) {
                        i10 = i6 - 1;
                    }
                    String substring2 = str2.substring(i11, i10);
                    if (!substring2.trim().isEmpty()) {
                        String trim = substring2.trim();
                        ke.b.g(!trim.isEmpty());
                        int i12 = d0.a;
                        String str4 = trim.split("[ \\.]", 2)[0];
                        str4.getClass();
                        switch (str4.hashCode()) {
                            case 98:
                                if (str4.equals("b")) {
                                    c6 = 0;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 99:
                                if (str4.equals("c")) {
                                    c6 = 1;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 105:
                                if (str4.equals("i")) {
                                    c6 = 2;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 117:
                                if (str4.equals("u")) {
                                    c6 = 3;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 118:
                                if (str4.equals("v")) {
                                    c6 = 4;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 3650:
                                if (str4.equals("rt")) {
                                    c6 = 5;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 3314158:
                                if (str4.equals("lang")) {
                                    c6 = 6;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            case 3511770:
                                if (str4.equals("ruby")) {
                                    c6 = 7;
                                    break;
                                }
                                c6 = 65535;
                                break;
                            default:
                                c6 = 65535;
                                break;
                        }
                        switch (c6) {
                            case 0:
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                                if (z5) {
                                    while (!arrayDeque.isEmpty()) {
                                        g gVar = (g) arrayDeque.pop();
                                        a(str, gVar, arrayList, spannableStringBuilder, list);
                                        if (arrayDeque.isEmpty()) {
                                            arrayList.clear();
                                        } else {
                                            arrayList.add(new f(gVar, spannableStringBuilder.length()));
                                        }
                                        if (gVar.a.equals(str4)) {
                                            break;
                                        }
                                    }
                                    break;
                                } else if (!z6) {
                                    int length = spannableStringBuilder.length();
                                    String trim2 = substring2.trim();
                                    ke.b.g(!trim2.isEmpty());
                                    int indexOf4 = trim2.indexOf(" ");
                                    if (indexOf4 == -1) {
                                        c8 = 0;
                                    } else {
                                        str3 = trim2.substring(indexOf4).trim();
                                        c8 = 0;
                                        trim2 = trim2.substring(0, indexOf4);
                                    }
                                    String[] split = trim2.split("\\.", -1);
                                    String str5 = split[c8];
                                    HashSet hashSet = new HashSet();
                                    for (int i13 = 1; i13 < split.length; i13++) {
                                        hashSet.add(split[i13]);
                                    }
                                    arrayDeque.push(new g(str5, length, str3, hashSet));
                                    break;
                                }
                                break;
                        }
                    }
                }
                i5 = i6;
            }
        }
    }

    public static void g(String str, i iVar) {
        String substring;
        int i5;
        int indexOf = str.indexOf(44);
        if (indexOf != -1) {
            substring = str.substring(indexOf + 1);
            substring.getClass();
            i5 = 2;
            switch (substring) {
                case "center":
                case "middle":
                    i5 = 1;
                    break;
                case "end":
                    break;
                case "start":
                    i5 = 0;
                    break;
                default:
                    ke.b.N("WebvttCueParser", "Invalid anchor value: ".concat(substring));
                    i5 = Integer.MIN_VALUE;
                    break;
            }
            iVar.f8534g = i5;
            str = str.substring(0, indexOf);
        }
        if (str.endsWith("%")) {
            iVar.f8532e = l.b(str);
            iVar.f8533f = 0;
        } else {
            iVar.f8532e = Integer.parseInt(str);
            iVar.f8533f = 1;
        }
    }
}
