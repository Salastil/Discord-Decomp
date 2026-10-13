package rd;

import android.net.Uri;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Pair;
import android.util.Xml;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.google.android.exoplayer2.Format;
import fi.c0;
import fi.e0;
import fi.r0;
import hc.f0;
import hc.g1;
import ie.m0;
import java.io.ByteArrayOutputStream;
import java.util.ArrayList;
import java.util.List;
import java.util.UUID;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;
import org.webrtc.MediaStreamTrack;
import org.xml.sax.helpers.DefaultHandler;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;
import org.xmlpull.v1.XmlSerializer;

/* loaded from: classes3.dex */
public final class e extends DefaultHandler implements m0 {

    /* renamed from: e, reason: collision with root package name */
    public static final Pattern f17231e = Pattern.compile("(\\d+)(?:/(\\d+))?");

    /* renamed from: i, reason: collision with root package name */
    public static final Pattern f17232i = Pattern.compile("CC([1-4])=.*");

    /* renamed from: v, reason: collision with root package name */
    public static final Pattern f17233v = Pattern.compile("([1-9]|[1-5][0-9]|6[0-3])=.*");

    /* renamed from: w, reason: collision with root package name */
    public static final int[] f17234w = {-1, 1, 2, 3, 4, 5, 6, 8, 2, 3, 4, 7, 8, 24, 8, 12, 10, 12, 14, 12, 14};

    /* renamed from: d, reason: collision with root package name */
    public final XmlPullParserFactory f17235d;

    public e() {
        try {
            this.f17235d = XmlPullParserFactory.newInstance();
        } catch (XmlPullParserException e9) {
            throw new RuntimeException("Couldn't create XmlPullParserFactory instance", e9);
        }
    }

    public static long a(ArrayList arrayList, long j, long j5, int i5, long j7) {
        int i6;
        if (i5 >= 0) {
            i6 = i5 + 1;
        } else {
            int i10 = d0.a;
            i6 = (int) ((((j7 - j) + j5) - 1) / j5);
        }
        for (int i11 = 0; i11 < i6; i11++) {
            arrayList.add(new q(j, j5));
            j += j5;
        }
        return j;
    }

