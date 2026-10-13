package be;

import android.graphics.PointF;
import android.text.Layout;
import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.StrikethroughSpan;
import android.text.style.StyleSpan;
import android.text.style.UnderlineSpan;
import app.rive.runtime.kotlin.fonts.Fonts;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import e4.l;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import ke.w;
import tn.g;
import wd.e;

/* loaded from: classes3.dex */
public final class a extends wd.d {

    /* renamed from: r, reason: collision with root package name */
    public static final Pattern f2811r = Pattern.compile("(?:(\\d+):)?(\\d+):(\\d+)[:.](\\d+)");

    /* renamed from: m, reason: collision with root package name */
    public final boolean f2812m;

    /* renamed from: n, reason: collision with root package name */
    public final ak.a f2813n;

    /* renamed from: o, reason: collision with root package name */
    public LinkedHashMap f2814o;

    /* renamed from: p, reason: collision with root package name */
    public float f2815p = -3.4028235E38f;

    /* renamed from: q, reason: collision with root package name */
    public float f2816q = -3.4028235E38f;

    public a(List list) {
        if (list == null || list.isEmpty()) {
            this.f2812m = false;
            this.f2813n = null;
            return;
        }
        this.f2812m = true;
        String n6 = d0.n((byte[]) list.get(0));
        ke.b.g(n6.startsWith("Format:"));
        ak.a b10 = ak.a.b(n6);
        b10.getClass();
        this.f2813n = b10;
        i(new w((byte[]) list.get(1)), ei.d.f8100c);
    }

    public static int h(long j, ArrayList arrayList, ArrayList arrayList2) {
        int i5;
        int size = arrayList.size() - 1;
        while (true) {
            if (size < 0) {
                i5 = 0;
                break;
            }
            if (((Long) arrayList.get(size)).longValue() == j) {
                return size;
            }
            if (((Long) arrayList.get(size)).longValue() < j) {
                i5 = size + 1;
                break;
            }
            size--;
        }
        arrayList.add(i5, Long.valueOf(j));
        arrayList2.add(i5, i5 == 0 ? new ArrayList() : new ArrayList((Collection) arrayList2.get(i5 - 1)));
        return i5;
    }

