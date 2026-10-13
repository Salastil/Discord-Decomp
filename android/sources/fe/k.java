package fe;

import android.text.TextUtils;
import app.rive.runtime.kotlin.fonts.Fonts;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.uimanager.ViewProps;
import e4.m;
import hc.g1;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import ke.w;

/* loaded from: classes3.dex */
public final class k extends wd.d {

    /* renamed from: m, reason: collision with root package name */
    public final w f8540m = new w();

    /* renamed from: n, reason: collision with root package name */
    public final c f8541n = new c();

    /* JADX WARN: Code restructure failed: missing block: B:198:0x03a0, code lost:
    
        r2.addAll(r12);
     */
    /* JADX WARN: Code restructure failed: missing block: B:225:0x010d, code lost:
    
        if (")".equals(fe.c.b(r11, r6)) == false) goto L37;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v12 */
    /* JADX WARN: Type inference failed for: r1v13 */
    /* JADX WARN: Type inference failed for: r1v15 */
    /* JADX WARN: Type inference failed for: r1v18 */
    /* JADX WARN: Type inference failed for: r1v31 */
    /* JADX WARN: Type inference failed for: r1v32 */
    /* JADX WARN: Type inference failed for: r1v33, types: [int] */
    /* JADX WARN: Type inference failed for: r1v34 */
    /* JADX WARN: Type inference failed for: r1v48 */
    /* JADX WARN: Type inference failed for: r1v50 */
    /* JADX WARN: Type inference failed for: r4v31, types: [java.util.regex.Matcher] */
    /* JADX WARN: Type inference failed for: r7v26, types: [java.util.regex.Matcher] */
    /* JADX WARN: Type inference failed for: r9v0 */
    /* JADX WARN: Type inference failed for: r9v1, types: [int] */
    /* JADX WARN: Type inference failed for: r9v3 */
    @Override // wd.d
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final wd.e e(byte[] bArr, int i5, boolean z5) {
        e eVar;
        String str;
        ?? r12;
        String sb2;
        int i6;
        char c6;
        k kVar = this;
        w wVar = kVar.f8540m;
        wVar.D(bArr, i5);
        ArrayList arrayList = new ArrayList();
        try {
            l.d(wVar);
            while (!TextUtils.isEmpty(wVar.h(ei.d.f8100c))) {
            }
            ArrayList arrayList2 = new ArrayList();
            while (true) {
                boolean z6 = false;
                int i10 = -1;
                int i11 = 0;
                char c8 = 65535;
                while (true) {
                    ?? r92 = 1;
                    if (c8 == 65535) {
                        i11 = wVar.f13363b;
                        String h6 = wVar.h(ei.d.f8100c);
                        c8 = h6 == null ? (char) 0 : "STYLE".equals(h6) ? (char) 2 : h6.startsWith("NOTE") ? (char) 1 : (char) 3;
                    } else {
                        wVar.F(i11);
                        if (c8 == 0) {
                            return new m(arrayList2);
                        }
                        if (c8 == 1) {
                            while (!TextUtils.isEmpty(wVar.h(ei.d.f8100c))) {
                            }
                        } else {
                            String str2 = null;
                            if (c8 == 2) {
                                if (!arrayList2.isEmpty()) {
                                    throw new wd.g("A style block was found after the first cue.");
                                }
                                wVar.h(ei.d.f8100c);
                                c cVar = kVar.f8541n;
                                w wVar2 = cVar.a;
                                StringBuilder sb3 = cVar.f8505b;
                                sb3.setLength(0);
                                int i12 = wVar.f13363b;
                                while (!TextUtils.isEmpty(wVar.h(ei.d.f8100c))) {
                                }
                                wVar2.D(wVar.a, wVar.f13363b);
                                wVar2.F(i12);
                                ArrayList arrayList3 = new ArrayList();
                                while (true) {
                                    c.c(wVar2);
                                    if (wVar2.a() >= 5 && "::cue".equals(wVar2.s(5, ei.d.f8100c))) {
                                        int i13 = wVar2.f13363b;
                                        String b10 = c.b(wVar2, sb3);
                                        if (b10 != null) {
                                            if ("{".equals(b10)) {
                                                wVar2.F(i13);
                                                str = "";
                                            } else if ("(".equals(b10)) {
                                                int i14 = wVar2.f13363b;
                                                int i15 = wVar2.f13364c;
                                                boolean z7 = z6 ? 1 : 0;
                                                while (i14 < i15 && z7 == 0) {
                                                    int i16 = i14 + 1;
                                                    z7 = ((char) wVar2.a[i14]) == ')' ? r92 : z6 ? 1 : 0;
                                                    i14 = i16;
                                                }
                                                str = wVar2.s((i14 - 1) - wVar2.f13363b, ei.d.f8100c).trim();
                                            } else {
                                                str = str2;
                                            }
                                            if (str == null && "{".equals(c.b(wVar2, sb3))) {
                                                d dVar = new d();
                                                dVar.a = "";
                                                dVar.f8506b = "";
                                                dVar.f8507c = Collections.EMPTY_SET;
                                                dVar.f8508d = "";
                                                dVar.f8509e = str2;
                                                dVar.f8511g = z6;
                                                dVar.f8513i = z6;
                                                dVar.j = i10;
                                                dVar.k = i10;
                                                dVar.f8514l = i10;
                                                dVar.f8515m = i10;
                                                dVar.f8516n = i10;
                                                dVar.f8518p = i10;
                                                dVar.f8519q = z6;
                                                if (!"".equals(str)) {
                                                    int indexOf = str.indexOf(91);
                                                    if (indexOf != i10) {
                                                        ?? matcher = c.f8503c.matcher(str.substring(indexOf));
                                                        if (matcher.matches()) {
                                                            String group = matcher.group(r92);
                                                            group.getClass();
                                                            dVar.f8508d = group;
                                                        }
                                                        str = str.substring(z6 ? 1 : 0, indexOf);
                                                    }
                                                    int i17 = d0.a;
                                                    String[] split = str.split("\\.", i10);
                                                    String str3 = split[z6 ? 1 : 0];
                                                    int indexOf2 = str3.indexOf(35);
                                                    if (indexOf2 != i10) {
                                                        dVar.f8506b = str3.substring(z6 ? 1 : 0, indexOf2);
                                                        dVar.a = str3.substring(indexOf2 + 1);
                                                    } else {
                                                        dVar.f8506b = str3;
                                                    }
                                                    if (split.length > r92) {
                                                        int length = split.length;
                                                        ke.b.g(length <= split.length ? r92 : z6 ? 1 : 0);
                                                        dVar.f8507c = new HashSet(Arrays.asList((String[]) Arrays.copyOfRange(split, (int) r92, length)));
                                                    }
                                                }
                                                boolean z8 = z6 ? 1 : 0;
                                                String str4 = null;
                                                boolean z10 = r92;
                                                while (z8 == 0) {
                                                    int i18 = wVar2.f13363b;
                                                    str4 = c.b(wVar2, sb3);
                                                    boolean z11 = (str4 == null || "}".equals(str4)) ? z10 : z6;
                                                    if (z11 == 0) {
                                                        wVar2.F(i18);
                                                        c.c(wVar2);
                                                        String a = c.a(wVar2, sb3);
                                                        if (!"".equals(a) && ":".equals(c.b(wVar2, sb3))) {
                                                            c.c(wVar2);
                                                            StringBuilder sb4 = new StringBuilder();
                                                            boolean z12 = false;
                                                            while (true) {
                                                                if (z12) {
                                                                    sb2 = sb4.toString();
                                                                } else {
                                                                    int i19 = wVar2.f13363b;
                                                                    boolean z13 = z12;
                                                                    String b11 = c.b(wVar2, sb3);
                                                                    if (b11 == null) {
                                                                        sb2 = null;
                                                                    } else if ("}".equals(b11) || ";".equals(b11)) {
                                                                        wVar2.F(i19);
                                                                        z12 = true;
                                                                    } else {
                                                                        sb4.append(b11);
                                                                        z12 = z13;
                                                                    }
                                                                }
                                                            }
                                                            if (sb2 != null && !"".equals(sb2)) {
                                                                int i20 = wVar2.f13363b;
                                                                String b12 = c.b(wVar2, sb3);
                                                                if (!";".equals(b12)) {
                                                                    if ("}".equals(b12)) {
                                                                        wVar2.F(i20);
                                                                    }
                                                                }
                                                                if (ViewProps.COLOR.equals(a)) {
                                                                    i6 = 1;
                                                                    dVar.f8510f = ke.c.a(sb2, true);
                                                                    dVar.f8511g = true;
                                                                } else {
                                                                    i6 = 1;
                                                                    if ("background-color".equals(a)) {
                                                                        dVar.f8512h = ke.c.a(sb2, true);
                                                                        dVar.f8513i = true;
                                                                    } else {
                                                                        if ("ruby-position".equals(a)) {
                                                                            if ("over".equals(sb2)) {
                                                                                dVar.f8518p = 1;
                                                                            } else if ("under".equals(sb2)) {
                                                                                dVar.f8518p = 2;
                                                                                r12 = 1;
                                                                                z10 = r12;
                                                                                z8 = z11;
                                                                                z6 = false;
                                                                            }
                                                                        } else if ("text-combine-upright".equals(a)) {
                                                                            dVar.f8519q = "all".equals(sb2) || sb2.startsWith("digits");
                                                                        } else if ("text-decoration".equals(a)) {
                                                                            if ("underline".equals(sb2)) {
                                                                                i6 = 1;
                                                                                dVar.k = 1;
                                                                            }
                                                                        } else if ("font-family".equals(a)) {
                                                                            dVar.f8509e = tn.g.x(sb2);
                                                                        } else if (!"font-weight".equals(a)) {
                                                                            i6 = 1;
                                                                            if ("font-style".equals(a)) {
                                                                                if (Fonts.Font.STYLE_ITALIC.equals(sb2)) {
                                                                                    dVar.f8515m = 1;
                                                                                }
                                                                            } else if ("font-size".equals(a)) {
                                                                                ?? matcher2 = c.f8504d.matcher(tn.g.x(sb2));
                                                                                if (matcher2.matches()) {
                                                                                    String group2 = matcher2.group(2);
                                                                                    group2.getClass();
                                                                                    switch (group2.hashCode()) {
                                                                                        case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                                                                            if (group2.equals("%")) {
                                                                                                c6 = 0;
                                                                                                break;
                                                                                            }
                                                                                            break;
                                                                                        case 3240:
                                                                                            if (group2.equals("em")) {
                                                                                                c6 = 1;
                                                                                                break;
                                                                                            }
                                                                                            break;
                                                                                        case 3592:
                                                                                            if (group2.equals("px")) {
                                                                                                c6 = 2;
                                                                                                break;
                                                                                            }
                                                                                            break;
                                                                                    }
                                                                                    c6 = 65535;
                                                                                    switch (c6) {
                                                                                        case 0:
                                                                                            r12 = 1;
                                                                                            dVar.f8516n = 3;
                                                                                            break;
                                                                                        case 1:
                                                                                            r12 = 1;
                                                                                            dVar.f8516n = 2;
                                                                                            break;
                                                                                        case 2:
                                                                                            r12 = 1;
                                                                                            dVar.f8516n = 1;
                                                                                            break;
                                                                                        default:
                                                                                            throw new IllegalStateException();
                                                                                    }
                                                                                    String group3 = matcher2.group(r12);
                                                                                    group3.getClass();
                                                                                    dVar.f8517o = Float.parseFloat(group3);
                                                                                    z10 = r12;
                                                                                    z8 = z11;
                                                                                    z6 = false;
                                                                                } else {
                                                                                    ke.b.N("WebvttCssParser", "Invalid font-size: '" + sb2 + "'.");
                                                                                }
                                                                            }
                                                                        } else if ("bold".equals(sb2)) {
                                                                            i6 = 1;
                                                                            dVar.f8514l = 1;
                                                                        }
                                                                        z10 = r12;
                                                                        z8 = z11;
                                                                        z6 = false;
                                                                    }
                                                                }
                                                                r12 = i6;
                                                                z10 = r12;
                                                                z8 = z11;
                                                                z6 = false;
                                                            }
                                                            r12 = 1;
                                                            z10 = r12;
                                                            z8 = z11;
                                                            z6 = false;
                                                        }
                                                    }
                                                    r12 = z10;
                                                    z10 = r12;
                                                    z8 = z11;
                                                    z6 = false;
                                                }
                                                boolean z14 = z10;
                                                if ("}".equals(str4)) {
                                                    arrayList3.add(dVar);
                                                }
                                                r92 = z14;
                                                z6 = false;
                                                i10 = -1;
                                                str2 = null;
                                            }
                                        }
                                    }
                                    str = str2;
                                    if (str == null) {
                                    }
                                }
                            } else if (c8 == 3) {
                                Pattern pattern = j.a;
                                Charset charset = ei.d.f8100c;
                                String h7 = wVar.h(charset);
                                if (h7 == null) {
                                    eVar = null;
                                } else {
                                    Pattern pattern2 = j.a;
                                    Matcher matcher3 = pattern2.matcher(h7);
                                    if (matcher3.matches()) {
                                        eVar = j.d(null, matcher3, wVar, arrayList);
                                    } else {
                                        eVar = null;
                                        String h10 = wVar.h(charset);
                                        if (h10 != null) {
                                            Matcher matcher4 = pattern2.matcher(h10);
                                            if (matcher4.matches()) {
                                                eVar = j.d(h7.trim(), matcher4, wVar, arrayList);
                                            }
                                        }
                                    }
                                }
                                if (eVar != null) {
                                    arrayList2.add(eVar);
                                }
                            }
                            kVar = this;
                        }
                    }
                }
            }
        } catch (g1 e9) {
            throw new wd.g(e9);
        }
    }
}