    public static void b(XmlPullParser xmlPullParser) {
        if (xmlPullParser.getEventType() == 2) {
            int i5 = 1;
            while (i5 != 0) {
                xmlPullParser.next();
                if (xmlPullParser.getEventType() == 2) {
                    i5++;
                } else if (xmlPullParser.getEventType() == 3) {
                    i5--;
                }
            }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:12:0x0081, code lost:
    
        if (r0 == 0) goto L97;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0085, code lost:
    
        r8 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00bd, code lost:
    
        if (r0.equals("fa01") == false) goto L59;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0108, code lost:
    
        if (r0 < 33) goto L45;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int c(XmlPullParser xmlPullParser) {
        char c6;
        int parseInt;
        String attributeValue = xmlPullParser.getAttributeValue(null, "schemeIdUri");
        if (attributeValue == null) {
            attributeValue = null;
        }
        attributeValue.getClass();
        int i5 = 6;
        char c8 = 3;
        int i6 = -1;
        switch (attributeValue.hashCode()) {
            case -2128649360:
                if (attributeValue.equals("urn:dts:dash:audio_channel_configuration:2012")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case -1352850286:
                if (attributeValue.equals("urn:mpeg:dash:23003:3:audio_channel_configuration:2011")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case -1138141449:
                if (attributeValue.equals("tag:dolby.com,2014:dash:audio_channel_configuration:2011")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case -986633423:
                if (attributeValue.equals("urn:mpeg:mpegB:cicp:ChannelConfiguration")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case -79006963:
                if (attributeValue.equals("tag:dts.com,2014:dash:audio_channel_configuration:2012")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case 312179081:
                if (attributeValue.equals("tag:dts.com,2018:uhd:audio_channel_configuration")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case 2036691300:
                if (attributeValue.equals("urn:dolby:dash:audio_channel_configuration:2011")) {
                    c6 = 6;
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
            case 4:
                String attributeValue2 = xmlPullParser.getAttributeValue(null, "value");
                parseInt = attributeValue2 == null ? -1 : Integer.parseInt(attributeValue2);
                if (parseInt > 0) {
                    break;
                }
                break;
            case 1:
                String attributeValue3 = xmlPullParser.getAttributeValue(null, "value");
                if (attributeValue3 != null) {
                    i6 = Integer.parseInt(attributeValue3);
                    break;
                }
                break;
            case 2:
            case 6:
                String attributeValue4 = xmlPullParser.getAttributeValue(null, "value");
                if (attributeValue4 != null) {
                    String x5 = tn.g.x(attributeValue4);
                    x5.getClass();
                    switch (x5.hashCode()) {
                        case 1596796:
                            if (x5.equals("4000")) {
                                c8 = 0;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 2937391:
                            if (x5.equals("a000")) {
                                c8 = 1;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3094035:
                            if (x5.equals("f801")) {
                                c8 = 2;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3133436:
                            break;
                        default:
                            c8 = 65535;
                            break;
                    }
                    switch (c8) {
                        case 0:
                            i5 = 1;
                            break;
                        case 1:
                            i5 = 2;
                            break;
                        case 3:
                            i5 = 8;
                            break;
                    }
                    i6 = i5;
                    break;
                }
                i5 = -1;
                i6 = i5;
            case 3:
                String attributeValue5 = xmlPullParser.getAttributeValue(null, "value");
                int parseInt2 = attributeValue5 == null ? -1 : Integer.parseInt(attributeValue5);
                if (parseInt2 >= 0) {
                    int[] iArr = f17234w;
                    if (parseInt2 < iArr.length) {
                        i6 = iArr[parseInt2];
                        break;
                    }
                }
                break;
            case 5:
                String attributeValue6 = xmlPullParser.getAttributeValue(null, "value");
                if (attributeValue6 != null) {
                    parseInt = Integer.bitCount(Integer.parseInt(attributeValue6, 16));
                    break;
                }
                break;
        }
        do {
            xmlPullParser.next();
        } while (!ke.b.B(xmlPullParser, "AudioChannelConfiguration"));
        return i6;
    }

    public static long d(XmlPullParser xmlPullParser, long j) {
        String attributeValue = xmlPullParser.getAttributeValue(null, "availabilityTimeOffset");
        return attributeValue == null ? j : "INF".equals(attributeValue) ? LongCompanionObject.MAX_VALUE : (long) (Float.parseFloat(attributeValue) * 1000000.0f);
    }

    public static ArrayList e(XmlPullParser xmlPullParser, ArrayList arrayList, boolean z5) {
        String attributeValue = xmlPullParser.getAttributeValue(null, "dvb:priority");
        int parseInt = attributeValue != null ? Integer.parseInt(attributeValue) : z5 ? 1 : Integer.MIN_VALUE;
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "dvb:weight");
        int parseInt2 = attributeValue2 != null ? Integer.parseInt(attributeValue2) : 1;
        String attributeValue3 = xmlPullParser.getAttributeValue(null, "serviceLocation");
        String str = "";
        do {
            xmlPullParser.next();
            if (xmlPullParser.getEventType() == 4) {
                str = xmlPullParser.getText();
            } else {
                b(xmlPullParser);
            }
        } while (!ke.b.B(xmlPullParser, "BaseURL"));
        if (str != null && ke.b.x(str)[0] != -1) {
            if (attributeValue3 == null) {
                attributeValue3 = str;
            }
            return fi.p.m(new b(str, attributeValue3, parseInt, parseInt2));
        }
        ArrayList arrayList2 = new ArrayList();
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            b bVar = (b) arrayList.get(i5);
            String J = ke.b.J(bVar.a, str);
            String str2 = attributeValue3 == null ? J : attributeValue3;
            if (z5) {
                parseInt = bVar.f17212c;
                parseInt2 = bVar.f17213d;
                str2 = bVar.f17211b;
            }
            arrayList2.add(new b(J, str2, parseInt, parseInt2));
        }
        return arrayList2;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0162  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00dd  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00e5  */
    /* JADX WARN: Type inference failed for: r6v0 */
    /* JADX WARN: Type inference failed for: r6v1 */
    /* JADX WARN: Type inference failed for: r6v10, types: [java.util.UUID] */
    /* JADX WARN: Type inference failed for: r6v16, types: [java.util.UUID] */
    /* JADX WARN: Type inference failed for: r6v17, types: [java.util.UUID] */
    /* JADX WARN: Type inference failed for: r6v18 */
    /* JADX WARN: Type inference failed for: r6v19, types: [java.util.UUID] */
    /* JADX WARN: Type inference failed for: r6v2 */
    /* JADX WARN: Type inference failed for: r6v23 */
    /* JADX WARN: Type inference failed for: r6v25, types: [java.util.UUID] */
    /* JADX WARN: Type inference failed for: r6v3 */
    /* JADX WARN: Type inference failed for: r6v4, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r6v7 */
    /* JADX WARN: Type inference failed for: r6v9 */
    /* JADX WARN: Type inference failed for: r7v11 */
    /* JADX WARN: Type inference failed for: r7v12 */
    /* JADX WARN: Type inference failed for: r7v14, types: [byte[]] */
    /* JADX WARN: Type inference failed for: r7v2 */
    /* JADX WARN: Type inference failed for: r7v26 */
    /* JADX WARN: Type inference failed for: r7v27 */
    /* JADX WARN: Type inference failed for: r7v28 */
    /* JADX WARN: Type inference failed for: r7v29 */
    /* JADX WARN: Type inference failed for: r7v3 */
    /* JADX WARN: Type inference failed for: r7v30 */
    /* JADX WARN: Type inference failed for: r7v31 */
    /* JADX WARN: Type inference failed for: r9v4, types: [java.util.UUID] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Pair g(XmlPullParser xmlPullParser) {
        String str;
        ?? r62;
        String str2;
        String str3;
        ?? r7;
        char c6;
        String str4;
        String attributeValue = xmlPullParser.getAttributeValue(null, "schemeIdUri");
        if (attributeValue != null) {
            String x5 = tn.g.x(attributeValue);
            x5.getClass();
            switch (x5.hashCode()) {
                case -1980789791:
                    if (x5.equals("urn:uuid:e2719d58-a985-b3c9-781a-b030af78d30e")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 489446379:
                    if (x5.equals("urn:uuid:9a04f079-9840-4286-ab92-e65be0885f95")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 755418770:
                    if (x5.equals("urn:uuid:edef8ba9-79d6-4ace-a3c8-27dcd51d21ed")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1812765994:
                    if (x5.equals("urn:mpeg:dash:mp4protection:2011")) {
                        c6 = 3;
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
                    r62 = hc.h.f9710c;
                    str = null;
                    str2 = null;
                    str3 = str2;
                    r7 = str2;
                    break;
                case 1:
                    r62 = hc.h.f9712e;
                    str = null;
                    str2 = null;
                    str3 = str2;
                    r7 = str2;
                    break;
                case 2:
                    r62 = hc.h.f9711d;
                    str = null;
                    str2 = null;
                    str3 = str2;
                    r7 = str2;
                    break;
                case 3:
                    str = xmlPullParser.getAttributeValue(null, "value");
                    int attributeCount = xmlPullParser.getAttributeCount();
                    int i5 = 0;
                    while (true) {
                        if (i5 >= attributeCount) {
                            str4 = null;
                        } else {
                            String attributeName = xmlPullParser.getAttributeName(i5);
                            int indexOf = attributeName.indexOf(58);
                            if (indexOf != -1) {
                                attributeName = attributeName.substring(indexOf + 1);
                            }
                            if (attributeName.equals("default_KID")) {
                                str4 = xmlPullParser.getAttributeValue(i5);
                            } else {
                                i5++;
                            }
                        }
                    }
                    if (!TextUtils.isEmpty(str4) && !"00000000-0000-0000-0000-000000000000".equals(str4)) {
                        String[] split = str4.split("\\s+");
                        UUID[] uuidArr = new UUID[split.length];
                        for (int i6 = 0; i6 < split.length; i6++) {
                            uuidArr[i6] = UUID.fromString(split[i6]);
                        }
                        r62 = hc.h.f9709b;
                        str3 = null;
                        r7 = yc.j.a(r62, uuidArr, null);
                        break;
                    } else {
                        r62 = null;
                        str2 = r62;
                        str3 = str2;
                        r7 = str2;
                        break;
                    }
                    break;
            }
            do {
                xmlPullParser.next();
                if (!ke.b.C(xmlPullParser, "clearkey:Laurl") && xmlPullParser.next() == 4) {
                    str3 = xmlPullParser.getText();
                    r7 = r7;
                } else if (ke.b.C(xmlPullParser, "ms:laurl")) {
                    if (r7 == 0 && xmlPullParser.getEventType() == 2) {
                        String name = xmlPullParser.getName();
                        int indexOf2 = name.indexOf(58);
                        if (indexOf2 != -1) {
                            name = name.substring(indexOf2 + 1);
                        }
                        if (name.equals("pssh") && xmlPullParser.next() == 4) {
                            byte[] decode = Base64.decode(xmlPullParser.getText(), 0);
                            a1.d e9 = yc.j.e(decode);
                            UUID uuid = e9 == null ? null : (UUID) e9.f15i;
                            if (uuid == null) {
                                ke.b.N("MpdParser", "Skipping malformed cenc:pssh data");
                                r62 = uuid;
                                r7 = 0;
                            } else {
                                UUID uuid2 = uuid;
                                r7 = decode;
                                r62 = uuid2;
                            }
                        }
                    }
                    if (r7 == 0) {
                        ?? r92 = hc.h.f9712e;
                        if (r92.equals(r62) && ke.b.C(xmlPullParser, "mspr:pro") && xmlPullParser.next() == 4) {
                            r7 = yc.j.a(r92, null, Base64.decode(xmlPullParser.getText(), 0));
                        }
                    }
                    b(xmlPullParser);
                    r7 = r7;
                } else {
                    str3 = xmlPullParser.getAttributeValue(null, "licenseUrl");
                    r7 = r7;
                }
            } while (!ke.b.B(xmlPullParser, "ContentProtection"));
            return Pair.create(str, r62 != null ? new nc.h(r62, str3, "video/mp4", r7) : null);
        }
        str = null;
        r62 = null;
        str2 = r62;
        str3 = str2;
        r7 = str2;
        do {
            xmlPullParser.next();
            if (!ke.b.C(xmlPullParser, "clearkey:Laurl")) {
            }
            if (ke.b.C(xmlPullParser, "ms:laurl")) {
            }
        } while (!ke.b.B(xmlPullParser, "ContentProtection"));
        return Pair.create(str, r62 != null ? new nc.h(r62, str3, "video/mp4", r7) : null);
    }

    public static int h(XmlPullParser xmlPullParser) {
        String attributeValue = xmlPullParser.getAttributeValue(null, "contentType");
        if (TextUtils.isEmpty(attributeValue)) {
            return -1;
        }
        if (MediaStreamTrack.AUDIO_TRACK_KIND.equals(attributeValue)) {
            return 1;
        }
        if (MediaStreamTrack.VIDEO_TRACK_KIND.equals(attributeValue)) {
            return 2;
        }
        if ("text".equals(attributeValue)) {
            return 3;
        }
        return "image".equals(attributeValue) ? 4 : -1;
    }

    public static f i(XmlPullParser xmlPullParser, String str) {
        String attributeValue = xmlPullParser.getAttributeValue(null, "schemeIdUri");
        if (attributeValue == null) {
            attributeValue = "";
        }
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "value");
        if (attributeValue2 == null) {
            attributeValue2 = null;
        }
        String attributeValue3 = xmlPullParser.getAttributeValue(null, StackTraceHelper.ID_KEY);
        String str2 = attributeValue3 != null ? attributeValue3 : null;
        do {
            xmlPullParser.next();
        } while (!ke.b.B(xmlPullParser, str));
        return new f(attributeValue, attributeValue2, str2);
    }

    public static long j(XmlPullParser xmlPullParser, String str, long j) {
        String attributeValue = xmlPullParser.getAttributeValue(null, str);
        if (attributeValue == null) {
            return j;
        }
        Matcher matcher = d0.f13300h.matcher(attributeValue);
        if (!matcher.matches()) {
            return (long) (Double.parseDouble(attributeValue) * 3600.0d * 1000.0d);
        }
        boolean isEmpty = TextUtils.isEmpty(matcher.group(1));
        String group = matcher.group(3);
        double parseDouble = group != null ? Double.parseDouble(group) * 3.1556908E7d : 0.0d;
        String group2 = matcher.group(5);
        double parseDouble2 = parseDouble + (group2 != null ? Double.parseDouble(group2) * 2629739.0d : 0.0d);
        String group3 = matcher.group(7);
        double parseDouble3 = parseDouble2 + (group3 != null ? Double.parseDouble(group3) * 86400.0d : 0.0d);
        String group4 = matcher.group(10);
        double parseDouble4 = parseDouble3 + (group4 != null ? Double.parseDouble(group4) * 3600.0d : 0.0d);
        String group5 = matcher.group(12);
        double parseDouble5 = parseDouble4 + (group5 != null ? Double.parseDouble(group5) * 60.0d : 0.0d);
        String group6 = matcher.group(14);
        long parseDouble6 = (long) ((parseDouble5 + (group6 != null ? Double.parseDouble(group6) : 0.0d)) * 1000.0d);
        return !isEmpty ? -parseDouble6 : parseDouble6;
    }

    public static float k(XmlPullParser xmlPullParser, float f2) {
        String attributeValue = xmlPullParser.getAttributeValue(null, "frameRate");
        if (attributeValue != null) {
            Matcher matcher = f17231e.matcher(attributeValue);
            if (matcher.matches()) {
                int parseInt = Integer.parseInt(matcher.group(1));
                return !TextUtils.isEmpty(matcher.group(2)) ? parseInt / Integer.parseInt(r2) : parseInt;
            }
        }
        return f2;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:371:0x096c, code lost:
    
        r4 = "audio/eac3-joc";
     */
    /* JADX WARN: Code restructure failed: missing block: B:373:0x097c, code lost:
    
        if ("audio/eac3-joc".equals(r4) != false) goto L329;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:148:0x12a5 A[LOOP:4: B:140:0x02bf->B:148:0x12a5, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:149:0x124f A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:192:0x0f3b A[LOOP:5: B:184:0x03e8->B:192:0x0f3b, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:193:0x0dcc A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:355:0x0c69 A[LOOP:11: B:347:0x06d9->B:355:0x0c69, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:356:0x08df A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:363:0x0930  */
    /* JADX WARN: Removed duplicated region for block: B:378:0x0994  */
    /* JADX WARN: Removed duplicated region for block: B:396:0x09d9  */
    /* JADX WARN: Removed duplicated region for block: B:406:0x0a01  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x1317 A[LOOP:1: B:35:0x00cd->B:43:0x1317, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:446:0x0aa9  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x12e3 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:462:0x0b15  */
    /* JADX WARN: Removed duplicated region for block: B:465:0x0b23  */
    /* JADX WARN: Removed duplicated region for block: B:468:0x0b35  */
    /* JADX WARN: Removed duplicated region for block: B:471:0x0c05  */
    /* JADX WARN: Removed duplicated region for block: B:474:0x0c21  */
    /* JADX WARN: Removed duplicated region for block: B:478:0x0c3b  */
    /* JADX WARN: Removed duplicated region for block: B:482:0x0c3f  */
    /* JADX WARN: Removed duplicated region for block: B:487:0x0c26  */
    /* JADX WARN: Removed duplicated region for block: B:488:0x0c08  */
    /* JADX WARN: Removed duplicated region for block: B:489:0x0b43  */
    /* JADX WARN: Removed duplicated region for block: B:535:0x0b2c  */
    /* JADX WARN: Removed duplicated region for block: B:536:0x0b1e  */
    /* JADX WARN: Removed duplicated region for block: B:540:0x0af5 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:552:0x0982  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static c l(XmlPullParser xmlPullParser, Uri uri) {
        int i5;
        boolean z5;
        int i6;
        int i10;
        long j;
        ArrayList arrayList;
        long j5;
        long j7;
        boolean z6;
        ArrayList arrayList2;
        long j10;
        ArrayList arrayList3;
        long j11;
        ArrayList arrayList4;
        ArrayList arrayList5;
        ArrayList arrayList6;
        String str;
        long j12;
        String str2;
        String str3;
        ArrayList arrayList7;
        ArrayList arrayList8;
        long j13;
        long j14;
        String str4;
        String str5;
        long j15;
        String str6;
        long j16;
        String str7;
        String str8;
        long j17;
        String str9;
        String str10;
        String str11;
        long j18;
        String str12;
        ArrayList arrayList9;
        ArrayList arrayList10;
        char c6;
        ArrayList arrayList11;
        ArrayList arrayList12;
        ArrayList arrayList13;
        ArrayList arrayList14;
        String str13;
        long j19;
        String str14;
        String str15;
        String str16;
        String str17;
        float f2;
        String str18;
        ArrayList arrayList15;
        String str19;
        String str20;
        String str21;
        String str22;
        ArrayList arrayList16;
        int i11;
        long j20;
        long j21;
        ArrayList arrayList17;
        String str23;
        String str24;
        ArrayList arrayList18;
        int parseInt;
        String str25;
        String str26;
        int parseInt2;
        float f10;
        int parseInt3;
        int i12;
        ArrayList arrayList19;
        String str27;
        ArrayList arrayList20;
        int i13;
        String str28;
        int i14;
        String str29;
        ArrayList arrayList21;
        String str30;
        ArrayList arrayList22;
        long j22;
        long j23;
        ArrayList arrayList23;
        String str31;
        String str32;
        ArrayList arrayList24;
        ArrayList arrayList25;
        long j24;
        ArrayList arrayList26;
        ArrayList arrayList27;
        int i15;
        long j25;
        String str33;
        s sVar;
        String str34;
        String str35;
        String str36;
        ArrayList arrayList28;
        ArrayList arrayList29;
        String str37;
        int i16;
        ArrayList arrayList30;
        int i17;
        int i18;
        int i19;
        ArrayList arrayList31;
        Pair pair;
        int parseInt4;
        int i20;
        String str38;
        int i21;
        int i22;
        String str39;
        int i23;
        String str40;
        m kVar;
        String str41;
        ArrayList arrayList32;
        int i24 = 0;
        String[] strArr = new String[0];
        String str42 = null;
        String attributeValue = xmlPullParser.getAttributeValue(null, "profiles");
        if (attributeValue != null) {
            strArr = attributeValue.split(",");
        }
        int length = strArr.length;
        int i25 = 0;
        while (true) {
            i5 = 1;
            if (i25 >= length) {
                z5 = false;
                break;
            }
            if (strArr[i25].startsWith("urn:dvb:dash:profile:dvb-dash:")) {
                z5 = true;
                break;
            }
            i25++;
        }
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "availabilityStartTime");
        long j26 = -9223372036854775807L;
        long L = attributeValue2 == null ? -9223372036854775807L : d0.L(attributeValue2);
        long j27 = j(xmlPullParser, "mediaPresentationDuration", -9223372036854775807L);
        long j28 = j(xmlPullParser, "minBufferTime", -9223372036854775807L);
        boolean equals = "dynamic".equals(xmlPullParser.getAttributeValue(null, "type"));
        long j29 = equals ? j(xmlPullParser, "minimumUpdatePeriod", -9223372036854775807L) : -9223372036854775807L;
        long j30 = equals ? j(xmlPullParser, "timeShiftBufferDepth", -9223372036854775807L) : -9223372036854775807L;
        long j31 = equals ? j(xmlPullParser, "suggestedPresentationDelay", -9223372036854775807L) : -9223372036854775807L;
        String attributeValue3 = xmlPullParser.getAttributeValue(null, "publishTime");
        long L2 = attributeValue3 == null ? -9223372036854775807L : d0.L(attributeValue3);
        long j32 = equals ? 0L : -9223372036854775807L;
        ArrayList m5 = fi.p.m(new b(uri.toString(), uri.toString(), z5 ? 1 : Integer.MIN_VALUE, 1));
        ArrayList arrayList33 = new ArrayList();
        ArrayList arrayList34 = new ArrayList();
        long j33 = equals ? -9223372036854775807L : 0L;
        int i26 = 0;
        int i27 = 0;
        i iVar = null;
        e4.c cVar = null;
        Uri uri2 = null;
        t tVar = null;
        while (true) {
            xmlPullParser.next();
            String str43 = "BaseURL";
            if (ke.b.C(xmlPullParser, "BaseURL")) {
                if (i26 == 0) {
                    j32 = d(xmlPullParser, j32);
                    i26 = i5;
                }
                arrayList34.addAll(e(xmlPullParser, m5, z5));
                arrayList = m5;
                arrayList3 = arrayList34;
                j7 = j33;
                z6 = z5;
                i6 = i24;
                i10 = i5;
                arrayList2 = arrayList33;
                j10 = j26;
            } else {
                i6 = i24;
                i10 = i5;
                String str44 = "lang";
                if (ke.b.C(xmlPullParser, "ProgramInformation")) {
                    String attributeValue4 = xmlPullParser.getAttributeValue(str42, "moreInformationURL");
                    String str45 = attributeValue4 == null ? str42 : attributeValue4;
                    String attributeValue5 = xmlPullParser.getAttributeValue(str42, "lang");
                    String str46 = attributeValue5 == null ? str42 : attributeValue5;
                    String str47 = str42;
                    String str48 = str47;
                    String str49 = str48;
                    while (true) {
                        xmlPullParser.next();
                        j = j26;
                        if (ke.b.C(xmlPullParser, "Title")) {
                            str47 = xmlPullParser.nextText();
                        } else if (ke.b.C(xmlPullParser, "Source")) {
                            str48 = xmlPullParser.nextText();
                        } else if (ke.b.C(xmlPullParser, "Copyright")) {
                            str49 = xmlPullParser.nextText();
                        } else {
                            b(xmlPullParser);
                        }
                        String str50 = str47;
                        String str51 = str48;
                        String str52 = str49;
                        if (ke.b.B(xmlPullParser, "ProgramInformation")) {
                            arrayList = m5;
                            j7 = j33;
                            z6 = z5;
                            arrayList2 = arrayList33;
                            iVar = new i(str50, str51, str52, str45, str46);
                        } else {
                            str47 = str50;
                            str48 = str51;
                            str49 = str52;
                            j26 = j;
                        }
                    }
                } else {
                    j = j26;
                    if (ke.b.C(xmlPullParser, "UTCTiming")) {
                        arrayList = m5;
                        j7 = j33;
                        cVar = new e4.c(20, xmlPullParser.getAttributeValue(str42, "schemeIdUri"), xmlPullParser.getAttributeValue(str42, "value"));
                    } else if (ke.b.C(xmlPullParser, "Location")) {
                        uri2 = ke.b.K(uri.toString(), xmlPullParser.nextText());
                        arrayList = m5;
                        j7 = j33;
                    } else if (ke.b.C(xmlPullParser, "ServiceDescription")) {
                        float f11 = -3.4028235E38f;
                        float f12 = -3.4028235E38f;
                        long j34 = j;
                        long j35 = j34;
                        long j36 = j35;
                        while (true) {
                            xmlPullParser.next();
                            if (ke.b.C(xmlPullParser, "Latency")) {
                                arrayList = m5;
                                String attributeValue6 = xmlPullParser.getAttributeValue(null, "target");
                                j34 = attributeValue6 == null ? j : Long.parseLong(attributeValue6);
                                String attributeValue7 = xmlPullParser.getAttributeValue(null, "min");
                                j35 = attributeValue7 == null ? j : Long.parseLong(attributeValue7);
                                String attributeValue8 = xmlPullParser.getAttributeValue(null, "max");
                                j36 = attributeValue8 == null ? j : Long.parseLong(attributeValue8);
                            } else {
                                arrayList = m5;
                                if (ke.b.C(xmlPullParser, "PlaybackRate")) {
                                    String attributeValue9 = xmlPullParser.getAttributeValue(null, "min");
                                    f11 = attributeValue9 == null ? -3.4028235E38f : Float.parseFloat(attributeValue9);
                                    String attributeValue10 = xmlPullParser.getAttributeValue(null, "max");
                                    f12 = attributeValue10 == null ? -3.4028235E38f : Float.parseFloat(attributeValue10);
                                }
                            }
                            float f13 = f11;
                            float f14 = f12;
                            long j37 = j34;
                            long j38 = j35;
                            long j39 = j36;
                            if (ke.b.B(xmlPullParser, "ServiceDescription")) {
                                t tVar2 = new t(j37, j38, j39, f13, f14);
                                j7 = j33;
                                z6 = z5;
                                arrayList2 = arrayList33;
                                j10 = j;
                                tVar = tVar2;
                                arrayList3 = arrayList34;
                            } else {
                                m5 = arrayList;
                                j34 = j37;
                                j35 = j38;
                                j36 = j39;
                                f11 = f13;
                                f12 = f14;
                            }
                        }
                    } else {
                        arrayList = m5;
                        if (ke.b.C(xmlPullParser, "Period") && i27 == 0) {
                            ArrayList arrayList35 = !arrayList34.isEmpty() ? arrayList34 : arrayList;
                            String str53 = StackTraceHelper.ID_KEY;
                            String str54 = "schemeIdUri";
                            String attributeValue11 = xmlPullParser.getAttributeValue(null, StackTraceHelper.ID_KEY);
                            long j40 = j(xmlPullParser, ViewProps.START, j33);
                            long j41 = L != j ? L + j40 : j;
                            j5 = j32;
                            long j42 = j(xmlPullParser, "duration", j);
                            String str55 = "Period";
                            ArrayList arrayList36 = new ArrayList();
                            String str56 = "value";
                            ArrayList arrayList37 = new ArrayList();
                            ArrayList arrayList38 = new ArrayList();
                            String str57 = "duration";
                            long j43 = j;
                            int i28 = i6;
                            long j44 = j5;
                            s sVar2 = null;
                            while (true) {
                                xmlPullParser.next();
                                if (ke.b.C(xmlPullParser, str43)) {
                                    if (i28 == 0) {
                                        j44 = d(xmlPullParser, j44);
                                        i28 = i10;
                                    }
                                    arrayList38.addAll(e(xmlPullParser, arrayList35, z5));
                                    arrayList3 = arrayList34;
                                    j13 = j42;
                                    arrayList6 = arrayList35;
                                    str = str53;
                                    j12 = j44;
                                    j7 = j33;
                                    str2 = str43;
                                    z6 = z5;
                                    arrayList4 = arrayList38;
                                    arrayList5 = arrayList36;
                                    str3 = str44;
                                    arrayList7 = arrayList33;
                                    str5 = str55;
                                    j14 = j41;
                                    arrayList8 = arrayList37;
                                    str4 = str57;
                                    j10 = -9223372036854775807L;
                                } else {
                                    arrayList4 = arrayList38;
                                    arrayList5 = arrayList36;
                                    arrayList6 = arrayList35;
                                    if (ke.b.C(xmlPullParser, "AdaptationSet")) {
                                        if (arrayList4.isEmpty()) {
                                            str12 = "SegmentTemplate";
                                            arrayList9 = arrayList6;
                                        } else {
                                            str12 = "SegmentTemplate";
                                            arrayList9 = arrayList4;
                                        }
                                        j12 = j44;
                                        String attributeValue12 = xmlPullParser.getAttributeValue(null, str53);
                                        long parseLong = attributeValue12 == null ? -1L : Long.parseLong(attributeValue12);
                                        int h6 = h(xmlPullParser);
                                        String attributeValue13 = xmlPullParser.getAttributeValue(null, "mimeType");
                                        String str58 = "AdaptationSet";
                                        String attributeValue14 = xmlPullParser.getAttributeValue(null, "codecs");
                                        ArrayList arrayList39 = arrayList34;
                                        String attributeValue15 = xmlPullParser.getAttributeValue(null, "width");
                                        int parseInt5 = attributeValue15 == null ? -1 : Integer.parseInt(attributeValue15);
                                        j7 = j33;
                                        String attributeValue16 = xmlPullParser.getAttributeValue(null, "height");
                                        int parseInt6 = attributeValue16 == null ? -1 : Integer.parseInt(attributeValue16);
                                        float k = k(xmlPullParser, -1.0f);
                                        long j45 = j30;
                                        String attributeValue17 = xmlPullParser.getAttributeValue(null, "audioSamplingRate");
                                        int parseInt7 = attributeValue17 == null ? -1 : Integer.parseInt(attributeValue17);
                                        String attributeValue18 = xmlPullParser.getAttributeValue(null, str44);
                                        String attributeValue19 = xmlPullParser.getAttributeValue(null, "label");
                                        ArrayList arrayList40 = new ArrayList();
                                        String str59 = attributeValue19;
                                        ArrayList arrayList41 = new ArrayList();
                                        ArrayList arrayList42 = new ArrayList();
                                        String str60 = "SegmentList";
                                        ArrayList arrayList43 = new ArrayList();
                                        String str61 = "SegmentBase";
                                        ArrayList arrayList44 = new ArrayList();
                                        String str62 = "audioSamplingRate";
                                        ArrayList arrayList45 = new ArrayList();
                                        float f15 = k;
                                        ArrayList arrayList46 = new ArrayList();
                                        ArrayList arrayList47 = new ArrayList();
                                        String str63 = "height";
                                        String str64 = "mimeType";
                                        String str65 = "codecs";
                                        int i29 = i6;
                                        s sVar3 = sVar2;
                                        long j46 = j43;
                                        long j47 = j12;
                                        int i30 = h6;
                                        int i31 = -1;
                                        String str66 = "width";
                                        String str67 = attributeValue18;
                                        String str68 = null;
                                        while (true) {
                                            xmlPullParser.next();
                                            if (ke.b.C(xmlPullParser, str43)) {
                                                if (i29 == 0) {
                                                    j47 = d(xmlPullParser, j47);
                                                    i29 = i10;
                                                }
                                                arrayList47.addAll(e(xmlPullParser, arrayList9, z5));
                                                str = str53;
                                                i11 = i30;
                                                str21 = str67;
                                                arrayList12 = arrayList40;
                                                str2 = str43;
                                                arrayList13 = arrayList45;
                                                z6 = z5;
                                                arrayList14 = arrayList44;
                                                arrayList11 = arrayList43;
                                                str3 = str44;
                                                str13 = str54;
                                                j21 = j41;
                                                j19 = j42;
                                                str4 = str57;
                                                str14 = str12;
                                                arrayList3 = arrayList39;
                                                str23 = str59;
                                                arrayList17 = arrayList41;
                                                str20 = str60;
                                                str22 = str61;
                                                str17 = str62;
                                                f2 = f15;
                                                str18 = str63;
                                                j47 = j47;
                                                arrayList10 = arrayList9;
                                                arrayList15 = arrayList47;
                                                arrayList16 = arrayList42;
                                                arrayList7 = arrayList33;
                                                str19 = str66;
                                                str39 = str58;
                                            } else {
                                                arrayList10 = arrayList9;
                                                if (ke.b.C(xmlPullParser, "ContentProtection")) {
                                                    Pair g6 = g(xmlPullParser);
                                                    long j48 = j47;
                                                    Object obj = g6.first;
                                                    if (obj != null) {
                                                        str68 = (String) obj;
                                                    }
                                                    Object obj2 = g6.second;
                                                    if (obj2 != null) {
                                                        arrayList40.add((nc.h) obj2);
                                                    }
                                                    str = str53;
                                                    i11 = i30;
                                                    str21 = str67;
                                                    arrayList12 = arrayList40;
                                                    str2 = str43;
                                                    arrayList13 = arrayList45;
                                                    z6 = z5;
                                                    arrayList14 = arrayList44;
                                                    arrayList11 = arrayList43;
                                                    str3 = str44;
                                                    str13 = str54;
                                                    j21 = j41;
                                                    j19 = j42;
                                                    str4 = str57;
                                                    str14 = str12;
                                                    str39 = str58;
                                                    arrayList3 = arrayList39;
                                                    str23 = str59;
                                                    arrayList17 = arrayList41;
                                                    str20 = str60;
                                                    str22 = str61;
                                                    str17 = str62;
                                                    f2 = f15;
                                                    str18 = str63;
                                                    j47 = j48;
                                                    arrayList15 = arrayList47;
                                                    arrayList16 = arrayList42;
                                                    arrayList7 = arrayList33;
                                                    str19 = str66;
                                                } else {
                                                    long j49 = j47;
                                                    if (ke.b.C(xmlPullParser, "ContentComponent")) {
                                                        String attributeValue20 = xmlPullParser.getAttributeValue(null, str44);
                                                        if (str67 == null) {
                                                            str67 = attributeValue20;
                                                        } else if (attributeValue20 != null) {
                                                            ke.b.k(str67.equals(attributeValue20));
                                                        }
                                                        int h7 = h(xmlPullParser);
                                                        c6 = 65535;
                                                        if (i30 == -1) {
                                                            i30 = h7;
                                                        } else if (h7 != -1) {
                                                            ke.b.k(i30 == h7 ? i10 : i6);
                                                        }
                                                    } else {
                                                        c6 = 65535;
                                                        if (ke.b.C(xmlPullParser, "Role")) {
                                                            arrayList43.add(i(xmlPullParser, "Role"));
                                                            str = str53;
                                                            i11 = i30;
                                                            str21 = str67;
                                                            arrayList12 = arrayList40;
                                                            str2 = str43;
                                                            arrayList13 = arrayList45;
                                                            z6 = z5;
                                                            arrayList14 = arrayList44;
                                                            arrayList11 = arrayList43;
                                                            str3 = str44;
                                                            str13 = str54;
                                                            j21 = j41;
                                                            j19 = j42;
                                                            str4 = str57;
                                                            str14 = str12;
                                                            str15 = str58;
                                                            arrayList3 = arrayList39;
                                                            arrayList17 = arrayList41;
                                                            str20 = str60;
                                                            str22 = str61;
                                                            str17 = str62;
                                                            f2 = f15;
                                                            str18 = str63;
                                                            arrayList15 = arrayList47;
                                                            arrayList16 = arrayList42;
                                                            arrayList7 = arrayList33;
                                                            str19 = str66;
                                                            j11 = j45;
                                                            j20 = j46;
                                                        } else {
                                                            String str69 = "AudioChannelConfiguration";
                                                            if (ke.b.C(xmlPullParser, "AudioChannelConfiguration")) {
                                                                i31 = c(xmlPullParser);
                                                            } else {
                                                                if (ke.b.C(xmlPullParser, "Accessibility")) {
                                                                    arrayList42.add(i(xmlPullParser, "Accessibility"));
                                                                } else {
                                                                    String str70 = "EssentialProperty";
                                                                    if (ke.b.C(xmlPullParser, "EssentialProperty")) {
                                                                        arrayList44.add(i(xmlPullParser, "EssentialProperty"));
                                                                    } else {
                                                                        str3 = str44;
                                                                        if (ke.b.C(xmlPullParser, "SupplementalProperty")) {
                                                                            arrayList45.add(i(xmlPullParser, "SupplementalProperty"));
                                                                            str = str53;
                                                                            i11 = i30;
                                                                            str21 = str67;
                                                                            arrayList12 = arrayList40;
                                                                            str2 = str43;
                                                                            arrayList13 = arrayList45;
                                                                            z6 = z5;
                                                                            arrayList14 = arrayList44;
                                                                            arrayList11 = arrayList43;
                                                                            str13 = str54;
                                                                            j21 = j41;
                                                                            j19 = j42;
                                                                            str4 = str57;
                                                                            str14 = str12;
                                                                            str15 = str58;
                                                                            arrayList3 = arrayList39;
                                                                            arrayList17 = arrayList41;
                                                                            str20 = str60;
                                                                            str22 = str61;
                                                                            str17 = str62;
                                                                            f2 = f15;
                                                                            str18 = str63;
                                                                            j20 = j46;
                                                                            arrayList15 = arrayList47;
                                                                            arrayList16 = arrayList42;
                                                                            arrayList7 = arrayList33;
                                                                            str19 = str66;
                                                                            j11 = j45;
                                                                        } else {
                                                                            arrayList11 = arrayList43;
                                                                            String str71 = "Representation";
                                                                            if (ke.b.C(xmlPullParser, "Representation")) {
                                                                                if (arrayList47.isEmpty()) {
                                                                                    str24 = "SupplementalProperty";
                                                                                    arrayList18 = arrayList10;
                                                                                } else {
                                                                                    str24 = "SupplementalProperty";
                                                                                    arrayList18 = arrayList47;
                                                                                }
                                                                                String str72 = "ContentProtection";
                                                                                String str73 = "InbandEventStream";
                                                                                String attributeValue21 = xmlPullParser.getAttributeValue(null, str53);
                                                                                String str74 = str53;
                                                                                String attributeValue22 = xmlPullParser.getAttributeValue(null, "bandwidth");
                                                                                if (attributeValue22 == null) {
                                                                                    str25 = str64;
                                                                                    parseInt = -1;
                                                                                } else {
                                                                                    String str75 = str64;
                                                                                    parseInt = Integer.parseInt(attributeValue22);
                                                                                    str25 = str75;
                                                                                }
                                                                                String attributeValue23 = xmlPullParser.getAttributeValue(null, str25);
                                                                                String str76 = str65;
                                                                                String str77 = str25;
                                                                                String str78 = attributeValue23 == null ? attributeValue13 : attributeValue23;
                                                                                String attributeValue24 = xmlPullParser.getAttributeValue(null, str76);
                                                                                String str79 = str76;
                                                                                String str80 = str66;
                                                                                String str81 = attributeValue24 == null ? attributeValue14 : attributeValue24;
                                                                                String attributeValue25 = xmlPullParser.getAttributeValue(null, str80);
                                                                                if (attributeValue25 == null) {
                                                                                    String str82 = str63;
                                                                                    str19 = str80;
                                                                                    str26 = str82;
                                                                                    parseInt2 = parseInt5;
                                                                                } else {
                                                                                    String str83 = str63;
                                                                                    str19 = str80;
                                                                                    str26 = str83;
                                                                                    parseInt2 = Integer.parseInt(attributeValue25);
                                                                                }
                                                                                String attributeValue26 = xmlPullParser.getAttributeValue(null, str26);
                                                                                if (attributeValue26 == null) {
                                                                                    float f16 = f15;
                                                                                    str18 = str26;
                                                                                    f10 = f16;
                                                                                    parseInt3 = parseInt6;
                                                                                } else {
                                                                                    float f17 = f15;
                                                                                    str18 = str26;
                                                                                    f10 = f17;
                                                                                    parseInt3 = Integer.parseInt(attributeValue26);
                                                                                }
                                                                                float k5 = k(xmlPullParser, f10);
                                                                                f2 = f10;
                                                                                String str84 = str62;
                                                                                String attributeValue27 = xmlPullParser.getAttributeValue(null, str84);
                                                                                int parseInt8 = attributeValue27 == null ? parseInt7 : Integer.parseInt(attributeValue27);
                                                                                ArrayList arrayList48 = new ArrayList();
                                                                                ArrayList arrayList49 = new ArrayList();
                                                                                ArrayList arrayList50 = new ArrayList(arrayList44);
                                                                                arrayList14 = arrayList44;
                                                                                ArrayList arrayList51 = new ArrayList(arrayList45);
                                                                                ArrayList arrayList52 = new ArrayList();
                                                                                int i32 = parseInt8;
                                                                                String str85 = str84;
                                                                                String str86 = str67;
                                                                                ArrayList arrayList53 = arrayList40;
                                                                                int i33 = i6;
                                                                                s sVar4 = sVar3;
                                                                                long j50 = j46;
                                                                                int i34 = i31;
                                                                                long j51 = j49;
                                                                                String str87 = null;
                                                                                while (true) {
                                                                                    xmlPullParser.next();
                                                                                    if (ke.b.C(xmlPullParser, str43)) {
                                                                                        if (i33 == 0) {
                                                                                            j51 = d(xmlPullParser, j51);
                                                                                            i33 = i10;
                                                                                        }
                                                                                        i12 = i30;
                                                                                        arrayList52.addAll(e(xmlPullParser, arrayList18, z5));
                                                                                    } else {
                                                                                        i12 = i30;
                                                                                        if (ke.b.C(xmlPullParser, str69)) {
                                                                                            i34 = c(xmlPullParser);
                                                                                        } else {
                                                                                            String str88 = str61;
                                                                                            if (ke.b.C(xmlPullParser, str88)) {
                                                                                                str61 = str88;
                                                                                                sVar4 = p(xmlPullParser, (r) sVar4);
                                                                                            } else {
                                                                                                String str89 = str60;
                                                                                                if (ke.b.C(xmlPullParser, str89)) {
                                                                                                    arrayList15 = arrayList47;
                                                                                                    str2 = str43;
                                                                                                    long d6 = d(xmlPullParser, j50);
                                                                                                    str16 = str89;
                                                                                                    arrayList13 = arrayList45;
                                                                                                    str13 = str54;
                                                                                                    long j52 = j41;
                                                                                                    str4 = str57;
                                                                                                    str15 = str58;
                                                                                                    arrayList19 = arrayList41;
                                                                                                    str27 = str88;
                                                                                                    arrayList20 = arrayList46;
                                                                                                    i13 = parseInt;
                                                                                                    str64 = str77;
                                                                                                    str = str74;
                                                                                                    str65 = str79;
                                                                                                    arrayList12 = arrayList53;
                                                                                                    str28 = str86;
                                                                                                    str17 = str85;
                                                                                                    i14 = i32;
                                                                                                    str29 = str69;
                                                                                                    arrayList22 = arrayList42;
                                                                                                    ArrayList arrayList54 = arrayList50;
                                                                                                    arrayList21 = arrayList18;
                                                                                                    str14 = str12;
                                                                                                    long j53 = j45;
                                                                                                    str30 = str70;
                                                                                                    long j54 = j42;
                                                                                                    arrayList3 = arrayList39;
                                                                                                    arrayList7 = arrayList33;
                                                                                                    arrayList23 = arrayList52;
                                                                                                    str31 = str72;
                                                                                                    s q5 = q(xmlPullParser, (o) sVar4, j52, j54, j51, d6, j53);
                                                                                                    j22 = j51;
                                                                                                    j23 = j54;
                                                                                                    i15 = i34;
                                                                                                    j25 = j52;
                                                                                                    z6 = z5;
                                                                                                    str33 = str71;
                                                                                                    str32 = str73;
                                                                                                    arrayList26 = arrayList54;
                                                                                                    arrayList27 = arrayList51;
                                                                                                    j24 = d6;
                                                                                                    j11 = j53;
                                                                                                    sVar = q5;
                                                                                                    arrayList24 = arrayList48;
                                                                                                } else {
                                                                                                    str16 = str89;
                                                                                                    arrayList15 = arrayList47;
                                                                                                    str2 = str43;
                                                                                                    arrayList13 = arrayList45;
                                                                                                    str13 = str54;
                                                                                                    str4 = str57;
                                                                                                    str15 = str58;
                                                                                                    arrayList19 = arrayList41;
                                                                                                    str27 = str88;
                                                                                                    arrayList20 = arrayList46;
                                                                                                    i13 = parseInt;
                                                                                                    str64 = str77;
                                                                                                    str = str74;
                                                                                                    str65 = str79;
                                                                                                    arrayList12 = arrayList53;
                                                                                                    str28 = str86;
                                                                                                    str17 = str85;
                                                                                                    i14 = i32;
                                                                                                    str29 = str69;
                                                                                                    ArrayList arrayList55 = arrayList50;
                                                                                                    arrayList21 = arrayList18;
                                                                                                    str14 = str12;
                                                                                                    str30 = str70;
                                                                                                    long j55 = j41;
                                                                                                    arrayList22 = arrayList42;
                                                                                                    long j56 = j45;
                                                                                                    j22 = j51;
                                                                                                    j23 = j42;
                                                                                                    arrayList3 = arrayList39;
                                                                                                    arrayList7 = arrayList33;
                                                                                                    arrayList23 = arrayList52;
                                                                                                    str31 = str72;
                                                                                                    if (ke.b.C(xmlPullParser, str14)) {
                                                                                                        j11 = j56;
                                                                                                        long d7 = d(xmlPullParser, j50);
                                                                                                        z6 = z5;
                                                                                                        s r5 = r(xmlPullParser, (p) sVar4, arrayList13, j55, j23, j22, d7, j11);
                                                                                                        i15 = i34;
                                                                                                        j25 = j55;
                                                                                                        str33 = str71;
                                                                                                        str32 = str73;
                                                                                                        arrayList24 = arrayList48;
                                                                                                        arrayList26 = arrayList55;
                                                                                                        arrayList27 = arrayList51;
                                                                                                        j24 = d7;
                                                                                                        sVar = r5;
                                                                                                    } else {
                                                                                                        z6 = z5;
                                                                                                        j11 = j56;
                                                                                                        if (ke.b.C(xmlPullParser, str31)) {
                                                                                                            Pair g10 = g(xmlPullParser);
                                                                                                            Object obj3 = g10.first;
                                                                                                            if (obj3 != null) {
                                                                                                                str87 = (String) obj3;
                                                                                                            }
                                                                                                            Object obj4 = g10.second;
                                                                                                            if (obj4 != null) {
                                                                                                                arrayList24 = arrayList48;
                                                                                                                arrayList24.add((nc.h) obj4);
                                                                                                            } else {
                                                                                                                arrayList24 = arrayList48;
                                                                                                            }
                                                                                                            i15 = i34;
                                                                                                            j25 = j55;
                                                                                                            str33 = str71;
                                                                                                            str32 = str73;
                                                                                                            sVar = sVar4;
                                                                                                            arrayList25 = arrayList49;
                                                                                                            j24 = j50;
                                                                                                            str34 = str87;
                                                                                                            arrayList26 = arrayList55;
                                                                                                            arrayList27 = arrayList51;
                                                                                                            if (ke.b.B(xmlPullParser, str33)) {
                                                                                                                if (ke.o.j(str78)) {
                                                                                                                    str35 = ke.o.a(str81);
                                                                                                                } else if (ke.o.l(str78)) {
                                                                                                                    str35 = ke.o.i(str81);
                                                                                                                } else {
                                                                                                                    if (ke.o.k(str78) || "image".equals(ke.o.g(str78))) {
                                                                                                                        str35 = str78;
                                                                                                                        str36 = str35;
                                                                                                                    } else {
                                                                                                                        str36 = str78;
                                                                                                                        if ("application/mp4".equals(str36)) {
                                                                                                                            str35 = ke.o.d(str81);
                                                                                                                            if ("text/vtt".equals(str35)) {
                                                                                                                                str35 = "application/x-mp4-vtt";
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            str35 = null;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    if ("audio/eac3".equals(str35)) {
                                                                                                                        arrayList28 = arrayList27;
                                                                                                                        j19 = j23;
                                                                                                                        arrayList29 = arrayList24;
                                                                                                                    } else {
                                                                                                                        j19 = j23;
                                                                                                                        int i35 = i6;
                                                                                                                        while (true) {
                                                                                                                            arrayList29 = arrayList24;
                                                                                                                            str37 = "ec+3";
                                                                                                                            if (i35 < arrayList27.size()) {
                                                                                                                                f fVar = (f) arrayList27.get(i35);
                                                                                                                                arrayList28 = arrayList27;
                                                                                                                                String str90 = fVar.a;
                                                                                                                                String str91 = fVar.f17236b;
                                                                                                                                int i36 = i35;
                                                                                                                                if ((!"tag:dolby.com,2018:dash:EC3_ExtensionType:2018".equals(str90) || !"JOC".equals(str91)) && (!"tag:dolby.com,2014:dash:DolbyDigitalPlusExtensionType:2014".equals(str90) || !"ec+3".equals(str91))) {
                                                                                                                                    i35 = i36 + 1;
                                                                                                                                    arrayList24 = arrayList29;
                                                                                                                                    arrayList27 = arrayList28;
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                arrayList28 = arrayList27;
                                                                                                                                str35 = "audio/eac3";
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                    str37 = str81;
                                                                                                                    i16 = i6;
                                                                                                                    int i37 = i16;
                                                                                                                    while (i16 < arrayList11.size()) {
                                                                                                                        ArrayList arrayList56 = arrayList11;
                                                                                                                        int i38 = i16;
                                                                                                                        f fVar2 = (f) arrayList56.get(i16);
                                                                                                                        s sVar5 = sVar;
                                                                                                                        if (tn.g.j("urn:mpeg:dash:role:2011", fVar2.a)) {
                                                                                                                            String str92 = fVar2.f17236b;
                                                                                                                            i37 |= (str92 != null && (str92.equals("forced_subtitle") || str92.equals("forced-subtitle"))) ? 2 : i6;
                                                                                                                        }
                                                                                                                        i16 = i38 + 1;
                                                                                                                        arrayList11 = arrayList56;
                                                                                                                        sVar = sVar5;
                                                                                                                    }
                                                                                                                    s sVar6 = sVar;
                                                                                                                    arrayList30 = arrayList11;
                                                                                                                    i17 = i6;
                                                                                                                    int i39 = i17;
                                                                                                                    while (i17 < arrayList30.size()) {
                                                                                                                        f fVar3 = (f) arrayList30.get(i17);
                                                                                                                        int i40 = i17;
                                                                                                                        if (tn.g.j("urn:mpeg:dash:role:2011", fVar3.a)) {
                                                                                                                            i39 |= n(fVar3.f17236b);
                                                                                                                        }
                                                                                                                        i17 = i40 + 1;
                                                                                                                    }
                                                                                                                    arrayList11 = arrayList30;
                                                                                                                    i18 = i6;
                                                                                                                    int i41 = i18;
                                                                                                                    while (i18 < arrayList22.size()) {
                                                                                                                        ArrayList arrayList57 = arrayList22;
                                                                                                                        int i42 = i18;
                                                                                                                        f fVar4 = (f) arrayList57.get(i18);
                                                                                                                        int i43 = i41;
                                                                                                                        String str93 = fVar4.a;
                                                                                                                        ArrayList arrayList58 = arrayList25;
                                                                                                                        String str94 = fVar4.f17236b;
                                                                                                                        if (tn.g.j("urn:mpeg:dash:role:2011", str93)) {
                                                                                                                            i22 = n(str94);
                                                                                                                        } else if (tn.g.j("urn:tva:metadata:cs:AudioPurposeCS:2007", fVar4.a)) {
                                                                                                                            if (str94 != null) {
                                                                                                                                switch (str94.hashCode()) {
                                                                                                                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                                                                                                                        if (str94.equals("1")) {
                                                                                                                                            i21 = i6;
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                        i21 = -1;
                                                                                                                                        break;
                                                                                                                                    case 50:
                                                                                                                                        if (str94.equals("2")) {
                                                                                                                                            i21 = i10;
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                        i21 = -1;
                                                                                                                                        break;
                                                                                                                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                                                                                                                        if (str94.equals("3")) {
                                                                                                                                            i21 = 2;
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                        i21 = -1;
                                                                                                                                        break;
                                                                                                                                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                                                                                                                        if (str94.equals("4")) {
                                                                                                                                            i21 = 3;
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                        i21 = -1;
                                                                                                                                        break;
                                                                                                                                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                                                                                                                    default:
                                                                                                                                        i21 = -1;
                                                                                                                                        break;
                                                                                                                                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                                                                                                                                        if (str94.equals("6")) {
                                                                                                                                            i21 = 4;
                                                                                                                                            break;
                                                                                                                                        }
                                                                                                                                        i21 = -1;
                                                                                                                                        break;
                                                                                                                                }
                                                                                                                                switch (i21) {
                                                                                                                                    case 0:
                                                                                                                                        i22 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                                                                                                                        break;
                                                                                                                                    case 1:
                                                                                                                                        i22 = RecyclerView.ItemAnimator.FLAG_MOVED;
                                                                                                                                        break;
                                                                                                                                    case 2:
                                                                                                                                        i22 = 4;
                                                                                                                                        break;
                                                                                                                                    case 3:
                                                                                                                                        i22 = 8;
                                                                                                                                        break;
                                                                                                                                    case 4:
                                                                                                                                        i22 = i10;
                                                                                                                                        break;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            i22 = i6;
                                                                                                                        } else {
                                                                                                                            i41 = i43;
                                                                                                                            i18 = i42 + 1;
                                                                                                                            arrayList22 = arrayList57;
                                                                                                                            arrayList25 = arrayList58;
                                                                                                                        }
                                                                                                                        i41 = i43 | i22;
                                                                                                                        i18 = i42 + 1;
                                                                                                                        arrayList22 = arrayList57;
                                                                                                                        arrayList25 = arrayList58;
                                                                                                                    }
                                                                                                                    ArrayList arrayList59 = arrayList25;
                                                                                                                    ArrayList arrayList60 = arrayList22;
                                                                                                                    int o6 = i39 | i41 | o(arrayList26) | o(arrayList28);
                                                                                                                    i19 = i6;
                                                                                                                    while (true) {
                                                                                                                        if (i19 >= arrayList26.size()) {
                                                                                                                            f fVar5 = (f) arrayList26.get(i19);
                                                                                                                            arrayList31 = arrayList26;
                                                                                                                            if ((tn.g.j("http://dashif.org/thumbnail_tile", fVar5.a) || tn.g.j("http://dashif.org/guidelines/thumbnail_tile", fVar5.a)) && (str38 = fVar5.f17236b) != null) {
                                                                                                                                int i44 = d0.a;
                                                                                                                                String[] split = str38.split("x", -1);
                                                                                                                                if (split.length != 2) {
                                                                                                                                    continue;
                                                                                                                                } else {
                                                                                                                                    try {
                                                                                                                                        pair = Pair.create(Integer.valueOf(Integer.parseInt(split[i6])), Integer.valueOf(Integer.parseInt(split[i10])));
                                                                                                                                    } catch (NumberFormatException unused) {
                                                                                                                                        continue;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                            i19++;
                                                                                                                            arrayList26 = arrayList31;
                                                                                                                        } else {
                                                                                                                            arrayList31 = arrayList26;
                                                                                                                            pair = null;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    f0 f0Var = new f0();
                                                                                                                    f0Var.a = attributeValue21;
                                                                                                                    f0Var.j = str36;
                                                                                                                    f0Var.k = str35;
                                                                                                                    f0Var.f9676h = str37;
                                                                                                                    f0Var.f9675g = i13;
                                                                                                                    f0Var.f9672d = i37;
                                                                                                                    f0Var.f9673e = o6;
                                                                                                                    String str95 = str28;
                                                                                                                    f0Var.f9671c = str95;
                                                                                                                    f0Var.D = pair == null ? ((Integer) pair.first).intValue() : -1;
                                                                                                                    f0Var.E = pair == null ? ((Integer) pair.second).intValue() : -1;
                                                                                                                    if (ke.o.l(str35)) {
                                                                                                                        int i45 = parseInt2;
                                                                                                                        int i46 = parseInt3;
                                                                                                                        if (ke.o.j(str35)) {
                                                                                                                            f0Var.f9690x = i15;
                                                                                                                            f0Var.f9691y = i14;
                                                                                                                        } else if (ke.o.k(str35)) {
                                                                                                                            if ("application/cea-608".equals(str35)) {
                                                                                                                                int i47 = i6;
                                                                                                                                while (i47 < arrayList60.size()) {
                                                                                                                                    f fVar6 = (f) arrayList60.get(i47);
                                                                                                                                    String str96 = fVar6.a;
                                                                                                                                    String str97 = fVar6.f17236b;
                                                                                                                                    if ("urn:scte:dash:cc:cea-608:2015".equals(str96) && str97 != null) {
                                                                                                                                        Matcher matcher = f17232i.matcher(str97);
                                                                                                                                        if (matcher.matches()) {
                                                                                                                                            parseInt4 = Integer.parseInt(matcher.group(i10));
                                                                                                                                            f0Var.C = parseInt4;
                                                                                                                                        } else {
                                                                                                                                            ke.b.N("MpdParser", "Unable to parse CEA-608 channel number from: ".concat(str97));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                    i47++;
                                                                                                                                    i10 = 1;
                                                                                                                                }
                                                                                                                                parseInt4 = -1;
                                                                                                                                f0Var.C = parseInt4;
                                                                                                                            } else {
                                                                                                                                if ("application/cea-708".equals(str35)) {
                                                                                                                                    for (int i48 = i6; i48 < arrayList60.size(); i48++) {
                                                                                                                                        f fVar7 = (f) arrayList60.get(i48);
                                                                                                                                        String str98 = fVar7.a;
                                                                                                                                        String str99 = fVar7.f17236b;
                                                                                                                                        if ("urn:scte:dash:cc:cea-708:2015".equals(str98) && str99 != null) {
                                                                                                                                            Matcher matcher2 = f17233v.matcher(str99);
                                                                                                                                            if (matcher2.matches()) {
                                                                                                                                                parseInt4 = Integer.parseInt(matcher2.group(1));
                                                                                                                                                f0Var.C = parseInt4;
                                                                                                                                            } else {
                                                                                                                                                ke.b.N("MpdParser", "Unable to parse CEA-708 service block number from: ".concat(str99));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                parseInt4 = -1;
                                                                                                                                f0Var.C = parseInt4;
                                                                                                                            }
                                                                                                                            str39 = str15;
                                                                                                                            if (ke.b.B(xmlPullParser, str39)) {
                                                                                                                                ArrayList arrayList61 = new ArrayList(arrayList46.size());
                                                                                                                                int i49 = i6;
                                                                                                                                while (i49 < arrayList46.size()) {
                                                                                                                                    ArrayList arrayList62 = arrayList46;
                                                                                                                                    d dVar = (d) arrayList62.get(i49);
                                                                                                                                    f0 a = dVar.a.a();
                                                                                                                                    if (str23 != null) {
                                                                                                                                        a.f9670b = str23;
                                                                                                                                    }
                                                                                                                                    String str100 = dVar.f17226d;
                                                                                                                                    if (str100 == null) {
                                                                                                                                        str100 = str68;
                                                                                                                                    }
                                                                                                                                    ArrayList arrayList63 = dVar.f17227e;
                                                                                                                                    ArrayList arrayList64 = arrayList12;
                                                                                                                                    arrayList63.addAll(arrayList64);
                                                                                                                                    long j57 = j21;
                                                                                                                                    if (arrayList63.isEmpty()) {
                                                                                                                                        i23 = i49;
                                                                                                                                        str40 = str23;
                                                                                                                                        arrayList46 = arrayList62;
                                                                                                                                    } else {
                                                                                                                                        int i50 = i6;
                                                                                                                                        while (true) {
                                                                                                                                            if (i50 < arrayList63.size()) {
                                                                                                                                                nc.h hVar = (nc.h) arrayList63.get(i50);
                                                                                                                                                i23 = i49;
                                                                                                                                                if (!hc.h.f9710c.equals(hVar.f15033e) || (str41 = hVar.f15034i) == null) {
                                                                                                                                                    i50++;
                                                                                                                                                    i49 = i23;
                                                                                                                                                } else {
                                                                                                                                                    arrayList63.remove(i50);
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                i23 = i49;
                                                                                                                                                str41 = null;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                        if (str41 != null) {
                                                                                                                                            int i51 = i6;
                                                                                                                                            while (i51 < arrayList63.size()) {
                                                                                                                                                nc.h hVar2 = (nc.h) arrayList63.get(i51);
                                                                                                                                                String str101 = str23;
                                                                                                                                                if (hc.h.f9709b.equals(hVar2.f15033e) && hVar2.f15034i == null) {
                                                                                                                                                    arrayList32 = arrayList62;
                                                                                                                                                    arrayList63.set(i51, new nc.h(hc.h.f9710c, str41, hVar2.f15035v, hVar2.f15036w));
                                                                                                                                                } else {
                                                                                                                                                    arrayList32 = arrayList62;
                                                                                                                                                }
                                                                                                                                                i51++;
                                                                                                                                                str23 = str101;
                                                                                                                                                arrayList62 = arrayList32;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                        str40 = str23;
                                                                                                                                        arrayList46 = arrayList62;
                                                                                                                                        for (int size = arrayList63.size() - 1; size >= 0; size--) {
                                                                                                                                            nc.h hVar3 = (nc.h) arrayList63.get(size);
                                                                                                                                            if (hVar3.f15036w == null) {
                                                                                                                                                int i52 = i6;
                                                                                                                                                while (true) {
                                                                                                                                                    if (i52 < arrayList63.size()) {
                                                                                                                                                        nc.h hVar4 = (nc.h) arrayList63.get(i52);
                                                                                                                                                        if (hVar4.f15036w != null && hVar3.f15036w == null && hVar4.a(hVar3.f15033e)) {
                                                                                                                                                            arrayList63.remove(size);
                                                                                                                                                        } else {
                                                                                                                                                            i52++;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                        a.f9680n = new nc.i(str100, arrayList63);
                                                                                                                                    }
                                                                                                                                    ArrayList arrayList65 = dVar.f17228f;
                                                                                                                                    arrayList65.addAll(arrayList17);
                                                                                                                                    Format format = new Format(a);
                                                                                                                                    e0 e0Var = dVar.f17224b;
                                                                                                                                    s sVar7 = dVar.f17225c;
                                                                                                                                    ArrayList arrayList66 = dVar.f17229g;
                                                                                                                                    ArrayList arrayList67 = dVar.f17230h;
                                                                                                                                    if (sVar7 instanceof r) {
                                                                                                                                        kVar = new l(format, e0Var, (r) sVar7, arrayList65, arrayList66, arrayList67);
                                                                                                                                    } else {
                                                                                                                                        if (!(sVar7 instanceof n)) {
                                                                                                                                            throw new IllegalArgumentException("segmentBase must be of type SingleSegmentBase or MultiSegmentBase");
                                                                                                                                        }
                                                                                                                                        kVar = new k(format, e0Var, (n) sVar7, arrayList65, arrayList66, arrayList67);
                                                                                                                                    }
                                                                                                                                    arrayList61.add(kVar);
                                                                                                                                    i49 = i23 + 1;
                                                                                                                                    arrayList12 = arrayList64;
                                                                                                                                    str23 = str40;
                                                                                                                                    j21 = j57;
                                                                                                                                }
                                                                                                                                i10 = 1;
                                                                                                                                arrayList5.add(new a(parseLong, i11, arrayList61, arrayList16, arrayList14, arrayList13));
                                                                                                                                arrayList8 = arrayList37;
                                                                                                                                j13 = j19;
                                                                                                                                j14 = j21;
                                                                                                                                str54 = str13;
                                                                                                                            } else {
                                                                                                                                i30 = i11;
                                                                                                                                i10 = 1;
                                                                                                                                str58 = str39;
                                                                                                                                arrayList41 = arrayList17;
                                                                                                                                j45 = j11;
                                                                                                                                str61 = str22;
                                                                                                                                str12 = str14;
                                                                                                                                str59 = str23;
                                                                                                                                arrayList42 = arrayList16;
                                                                                                                                arrayList33 = arrayList7;
                                                                                                                                arrayList39 = arrayList3;
                                                                                                                                str62 = str17;
                                                                                                                                z5 = z6;
                                                                                                                                arrayList45 = arrayList13;
                                                                                                                                arrayList47 = arrayList15;
                                                                                                                                str66 = str19;
                                                                                                                                arrayList9 = arrayList10;
                                                                                                                                str44 = str3;
                                                                                                                                arrayList43 = arrayList11;
                                                                                                                                j42 = j19;
                                                                                                                                str67 = str21;
                                                                                                                                j41 = j21;
                                                                                                                                str43 = str2;
                                                                                                                                arrayList40 = arrayList12;
                                                                                                                                str54 = str13;
                                                                                                                                str57 = str4;
                                                                                                                                str53 = str;
                                                                                                                                str60 = str20;
                                                                                                                                str63 = str18;
                                                                                                                                f15 = f2;
                                                                                                                                arrayList44 = arrayList14;
                                                                                                                            }
                                                                                                                        } else if ("image".equals(ke.o.g(str35))) {
                                                                                                                            f0Var.f9682p = i45;
                                                                                                                            f0Var.f9683q = i46;
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        f0Var.f9682p = parseInt2;
                                                                                                                        f0Var.f9683q = parseInt3;
                                                                                                                        f0Var.f9684r = k5;
                                                                                                                    }
                                                                                                                    Format format2 = new Format(f0Var);
                                                                                                                    d dVar2 = new d(format2, arrayList23.isEmpty() ? arrayList23 : arrayList21, sVar6 == null ? sVar6 : new r(null, 1L, 0L, 0L, 0L), str34, arrayList29, arrayList59, arrayList31, arrayList28);
                                                                                                                    int h10 = ke.o.h(format2.I);
                                                                                                                    i20 = i12;
                                                                                                                    if (i20 != -1) {
                                                                                                                        i20 = h10;
                                                                                                                    } else if (h10 != -1) {
                                                                                                                        ke.b.k(i20 == h10 ? 1 : i6);
                                                                                                                    }
                                                                                                                    ArrayList arrayList68 = arrayList20;
                                                                                                                    arrayList68.add(dVar2);
                                                                                                                    arrayList46 = arrayList68;
                                                                                                                    str21 = str95;
                                                                                                                    arrayList16 = arrayList60;
                                                                                                                    i11 = i20;
                                                                                                                    str23 = str59;
                                                                                                                    j47 = j49;
                                                                                                                    j21 = j25;
                                                                                                                    arrayList17 = arrayList19;
                                                                                                                    str22 = str27;
                                                                                                                }
                                                                                                                str36 = str78;
                                                                                                                if ("audio/eac3".equals(str35)) {
                                                                                                                }
                                                                                                                str37 = str81;
                                                                                                                i16 = i6;
                                                                                                                int i372 = i16;
                                                                                                                while (i16 < arrayList11.size()) {
                                                                                                                }
                                                                                                                s sVar62 = sVar;
                                                                                                                arrayList30 = arrayList11;
                                                                                                                i17 = i6;
                                                                                                                int i392 = i17;
                                                                                                                while (i17 < arrayList30.size()) {
                                                                                                                }
                                                                                                                arrayList11 = arrayList30;
                                                                                                                i18 = i6;
                                                                                                                int i412 = i18;
                                                                                                                while (i18 < arrayList22.size()) {
                                                                                                                }
                                                                                                                ArrayList arrayList592 = arrayList25;
                                                                                                                ArrayList arrayList602 = arrayList22;
                                                                                                                int o62 = i392 | i412 | o(arrayList26) | o(arrayList28);
                                                                                                                i19 = i6;
                                                                                                                while (true) {
                                                                                                                    if (i19 >= arrayList26.size()) {
                                                                                                                    }
                                                                                                                    i19++;
                                                                                                                    arrayList26 = arrayList31;
                                                                                                                }
                                                                                                                f0 f0Var2 = new f0();
                                                                                                                f0Var2.a = attributeValue21;
                                                                                                                f0Var2.j = str36;
                                                                                                                f0Var2.k = str35;
                                                                                                                f0Var2.f9676h = str37;
                                                                                                                f0Var2.f9675g = i13;
                                                                                                                f0Var2.f9672d = i372;
                                                                                                                f0Var2.f9673e = o62;
                                                                                                                String str952 = str28;
                                                                                                                f0Var2.f9671c = str952;
                                                                                                                f0Var2.D = pair == null ? ((Integer) pair.first).intValue() : -1;
                                                                                                                f0Var2.E = pair == null ? ((Integer) pair.second).intValue() : -1;
                                                                                                                if (ke.o.l(str35)) {
                                                                                                                }
                                                                                                                Format format22 = new Format(f0Var2);
                                                                                                                if (sVar62 == null) {
                                                                                                                }
                                                                                                                d dVar22 = new d(format22, arrayList23.isEmpty() ? arrayList23 : arrayList21, sVar62 == null ? sVar62 : new r(null, 1L, 0L, 0L, 0L), str34, arrayList29, arrayList592, arrayList31, arrayList28);
                                                                                                                int h102 = ke.o.h(format22.I);
                                                                                                                i20 = i12;
                                                                                                                if (i20 != -1) {
                                                                                                                }
                                                                                                                ArrayList arrayList682 = arrayList20;
                                                                                                                arrayList682.add(dVar22);
                                                                                                                arrayList46 = arrayList682;
                                                                                                                str21 = str952;
                                                                                                                arrayList16 = arrayList602;
                                                                                                                i11 = i20;
                                                                                                                str23 = str59;
                                                                                                                j47 = j49;
                                                                                                                j21 = j25;
                                                                                                                arrayList17 = arrayList19;
                                                                                                                str22 = str27;
                                                                                                            } else {
                                                                                                                long j58 = j23;
                                                                                                                ArrayList arrayList69 = arrayList22;
                                                                                                                ArrayList arrayList70 = arrayList26;
                                                                                                                arrayList48 = arrayList24;
                                                                                                                s sVar8 = sVar;
                                                                                                                arrayList49 = arrayList25;
                                                                                                                arrayList51 = arrayList27;
                                                                                                                str71 = str33;
                                                                                                                str70 = str30;
                                                                                                                str12 = str14;
                                                                                                                arrayList18 = arrayList21;
                                                                                                                arrayList39 = arrayList3;
                                                                                                                str69 = str29;
                                                                                                                arrayList45 = arrayList13;
                                                                                                                arrayList47 = arrayList15;
                                                                                                                str79 = str65;
                                                                                                                j50 = j24;
                                                                                                                str87 = str34;
                                                                                                                arrayList50 = arrayList70;
                                                                                                                str43 = str2;
                                                                                                                arrayList53 = arrayList12;
                                                                                                                arrayList41 = arrayList19;
                                                                                                                arrayList46 = arrayList20;
                                                                                                                str86 = str28;
                                                                                                                str54 = str13;
                                                                                                                str61 = str27;
                                                                                                                str60 = str16;
                                                                                                                str57 = str4;
                                                                                                                i10 = 1;
                                                                                                                str73 = str32;
                                                                                                                str72 = str31;
                                                                                                                arrayList52 = arrayList23;
                                                                                                                arrayList33 = arrayList7;
                                                                                                                str85 = str17;
                                                                                                                sVar4 = sVar8;
                                                                                                                str77 = str64;
                                                                                                                j42 = j58;
                                                                                                                parseInt = i13;
                                                                                                                str58 = str15;
                                                                                                                str74 = str;
                                                                                                                str78 = str78;
                                                                                                                j41 = j25;
                                                                                                                i32 = i14;
                                                                                                                i34 = i15;
                                                                                                                i30 = i12;
                                                                                                                long j59 = j11;
                                                                                                                arrayList42 = arrayList69;
                                                                                                                z5 = z6;
                                                                                                                j51 = j22;
                                                                                                                j45 = j59;
                                                                                                            }
                                                                                                        } else {
                                                                                                            str32 = str73;
                                                                                                            arrayList24 = arrayList48;
                                                                                                            if (ke.b.C(xmlPullParser, str32)) {
                                                                                                                arrayList25 = arrayList49;
                                                                                                                arrayList25.add(i(xmlPullParser, str32));
                                                                                                                j24 = j50;
                                                                                                                arrayList26 = arrayList55;
                                                                                                            } else {
                                                                                                                arrayList25 = arrayList49;
                                                                                                                if (ke.b.C(xmlPullParser, str30)) {
                                                                                                                    j24 = j50;
                                                                                                                    arrayList26 = arrayList55;
                                                                                                                    arrayList26.add(i(xmlPullParser, str30));
                                                                                                                } else {
                                                                                                                    j24 = j50;
                                                                                                                    String str102 = str24;
                                                                                                                    arrayList26 = arrayList55;
                                                                                                                    if (ke.b.C(xmlPullParser, str102)) {
                                                                                                                        f i53 = i(xmlPullParser, str102);
                                                                                                                        str24 = str102;
                                                                                                                        arrayList27 = arrayList51;
                                                                                                                        arrayList27.add(i53);
                                                                                                                    } else {
                                                                                                                        str24 = str102;
                                                                                                                        arrayList27 = arrayList51;
                                                                                                                        b(xmlPullParser);
                                                                                                                    }
                                                                                                                    i15 = i34;
                                                                                                                    j25 = j55;
                                                                                                                    str33 = str71;
                                                                                                                    sVar = sVar4;
                                                                                                                    str34 = str87;
                                                                                                                    if (ke.b.B(xmlPullParser, str33)) {
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                            arrayList27 = arrayList51;
                                                                                                            i15 = i34;
                                                                                                            j25 = j55;
                                                                                                            str33 = str71;
                                                                                                            sVar = sVar4;
                                                                                                            str34 = str87;
                                                                                                            if (ke.b.B(xmlPullParser, str33)) {
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                                arrayList25 = arrayList49;
                                                                                                str34 = str87;
                                                                                                if (ke.b.B(xmlPullParser, str33)) {
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    str2 = str43;
                                                                                    arrayList13 = arrayList45;
                                                                                    z6 = z5;
                                                                                    str13 = str54;
                                                                                    str4 = str57;
                                                                                    str15 = str58;
                                                                                    arrayList19 = arrayList41;
                                                                                    str16 = str60;
                                                                                    str27 = str61;
                                                                                    arrayList20 = arrayList46;
                                                                                    i13 = parseInt;
                                                                                    str64 = str77;
                                                                                    str = str74;
                                                                                    str65 = str79;
                                                                                    arrayList12 = arrayList53;
                                                                                    str28 = str86;
                                                                                    sVar = sVar4;
                                                                                    arrayList25 = arrayList49;
                                                                                    str17 = str85;
                                                                                    i14 = i32;
                                                                                    i15 = i34;
                                                                                    str29 = str69;
                                                                                    arrayList15 = arrayList47;
                                                                                    arrayList21 = arrayList18;
                                                                                    j25 = j41;
                                                                                    str14 = str12;
                                                                                    str34 = str87;
                                                                                    arrayList24 = arrayList48;
                                                                                    arrayList22 = arrayList42;
                                                                                    j11 = j45;
                                                                                    j22 = j51;
                                                                                    j23 = j42;
                                                                                    arrayList3 = arrayList39;
                                                                                    str32 = str73;
                                                                                    arrayList7 = arrayList33;
                                                                                    arrayList23 = arrayList52;
                                                                                    str31 = str72;
                                                                                    j24 = j50;
                                                                                    arrayList26 = arrayList50;
                                                                                    arrayList27 = arrayList51;
                                                                                    str30 = str70;
                                                                                    str33 = str71;
                                                                                    if (ke.b.B(xmlPullParser, str33)) {
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                str = str53;
                                                                                String str103 = str67;
                                                                                arrayList12 = arrayList40;
                                                                                str2 = str43;
                                                                                arrayList13 = arrayList45;
                                                                                ArrayList arrayList71 = arrayList42;
                                                                                z6 = z5;
                                                                                arrayList14 = arrayList44;
                                                                                str13 = str54;
                                                                                long j60 = j41;
                                                                                j19 = j42;
                                                                                str4 = str57;
                                                                                str14 = str12;
                                                                                str15 = str58;
                                                                                arrayList3 = arrayList39;
                                                                                j11 = j45;
                                                                                ArrayList arrayList72 = arrayList41;
                                                                                str16 = str60;
                                                                                str17 = str62;
                                                                                f2 = f15;
                                                                                str18 = str63;
                                                                                int i54 = i30;
                                                                                arrayList15 = arrayList47;
                                                                                arrayList7 = arrayList33;
                                                                                str19 = str66;
                                                                                String str104 = str61;
                                                                                if (ke.b.C(xmlPullParser, str104)) {
                                                                                    sVar3 = p(xmlPullParser, (r) sVar3);
                                                                                    str21 = str103;
                                                                                    str22 = str104;
                                                                                    arrayList16 = arrayList71;
                                                                                    i11 = i54;
                                                                                    str23 = str59;
                                                                                    j47 = j49;
                                                                                    j21 = j60;
                                                                                    arrayList17 = arrayList72;
                                                                                } else {
                                                                                    str20 = str16;
                                                                                    if (ke.b.C(xmlPullParser, str20)) {
                                                                                        i11 = i54;
                                                                                        long d8 = d(xmlPullParser, j46);
                                                                                        str21 = str103;
                                                                                        str22 = str104;
                                                                                        arrayList16 = arrayList71;
                                                                                        j21 = j60;
                                                                                        sVar3 = q(xmlPullParser, (o) sVar3, j21, j19, j49, d8, j11);
                                                                                        j11 = j11;
                                                                                        j46 = d8;
                                                                                    } else {
                                                                                        str21 = str103;
                                                                                        str22 = str104;
                                                                                        arrayList16 = arrayList71;
                                                                                        i11 = i54;
                                                                                        j20 = j46;
                                                                                        j21 = j60;
                                                                                        if (ke.b.C(xmlPullParser, str14)) {
                                                                                            long d10 = d(xmlPullParser, j20);
                                                                                            sVar3 = r(xmlPullParser, (p) sVar3, arrayList13, j21, j19, j49, d10, j11);
                                                                                            j21 = j21;
                                                                                            j46 = d10;
                                                                                        } else if (ke.b.C(xmlPullParser, "InbandEventStream")) {
                                                                                            arrayList17 = arrayList72;
                                                                                            arrayList17.add(i(xmlPullParser, "InbandEventStream"));
                                                                                        } else {
                                                                                            arrayList17 = arrayList72;
                                                                                            if (ke.b.C(xmlPullParser, "Label")) {
                                                                                                str23 = "";
                                                                                                do {
                                                                                                    xmlPullParser.next();
                                                                                                    if (xmlPullParser.getEventType() == 4) {
                                                                                                        str23 = xmlPullParser.getText();
                                                                                                    } else {
                                                                                                        b(xmlPullParser);
                                                                                                    }
                                                                                                } while (!ke.b.B(xmlPullParser, "Label"));
                                                                                                j46 = j20;
                                                                                                j47 = j49;
                                                                                                str39 = str15;
                                                                                                if (ke.b.B(xmlPullParser, str39)) {
                                                                                                }
                                                                                            } else if (xmlPullParser.getEventType() == 2) {
                                                                                                b(xmlPullParser);
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    str23 = str59;
                                                                                    j47 = j49;
                                                                                    arrayList17 = arrayList72;
                                                                                    str39 = str15;
                                                                                    if (ke.b.B(xmlPullParser, str39)) {
                                                                                    }
                                                                                }
                                                                            }
                                                                            str20 = str16;
                                                                            str39 = str15;
                                                                            if (ke.b.B(xmlPullParser, str39)) {
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                str = str53;
                                                                i11 = i30;
                                                                str21 = str67;
                                                                arrayList12 = arrayList40;
                                                                str2 = str43;
                                                                arrayList13 = arrayList45;
                                                                z6 = z5;
                                                                arrayList14 = arrayList44;
                                                                arrayList11 = arrayList43;
                                                                str3 = str44;
                                                                str13 = str54;
                                                                j21 = j41;
                                                                j19 = j42;
                                                                str4 = str57;
                                                                str14 = str12;
                                                                str15 = str58;
                                                                arrayList3 = arrayList39;
                                                                arrayList17 = arrayList41;
                                                                str20 = str60;
                                                                str22 = str61;
                                                                str17 = str62;
                                                                f2 = f15;
                                                                str18 = str63;
                                                                j20 = j46;
                                                                arrayList15 = arrayList47;
                                                                arrayList16 = arrayList42;
                                                                arrayList7 = arrayList33;
                                                                str19 = str66;
                                                                j11 = j45;
                                                            }
                                                        }
                                                        j46 = j20;
                                                        str23 = str59;
                                                        j47 = j49;
                                                        str39 = str15;
                                                        if (ke.b.B(xmlPullParser, str39)) {
                                                        }
                                                    }
                                                    str = str53;
                                                    i11 = i30;
                                                    str21 = str67;
                                                    arrayList12 = arrayList40;
                                                    str2 = str43;
                                                    arrayList13 = arrayList45;
                                                    z6 = z5;
                                                    arrayList14 = arrayList44;
                                                    arrayList11 = arrayList43;
                                                    str3 = str44;
                                                    str13 = str54;
                                                    j21 = j41;
                                                    j19 = j42;
                                                    str4 = str57;
                                                    str14 = str12;
                                                    str39 = str58;
                                                    arrayList3 = arrayList39;
                                                    str23 = str59;
                                                    arrayList17 = arrayList41;
                                                    str20 = str60;
                                                    str22 = str61;
                                                    str17 = str62;
                                                    f2 = f15;
                                                    str18 = str63;
                                                    arrayList15 = arrayList47;
                                                    arrayList16 = arrayList42;
                                                    arrayList7 = arrayList33;
                                                    str19 = str66;
                                                    j11 = j45;
                                                    j47 = j49;
                                                    if (ke.b.B(xmlPullParser, str39)) {
                                                    }
                                                }
                                            }
                                            j11 = j45;
                                            if (ke.b.B(xmlPullParser, str39)) {
                                            }
                                        }
                                    } else {
                                        str = str53;
                                        j12 = j44;
                                        j7 = j33;
                                        str2 = str43;
                                        z6 = z5;
                                        str3 = str44;
                                        String str105 = str54;
                                        long j61 = j41;
                                        long j62 = j42;
                                        String str106 = str57;
                                        ArrayList arrayList73 = arrayList5;
                                        arrayList3 = arrayList34;
                                        long j63 = j30;
                                        arrayList7 = arrayList33;
                                        if (ke.b.C(xmlPullParser, "EventStream")) {
                                            String str107 = str105;
                                            String attributeValue28 = xmlPullParser.getAttributeValue(null, str107);
                                            String str108 = attributeValue28 == null ? "" : attributeValue28;
                                            String str109 = str56;
                                            String attributeValue29 = xmlPullParser.getAttributeValue(null, str109);
                                            String str110 = attributeValue29 == null ? "" : attributeValue29;
                                            String attributeValue30 = xmlPullParser.getAttributeValue(null, "timescale");
                                            long parseLong2 = attributeValue30 == null ? 1L : Long.parseLong(attributeValue30);
                                            String attributeValue31 = xmlPullParser.getAttributeValue(null, "presentationTimeOffset");
                                            long parseLong3 = attributeValue31 == null ? 0L : Long.parseLong(attributeValue31);
                                            ArrayList arrayList74 = new ArrayList();
                                            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING);
                                            while (true) {
                                                xmlPullParser.next();
                                                if (ke.b.C(xmlPullParser, "Event")) {
                                                    str8 = str;
                                                    String attributeValue32 = xmlPullParser.getAttributeValue(null, str8);
                                                    long parseLong4 = attributeValue32 == null ? 0L : Long.parseLong(attributeValue32);
                                                    j15 = j63;
                                                    str7 = str106;
                                                    String attributeValue33 = xmlPullParser.getAttributeValue(null, str7);
                                                    long parseLong5 = attributeValue33 == null ? -9223372036854775807L : Long.parseLong(attributeValue33);
                                                    String attributeValue34 = xmlPullParser.getAttributeValue(null, "presentationTime");
                                                    long parseLong6 = attributeValue34 == null ? 0L : Long.parseLong(attributeValue34);
                                                    long P = d0.P(parseLong5, 1000L, parseLong2);
                                                    long P2 = d0.P(parseLong6 - parseLong3, 1000000L, parseLong2);
                                                    j16 = parseLong2;
                                                    String attributeValue35 = xmlPullParser.getAttributeValue(null, "messageData");
                                                    if (attributeValue35 == null) {
                                                        attributeValue35 = null;
                                                    }
                                                    byteArrayOutputStream.reset();
                                                    XmlSerializer newSerializer = Xml.newSerializer();
                                                    arrayList5 = arrayList73;
                                                    newSerializer.setOutput(byteArrayOutputStream, ei.d.f8100c.name());
                                                    xmlPullParser.nextToken();
                                                    while (!ke.b.B(xmlPullParser, "Event")) {
                                                        switch (xmlPullParser.getEventType()) {
                                                            case 0:
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                newSerializer.startDocument(null, Boolean.FALSE);
                                                                break;
                                                            case 1:
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                newSerializer.endDocument();
                                                                break;
                                                            case 2:
                                                                str10 = str107;
                                                                newSerializer.startTag(xmlPullParser.getNamespace(), xmlPullParser.getName());
                                                                int i55 = i6;
                                                                while (i55 < xmlPullParser.getAttributeCount()) {
                                                                    newSerializer.attribute(xmlPullParser.getAttributeNamespace(i55), xmlPullParser.getAttributeName(i55), xmlPullParser.getAttributeValue(i55));
                                                                    i55++;
                                                                    str109 = str109;
                                                                    parseLong3 = parseLong3;
                                                                }
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 3:
                                                                str10 = str107;
                                                                newSerializer.endTag(xmlPullParser.getNamespace(), xmlPullParser.getName());
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 4:
                                                                newSerializer.text(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 5:
                                                                newSerializer.cdsect(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 6:
                                                                newSerializer.entityRef(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 7:
                                                                newSerializer.ignorableWhitespace(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 8:
                                                                newSerializer.processingInstruction(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 9:
                                                                newSerializer.comment(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            case 10:
                                                                newSerializer.docdecl(xmlPullParser.getText());
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                            default:
                                                                str10 = str107;
                                                                str11 = str109;
                                                                j18 = parseLong3;
                                                                break;
                                                        }
                                                        xmlPullParser.nextToken();
                                                        str107 = str10;
                                                        str109 = str11;
                                                        parseLong3 = j18;
                                                    }
                                                    str54 = str107;
                                                    str56 = str109;
                                                    j17 = parseLong3;
                                                    newSerializer.flush();
                                                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                                                    Long valueOf = Long.valueOf(P2);
                                                    if (attributeValue35 != null) {
                                                        byteArray = attributeValue35.getBytes(ei.d.f8100c);
                                                    }
                                                    str6 = str108;
                                                    str9 = str110;
                                                    arrayList74.add(Pair.create(valueOf, new fd.a(str108, str110, P, parseLong4, byteArray)));
                                                } else {
                                                    arrayList5 = arrayList73;
                                                    str54 = str107;
                                                    str56 = str109;
                                                    j15 = j63;
                                                    str6 = str108;
                                                    j16 = parseLong2;
                                                    str7 = str106;
                                                    str8 = str;
                                                    j17 = parseLong3;
                                                    str9 = str110;
                                                    b(xmlPullParser);
                                                }
                                                if (ke.b.B(xmlPullParser, "EventStream")) {
                                                    long[] jArr = new long[arrayList74.size()];
                                                    fd.a[] aVarArr = new fd.a[arrayList74.size()];
                                                    for (int i56 = i6; i56 < arrayList74.size(); i56++) {
                                                        Pair pair2 = (Pair) arrayList74.get(i56);
                                                        jArr[i56] = ((Long) pair2.first).longValue();
                                                        aVarArr[i56] = (fd.a) pair2.second;
                                                    }
                                                    g gVar = new g(str6, str9, jArr, aVarArr);
                                                    ArrayList arrayList75 = arrayList37;
                                                    arrayList75.add(gVar);
                                                    arrayList8 = arrayList75;
                                                    str4 = str7;
                                                    str = str8;
                                                    j11 = j15;
                                                    j13 = j62;
                                                    j14 = j61;
                                                } else {
                                                    str108 = str6;
                                                    str110 = str9;
                                                    str106 = str7;
                                                    str = str8;
                                                    str107 = str54;
                                                    str109 = str56;
                                                    arrayList73 = arrayList5;
                                                    parseLong3 = j17;
                                                    j63 = j15;
                                                    parseLong2 = j16;
                                                }
                                            }
                                        } else {
                                            arrayList5 = arrayList73;
                                            ArrayList arrayList76 = arrayList37;
                                            str54 = str105;
                                            if (ke.b.C(xmlPullParser, "SegmentBase")) {
                                                sVar2 = p(xmlPullParser, null);
                                                arrayList8 = arrayList76;
                                                str4 = str106;
                                                str5 = str55;
                                                j11 = j63;
                                                j13 = j62;
                                                j14 = j61;
                                                j10 = -9223372036854775807L;
                                                if (ke.b.B(xmlPullParser, str5)) {
                                                    str55 = str5;
                                                    j30 = j11;
                                                    arrayList37 = arrayList8;
                                                    arrayList33 = arrayList7;
                                                    z5 = z6;
                                                    arrayList38 = arrayList4;
                                                    arrayList36 = arrayList5;
                                                    arrayList35 = arrayList6;
                                                    j33 = j7;
                                                    str44 = str3;
                                                    str43 = str2;
                                                    str57 = str4;
                                                    j41 = j14;
                                                    j44 = j12;
                                                    str53 = str;
                                                    arrayList34 = arrayList3;
                                                    j42 = j13;
                                                } else {
                                                    Pair create = Pair.create(new h(attributeValue11, j40, arrayList5, arrayList8), Long.valueOf(j13));
                                                    h hVar5 = (h) create.first;
                                                    if (hVar5.f17241b != j10) {
                                                        long longValue = ((Long) create.second).longValue();
                                                        long j64 = longValue == j10 ? j10 : longValue + hVar5.f17241b;
                                                        arrayList2 = arrayList7;
                                                        arrayList2.add(hVar5);
                                                        j7 = j64;
                                                    } else {
                                                        if (!equals) {
                                                            throw g1.b("Unable to determine start of period " + arrayList7.size(), null);
                                                        }
                                                        i27 = i10;
                                                        arrayList2 = arrayList7;
                                                    }
                                                }
                                            } else if (ke.b.C(xmlPullParser, "SegmentList")) {
                                                j10 = -9223372036854775807L;
                                                long d11 = d(xmlPullParser, -9223372036854775807L);
                                                arrayList8 = arrayList76;
                                                j30 = j63;
                                                j14 = j61;
                                                sVar2 = q(xmlPullParser, null, j14, j62, j12, d11, j30);
                                                j13 = j62;
                                                j43 = d11;
                                                str4 = str106;
                                                str5 = str55;
                                            } else {
                                                arrayList8 = arrayList76;
                                                j13 = j62;
                                                j14 = j61;
                                                j10 = -9223372036854775807L;
                                                if (ke.b.C(xmlPullParser, "SegmentTemplate")) {
                                                    long d12 = d(xmlPullParser, -9223372036854775807L);
                                                    c0 c0Var = e0.f8656e;
                                                    str4 = str106;
                                                    j11 = j63;
                                                    sVar2 = r(xmlPullParser, null, r0.f8704w, j14, j13, j12, d12, j11);
                                                    j14 = j14;
                                                    j43 = d12;
                                                } else {
                                                    str4 = str106;
                                                    j11 = j63;
                                                    if (ke.b.C(xmlPullParser, "AssetIdentifier")) {
                                                        i(xmlPullParser, "AssetIdentifier");
                                                    } else {
                                                        b(xmlPullParser);
                                                    }
                                                }
                                                str5 = str55;
                                                if (ke.b.B(xmlPullParser, str5)) {
                                                }
                                            }
                                        }
                                    }
                                    j10 = -9223372036854775807L;
                                    str5 = str55;
                                    if (ke.b.B(xmlPullParser, str5)) {
                                    }
                                }
                                j11 = j30;
                                if (ke.b.B(xmlPullParser, str5)) {
                                }
                            }
                        } else {
                            j5 = j32;
                            j7 = j33;
                            z6 = z5;
                            arrayList2 = arrayList33;
                            j10 = j;
                            arrayList3 = arrayList34;
                            j11 = j30;
                            b(xmlPullParser);
                        }
                        j32 = j5;
                        if (!ke.b.B(xmlPullParser, "MPD")) {
                            if (j27 == j10) {
                                if (j7 != j10) {
                                    j27 = j7;
                                } else if (!equals) {
                                    throw g1.b("Unable to determine duration of static manifest.", null);
                                }
                            }
                            if (arrayList2.isEmpty()) {
                                throw g1.b("No periods found.", null);
                            }
                            return new c(L, j27, j28, equals, j29, j11, j31, L2, iVar, cVar, tVar, uri2, arrayList2);
                        }
                        arrayList33 = arrayList2;
                        j30 = j11;
                        j26 = j10;
                        i24 = i6;
                        i5 = i10;
                        arrayList34 = arrayList3;
                        m5 = arrayList;
                        z5 = z6;
                        j33 = j7;
                        str42 = null;
                    }
                    z6 = z5;
                    arrayList2 = arrayList33;
                }
                j10 = j;
                arrayList3 = arrayList34;
            }
            j11 = j30;
            if (!ke.b.B(xmlPullParser, "MPD")) {
            }
        }
    }

    public static j m(XmlPullParser xmlPullParser, String str, String str2) {
        long j;
        String attributeValue = xmlPullParser.getAttributeValue(null, str);
        String attributeValue2 = xmlPullParser.getAttributeValue(null, str2);
        long j5 = -1;
        if (attributeValue2 != null) {
            String[] split = attributeValue2.split("-");
            j = Long.parseLong(split[0]);
            if (split.length == 2) {
                j5 = (Long.parseLong(split[1]) - j) + 1;
            }
        } else {
            j = 0;
        }
        return new j(j, j5, attributeValue);
    }

    public static int n(String str) {
        if (str != null) {
            switch (str) {
                case "subtitle":
                case "forced_subtitle":
                case "forced-subtitle":
                    return IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                case "description":
                    return IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                case "enhanced-audio-intelligibility":
                    return RecyclerView.ItemAnimator.FLAG_MOVED;
                case "alternate":
                    return 2;
                case "dub":
                    return 16;
                case "main":
                    return 1;
                case "sign":
                    return IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                case "caption":
                    return 64;
                case "commentary":
                    return 8;
                case "emergency":
                    return 32;
                case "supplementary":
                    return 4;
            }
        }
        return 0;
    }

    public static int o(ArrayList arrayList) {
        int i5 = 0;
        for (int i6 = 0; i6 < arrayList.size(); i6++) {
            if (tn.g.j("http://dashif.org/guidelines/trickmode", ((f) arrayList.get(i6)).a)) {
                i5 = 16384;
            }
        }
        return i5;
    }

    public static r p(XmlPullParser xmlPullParser, r rVar) {
        long j = rVar != null ? rVar.f17268b : 1L;
        String attributeValue = xmlPullParser.getAttributeValue(null, "timescale");
        if (attributeValue != null) {
            j = Long.parseLong(attributeValue);
        }
        long j5 = j;
        long j7 = rVar != null ? rVar.f17269c : 0L;
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "presentationTimeOffset");
        if (attributeValue2 != null) {
            j7 = Long.parseLong(attributeValue2);
        }
        long j10 = j7;
        long j11 = rVar != null ? rVar.f17266d : 0L;
        long j12 = rVar != null ? rVar.f17267e : 0L;
        String attributeValue3 = xmlPullParser.getAttributeValue(null, "indexRange");
        if (attributeValue3 != null) {
            String[] split = attributeValue3.split("-");
            j11 = Long.parseLong(split[0]);
            j12 = (Long.parseLong(split[1]) - j11) + 1;
        }
        long j13 = j12;
        long j14 = j11;
        j jVar = rVar != null ? rVar.a : null;
        while (true) {
            xmlPullParser.next();
            if (ke.b.C(xmlPullParser, "Initialization")) {
                jVar = m(xmlPullParser, "sourceURL", "range");
            } else {
                b(xmlPullParser);
            }
            j jVar2 = jVar;
            if (ke.b.B(xmlPullParser, "SegmentBase")) {
                return new r(jVar2, j5, j10, j14, j13);
            }
            jVar = jVar2;
        }
    }

    public static o q(XmlPullParser xmlPullParser, o oVar, long j, long j5, long j7, long j10, long j11) {
        long j12 = oVar != null ? oVar.f17268b : 1L;
        List list = null;
        String attributeValue = xmlPullParser.getAttributeValue(null, "timescale");
        if (attributeValue != null) {
            j12 = Long.parseLong(attributeValue);
        }
        long j13 = j12;
        long j14 = oVar != null ? oVar.f17269c : 0L;
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "presentationTimeOffset");
        if (attributeValue2 != null) {
            j14 = Long.parseLong(attributeValue2);
        }
        long j15 = j14;
        long j16 = oVar != null ? oVar.f17259e : -9223372036854775807L;
        String attributeValue3 = xmlPullParser.getAttributeValue(null, "duration");
        if (attributeValue3 != null) {
            j16 = Long.parseLong(attributeValue3);
        }
        long j17 = j16;
        long j18 = oVar != null ? oVar.f17258d : 1L;
        String attributeValue4 = xmlPullParser.getAttributeValue(null, "startNumber");
        if (attributeValue4 != null) {
            j18 = Long.parseLong(attributeValue4);
        }
        long j19 = j18;
        long j20 = j10 == -9223372036854775807L ? j7 : j10;
        long j21 = j20 == LongCompanionObject.MAX_VALUE ? -9223372036854775807L : j20;
        j jVar = null;
        List list2 = null;
        do {
            xmlPullParser.next();
            if (ke.b.C(xmlPullParser, "Initialization")) {
                jVar = m(xmlPullParser, "sourceURL", "range");
            } else if (ke.b.C(xmlPullParser, "SegmentTimeline")) {
                list2 = s(xmlPullParser, j13, j5);
            } else if (ke.b.C(xmlPullParser, "SegmentURL")) {
                if (list == null) {
                    list = new ArrayList();
                }
                list.add(m(xmlPullParser, "media", "mediaRange"));
            } else {
                b(xmlPullParser);
            }
        } while (!ke.b.B(xmlPullParser, "SegmentList"));
        if (oVar != null) {
            if (jVar == null) {
                jVar = oVar.a;
            }
            if (list2 == null) {
                list2 = oVar.f17260f;
            }
            if (list == null) {
                list = oVar.j;
            }
        }
        return new o(jVar, j13, j15, j19, j17, list2, j21, list, d0.I(j11), d0.I(j));
    }

    public static p r(XmlPullParser xmlPullParser, p pVar, List list, long j, long j5, long j7, long j10, long j11) {
        long j12;
        long j13 = pVar != null ? pVar.f17268b : 1L;
        j jVar = null;
        String attributeValue = xmlPullParser.getAttributeValue(null, "timescale");
        if (attributeValue != null) {
            j13 = Long.parseLong(attributeValue);
        }
        long j14 = j13;
        long j15 = pVar != null ? pVar.f17269c : 0L;
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "presentationTimeOffset");
        if (attributeValue2 != null) {
            j15 = Long.parseLong(attributeValue2);
        }
        long j16 = j15;
        long j17 = pVar != null ? pVar.f17259e : -9223372036854775807L;
        String attributeValue3 = xmlPullParser.getAttributeValue(null, "duration");
        if (attributeValue3 != null) {
            j17 = Long.parseLong(attributeValue3);
        }
        long j18 = j17;
        long j19 = pVar != null ? pVar.f17258d : 1L;
        String attributeValue4 = xmlPullParser.getAttributeValue(null, "startNumber");
        if (attributeValue4 != null) {
            j19 = Long.parseLong(attributeValue4);
        }
        long j20 = j19;
        int i5 = 0;
        while (true) {
            if (i5 >= list.size()) {
                j12 = -1;
                break;
            }
            f fVar = (f) list.get(i5);
            if (tn.g.j("http://dashif.org/guidelines/last-segment-number", fVar.a)) {
                j12 = Long.parseLong(fVar.f17236b);
                break;
            }
            i5++;
        }
        long j21 = j12;
        long j22 = j10 == -9223372036854775807L ? j7 : j10;
        long j23 = j22 == LongCompanionObject.MAX_VALUE ? -9223372036854775807L : j22;
        ke.u t5 = t(xmlPullParser, "media", pVar != null ? pVar.k : null);
        ke.u t10 = t(xmlPullParser, "initialization", pVar != null ? pVar.j : null);
        List list2 = null;
        do {
            xmlPullParser.next();
            if (ke.b.C(xmlPullParser, "Initialization")) {
                jVar = m(xmlPullParser, "sourceURL", "range");
            } else if (ke.b.C(xmlPullParser, "SegmentTimeline")) {
                list2 = s(xmlPullParser, j14, j5);
            } else {
                b(xmlPullParser);
            }
        } while (!ke.b.B(xmlPullParser, "SegmentTemplate"));
        if (pVar != null) {
            if (jVar == null) {
                jVar = pVar.a;
            }
            if (list2 == null) {
                list2 = pVar.f17260f;
            }
        }
        return new p(jVar, j14, j16, j20, j21, j18, list2, j23, t10, t5, d0.I(j11), d0.I(j));
    }

    public static ArrayList s(XmlPullParser xmlPullParser, long j, long j5) {
        long j7;
        ArrayList arrayList = new ArrayList();
        long j10 = 0;
        long j11 = -9223372036854775807L;
        boolean z5 = false;
        int i5 = 0;
        do {
            xmlPullParser.next();
            if (ke.b.C(xmlPullParser, "S")) {
                String attributeValue = xmlPullParser.getAttributeValue(null, "t");
                long parseLong = attributeValue == null ? -9223372036854775807L : Long.parseLong(attributeValue);
                if (z5) {
                    int i6 = i5;
                    j7 = parseLong;
                    j10 = a(arrayList, j10, j11, i6, j7);
                } else {
                    j7 = parseLong;
                }
                if (j7 != -9223372036854775807L) {
                    j10 = j7;
                }
                String attributeValue2 = xmlPullParser.getAttributeValue(null, "d");
                j11 = attributeValue2 == null ? -9223372036854775807L : Long.parseLong(attributeValue2);
                String attributeValue3 = xmlPullParser.getAttributeValue(null, "r");
                i5 = attributeValue3 == null ? 0 : Integer.parseInt(attributeValue3);
                z5 = true;
            } else {
                b(xmlPullParser);
            }
        } while (!ke.b.B(xmlPullParser, "SegmentTimeline"));
        if (!z5) {
            return arrayList;
        }
        a(arrayList, j10, j11, i5, d0.P(j5, j, 1000L));
        return arrayList;
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:31:0x00c2. Please report as an issue. */
    public static ke.u t(XmlPullParser xmlPullParser, String str, ke.u uVar) {
        String str2;
        String attributeValue = xmlPullParser.getAttributeValue(null, str);
        if (attributeValue == null) {
            return uVar;
        }
        String[] strArr = new String[5];
        int[] iArr = new int[4];
        String[] strArr2 = new String[4];
        strArr[0] = "";
        int i5 = 0;
        int i6 = 0;
        while (i5 < attributeValue.length()) {
            int indexOf = attributeValue.indexOf("$", i5);
            if (indexOf == -1) {
                strArr[i6] = strArr[i6] + attributeValue.substring(i5);
                i5 = attributeValue.length();
            } else if (indexOf != i5) {
                strArr[i6] = strArr[i6] + attributeValue.substring(i5, indexOf);
                i5 = indexOf;
            } else if (attributeValue.startsWith("$$", i5)) {
                strArr[i6] = com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), strArr[i6], "$");
                i5 += 2;
            } else {
                int i10 = i5 + 1;
                int indexOf2 = attributeValue.indexOf("$", i10);
                String substring = attributeValue.substring(i10, indexOf2);
                if (substring.equals("RepresentationID")) {
                    iArr[i6] = 1;
                } else {
                    int indexOf3 = substring.indexOf("%0");
                    if (indexOf3 != -1) {
                        str2 = substring.substring(indexOf3);
                        if (!str2.endsWith("d") && !str2.endsWith("x") && !str2.endsWith("X")) {
                            str2 = str2.concat("d");
                        }
                        substring = substring.substring(0, indexOf3);
                    } else {
                        str2 = "%01d";
                    }
                    substring.getClass();
                    switch (substring) {
                        case "Number":
                            iArr[i6] = 2;
                            break;
                        case "Time":
                            iArr[i6] = 4;
                            break;
                        case "Bandwidth":
                            iArr[i6] = 3;
                            break;
                        default:
                            throw new IllegalArgumentException("Invalid template: ".concat(attributeValue));
                    }
                    strArr2[i6] = str2;
                }
                i6++;
                strArr[i6] = "";
                i5 = indexOf2 + 1;
            }
        }
        return new ke.u(strArr, iArr, strArr2, i6);
    }

    @Override // ie.m0
    public final Object f(Uri uri, ie.n nVar) {
        try {
            XmlPullParser newPullParser = this.f17235d.newPullParser();
            newPullParser.setInput(nVar, null);
            if (newPullParser.next() == 2 && "MPD".equals(newPullParser.getName())) {
                return l(newPullParser, uri);
            }
            throw g1.b("inputStream does not contain a valid media presentation description", null);
        } catch (XmlPullParserException e9) {
            throw g1.b(null, e9);
        }
    }
}