    public static long j(String str) {
        Matcher matcher = f2811r.matcher(str.trim());
        if (!matcher.matches()) {
            return -9223372036854775807L;
        }
        String group = matcher.group(1);
        int i5 = d0.a;
        return (Long.parseLong(matcher.group(4)) * 10000) + (Long.parseLong(matcher.group(3)) * 1000000) + (Long.parseLong(matcher.group(2)) * 60000000) + (Long.parseLong(group) * 3600000000L);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // wd.d
    public final e e(byte[] bArr, int i5, boolean z5) {
        w wVar;
        Charset charset;
        ak.a aVar;
        int i6;
        float f2;
        int i10;
        Layout.Alignment alignment;
        Layout.Alignment alignment2;
        int i11;
        PointF pointF;
        int i12;
        int i13;
        float f10;
        float f11;
        float f12;
        boolean z6;
        int i14;
        int i15;
        float f13;
        int i16;
        float f14;
        int i17;
        int i18;
        int i19;
        int i20;
        a aVar2 = this;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        w wVar2 = new w(bArr, i5);
        Charset B = wVar2.B();
        if (B == null) {
            B = ei.d.f8100c;
        }
        boolean z7 = aVar2.f2812m;
        if (!z7) {
            aVar2.i(wVar2, B);
        }
        ak.a aVar3 = z7 ? aVar2.f2813n : null;
        while (true) {
            String h6 = wVar2.h(B);
            if (h6 == null) {
                return new l(4, arrayList, arrayList2);
            }
            if (h6.startsWith("Format:")) {
                aVar3 = ak.a.b(h6);
            } else {
                if (h6.startsWith("Dialogue:")) {
                    if (aVar3 == null) {
                        ke.b.N("SsaDecoder", "Skipping dialogue line before complete format: ".concat(h6));
                    } else {
                        int i21 = aVar3.f653f;
                        ke.b.g(h6.startsWith("Dialogue:"));
                        String[] split = h6.substring(9).split(",", i21);
                        if (split.length != i21) {
                            ke.b.N("SsaDecoder", "Skipping dialogue line with fewer columns than format: ".concat(h6));
                        } else {
                            long j = j(split[aVar3.f649b]);
                            if (j == -9223372036854775807L) {
                                ke.b.N("SsaDecoder", "Skipping invalid timing: ".concat(h6));
                            } else {
                                long j5 = j(split[aVar3.f650c]);
                                if (j5 == -9223372036854775807L) {
                                    ke.b.N("SsaDecoder", "Skipping invalid timing: ".concat(h6));
                                } else {
                                    LinkedHashMap linkedHashMap = aVar2.f2814o;
                                    d dVar = (linkedHashMap == null || (i20 = aVar3.f651d) == -1) ? null : (d) linkedHashMap.get(split[i20].trim());
                                    String str = split[aVar3.f652e];
                                    Matcher matcher = c.a.matcher(str);
                                    int i22 = -1;
                                    PointF pointF2 = null;
                                    while (matcher.find()) {
                                        w wVar3 = wVar2;
                                        String group = matcher.group(1);
                                        group.getClass();
                                        try {
                                            PointF a = c.a(group);
                                            if (a != null) {
                                                pointF2 = a;
                                            }
                                        } catch (RuntimeException unused) {
                                        }
                                        try {
                                            Matcher matcher2 = c.f2827d.matcher(group);
                                            if (matcher2.find()) {
                                                String group2 = matcher2.group(1);
                                                group2.getClass();
                                                i19 = d.a(group2);
                                            } else {
                                                i19 = -1;
                                            }
                                            if (i19 != -1) {
                                                i22 = i19;
                                            }
                                        } catch (RuntimeException unused2) {
                                        }
                                        wVar2 = wVar3;
                                    }
                                    wVar = wVar2;
                                    String replace = c.a.matcher(str).replaceAll("").replace("\\N", ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE).replace("\\n", ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE).replace("\\h", " ");
                                    float f15 = aVar2.f2815p;
                                    float f16 = aVar2.f2816q;
                                    SpannableString spannableString = new SpannableString(replace);
                                    if (dVar != null) {
                                        boolean z8 = dVar.f2833g;
                                        Integer num = dVar.f2830d;
                                        Integer num2 = dVar.f2829c;
                                        if (num2 != null) {
                                            z6 = z8;
                                            charset = B;
                                            aVar = aVar3;
                                            i14 = 33;
                                            i15 = 0;
                                            spannableString.setSpan(new ForegroundColorSpan(num2.intValue()), 0, spannableString.length(), 33);
                                        } else {
                                            z6 = z8;
                                            charset = B;
                                            aVar = aVar3;
                                            i14 = 33;
                                            i15 = 0;
                                        }
                                        if (dVar.j == 3 && num != null) {
                                            spannableString.setSpan(new BackgroundColorSpan(num.intValue()), i15, spannableString.length(), i14);
                                        }
                                        float f17 = dVar.f2831e;
                                        if (f17 == -3.4028235E38f || f16 == -3.4028235E38f) {
                                            f13 = -3.4028235E38f;
                                            i16 = Integer.MIN_VALUE;
                                        } else {
                                            f13 = f17 / f16;
                                            i16 = 1;
                                        }
                                        boolean z10 = dVar.f2832f;
                                        if (z10 && z6) {
                                            f14 = f13;
                                            i17 = i16;
                                            i18 = 33;
                                            i6 = 0;
                                            spannableString.setSpan(new StyleSpan(3), 0, spannableString.length(), 33);
                                        } else {
                                            f14 = f13;
                                            i17 = i16;
                                            i18 = 33;
                                            i6 = 0;
                                            if (z10) {
                                                spannableString.setSpan(new StyleSpan(1), 0, spannableString.length(), 33);
                                            } else if (z6) {
                                                spannableString.setSpan(new StyleSpan(2), 0, spannableString.length(), 33);
                                            }
                                        }
                                        if (dVar.f2834h) {
                                            spannableString.setSpan(new UnderlineSpan(), i6, spannableString.length(), i18);
                                        }
                                        if (dVar.f2835i) {
                                            spannableString.setSpan(new StrikethroughSpan(), i6, spannableString.length(), i18);
                                        }
                                        f2 = f14;
                                        i10 = i17;
                                    } else {
                                        charset = B;
                                        aVar = aVar3;
                                        i6 = 0;
                                        f2 = -3.4028235E38f;
                                        i10 = Integer.MIN_VALUE;
                                    }
                                    int i23 = -1;
                                    if (i22 != -1) {
                                        i23 = i22;
                                    } else if (dVar != null) {
                                        i23 = dVar.f2828b;
                                    }
                                    switch (i23) {
                                        case 0:
                                        default:
                                            com.discord.chat.bridge.botuikit.a.q(i23, "Unknown alignment: ", "SsaDecoder");
                                        case -1:
                                            alignment2 = null;
                                            break;
                                        case 1:
                                        case 4:
                                        case 7:
                                            alignment = Layout.Alignment.ALIGN_NORMAL;
                                            alignment2 = alignment;
                                            break;
                                        case 2:
                                        case 5:
                                        case 8:
                                            alignment = Layout.Alignment.ALIGN_CENTER;
                                            alignment2 = alignment;
                                            break;
                                        case 3:
                                        case 6:
                                        case 9:
                                            alignment = Layout.Alignment.ALIGN_OPPOSITE;
                                            alignment2 = alignment;
                                            break;
                                    }
                                    int i24 = Integer.MIN_VALUE;
                                    switch (i23) {
                                        case 0:
                                        default:
                                            com.discord.chat.bridge.botuikit.a.q(i23, "Unknown alignment: ", "SsaDecoder");
                                        case -1:
                                            i11 = Integer.MIN_VALUE;
                                            break;
                                        case 1:
                                        case 4:
                                        case 7:
                                            i11 = i6;
                                            break;
                                        case 2:
                                        case 5:
                                        case 8:
                                            i11 = 1;
                                            break;
                                        case 3:
                                        case 6:
                                        case 9:
                                            i11 = 2;
                                            break;
                                    }
                                    switch (i23) {
                                        case -1:
                                            pointF = pointF2;
                                            break;
                                        case 0:
                                        default:
                                            com.discord.chat.bridge.botuikit.a.q(i23, "Unknown alignment: ", "SsaDecoder");
                                            pointF = pointF2;
                                            break;
                                        case 1:
                                        case 2:
                                        case 3:
                                            pointF = pointF2;
                                            i24 = 2;
                                            break;
                                        case 4:
                                        case 5:
                                        case 6:
                                            pointF = pointF2;
                                            i24 = 1;
                                            break;
                                        case 7:
                                        case 8:
                                        case 9:
                                            i24 = i6;
                                            pointF = pointF2;
                                            break;
                                    }
                                    if (pointF == null || f16 == -3.4028235E38f || f15 == -3.4028235E38f) {
                                        if (i11 != 0) {
                                            i13 = 1;
                                            if (i11 != 1) {
                                                i12 = 2;
                                                f10 = i11 != 2 ? -3.4028235E38f : 0.95f;
                                            } else {
                                                i12 = 2;
                                                f10 = 0.5f;
                                            }
                                        } else {
                                            i12 = 2;
                                            i13 = 1;
                                            f10 = 0.05f;
                                        }
                                        f11 = i24 != 0 ? i24 != i13 ? i24 != i12 ? -3.4028235E38f : 0.95f : 0.5f : 0.05f;
                                        f12 = f10;
                                    } else {
                                        float f18 = pointF.x / f15;
                                        f11 = pointF.y / f16;
                                        f12 = f18;
                                    }
                                    wd.b bVar = new wd.b(spannableString, alignment2, null, null, f11, i6, i24, f12, i11, i10, f2, -3.4028235E38f, -3.4028235E38f, false, -16777216, Integer.MIN_VALUE, 0.0f);
                                    int h7 = h(j5, arrayList2, arrayList);
                                    for (int h10 = h(j, arrayList2, arrayList); h10 < h7; h10++) {
                                        ((List) arrayList.get(h10)).add(bVar);
                                    }
                                    aVar2 = this;
                                    wVar2 = wVar;
                                    B = charset;
                                    aVar3 = aVar;
                                }
                            }
                        }
                    }
                }
                wVar = wVar2;
                charset = B;
                aVar = aVar3;
                aVar2 = this;
                wVar2 = wVar;
                B = charset;
                aVar3 = aVar;
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:47:0x02cb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void i(w wVar, Charset charset) {
        int i5;
        d dVar;
        while (true) {
            String h6 = wVar.h(charset);
            if (h6 == null) {
                return;
            }
            int i6 = 2;
            int i10 = 0;
            char c6 = '[';
            if ("[Script Info]".equalsIgnoreCase(h6)) {
                while (true) {
                    String h7 = wVar.h(charset);
                    if (h7 != null && (wVar.a() == 0 || wVar.c(charset) != '[')) {
                        String[] split = h7.split(":");
                        if (split.length == 2) {
                            String x5 = g.x(split[0].trim());
                            x5.getClass();
                            if (x5.equals("playresx")) {
                                this.f2815p = Float.parseFloat(split[1].trim());
                            } else if (x5.equals("playresy")) {
                                try {
                                    this.f2816q = Float.parseFloat(split[1].trim());
                                } catch (NumberFormatException unused) {
                                }
                            }
                        }
                    }
                }
            } else if ("[V4+ Styles]".equalsIgnoreCase(h6)) {
                LinkedHashMap linkedHashMap = new LinkedHashMap();
                while (true) {
                    b bVar = null;
                    while (true) {
                        String h10 = wVar.h(charset);
                        if (h10 != null && (wVar.a() == 0 || wVar.c(charset) != c6)) {
                            int i11 = -1;
                            if (h10.startsWith("Format:")) {
                                String[] split2 = TextUtils.split(h10.substring(7), ",");
                                int i12 = -1;
                                int i13 = -1;
                                int i14 = -1;
                                int i15 = -1;
                                int i16 = -1;
                                int i17 = -1;
                                int i18 = -1;
                                int i19 = -1;
                                int i20 = -1;
                                int i21 = -1;
                                for (int i22 = i10; i22 < split2.length; i22++) {
                                    String x10 = g.x(split2[i22].trim());
                                    x10.getClass();
                                    switch (x10.hashCode()) {
                                        case -1178781136:
                                            if (x10.equals(Fonts.Font.STYLE_ITALIC)) {
                                                i5 = i10;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case -1026963764:
                                            if (x10.equals("underline")) {
                                                i5 = 1;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case -192095652:
                                            if (x10.equals("strikeout")) {
                                                i5 = i6;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case -70925746:
                                            if (x10.equals("primarycolour")) {
                                                i5 = 3;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case 3029637:
                                            if (x10.equals("bold")) {
                                                i5 = 4;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case 3373707:
                                            if (x10.equals(StackTraceHelper.NAME_KEY)) {
                                                i5 = 5;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case 366554320:
                                            if (x10.equals("fontsize")) {
                                                i5 = 6;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case 767321349:
                                            if (x10.equals("borderstyle")) {
                                                i5 = 7;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case 1767875043:
                                            if (x10.equals("alignment")) {
                                                i5 = 8;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        case 1988365454:
                                            if (x10.equals("outlinecolour")) {
                                                i5 = 9;
                                                break;
                                            }
                                            i5 = -1;
                                            break;
                                        default:
                                            i5 = -1;
                                            break;
                                    }
                                    switch (i5) {
                                        case 0:
                                            i18 = i22;
                                            break;
                                        case 1:
                                            i19 = i22;
                                            break;
                                        case 2:
                                            i20 = i22;
                                            break;
                                        case 3:
                                            i14 = i22;
                                            break;
                                        case 4:
                                            i17 = i22;
                                            break;
                                        case 5:
                                            i12 = i22;
                                            break;
                                        case 6:
                                            i16 = i22;
                                            break;
                                        case 7:
                                            i21 = i22;
                                            break;
                                        case 8:
                                            i13 = i22;
                                            break;
                                        case 9:
                                            i15 = i22;
                                            break;
                                    }
                                }
                                if (i12 != -1) {
                                    bVar = new b(i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, split2.length);
                                }
                            } else {
                                if (h10.startsWith("Style:")) {
                                    if (bVar == null) {
                                        ke.b.N("SsaDecoder", "Skipping 'Style:' line before 'Format:' line: ".concat(h10));
                                    } else {
                                        ke.b.g(h10.startsWith("Style:"));
                                        String[] split3 = TextUtils.split(h10.substring(6), ",");
                                        int length = split3.length;
                                        int i23 = bVar.k;
                                        if (length != i23) {
                                            int length2 = split3.length;
                                            int i24 = d0.a;
                                            Locale locale = Locale.US;
                                            StringBuilder q5 = a3.e.q(i23, "Skipping malformed 'Style:' line (expected ", length2, " values, found ", "): '");
                                            q5.append(h10);
                                            q5.append("'");
                                            ke.b.N("SsaStyle", q5.toString());
                                        } else {
                                            try {
                                                String trim = split3[bVar.a].trim();
                                                int i25 = bVar.f2817b;
                                                int a = i25 != -1 ? d.a(split3[i25].trim()) : -1;
                                                int i26 = bVar.f2818c;
                                                Integer c8 = i26 != -1 ? d.c(split3[i26].trim()) : null;
                                                int i27 = bVar.f2819d;
                                                Integer c10 = i27 != -1 ? d.c(split3[i27].trim()) : null;
                                                int i28 = bVar.f2820e;
                                                float f2 = -3.4028235E38f;
                                                if (i28 != -1) {
                                                    String trim2 = split3[i28].trim();
                                                    try {
                                                        f2 = Float.parseFloat(trim2);
                                                    } catch (NumberFormatException e9) {
                                                        ke.b.O("SsaStyle", "Failed to parse font size: '" + trim2 + "'", e9);
                                                    }
                                                }
                                                float f10 = f2;
                                                int i29 = bVar.f2821f;
                                                boolean z5 = i29 != -1 && d.b(split3[i29].trim());
                                                int i30 = bVar.f2822g;
                                                boolean z6 = i30 != -1 && d.b(split3[i30].trim());
                                                int i31 = bVar.f2823h;
                                                boolean z7 = i31 != -1 && d.b(split3[i31].trim());
                                                int i32 = bVar.f2824i;
                                                boolean z8 = i32 != -1 && d.b(split3[i32].trim());
                                                int i33 = bVar.j;
                                                if (i33 != -1) {
                                                    String trim3 = split3[i33].trim();
                                                    try {
                                                        int parseInt = Integer.parseInt(trim3.trim());
                                                        if (parseInt == 1 || parseInt == 3) {
                                                            i11 = parseInt;
                                                        }
                                                    } catch (NumberFormatException unused2) {
                                                    }
                                                    ke.b.N("SsaStyle", "Ignoring unknown BorderStyle: " + trim3);
                                                }
                                                dVar = new d(trim, a, c8, c10, f10, z5, z6, z7, z8, i11);
                                            } catch (RuntimeException e10) {
                                                ke.b.O("SsaStyle", "Skipping malformed 'Style:' line: '" + h10 + "'", e10);
                                            }
                                            if (dVar != null) {
                                                linkedHashMap.put(dVar.a, dVar);
                                            }
                                        }
                                        dVar = null;
                                        if (dVar != null) {
                                        }
                                    }
                                }
                                i6 = 2;
                                i10 = 0;
                                c6 = '[';
                            }
                        }
                    }
                }
                this.f2814o = linkedHashMap;
            } else if ("[V4 Styles]".equalsIgnoreCase(h6)) {
                ke.b.y("SsaDecoder", "[V4 Styles] are not supported");
            } else if ("[Events]".equalsIgnoreCase(h6)) {
                return;
            }
        }
    }
}
