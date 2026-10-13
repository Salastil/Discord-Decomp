package de;

import android.text.Layout;
import android.text.TextUtils;
import app.rive.runtime.kotlin.fonts.Fonts;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import fi.d1;
import fi.h0;
import fi.i0;
import fi.p;
import fi.x0;
import fi.z0;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;
import s4.h;

/* loaded from: classes3.dex */
public final class d extends wd.d {

    /* renamed from: n, reason: collision with root package name */
    public static final Pattern f7496n = Pattern.compile("^([0-9][0-9]+):([0-9][0-9]):([0-9][0-9])(?:(\\.[0-9]+)|:([0-9][0-9])(?:\\.([0-9]+))?)?$");

    /* renamed from: o, reason: collision with root package name */
    public static final Pattern f7497o = Pattern.compile("^([0-9]+(?:\\.[0-9]+)?)(h|m|s|ms|f|t)$");

    /* renamed from: p, reason: collision with root package name */
    public static final Pattern f7498p = Pattern.compile("^(([0-9]*.)?[0-9]+)(px|em|%)$");

    /* renamed from: q, reason: collision with root package name */
    public static final Pattern f7499q = Pattern.compile("^([-+]?\\d+\\.?\\d*?)%$");

    /* renamed from: r, reason: collision with root package name */
    public static final Pattern f7500r = Pattern.compile("^(\\d+\\.?\\d*?)% (\\d+\\.?\\d*?)%$");

    /* renamed from: s, reason: collision with root package name */
    public static final Pattern f7501s = Pattern.compile("^(\\d+\\.?\\d*?)px (\\d+\\.?\\d*?)px$");

    /* renamed from: t, reason: collision with root package name */
    public static final Pattern f7502t = Pattern.compile("^(\\d+) (\\d+)$");

    /* renamed from: u, reason: collision with root package name */
    public static final c f7503u = new c(1, 1, 30.0f);

    /* renamed from: v, reason: collision with root package name */
    public static final p9.d f7504v = new p9.d(15, 2);

    /* renamed from: m, reason: collision with root package name */
    public final XmlPullParserFactory f7505m;

    public d() {
        try {
            XmlPullParserFactory newInstance = XmlPullParserFactory.newInstance();
            this.f7505m = newInstance;
            newInstance.setNamespaceAware(true);
        } catch (XmlPullParserException e9) {
            throw new RuntimeException("Couldn't create XmlPullParserFactory instance", e9);
        }
    }

    public static g h(g gVar) {
        return gVar == null ? new g() : gVar;
    }

    public static boolean i(String str) {
        return str.equals("tt") || str.equals("head") || str.equals("body") || str.equals("div") || str.equals("p") || str.equals("span") || str.equals("br") || str.equals("style") || str.equals("styling") || str.equals("layout") || str.equals("region") || str.equals("metadata") || str.equals("image") || str.equals("data") || str.equals("information");
    }

    public static p9.d j(XmlPullParser xmlPullParser, p9.d dVar) {
        String attributeValue = xmlPullParser.getAttributeValue("http://www.w3.org/ns/ttml#parameter", "cellResolution");
        if (attributeValue == null) {
            return dVar;
        }
        Matcher matcher = f7502t.matcher(attributeValue);
        if (!matcher.matches()) {
            ke.b.N("TtmlDecoder", "Ignoring malformed cell resolution: ".concat(attributeValue));
            return dVar;
        }
        try {
            String group = matcher.group(1);
            group.getClass();
            int parseInt = Integer.parseInt(group);
            String group2 = matcher.group(2);
            group2.getClass();
            int parseInt2 = Integer.parseInt(group2);
            if (parseInt != 0 && parseInt2 != 0) {
                return new p9.d(parseInt2, 2);
            }
            throw new wd.g("Invalid cell resolution " + parseInt + " " + parseInt2);
        } catch (NumberFormatException unused) {
            ke.b.N("TtmlDecoder", "Ignoring malformed cell resolution: ".concat(attributeValue));
            return dVar;
        }
    }

    public static void k(String str, g gVar) {
        Matcher matcher;
        String group;
        int i5 = d0.a;
        String[] split = str.split("\\s+", -1);
        int length = split.length;
        Pattern pattern = f7498p;
        if (length == 1) {
            matcher = pattern.matcher(str);
        } else {
            if (split.length != 2) {
                throw new wd.g(k0.d.m(new StringBuilder("Invalid number of entries for fontSize: "), split.length, "."));
            }
            matcher = pattern.matcher(split[1]);
            ke.b.N("TtmlDecoder", "Multiple values in fontSize attribute. Picking the second value for vertical font size and ignoring the first.");
        }
        if (!matcher.matches()) {
            throw new wd.g(h.f("Invalid expression for fontSize: '", str, "'."));
        }
        group = matcher.group(3);
        group.getClass();
        switch (group) {
            case "%":
                gVar.j = 3;
                break;
            case "em":
                gVar.j = 2;
                break;
            case "px":
                gVar.j = 1;
                break;
            default:
                throw new wd.g(h.f("Invalid unit for fontSize: '", group, "'."));
        }
        String group2 = matcher.group(1);
        group2.getClass();
        gVar.k = Float.parseFloat(group2);
    }

