package ke;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public abstract class o {
    public static final ArrayList a = new ArrayList();

    /* renamed from: b, reason: collision with root package name */
    public static final Pattern f13325b = Pattern.compile("^mp4a\\.([a-zA-Z0-9]{2})(?:\\.([0-9]{1,2}))?$");

    public static String a(String str) {
        if (str == null) {
            return null;
        }
        for (String str2 : d0.S(str)) {
            String d6 = d(str2);
            if (d6 != null && j(d6)) {
                return d6;
            }
        }
        return null;
    }

    public static String b(String str, String str2) {
        if (str != null && str2 != null) {
            String[] S = d0.S(str);
            StringBuilder sb2 = new StringBuilder();
            for (String str3 : S) {
                if (str2.equals(d(str3))) {
                    if (sb2.length() > 0) {
                        sb2.append(",");
                    }
                    sb2.append(str3);
                }
            }
            if (sb2.length() > 0) {
                return sb2.toString();
            }
        }
        return null;
    }

    public static int c(String str, String str2) {
        c5.e f2;
        str.getClass();
        switch (str) {
            case "audio/eac3-joc":
                return 18;
            case "audio/vnd.dts.hd;profile=lbr":
                return 8;
            case "audio/vnd.dts":
                return 7;
            case "audio/mp4a-latm":
                if (str2 == null || (f2 = f(str2)) == null) {
                    return 0;
                }
                return f2.b();
            case "audio/ac3":
                return 5;
            case "audio/ac4":
                return 17;
            case "audio/vnd.dts.uhd;profile=p2":
                return 30;
            case "audio/eac3":
                return 6;
            case "audio/mpeg":
                return 9;
            case "audio/opus":
                return 20;
            case "audio/vnd.dts.hd":
                return 8;
            case "audio/true-hd":
                return 14;
            default:
                return 0;
        }
    }

    public static String d(String str) {
        c5.e f2;
        String str2 = null;
        if (str != null) {
            String x5 = tn.g.x(str.trim());
            if (x5.startsWith("avc1") || x5.startsWith("avc3")) {
                return "video/avc";
            }
            if (x5.startsWith("hev1") || x5.startsWith("hvc1")) {
                return "video/hevc";
            }
            if (x5.startsWith("dvav") || x5.startsWith("dva1") || x5.startsWith("dvhe") || x5.startsWith("dvh1")) {
                return "video/dolby-vision";
            }
            if (x5.startsWith("av01")) {
                return "video/av01";
            }
            if (x5.startsWith("vp9") || x5.startsWith("vp09")) {
                return "video/x-vnd.on2.vp9";
            }
            if (x5.startsWith("vp8") || x5.startsWith("vp08")) {
                return "video/x-vnd.on2.vp8";
            }
            if (x5.startsWith("mp4a")) {
                if (x5.startsWith("mp4a.") && (f2 = f(x5)) != null) {
                    str2 = e(f2.f3328b);
                }
                return str2 == null ? "audio/mp4a-latm" : str2;
            }
            if (x5.startsWith("mha1")) {
                return "audio/mha1";
            }
            if (x5.startsWith("mhm1")) {
                return "audio/mhm1";
            }
            if (x5.startsWith("ac-3") || x5.startsWith("dac3")) {
                return "audio/ac3";
            }
            if (x5.startsWith("ec-3") || x5.startsWith("dec3")) {
                return "audio/eac3";
            }
            if (x5.startsWith("ec+3")) {
                return "audio/eac3-joc";
            }
            if (x5.startsWith("ac-4") || x5.startsWith("dac4")) {
                return "audio/ac4";
            }
            if (x5.startsWith("dtsc")) {
                return "audio/vnd.dts";
            }
            if (x5.startsWith("dtse")) {
                return "audio/vnd.dts.hd;profile=lbr";
            }
            if (x5.startsWith("dtsh") || x5.startsWith("dtsl")) {
                return "audio/vnd.dts.hd";
            }
            if (x5.startsWith("dtsx")) {
                return "audio/vnd.dts.uhd;profile=p2";
            }
            if (x5.startsWith("opus")) {
                return "audio/opus";
            }
            if (x5.startsWith("vorbis")) {
                return "audio/vorbis";
            }
            if (x5.startsWith("flac")) {
                return "audio/flac";
            }
            if (x5.startsWith("stpp")) {
                return "application/ttml+xml";
            }
            if (x5.startsWith("wvtt")) {
                return "text/vtt";
            }
            if (x5.contains("cea708")) {
                return "application/cea-708";
            }
            if (x5.contains("eia608") || x5.contains("cea608")) {
                return "application/cea-608";
            }
            ArrayList arrayList = a;
            if (arrayList.size() > 0) {
                arrayList.get(0).getClass();
                throw new ClassCastException();
            }
        }
        return null;
    }

    public static String e(int i5) {
        if (i5 == 32) {
            return "video/mp4v-es";
        }
        if (i5 == 33) {
            return "video/avc";
        }
        if (i5 == 35) {
            return "video/hevc";
        }
        if (i5 == 64) {
            return "audio/mp4a-latm";
        }
        if (i5 == 163) {
            return "video/wvc1";
        }
        if (i5 == 177) {
            return "video/x-vnd.on2.vp9";
        }
        if (i5 == 165) {
            return "audio/ac3";
        }
        if (i5 == 166) {
            return "audio/eac3";
        }
        switch (i5) {
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
                return "video/mpeg2";
            case 102:
            case 103:
            case 104:
                return "audio/mp4a-latm";
            case 105:
            case 107:
                return "audio/mpeg";
            case 106:
                return "video/mpeg";
            default:
                switch (i5) {
                    case 169:
                    case 172:
                        return "audio/vnd.dts";
                    case 170:
                    case 171:
                        return "audio/vnd.dts.hd";
                    case 173:
                        return "audio/opus";
                    case 174:
                        return "audio/ac4";
                    default:
                        return null;
                }
        }
    }

    public static c5.e f(String str) {
        Matcher matcher = f13325b.matcher(str);
        if (!matcher.matches()) {
            return null;
        }
        String group = matcher.group(1);
        group.getClass();
        String group2 = matcher.group(2);
        try {
            return new c5.e(Integer.parseInt(group, 16), group2 != null ? Integer.parseInt(group2) : 0, 4);
        } catch (NumberFormatException unused) {
            return null;
        }
    }

    public static String g(String str) {
        int indexOf;
        if (str == null || (indexOf = str.indexOf(47)) == -1) {
            return null;
        }
        return str.substring(0, indexOf);
    }

    public static int h(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        if (j(str)) {
            return 1;
        }
        if (l(str)) {
            return 2;
        }
        if (k(str)) {
            return 3;
        }
        if ("image".equals(g(str))) {
            return 4;
        }
        if ("application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str)) {
            return 5;
        }
        if ("application/x-camera-motion".equals(str)) {
            return 6;
        }
        ArrayList arrayList = a;
        if (arrayList.size() <= 0) {
            return -1;
        }
        arrayList.get(0).getClass();
        throw new ClassCastException();
    }

    public static String i(String str) {
        if (str == null) {
            return null;
        }
        for (String str2 : d0.S(str)) {
            String d6 = d(str2);
            if (d6 != null && l(d6)) {
                return d6;
            }
        }
        return null;
    }

    public static boolean j(String str) {
        return MediaStreamTrack.AUDIO_TRACK_KIND.equals(g(str));
    }

    public static boolean k(String str) {
        return "text".equals(g(str)) || "application/cea-608".equals(str) || "application/cea-708".equals(str) || "application/x-mp4-cea-608".equals(str) || "application/x-subrip".equals(str) || "application/ttml+xml".equals(str) || "application/x-quicktime-tx3g".equals(str) || "application/x-mp4-vtt".equals(str) || "application/x-rawcc".equals(str) || "application/vobsub".equals(str) || "application/pgs".equals(str) || "application/dvbsubs".equals(str);
    }

    public static boolean l(String str) {
        return MediaStreamTrack.VIDEO_TRACK_KIND.equals(g(str));
    }
}