    public static c l(XmlPullParser xmlPullParser) {
        float f2;
        String attributeValue = xmlPullParser.getAttributeValue("http://www.w3.org/ns/ttml#parameter", "frameRate");
        int parseInt = attributeValue != null ? Integer.parseInt(attributeValue) : 30;
        String attributeValue2 = xmlPullParser.getAttributeValue("http://www.w3.org/ns/ttml#parameter", "frameRateMultiplier");
        if (attributeValue2 != null) {
            int i5 = d0.a;
            if (attributeValue2.split(" ", -1).length != 2) {
                throw new wd.g("frameRateMultiplier doesn't have 2 parts");
            }
            f2 = Integer.parseInt(r2[0]) / Integer.parseInt(r2[1]);
        } else {
            f2 = 1.0f;
        }
        c cVar = f7503u;
        int i6 = cVar.f7494b;
        String attributeValue3 = xmlPullParser.getAttributeValue("http://www.w3.org/ns/ttml#parameter", "subFrameRate");
        if (attributeValue3 != null) {
            i6 = Integer.parseInt(attributeValue3);
        }
        int i10 = cVar.f7495c;
        String attributeValue4 = xmlPullParser.getAttributeValue("http://www.w3.org/ns/ttml#parameter", "tickRate");
        if (attributeValue4 != null) {
            i10 = Integer.parseInt(attributeValue4);
        }
        return new c(i6, i10, parseInt * f2);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0225  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x019b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void m(XmlPullParser xmlPullParser, HashMap hashMap, p9.d dVar, c5.e eVar, HashMap hashMap2, HashMap hashMap3) {
        String w5;
        float parseFloat;
        float parseFloat2;
        float parseFloat3;
        float parseFloat4;
        p9.d dVar2;
        float f2;
        float f10;
        int i5;
        String w6;
        int i6;
        f fVar;
        char c6;
        String[] split;
        do {
            xmlPullParser.next();
            if (ke.b.C(xmlPullParser, "style")) {
                String w7 = ke.b.w(xmlPullParser, "style");
                g o6 = o(xmlPullParser, new g());
                if (w7 != null) {
                    String trim = w7.trim();
                    if (trim.isEmpty()) {
                        split = new String[0];
                    } else {
                        int i10 = d0.a;
                        split = trim.split("\\s+", -1);
                    }
                    for (String str : split) {
                        o6.a((g) hashMap.get(str));
                    }
                }
                String str2 = o6.f7532l;
                if (str2 != null) {
                    hashMap.put(str2, o6);
                }
            } else if (ke.b.C(xmlPullParser, "region")) {
                String w10 = ke.b.w(xmlPullParser, StackTraceHelper.ID_KEY);
                if (w10 != null) {
                    String w11 = ke.b.w(xmlPullParser, "origin");
                    if (w11 != null) {
                        Pattern pattern = f7500r;
                        Matcher matcher = pattern.matcher(w11);
                        Pattern pattern2 = f7501s;
                        Matcher matcher2 = pattern2.matcher(w11);
                        int i11 = 2;
                        if (matcher.matches()) {
                            try {
                                String group = matcher.group(1);
                                group.getClass();
                                parseFloat = Float.parseFloat(group) / 100.0f;
                                String group2 = matcher.group(2);
                                group2.getClass();
                                parseFloat2 = Float.parseFloat(group2) / 100.0f;
                            } catch (NumberFormatException unused) {
                                ke.b.N("TtmlDecoder", "Ignoring region with malformed origin: ".concat(w11));
                            }
                        } else if (!matcher2.matches()) {
                            ke.b.N("TtmlDecoder", "Ignoring region with unsupported origin: ".concat(w11));
                        } else if (eVar == null) {
                            ke.b.N("TtmlDecoder", "Ignoring region with missing tts:extent: ".concat(w11));
                        } else {
                            try {
                                String group3 = matcher2.group(1);
                                group3.getClass();
                                int parseInt = Integer.parseInt(group3);
                                String group4 = matcher2.group(2);
                                group4.getClass();
                                float f11 = parseInt / eVar.f3328b;
                                parseFloat2 = Integer.parseInt(group4) / eVar.f3329c;
                                parseFloat = f11;
                            } catch (NumberFormatException unused2) {
                                ke.b.N("TtmlDecoder", "Ignoring region with malformed origin: ".concat(w11));
                            }
                        }
                        String w12 = ke.b.w(xmlPullParser, "extent");
                        if (w12 != null) {
                            Matcher matcher3 = pattern.matcher(w12);
                            Matcher matcher4 = pattern2.matcher(w12);
                            if (matcher3.matches()) {
                                try {
                                    String group5 = matcher3.group(1);
                                    group5.getClass();
                                    parseFloat3 = Float.parseFloat(group5) / 100.0f;
                                    String group6 = matcher3.group(2);
                                    group6.getClass();
                                    parseFloat4 = Float.parseFloat(group6) / 100.0f;
                                } catch (NumberFormatException unused3) {
                                    ke.b.N("TtmlDecoder", "Ignoring region with malformed extent: ".concat(w11));
                                }
                            } else if (!matcher4.matches()) {
                                ke.b.N("TtmlDecoder", "Ignoring region with unsupported extent: ".concat(w11));
                            } else if (eVar == null) {
                                ke.b.N("TtmlDecoder", "Ignoring region with missing tts:extent: ".concat(w11));
                            } else {
                                try {
                                    String group7 = matcher4.group(1);
                                    group7.getClass();
                                    int parseInt2 = Integer.parseInt(group7);
                                    String group8 = matcher4.group(2);
                                    group8.getClass();
                                    parseFloat3 = parseInt2 / eVar.f3328b;
                                    parseFloat4 = Integer.parseInt(group8) / eVar.f3329c;
                                } catch (NumberFormatException unused4) {
                                    ke.b.N("TtmlDecoder", "Ignoring region with malformed extent: ".concat(w11));
                                }
                            }
                            float f12 = parseFloat3;
                            String w13 = ke.b.w(xmlPullParser, "displayAlign");
                            if (w13 != null) {
                                String x5 = tn.g.x(w13);
                                x5.getClass();
                                if (x5.equals("center")) {
                                    dVar2 = dVar;
                                    f2 = parseFloat2 + (parseFloat4 / 2.0f);
                                    f10 = parseFloat;
                                    i5 = 1;
                                } else if (x5.equals("after")) {
                                    dVar2 = dVar;
                                    f2 = parseFloat2 + parseFloat4;
                                    f10 = parseFloat;
                                    i5 = 2;
                                }
                                float f13 = 1.0f / dVar2.f16329e;
                                w6 = ke.b.w(xmlPullParser, "writingMode");
                                if (w6 != null) {
                                    String x10 = tn.g.x(w6);
                                    x10.getClass();
                                    switch (x10.hashCode()) {
                                        case 3694:
                                            if (x10.equals("tb")) {
                                                c6 = 0;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3553396:
                                            if (x10.equals("tblr")) {
                                                c6 = 1;
                                                break;
                                            }
                                            c6 = 65535;
                                            break;
                                        case 3553576:
                                            if (x10.equals("tbrl")) {
                                                c6 = 2;
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
                                            i6 = i11;
                                            break;
                                        case 2:
                                            i6 = 1;
                                            break;
                                    }
                                    fVar = new f(w10, f10, f2, 0, i5, f12, parseFloat4, 1, f13, i6);
                                    if (fVar != null) {
                                        hashMap2.put(fVar.a, fVar);
                                    }
                                }
                                i11 = Integer.MIN_VALUE;
                                i6 = i11;
                                fVar = new f(w10, f10, f2, 0, i5, f12, parseFloat4, 1, f13, i6);
                                if (fVar != null) {
                                }
                            }
                            dVar2 = dVar;
                            f2 = parseFloat2;
                            f10 = parseFloat;
                            i5 = 0;
                            float f132 = 1.0f / dVar2.f16329e;
                            w6 = ke.b.w(xmlPullParser, "writingMode");
                            if (w6 != null) {
                            }
                            i11 = Integer.MIN_VALUE;
                            i6 = i11;
                            fVar = new f(w10, f10, f2, 0, i5, f12, parseFloat4, 1, f132, i6);
                            if (fVar != null) {
                            }
                        } else {
                            ke.b.N("TtmlDecoder", "Ignoring region without an extent");
                        }
                    } else {
                        ke.b.N("TtmlDecoder", "Ignoring region without an origin");
                    }
                    fVar = null;
                    if (fVar != null) {
                    }
                }
                fVar = null;
                if (fVar != null) {
                }
            } else if (ke.b.C(xmlPullParser, "metadata")) {
                do {
                    xmlPullParser.next();
                    if (ke.b.C(xmlPullParser, "image") && (w5 = ke.b.w(xmlPullParser, StackTraceHelper.ID_KEY)) != null) {
                        hashMap3.put(w5, xmlPullParser.nextText());
                    }
                } while (!ke.b.B(xmlPullParser, "metadata"));
            }
        } while (!ke.b.B(xmlPullParser, "head"));
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static e n(XmlPullParser xmlPullParser, e eVar, HashMap hashMap, c cVar) {
        long j;
        char c6;
        String[] split;
        int attributeCount = xmlPullParser.getAttributeCount();
        String[] strArr = null;
        g o6 = o(xmlPullParser, null);
        String str = null;
        String str2 = "";
        long j5 = -9223372036854775807L;
        long j7 = -9223372036854775807L;
        long j10 = -9223372036854775807L;
        for (int i5 = 0; i5 < attributeCount; i5++) {
            String attributeName = xmlPullParser.getAttributeName(i5);
            String attributeValue = xmlPullParser.getAttributeValue(i5);
            attributeName.getClass();
            switch (attributeName.hashCode()) {
                case -934795532:
                    if (attributeName.equals("region")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 99841:
                    if (attributeName.equals("dur")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 100571:
                    if (attributeName.equals(ViewProps.END)) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 93616297:
                    if (attributeName.equals("begin")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 109780401:
                    if (attributeName.equals("style")) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1292595405:
                    if (attributeName.equals("backgroundImage")) {
                        c6 = 5;
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
                    if (!hashMap.containsKey(attributeValue)) {
                        break;
                    } else {
                        str2 = attributeValue;
                        continue;
                    }
                case 1:
                    j10 = p(attributeValue, cVar);
                    break;
                case 2:
                    j7 = p(attributeValue, cVar);
                    break;
                case 3:
                    j5 = p(attributeValue, cVar);
                    break;
                case 4:
                    String trim = attributeValue.trim();
                    if (trim.isEmpty()) {
                        split = new String[0];
                    } else {
                        int i6 = d0.a;
                        split = trim.split("\\s+", -1);
                    }
                    if (split.length > 0) {
                        strArr = split;
                        break;
                    }
                    break;
                case 5:
                    if (attributeValue.startsWith("#")) {
                        str = attributeValue.substring(1);
                        break;
                    }
                    break;
            }
        }
        if (eVar != null) {
            long j11 = eVar.f7508d;
            if (j11 != -9223372036854775807L) {
                if (j5 != -9223372036854775807L) {
                    j5 += j11;
                }
                if (j7 != -9223372036854775807L) {
                    j7 += j11;
                }
            }
        }
        if (j7 == -9223372036854775807L) {
            if (j10 != -9223372036854775807L) {
                j7 = j5 + j10;
            } else if (eVar != null) {
                long j12 = eVar.f7509e;
                if (j12 != -9223372036854775807L) {
                    j = j12;
                    return new e(xmlPullParser.getName(), null, j5, j, o6, strArr, str2, str, eVar);
                }
            }
        }
        j = j7;
        return new e(xmlPullParser.getName(), null, j5, j, o6, strArr, str2, str, eVar);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:109:0x02a7  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0202  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0232  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0288  */
    /* JADX WARN: Type inference failed for: r9v1 */
    /* JADX WARN: Type inference failed for: r9v2 */
    /* JADX WARN: Type inference failed for: r9v3 */
    /* JADX WARN: Type inference failed for: r9v4 */
    /* JADX WARN: Type inference failed for: r9v5 */
    /* JADX WARN: Type inference failed for: r9v6 */
    /* JADX WARN: Type inference failed for: r9v7 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static g o(XmlPullParser xmlPullParser, g gVar) {
        char c6;
        ?? r92;
        boolean z5;
        char c8;
        int i5;
        z0 k;
        int i6;
        int hashCode;
        int i10;
        b bVar;
        int i11;
        char c10;
        int attributeCount = xmlPullParser.getAttributeCount();
        g gVar2 = gVar;
        for (int i12 = 0; i12 < attributeCount; i12++) {
            String attributeValue = xmlPullParser.getAttributeValue(i12);
            String attributeName = xmlPullParser.getAttributeName(i12);
            attributeName.getClass();
            switch (attributeName.hashCode()) {
                case -1550943582:
                    if (attributeName.equals(ViewProps.FONT_STYLE)) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -1224696685:
                    if (attributeName.equals(ViewProps.FONT_FAMILY)) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -1065511464:
                    if (attributeName.equals(ViewProps.TEXT_ALIGN)) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -879295043:
                    if (attributeName.equals("textDecoration")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -734428249:
                    if (attributeName.equals(ViewProps.FONT_WEIGHT)) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3355:
                    if (attributeName.equals(StackTraceHelper.ID_KEY)) {
                        c6 = 5;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3511770:
                    if (attributeName.equals("ruby")) {
                        c6 = 6;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 94842723:
                    if (attributeName.equals(ViewProps.COLOR)) {
                        c6 = 7;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 109403361:
                    if (attributeName.equals("shear")) {
                        c6 = '\b';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 110138194:
                    if (attributeName.equals("textCombine")) {
                        c6 = '\t';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 365601008:
                    if (attributeName.equals(ViewProps.FONT_SIZE)) {
                        c6 = '\n';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 921125321:
                    if (attributeName.equals("textEmphasis")) {
                        c6 = 11;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1115953443:
                    if (attributeName.equals("rubyPosition")) {
                        c6 = '\f';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1287124693:
                    if (attributeName.equals(ViewProps.BACKGROUND_COLOR)) {
                        c6 = '\r';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1754920356:
                    if (attributeName.equals("multiRowAlign")) {
                        c6 = 14;
                        break;
                    }
                    c6 = 65535;
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            Layout.Alignment alignment = null;
            switch (c6) {
                case 0:
                    gVar2 = h(gVar2);
                    gVar2.f7531i = Fonts.Font.STYLE_ITALIC.equalsIgnoreCase(attributeValue) ? 1 : 0;
                    break;
                case 1:
                    gVar2 = h(gVar2);
                    gVar2.a = attributeValue;
                    break;
                case 2:
                    gVar2 = h(gVar2);
                    String x5 = tn.g.x(attributeValue);
                    x5.getClass();
                    switch (x5.hashCode()) {
                        case -1364013995:
                            if (x5.equals("center")) {
                                r92 = false;
                                break;
                            }
                            r92 = -1;
                            break;
                        case 100571:
                            if (x5.equals(ViewProps.END)) {
                                r92 = true;
                                break;
                            }
                            r92 = -1;
                            break;
                        case 3317767:
                            if (x5.equals(ViewProps.LEFT)) {
                                r92 = 2;
                                break;
                            }
                            r92 = -1;
                            break;
                        case 108511772:
                            if (x5.equals(ViewProps.RIGHT)) {
                                r92 = 3;
                                break;
                            }
                            r92 = -1;
                            break;
                        case 109757538:
                            if (x5.equals(ViewProps.START)) {
                                r92 = 4;
                                break;
                            }
                            r92 = -1;
                            break;
                        default:
                            r92 = -1;
                            break;
                    }
                    switch (r92) {
                        case 0:
                            alignment = Layout.Alignment.ALIGN_CENTER;
                            break;
                        case 1:
                        case 3:
                            alignment = Layout.Alignment.ALIGN_OPPOSITE;
                            break;
                        case 2:
                        case 4:
                            alignment = Layout.Alignment.ALIGN_NORMAL;
                            break;
                    }
                    gVar2.f7535o = alignment;
                    break;
                case 3:
                    String x10 = tn.g.x(attributeValue);
                    x10.getClass();
                    switch (x10.hashCode()) {
                        case -1461280213:
                            if (x10.equals("nounderline")) {
                                z5 = false;
                                break;
                            }
                            z5 = -1;
                            break;
                        case -1026963764:
                            if (x10.equals("underline")) {
                                z5 = true;
                                break;
                            }
                            z5 = -1;
                            break;
                        case 913457136:
                            if (x10.equals("nolinethrough")) {
                                z5 = 2;
                                break;
                            }
                            z5 = -1;
                            break;
                        case 1679736913:
                            if (x10.equals("linethrough")) {
                                z5 = 3;
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
                            gVar2 = h(gVar2);
                            gVar2.f7529g = 0;
                            break;
                        case true:
                            gVar2 = h(gVar2);
                            gVar2.f7529g = 1;
                            break;
                        case true:
                            gVar2 = h(gVar2);
                            gVar2.f7528f = 0;
                            break;
                        case true:
                            gVar2 = h(gVar2);
                            gVar2.f7528f = 1;
                            break;
                    }
                case 4:
                    gVar2 = h(gVar2);
                    gVar2.f7530h = "bold".equalsIgnoreCase(attributeValue) ? 1 : 0;
                    break;
                case 5:
                    if ("style".equals(xmlPullParser.getName())) {
                        gVar2 = h(gVar2);
                        gVar2.f7532l = attributeValue;
                        break;
                    } else {
                        break;
                    }
                case 6:
                    String x11 = tn.g.x(attributeValue);
                    x11.getClass();
                    switch (x11.hashCode()) {
                        case -618561360:
                            if (x11.equals("baseContainer")) {
                                c8 = 0;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case -410956671:
                            if (x11.equals("container")) {
                                c8 = 1;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case -250518009:
                            if (x11.equals("delimiter")) {
                                c8 = 2;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case -136074796:
                            if (x11.equals("textContainer")) {
                                c8 = 3;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3016401:
                            if (x11.equals("base")) {
                                c8 = 4;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3556653:
                            if (x11.equals("text")) {
                                c8 = 5;
                                break;
                            }
                            c8 = 65535;
                            break;
                        default:
                            c8 = 65535;
                            break;
                    }
                    switch (c8) {
                        case 0:
                        case 4:
                            gVar2 = h(gVar2);
                            gVar2.f7533m = 2;
                            break;
                        case 1:
                            gVar2 = h(gVar2);
                            gVar2.f7533m = 1;
                            break;
                        case 2:
                            gVar2 = h(gVar2);
                            gVar2.f7533m = 4;
                            break;
                        case 3:
                        case 5:
                            gVar2 = h(gVar2);
                            gVar2.f7533m = 3;
                            break;
                    }
                case 7:
                    gVar2 = h(gVar2);
                    try {
                        gVar2.f7524b = ke.c.a(attributeValue, false);
                        gVar2.f7525c = true;
                        break;
                    } catch (IllegalArgumentException unused) {
                        a3.e.x("Failed parsing color value: ", attributeValue, "TtmlDecoder");
                        break;
                    }
                case '\b':
                    g h6 = h(gVar2);
                    Matcher matcher = f7499q.matcher(attributeValue);
                    float f2 = Float.MAX_VALUE;
                    if (matcher.matches()) {
                        try {
                            String group = matcher.group(1);
                            group.getClass();
                            f2 = Math.min(100.0f, Math.max(-100.0f, Float.parseFloat(group)));
                        } catch (NumberFormatException e9) {
                            ke.b.O("TtmlDecoder", "Failed to parse shear: " + attributeValue, e9);
                        }
                    } else {
                        a3.e.x("Invalid value for shear: ", attributeValue, "TtmlDecoder");
                    }
                    h6.f7539s = f2;
                    gVar2 = h6;
                    break;
                case '\t':
                    String x12 = tn.g.x(attributeValue);
                    x12.getClass();
                    if (x12.equals("all")) {
                        gVar2 = h(gVar2);
                        gVar2.f7537q = 1;
                        break;
                    } else if (x12.equals("none")) {
                        gVar2 = h(gVar2);
                        gVar2.f7537q = 0;
                        break;
                    } else {
                        break;
                    }
                case '\n':
                    try {
                        gVar2 = h(gVar2);
                        k(attributeValue, gVar2);
                        break;
                    } catch (wd.g unused2) {
                        a3.e.x("Failed parsing fontSize value: ", attributeValue, "TtmlDecoder");
                        break;
                    }
                case 11:
                    gVar2 = h(gVar2);
                    Pattern pattern = b.f7487d;
                    if (attributeValue != null) {
                        String x13 = tn.g.x(attributeValue.trim());
                        if (!x13.isEmpty()) {
                            String[] split = TextUtils.split(x13, b.f7487d);
                            int length = split.length;
                            h0 k5 = length != 0 ? length != 1 ? h0.k(split.length, (Object[]) split.clone()) : new d1(split[0]) : x0.G;
                            String str = (String) p.h("outside", p.k(b.f7491h, k5));
                            int hashCode2 = str.hashCode();
                            if (hashCode2 != -1392885889) {
                                if (hashCode2 != -1106037339) {
                                    if (hashCode2 == 92734940 && str.equals("after")) {
                                        i5 = 2;
                                        k = p.k(b.f7488e, k5);
                                        if (k.isEmpty()) {
                                            z0 k7 = p.k(b.f7490g, k5);
                                            z0 k10 = p.k(b.f7489f, k5);
                                            if (k7.isEmpty() && k10.isEmpty()) {
                                                bVar = new b(-1, 0, i5);
                                            } else {
                                                String str2 = (String) p.h("filled", k7);
                                                int hashCode3 = str2.hashCode();
                                                if (hashCode3 == -1274499742) {
                                                    str2.equals("filled");
                                                } else if (hashCode3 == 3417674 && str2.equals("open")) {
                                                    i6 = 2;
                                                    String str3 = (String) p.h("circle", k10);
                                                    hashCode = str3.hashCode();
                                                    if (hashCode != -1360216880) {
                                                        str3.equals("circle");
                                                    } else if (hashCode != -905816648) {
                                                        if (hashCode == 99657 && str3.equals("dot")) {
                                                            i10 = 2;
                                                            bVar = new b(i10, i6, i5);
                                                        }
                                                    } else if (str3.equals("sesame")) {
                                                        i10 = 3;
                                                        bVar = new b(i10, i6, i5);
                                                    }
                                                    i10 = 1;
                                                    bVar = new b(i10, i6, i5);
                                                }
                                                i6 = 1;
                                                String str32 = (String) p.h("circle", k10);
                                                hashCode = str32.hashCode();
                                                if (hashCode != -1360216880) {
                                                }
                                                i10 = 1;
                                                bVar = new b(i10, i6, i5);
                                            }
                                        } else {
                                            String str4 = (String) new i0(k).next();
                                            int hashCode4 = str4.hashCode();
                                            if (hashCode4 == 3005871) {
                                                str4.equals("auto");
                                            } else if (hashCode4 == 3387192 && str4.equals("none")) {
                                                i11 = 0;
                                                bVar = new b(i11, 0, i5);
                                            }
                                            i11 = -1;
                                            bVar = new b(i11, 0, i5);
                                        }
                                    }
                                } else if (str.equals("outside")) {
                                    i5 = -2;
                                    k = p.k(b.f7488e, k5);
                                    if (k.isEmpty()) {
                                    }
                                }
                                gVar2.f7538r = bVar;
                                break;
                            } else {
                                str.equals("before");
                            }
                            i5 = 1;
                            k = p.k(b.f7488e, k5);
                            if (k.isEmpty()) {
                            }
                            gVar2.f7538r = bVar;
                        }
                    }
                    bVar = null;
                    gVar2.f7538r = bVar;
                    break;
                case '\f':
                    String x14 = tn.g.x(attributeValue);
                    x14.getClass();
                    if (x14.equals("before")) {
                        gVar2 = h(gVar2);
                        gVar2.f7534n = 1;
                        break;
                    } else if (x14.equals("after")) {
                        gVar2 = h(gVar2);
                        gVar2.f7534n = 2;
                        break;
                    } else {
                        break;
                    }
                case '\r':
                    gVar2 = h(gVar2);
                    try {
                        gVar2.f7526d = ke.c.a(attributeValue, false);
                        gVar2.f7527e = true;
                        break;
                    } catch (IllegalArgumentException unused3) {
                        a3.e.x("Failed parsing background value: ", attributeValue, "TtmlDecoder");
                        break;
                    }
                case 14:
                    gVar2 = h(gVar2);
                    String x15 = tn.g.x(attributeValue);
                    x15.getClass();
                    switch (x15.hashCode()) {
                        case -1364013995:
                            if (x15.equals("center")) {
                                c10 = 0;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 100571:
                            if (x15.equals(ViewProps.END)) {
                                c10 = 1;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3317767:
                            if (x15.equals(ViewProps.LEFT)) {
                                c10 = 2;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 108511772:
                            if (x15.equals(ViewProps.RIGHT)) {
                                c10 = 3;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 109757538:
                            if (x15.equals(ViewProps.START)) {
                                c10 = 4;
                                break;
                            }
                            c10 = 65535;
                            break;
                        default:
                            c10 = 65535;
                            break;
                    }
                    switch (c10) {
                        case 0:
                            alignment = Layout.Alignment.ALIGN_CENTER;
                            break;
                        case 1:
                        case 3:
                            alignment = Layout.Alignment.ALIGN_OPPOSITE;
                            break;
                        case 2:
                        case 4:
                            alignment = Layout.Alignment.ALIGN_NORMAL;
                            break;
                    }
                    gVar2.f7536p = alignment;
                    break;
            }
        }
        return gVar2;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x00aa, code lost:
    
        if (r13.equals("ms") == false) goto L21;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static long p(String str, c cVar) {
        double d6;
        double d7;
        Matcher matcher = f7496n.matcher(str);
        char c6 = 4;
        if (matcher.matches()) {
            String group = matcher.group(1);
            group.getClass();
            double parseLong = Long.parseLong(group) * 3600;
            matcher.group(2).getClass();
            double parseLong2 = parseLong + (Long.parseLong(r13) * 60);
            matcher.group(3).getClass();
            double parseLong3 = parseLong2 + Long.parseLong(r13);
            String group2 = matcher.group(4);
            return (long) ((parseLong3 + (group2 != null ? Double.parseDouble(group2) : 0.0d) + (matcher.group(5) != null ? Long.parseLong(r13) / cVar.a : 0.0d) + (matcher.group(6) != null ? (Long.parseLong(r13) / cVar.f7494b) / cVar.a : 0.0d)) * 1000000.0d);
        }
        Matcher matcher2 = f7497o.matcher(str);
        if (!matcher2.matches()) {
            throw new wd.g(a3.e.k("Malformed time expression: ", str));
        }
        String group3 = matcher2.group(1);
        group3.getClass();
        double parseDouble = Double.parseDouble(group3);
        String group4 = matcher2.group(2);
        group4.getClass();
        switch (group4.hashCode()) {
            case 102:
                if (group4.equals("f")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case 104:
                if (group4.equals("h")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case 109:
                if (group4.equals("m")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case 116:
                if (group4.equals("t")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case 3494:
                break;
            default:
                c6 = 65535;
                break;
        }
        switch (c6) {
            case 0:
                d6 = cVar.a;
                parseDouble /= d6;
                break;
            case 1:
                d7 = 3600.0d;
                break;
            case 2:
                d7 = 60.0d;
                break;
            case 3:
                d6 = cVar.f7495c;
                parseDouble /= d6;
                break;
            case 4:
                d6 = 1000.0d;
                parseDouble /= d6;
                break;
        }
        parseDouble *= d7;
        return (long) (parseDouble * 1000000.0d);
    }

    public static c5.e q(XmlPullParser xmlPullParser) {
        String w5 = ke.b.w(xmlPullParser, "extent");
        if (w5 == null) {
            return null;
        }
        Matcher matcher = f7501s.matcher(w5);
        if (!matcher.matches()) {
            ke.b.N("TtmlDecoder", "Ignoring non-pixel tts extent: ".concat(w5));
            return null;
        }
        try {
            String group = matcher.group(1);
            group.getClass();
            int parseInt = Integer.parseInt(group);
            String group2 = matcher.group(2);
            group2.getClass();
            return new c5.e(parseInt, Integer.parseInt(group2), 1);
        } catch (NumberFormatException unused) {
            ke.b.N("TtmlDecoder", "Ignoring malformed tts extent: ".concat(w5));
            return null;
        }
    }

    @Override // wd.d
    public final wd.e e(byte[] bArr, int i5, boolean z5) {
        try {
            XmlPullParser newPullParser = this.f7505m.newPullParser();
            HashMap hashMap = new HashMap();
            HashMap hashMap2 = new HashMap();
            HashMap hashMap3 = new HashMap();
            hashMap2.put("", new f("", -3.4028235E38f, -3.4028235E38f, Integer.MIN_VALUE, Integer.MIN_VALUE, -3.4028235E38f, -3.4028235E38f, Integer.MIN_VALUE, -3.4028235E38f, Integer.MIN_VALUE));
            c5.e eVar = null;
            newPullParser.setInput(new ByteArrayInputStream(bArr, 0, i5), null);
            ArrayDeque arrayDeque = new ArrayDeque();
            c cVar = f7503u;
            p9.d dVar = f7504v;
            int i6 = 0;
            c cVar2 = cVar;
            am.f fVar = null;
            p9.d dVar2 = dVar;
            for (int eventType = newPullParser.getEventType(); eventType != 1; eventType = newPullParser.getEventType()) {
                e eVar2 = (e) arrayDeque.peek();
                if (i6 == 0) {
                    String name = newPullParser.getName();
                    if (eventType == 2) {
                        if ("tt".equals(name)) {
                            cVar2 = l(newPullParser);
                            dVar2 = j(newPullParser, dVar);
                            eVar = q(newPullParser);
                        }
                        c cVar3 = cVar2;
                        p9.d dVar3 = dVar2;
                        if (i(name)) {
                            if ("head".equals(name)) {
                                m(newPullParser, hashMap, dVar3, eVar, hashMap2, hashMap3);
                            } else {
                                try {
                                    e n6 = n(newPullParser, eVar2, hashMap2, cVar3);
                                    arrayDeque.push(n6);
                                    if (eVar2 != null) {
                                        if (eVar2.f7515m == null) {
                                            eVar2.f7515m = new ArrayList();
                                        }
                                        eVar2.f7515m.add(n6);
                                    }
                                } catch (wd.g e9) {
                                    ke.b.O("TtmlDecoder", "Suppressing parser error", e9);
                                }
                            }
                            dVar2 = dVar3;
                            cVar2 = cVar3;
                        } else {
                            ke.b.y("TtmlDecoder", "Ignoring unsupported tag: " + newPullParser.getName());
                        }
                        i6++;
                        dVar2 = dVar3;
                        cVar2 = cVar3;
                    } else if (eventType == 4) {
                        eVar2.getClass();
                        e a = e.a(newPullParser.getText());
                        if (eVar2.f7515m == null) {
                            eVar2.f7515m = new ArrayList();
                        }
                        eVar2.f7515m.add(a);
                    } else if (eventType == 3) {
                        if (newPullParser.getName().equals("tt")) {
                            e eVar3 = (e) arrayDeque.peek();
                            eVar3.getClass();
                            fVar = new am.f(eVar3, hashMap, hashMap2, hashMap3);
                        }
                        arrayDeque.pop();
                    }
                } else if (eventType == 2) {
                    i6++;
                } else if (eventType == 3) {
                    i6--;
                }
                newPullParser.next();
            }
            if (fVar != null) {
                return fVar;
            }
            throw new wd.g("No TTML subtitles found");
        } catch (IOException e10) {
            throw new IllegalStateException("Unexpected error when reading input.", e10);
        } catch (XmlPullParserException e11) {
            throw new wd.g("Unable to decode source", e11);
        }
    }
}
